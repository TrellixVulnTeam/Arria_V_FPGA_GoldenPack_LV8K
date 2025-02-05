// phy.v

// Generated using ACDS version 17.1 590

`timescale 1 ps / 1 ps
module phy (
		input  wire         pll_ref_clk,          //        pll_ref_clk.clk
		output wire         xgmii_rx_clk,         //       xgmii_rx_clk.clk
		output wire         pll_locked,           //         pll_locked.export
		output wire         tx_ready,             //           tx_ready.export
		input  wire         xgmii_tx_clk,         //       xgmii_tx_clk.clk
		output wire         rx_ready,             //           rx_ready.export
		output wire [0:0]   rx_data_ready,        //      rx_data_ready.export
		output wire [71:0]  xgmii_rx_dc_0,        //      xgmii_rx_dc_0.data
		input  wire         rx_serial_data_0,     //   rx_serial_data_0.export
		input  wire [71:0]  xgmii_tx_dc_0,        //      xgmii_tx_dc_0.data
		output wire [0:0]   tx_serial_data_0,     //   tx_serial_data_0.export
		output wire [91:0]  reconfig_from_xcvr,   // reconfig_from_xcvr.reconfig_from_xcvr
		input  wire [139:0] reconfig_to_xcvr,     //   reconfig_to_xcvr.reconfig_to_xcvr
		input  wire         phy_mgmt_clk,         //       phy_mgmt_clk.clk
		input  wire         phy_mgmt_clk_reset,   // phy_mgmt_clk_reset.reset
		input  wire [8:0]   phy_mgmt_address,     //           phy_mgmt.address
		input  wire         phy_mgmt_read,        //                   .read
		output wire [31:0]  phy_mgmt_readdata,    //                   .readdata
		input  wire         phy_mgmt_write,       //                   .write
		input  wire [31:0]  phy_mgmt_writedata,   //                   .writedata
		output wire         phy_mgmt_waitrequest  //                   .waitrequest
	);

	wire   [0:0] phy_inst_tx_serial_data; // port fragment
	wire  [71:0] phy_inst_xgmii_rx_dc;    // port fragment

	altera_xcvr_10gbaser #(
		.device_family            ("Arria V"),
		.num_channels             (1),
		.operation_mode           ("duplex"),
		.external_pma_ctrl_config (0),
		.control_pin_out          (0),
		.recovered_clk_out        (0),
		.pll_locked_out           (1),
		.ref_clk_freq             ("644.53125 MHz"),
		.pll_type                 ("CMU"),
		.starting_channel_number  (0),
		.reconfig_interfaces      (2),
		.rx_use_coreclk           (0),
		.embedded_reset           (1),
		.latadj                   (0),
		.high_precision_latadj    (1),
		.tx_termination           ("OCT_100_OHMS"),
		.tx_vod_selection         (7),
		.tx_preemp_pretap         (0),
		.tx_preemp_pretap_inv     (0),
		.tx_preemp_tap_1          (15),
		.tx_preemp_tap_2          (0),
		.tx_preemp_tap_2_inv      (0),
		.rx_common_mode           ("0.82v"),
		.rx_termination           ("OCT_100_OHMS"),
		.rx_eq_dc_gain            (0),
		.rx_eq_ctrl               (0),
		.mgmt_clk_in_mhz          (150)
	) phy_inst (
		.pll_ref_clk          (pll_ref_clk),                //        pll_ref_clk.clk
		.xgmii_rx_clk         (xgmii_rx_clk),               //       xgmii_rx_clk.clk
		.pll_locked           (pll_locked),                 //         pll_locked.export
		.tx_ready             (tx_ready),                   //           tx_ready.export
		.xgmii_tx_clk         (xgmii_tx_clk),               //       xgmii_tx_clk.clk
		.rx_ready             (rx_ready),                   //           rx_ready.export
		.rx_data_ready        (rx_data_ready),              //      rx_data_ready.export
		.xgmii_rx_dc          (phy_inst_xgmii_rx_dc[71:0]), //      xgmii_rx_dc_0.data
		.rx_serial_data       (rx_serial_data_0),           //   rx_serial_data_0.export
		.xgmii_tx_dc          (xgmii_tx_dc_0[71:0]),        //      xgmii_tx_dc_0.data
		.tx_serial_data       (phy_inst_tx_serial_data[0]), //   tx_serial_data_0.export
		.reconfig_from_xcvr   (reconfig_from_xcvr),         // reconfig_from_xcvr.reconfig_from_xcvr
		.reconfig_to_xcvr     (reconfig_to_xcvr),           //   reconfig_to_xcvr.reconfig_to_xcvr
		.phy_mgmt_clk         (phy_mgmt_clk),               //       phy_mgmt_clk.clk
		.phy_mgmt_clk_reset   (phy_mgmt_clk_reset),         // phy_mgmt_clk_reset.reset
		.phy_mgmt_address     (phy_mgmt_address),           //           phy_mgmt.address
		.phy_mgmt_read        (phy_mgmt_read),              //                   .read
		.phy_mgmt_readdata    (phy_mgmt_readdata),          //                   .readdata
		.phy_mgmt_write       (phy_mgmt_write),             //                   .write
		.phy_mgmt_writedata   (phy_mgmt_writedata),         //                   .writedata
		.phy_mgmt_waitrequest (phy_mgmt_waitrequest),       //                   .waitrequest
		.rx_block_lock        (),                           //        (terminated)
		.rx_hi_ber            (),                           //        (terminated)
		.rx_recovered_clk     (),                           //        (terminated)
		.rx_coreclkin         (1'b0),                       //        (terminated)
		.gxb_pdn              (1'b0),                       //        (terminated)
		.pll_pdn              (1'b0),                       //        (terminated)
		.cal_blk_pdn          (1'b0),                       //        (terminated)
		.cal_blk_clk          (1'b0),                       //        (terminated)
		.tx_digitalreset      (1'b0),                       //        (terminated)
		.tx_analogreset       (1'b0),                       //        (terminated)
		.tx_cal_busy          (),                           //        (terminated)
		.pll_powerdown        (1'b0),                       //        (terminated)
		.rx_digitalreset      (1'b0),                       //        (terminated)
		.rx_analogreset       (1'b0),                       //        (terminated)
		.rx_cal_busy          (),                           //        (terminated)
		.rx_is_lockedtodata   (),                           //        (terminated)
		.rx_latency_adj       (),                           //        (terminated)
		.tx_latency_adj       ()                            //        (terminated)
	);

	assign xgmii_rx_dc_0 = { phy_inst_xgmii_rx_dc[71:0] };

	assign tx_serial_data_0 = { phy_inst_tx_serial_data[0] };

endmodule
