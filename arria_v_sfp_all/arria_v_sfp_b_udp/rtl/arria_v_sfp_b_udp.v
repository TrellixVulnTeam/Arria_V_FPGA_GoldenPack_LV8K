
module arria_v_sfp_b_udp(
	
	input  wire					sys_156p25_p,
	input  wire					sys_rst_n,
	
	// LEDs
	output wire		[7 : 0]		LED,
	
	// 50 MHz clock inputs
	input  wire					clk_50mhz,
	
	// 10G Ethernet
	inout  wire					SFPB_MOD1_SCL,
	inout  wire					SFPB_MOD2_SDA,
	output wire					SFPB_TXDISABLE,
	input  wire					SFPB_RX_p,
	output wire					SFPB_TX_p
);
	
	// Clock and reset
	wire rst_50mhz;
	
	wire clk_156mhz;
	wire rst_156mhz;
	
	wire SFP_REFCLK_P;
	wire phy_pll_locked;
	wire osc_done;
	
	pll pll_inst(
		.refclk		(sys_156p25_p),
		.rst		(~sys_rst_n),
		.outclk_0	(SFP_REFCLK_P),
		.locked		(osc_done)
	);
	
	assign LED = ~{4'd0, rst_156mhz, rst_50mhz, phy_pll_locked, osc_done};
	
	// Convert XGMII interfaces
	wire	[63 : 0]	sfp_b_txd_int;
	wire	[7 : 0]		sfp_b_txc_int;
	wire	[63 : 0]	sfp_b_rxd_int;
	wire	[7 : 0]		sfp_b_rxc_int;
	
	// 10G Ethernet PHY
	wire	[71 : 0]	sfp_b_tx_dc;
	wire	[71 : 0]	sfp_b_rx_dc;
	
	wire	[91 : 0]	phy_reconfig_from_xcvr;
	wire	[139 : 0]	phy_reconfig_to_xcvr;
	
	wire reconfig_busy_sig;
	
	assign SFPB_MOD1_SCL = 1'bz;
	assign SFPB_MOD2_SDA = 1'bz;
	assign SFPB_TXDISABLE = 1'b0;
	
	sync_reset #(
		.N(4)
	)sync_reset_50mhz_inst(
		.clk(clk_50mhz),
		.rst(~sys_rst_n),
		.sync_reset_out(rst_50mhz)
	);
	
	sync_reset #(
		.N(4)
	)sync_reset_156mhz_inst(
		.clk(clk_156mhz),
		.rst(rst_50mhz | ~phy_pll_locked | reconfig_busy_sig),
		.sync_reset_out(rst_156mhz)
	);
	
	phy phy_inst(
		
		.pll_ref_clk(SFP_REFCLK_P),
		.pll_locked(phy_pll_locked),
		
		.tx_serial_data_0(SFPB_TX_p),
		.rx_serial_data_0(SFPB_RX_p),
		
		.xgmii_tx_dc_0(sfp_b_tx_dc),
		.xgmii_rx_dc_0(sfp_b_rx_dc),
		
		.xgmii_rx_clk(clk_156mhz),
		.xgmii_tx_clk(clk_156mhz),
		
		.tx_ready(),
		.rx_ready(),
		
		.rx_data_ready(),
		
		.phy_mgmt_clk(clk_50mhz),
		.phy_mgmt_clk_reset(~osc_done),
		.phy_mgmt_address(9'd0),
		.phy_mgmt_read(1'b0),
		.phy_mgmt_readdata(),
		.phy_mgmt_waitrequest(),
		.phy_mgmt_write(1'b0),
		.phy_mgmt_writedata(32'd0),
		
		.reconfig_from_xcvr(phy_reconfig_from_xcvr),
		.reconfig_to_xcvr(phy_reconfig_to_xcvr)
	);
	
	phy_reconfig phy_reconfig_inst(
		
		.reconfig_busy(reconfig_busy_sig),
		.cal_busy_in(1'b0),
		
		.mgmt_clk_clk(clk_50mhz),
		.mgmt_rst_reset(~osc_done),
		
		.reconfig_mgmt_address(7'd0),
		.reconfig_mgmt_read(1'b0),
		.reconfig_mgmt_readdata(),
		.reconfig_mgmt_waitrequest(),
		.reconfig_mgmt_write(1'b0),
		.reconfig_mgmt_writedata(32'd0),
		
		.reconfig_to_xcvr(phy_reconfig_to_xcvr),
		.reconfig_from_xcvr(phy_reconfig_from_xcvr)
	);
	
	xgmii_interleave xgmii_interleave_inst_a(
		.input_xgmii_d(sfp_b_txd_int),
		.input_xgmii_c(sfp_b_txc_int),
		.output_xgmii_dc(sfp_b_tx_dc)
	);
	
	xgmii_deinterleave xgmii_deinterleave_inst_a(
		.input_xgmii_dc(sfp_b_rx_dc),
		.output_xgmii_d(sfp_b_rxd_int),
		.output_xgmii_c(sfp_b_rxc_int)
	);
	
	network network_inst(
		
		.clk(clk_156mhz),
		.rst(rst_156mhz),
		
		.sfp_b_txd(sfp_b_txd_int),
		.sfp_b_txc(sfp_b_txc_int),
		.sfp_b_rxd(sfp_b_rxd_int),
		.sfp_b_rxc(sfp_b_rxc_int)
	);
	
endmodule
