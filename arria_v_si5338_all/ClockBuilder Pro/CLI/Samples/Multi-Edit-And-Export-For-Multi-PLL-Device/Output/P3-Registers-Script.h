/*
 * Si5347 Rev D Configuration Register Export Header File
 *
 * This file represents a series of Silicon Labs Si5347 Rev D 
 * register writes that can be performed to load a single configuration 
 * on a device. It was created by a Silicon Labs ClockBuilder Pro
 * export tool.
 *
 * Part:		                                       Si5347 Rev D
 * Design ID:                                          
 * Includes Pre/Post Download Control Register Writes: Yes
 * Created By:                                         CBProFOTF1 v2.23.5 [2018-05-02]
 * Timestamp:                                          2018-05-02 10:37:27 GMT-05:00
 *
 * A complete design report corresponding to this export is included at the end 
 * of this header file.
 *
 */

#ifndef SI5347_REVD_REG_CONFIG_HEADER
#define SI5347_REVD_REG_CONFIG_HEADER

#define SI5347_REVD_REG_CONFIG_NUM_REGS				751

typedef struct
{
	unsigned int address; /* 16-bit register address */
	unsigned char value; /* 8-bit register data */

} si5347_revd_register_t;

si5347_revd_register_t const si5347_revd_registers[SI5347_REVD_REG_CONFIG_NUM_REGS] =
{

	/* Start configuration preamble */
	{ 0x0B24, 0xC0 },
	{ 0x0B25, 0x00 },
	/* Rev D stuck divider fix */
	{ 0x0B4E, 0x1A },
	/* End configuration preamble */

	/* Delay 300 msec */
	/*    Delay is worst case time for device to complete any calibration */
	/*    that is running due to device state change previous to this script */
	/*    being processed. */

	/* Start configuration registers */
	{ 0x0006, 0x00 },
	{ 0x0007, 0x00 },
	{ 0x0008, 0x00 },
	{ 0x000B, 0x6C },
	{ 0x0016, 0x0F },
	{ 0x0017, 0xDC },
	{ 0x0018, 0x00 },
	{ 0x0019, 0x00 },
	{ 0x001A, 0x0F },
	{ 0x0020, 0x01 },
	{ 0x002B, 0x02 },
	{ 0x002C, 0x0F },
	{ 0x002D, 0x55 },
	{ 0x002E, 0x10 },
	{ 0x002F, 0x0B },
	{ 0x0030, 0x10 },
	{ 0x0031, 0x0B },
	{ 0x0032, 0x10 },
	{ 0x0033, 0x0B },
	{ 0x0034, 0x10 },
	{ 0x0035, 0x0B },
	{ 0x0036, 0x10 },
	{ 0x0037, 0x0B },
	{ 0x0038, 0x10 },
	{ 0x0039, 0x0B },
	{ 0x003A, 0x10 },
	{ 0x003B, 0x0B },
	{ 0x003C, 0x10 },
	{ 0x003D, 0x0B },
	{ 0x003F, 0xFF },
	{ 0x0040, 0x04 },
	{ 0x0041, 0x0B },
	{ 0x0042, 0x0B },
	{ 0x0043, 0x0B },
	{ 0x0044, 0x0B },
	{ 0x0045, 0x0C },
	{ 0x0046, 0x32 },
	{ 0x0047, 0x32 },
	{ 0x0048, 0x32 },
	{ 0x0049, 0x32 },
	{ 0x004A, 0x31 },
	{ 0x004B, 0x31 },
	{ 0x004C, 0x31 },
	{ 0x004D, 0x31 },
	{ 0x004E, 0x55 },
	{ 0x004F, 0x55 },
	{ 0x0050, 0x0F },
	{ 0x0051, 0x03 },
	{ 0x0052, 0x03 },
	{ 0x0053, 0x03 },
	{ 0x0054, 0x03 },
	{ 0x0055, 0x02 },
	{ 0x0056, 0x02 },
	{ 0x0057, 0x02 },
	{ 0x0058, 0x02 },
	{ 0x0059, 0x55 },
	{ 0x005A, 0xAA },
	{ 0x005B, 0xAA },
	{ 0x005C, 0x0A },
	{ 0x005D, 0x01 },
	{ 0x005E, 0xAA },
	{ 0x005F, 0xAA },
	{ 0x0060, 0x0A },
	{ 0x0061, 0x01 },
	{ 0x0062, 0x28 },
	{ 0x0063, 0x5C },
	{ 0x0064, 0xCF },
	{ 0x0065, 0x00 },
	{ 0x0066, 0x28 },
	{ 0x0067, 0x5C },
	{ 0x0068, 0xCF },
	{ 0x0069, 0x00 },
	{ 0x0092, 0x0F },
	{ 0x0093, 0xAA },
	{ 0x0094, 0xAA },
	{ 0x0095, 0x00 },
	{ 0x0096, 0x88 },
	{ 0x0097, 0x88 },
	{ 0x0098, 0x66 },
	{ 0x0099, 0x66 },
	{ 0x009A, 0x0F },
	{ 0x009B, 0x66 },
	{ 0x009C, 0x66 },
	{ 0x009D, 0xA9 },
	{ 0x009E, 0x44 },
	{ 0x009F, 0x44 },
	{ 0x00A0, 0x22 },
	{ 0x00A1, 0x22 },
	{ 0x00A2, 0x00 },
	{ 0x00A4, 0x8A },
	{ 0x00A5, 0x33 },
	{ 0x00A6, 0x00 },
	{ 0x00A7, 0x00 },
	{ 0x00A9, 0xE9 },
	{ 0x00AA, 0x62 },
	{ 0x00AB, 0x00 },
	{ 0x00AC, 0x00 },
	{ 0x00AE, 0x35 },
	{ 0x00AF, 0x63 },
	{ 0x00B0, 0x00 },
	{ 0x00B1, 0x00 },
	{ 0x00B3, 0x64 },
	{ 0x00B4, 0x63 },
	{ 0x00B5, 0x00 },
	{ 0x00B6, 0x00 },
	{ 0x00E5, 0xF1 },
	{ 0x00E6, 0x05 },
	{ 0x00E7, 0x30 },
	{ 0x00E8, 0x00 },
	{ 0x00E9, 0x00 },
	{ 0x00EA, 0x0A },
	{ 0x00EB, 0x60 },
	{ 0x00EC, 0x00 },
	{ 0x00ED, 0x00 },
	{ 0x00EE, 0x0A },
	{ 0x00EF, 0x60 },
	{ 0x00F0, 0x00 },
	{ 0x00F1, 0x00 },
	{ 0x00F2, 0x0A },
	{ 0x00F3, 0x60 },
	{ 0x00F4, 0x00 },
	{ 0x00F5, 0x00 },
	{ 0x0102, 0x01 },
	{ 0x0108, 0x02 },
	{ 0x0109, 0x09 },
	{ 0x010A, 0x3B },
	{ 0x010B, 0x28 },
	{ 0x010C, 0x01 },
	{ 0x0112, 0x02 },
	{ 0x0113, 0x09 },
	{ 0x0114, 0x3B },
	{ 0x0115, 0x28 },
	{ 0x0116, 0x01 },
	{ 0x0117, 0x02 },
	{ 0x0118, 0x09 },
	{ 0x0119, 0x3B },
	{ 0x011A, 0x29 },
	{ 0x011B, 0x02 },
	{ 0x011C, 0x06 },
	{ 0x011D, 0x09 },
	{ 0x011E, 0x3B },
	{ 0x011F, 0x29 },
	{ 0x0120, 0x02 },
	{ 0x0126, 0x02 },
	{ 0x0127, 0x09 },
	{ 0x0128, 0x3B },
	{ 0x0129, 0x2A },
	{ 0x012A, 0x03 },
	{ 0x012B, 0x06 },
	{ 0x012C, 0x09 },
	{ 0x012D, 0x3B },
	{ 0x012E, 0x2A },
	{ 0x012F, 0x03 },
	{ 0x0130, 0x02 },
	{ 0x0131, 0x09 },
	{ 0x0132, 0x3B },
	{ 0x0133, 0x2B },
	{ 0x0134, 0x04 },
	{ 0x013A, 0x02 },
	{ 0x013B, 0x09 },
	{ 0x013C, 0x3B },
	{ 0x013D, 0x2B },
	{ 0x013E, 0x04 },
	{ 0x013F, 0x00 },
	{ 0x0140, 0x00 },
	{ 0x0141, 0x40 },
	{ 0x0142, 0xFF },
	{ 0x0206, 0x00 },
	{ 0x0208, 0x71 },
	{ 0x0209, 0x02 },
	{ 0x020A, 0x00 },
	{ 0x020B, 0x00 },
	{ 0x020C, 0x00 },
	{ 0x020D, 0x00 },
	{ 0x020E, 0x01 },
	{ 0x020F, 0x00 },
	{ 0x0210, 0x00 },
	{ 0x0211, 0x00 },
	{ 0x0212, 0x71 },
	{ 0x0213, 0x02 },
	{ 0x0214, 0x00 },
	{ 0x0215, 0x00 },
	{ 0x0216, 0x00 },
	{ 0x0217, 0x00 },
	{ 0x0218, 0x01 },
	{ 0x0219, 0x00 },
	{ 0x021A, 0x00 },
	{ 0x021B, 0x00 },
	{ 0x021C, 0xE6 },
	{ 0x021D, 0x01 },
	{ 0x021E, 0x00 },
	{ 0x021F, 0x00 },
	{ 0x0220, 0x00 },
	{ 0x0221, 0x00 },
	{ 0x0222, 0x01 },
	{ 0x0223, 0x00 },
	{ 0x0224, 0x00 },
	{ 0x0225, 0x00 },
	{ 0x0226, 0xE6 },
	{ 0x0227, 0x01 },
	{ 0x0228, 0x00 },
	{ 0x0229, 0x00 },
	{ 0x022A, 0x00 },
	{ 0x022B, 0x00 },
	{ 0x022C, 0x01 },
	{ 0x022D, 0x00 },
	{ 0x022E, 0x00 },
	{ 0x022F, 0x00 },
	{ 0x0231, 0x0B },
	{ 0x0232, 0x0B },
	{ 0x0233, 0x0B },
	{ 0x0234, 0x0B },
	{ 0x0235, 0x00 },
	{ 0x0236, 0x00 },
	{ 0x0237, 0x00 },
	{ 0x0238, 0x80 },
	{ 0x0239, 0x93 },
	{ 0x023A, 0x00 },
	{ 0x023B, 0x00 },
	{ 0x023C, 0x00 },
	{ 0x023D, 0x00 },
	{ 0x023E, 0x80 },
	{ 0x024A, 0x02 },
	{ 0x024B, 0x00 },
	{ 0x024C, 0x00 },
	{ 0x0250, 0x05 },
	{ 0x0251, 0x00 },
	{ 0x0252, 0x00 },
	{ 0x0253, 0x03 },
	{ 0x0254, 0x00 },
	{ 0x0255, 0x00 },
	{ 0x0256, 0x00 },
	{ 0x0257, 0x00 },
	{ 0x0258, 0x00 },
	{ 0x025C, 0x03 },
	{ 0x025D, 0x00 },
	{ 0x025E, 0x00 },
	{ 0x025F, 0x00 },
	{ 0x0260, 0x00 },
	{ 0x0261, 0x00 },
	{ 0x0262, 0x03 },
	{ 0x0263, 0x00 },
	{ 0x0264, 0x00 },
	{ 0x0268, 0x15 },
	{ 0x0269, 0x00 },
	{ 0x026A, 0x00 },
	{ 0x026B, 0x00 },
	{ 0x026C, 0x00 },
	{ 0x026D, 0x00 },
	{ 0x026E, 0x00 },
	{ 0x026F, 0x00 },
	{ 0x0270, 0x00 },
	{ 0x0271, 0x00 },
	{ 0x0272, 0x00 },
	{ 0x028A, 0x00 },
	{ 0x028B, 0x00 },
	{ 0x028C, 0x00 },
	{ 0x028D, 0x00 },
	{ 0x028E, 0x00 },
	{ 0x028F, 0x00 },
	{ 0x0290, 0x00 },
	{ 0x0291, 0x00 },
	{ 0x0294, 0xCD },
	{ 0x0295, 0xCC },
	{ 0x0296, 0x0F },
	{ 0x0297, 0x0F },
	{ 0x0299, 0x0F },
	{ 0x029A, 0x19 },
	{ 0x029B, 0x01 },
	{ 0x029C, 0x00 },
	{ 0x029D, 0xFA },
	{ 0x029E, 0x01 },
	{ 0x029F, 0x00 },
	{ 0x02A0, 0xFA },
	{ 0x02A1, 0x01 },
	{ 0x02A2, 0x00 },
	{ 0x02A3, 0xFA },
	{ 0x02A4, 0x01 },
	{ 0x02A5, 0x00 },
	{ 0x02A6, 0x66 },
	{ 0x02A7, 0x02 },
	{ 0x02A8, 0x00 },
	{ 0x02A9, 0xCC },
	{ 0x02AA, 0x04 },
	{ 0x02AB, 0x00 },
	{ 0x02AC, 0xCC },
	{ 0x02AD, 0x04 },
	{ 0x02AE, 0x00 },
	{ 0x02AF, 0xCC },
	{ 0x02B0, 0x04 },
	{ 0x02B1, 0x00 },
	{ 0x02B7, 0xFF },
	{ 0x0302, 0x00 },
	{ 0x0303, 0x00 },
	{ 0x0304, 0x00 },
	{ 0x0305, 0x86 },
	{ 0x0306, 0x0B },
	{ 0x0307, 0x00 },
	{ 0x0308, 0x00 },
	{ 0x0309, 0x3E },
	{ 0x030A, 0x6A },
	{ 0x030B, 0xC9 },
	{ 0x030C, 0x00 },
	{ 0x030D, 0x00 },
	{ 0x030E, 0x00 },
	{ 0x030F, 0x00 },
	{ 0x0310, 0x38 },
	{ 0x0311, 0x09 },
	{ 0x0312, 0x00 },
	{ 0x0313, 0x00 },
	{ 0x0314, 0x00 },
	{ 0x0315, 0x0E },
	{ 0x0316, 0xE0 },
	{ 0x0317, 0x00 },
	{ 0x0318, 0x00 },
	{ 0x0319, 0x00 },
	{ 0x031A, 0xC0 },
	{ 0x031B, 0x33 },
	{ 0x031C, 0x07 },
	{ 0x031D, 0x00 },
	{ 0x031E, 0x00 },
	{ 0x031F, 0x00 },
	{ 0x0320, 0x00 },
	{ 0x0321, 0xA2 },
	{ 0x0322, 0x00 },
	{ 0x0323, 0x00 },
	{ 0x0324, 0x00 },
	{ 0x0325, 0x00 },
	{ 0x0326, 0x38 },
	{ 0x0327, 0x09 },
	{ 0x0328, 0x00 },
	{ 0x0329, 0x00 },
	{ 0x032A, 0x00 },
	{ 0x032B, 0x00 },
	{ 0x032C, 0xC6 },
	{ 0x032D, 0x00 },
	{ 0x0338, 0x00 },
	{ 0x033B, 0x00 },
	{ 0x033C, 0x00 },
	{ 0x033D, 0x00 },
	{ 0x033E, 0x00 },
	{ 0x033F, 0x00 },
	{ 0x0340, 0x00 },
	{ 0x0341, 0x00 },
	{ 0x0342, 0x00 },
	{ 0x0343, 0x00 },
	{ 0x0344, 0x00 },
	{ 0x0345, 0x00 },
	{ 0x0346, 0x00 },
	{ 0x0347, 0x00 },
	{ 0x0348, 0x00 },
	{ 0x0349, 0x00 },
	{ 0x034A, 0x00 },
	{ 0x034B, 0x00 },
	{ 0x034C, 0x00 },
	{ 0x034D, 0x00 },
	{ 0x034E, 0x00 },
	{ 0x034F, 0x00 },
	{ 0x0350, 0x00 },
	{ 0x0351, 0x00 },
	{ 0x0352, 0x00 },
	{ 0x0408, 0x10 },
	{ 0x0409, 0x1E },
	{ 0x040A, 0x0E },
	{ 0x040B, 0x0D },
	{ 0x040C, 0x07 },
	{ 0x040D, 0x07 },
	{ 0x040E, 0x15 },
	{ 0x040F, 0x2A },
	{ 0x0410, 0x09 },
	{ 0x0411, 0x08 },
	{ 0x0412, 0x07 },
	{ 0x0413, 0x07 },
	{ 0x0415, 0x00 },
	{ 0x0416, 0x00 },
	{ 0x0417, 0x88 },
	{ 0x0418, 0xE6 },
	{ 0x0419, 0x34 },
	{ 0x041A, 0x2F },
	{ 0x041B, 0x00 },
	{ 0x041C, 0x00 },
	{ 0x041D, 0x00 },
	{ 0x041E, 0x00 },
	{ 0x041F, 0x80 },
	{ 0x0421, 0x3B },
	{ 0x0422, 0x01 },
	{ 0x0423, 0x00 },
	{ 0x0424, 0x00 },
	{ 0x0425, 0x00 },
	{ 0x0426, 0x00 },
	{ 0x0427, 0x00 },
	{ 0x0428, 0x00 },
	{ 0x0429, 0x00 },
	{ 0x042A, 0x00 },
	{ 0x042B, 0x01 },
	{ 0x042C, 0x87 },
	{ 0x042D, 0x03 },
	{ 0x042E, 0x19 },
	{ 0x042F, 0x19 },
	{ 0x0431, 0x00 },
	{ 0x0432, 0xC3 },
	{ 0x0433, 0xA2 },
	{ 0x0434, 0x00 },
	{ 0x0435, 0x00 },
	{ 0x0436, 0x06 },
	{ 0x0437, 0x00 },
	{ 0x0438, 0x21 },
	{ 0x0439, 0x43 },
	{ 0x043A, 0x02 },
	{ 0x043B, 0x03 },
	{ 0x043C, 0x00 },
	{ 0x043D, 0x0C },
	{ 0x043E, 0x06 },
	{ 0x0442, 0x00 },
	{ 0x0443, 0x00 },
	{ 0x0444, 0x00 },
	{ 0x0445, 0x00 },
	{ 0x0489, 0xC1 },
	{ 0x048A, 0x02 },
	{ 0x049B, 0xFA },
	{ 0x049D, 0x10 },
	{ 0x049E, 0x20 },
	{ 0x049F, 0x0E },
	{ 0x04A0, 0x0D },
	{ 0x04A1, 0x07 },
	{ 0x04A2, 0x07 },
	{ 0x04A6, 0x0B },
	{ 0x0508, 0x10 },
	{ 0x0509, 0x1E },
	{ 0x050A, 0x0D },
	{ 0x050B, 0x0C },
	{ 0x050C, 0x07 },
	{ 0x050D, 0x07 },
	{ 0x050E, 0x14 },
	{ 0x050F, 0x28 },
	{ 0x0510, 0x09 },
	{ 0x0511, 0x08 },
	{ 0x0512, 0x07 },
	{ 0x0513, 0x07 },
	{ 0x0515, 0x00 },
	{ 0x0516, 0x00 },
	{ 0x0517, 0x00 },
	{ 0x0518, 0x1A },
	{ 0x0519, 0xA4 },
	{ 0x051A, 0x41 },
	{ 0x051B, 0x00 },
	{ 0x051C, 0x00 },
	{ 0x051D, 0x00 },
	{ 0x051E, 0x00 },
	{ 0x051F, 0x80 },
	{ 0x0521, 0x3B },
	{ 0x0522, 0x01 },
	{ 0x0523, 0x00 },
	{ 0x0524, 0x00 },
	{ 0x0525, 0x00 },
	{ 0x0526, 0x00 },
	{ 0x0527, 0x00 },
	{ 0x0528, 0x00 },
	{ 0x0529, 0x00 },
	{ 0x052A, 0x01 },
	{ 0x052B, 0x01 },
	{ 0x052C, 0x87 },
	{ 0x052D, 0x03 },
	{ 0x052E, 0x19 },
	{ 0x052F, 0x19 },
	{ 0x0531, 0x00 },
	{ 0x0532, 0xC3 },
	{ 0x0533, 0xA2 },
	{ 0x0534, 0x00 },
	{ 0x0535, 0x00 },
	{ 0x0536, 0x06 },
	{ 0x0537, 0x00 },
	{ 0x0538, 0x21 },
	{ 0x0539, 0x43 },
	{ 0x053A, 0x02 },
	{ 0x053B, 0x03 },
	{ 0x053C, 0x00 },
	{ 0x053D, 0x0C },
	{ 0x053E, 0x06 },
	{ 0x0542, 0x00 },
	{ 0x0543, 0x00 },
	{ 0x0544, 0x00 },
	{ 0x0545, 0x00 },
	{ 0x0589, 0xC1 },
	{ 0x058A, 0x02 },
	{ 0x059B, 0xFA },
	{ 0x059D, 0x10 },
	{ 0x059E, 0x20 },
	{ 0x059F, 0x0D },
	{ 0x05A0, 0x0C },
	{ 0x05A1, 0x07 },
	{ 0x05A2, 0x07 },
	{ 0x05A6, 0x0B },
	{ 0x0602, 0x01 },
	{ 0x0608, 0x10 },
	{ 0x0609, 0x1E },
	{ 0x060A, 0x0D },
	{ 0x060B, 0x0C },
	{ 0x060C, 0x07 },
	{ 0x060D, 0x07 },
	{ 0x060E, 0x14 },
	{ 0x060F, 0x28 },
	{ 0x0610, 0x09 },
	{ 0x0611, 0x08 },
	{ 0x0612, 0x07 },
	{ 0x0613, 0x07 },
	{ 0x0615, 0x00 },
	{ 0x0616, 0x00 },
	{ 0x0617, 0x00 },
	{ 0x0618, 0x00 },
	{ 0x0619, 0xC0 },
	{ 0x061A, 0x3C },
	{ 0x061B, 0x00 },
	{ 0x061C, 0x00 },
	{ 0x061D, 0x00 },
	{ 0x061E, 0x00 },
	{ 0x061F, 0x80 },
	{ 0x0621, 0x2B },
	{ 0x0622, 0x01 },
	{ 0x0623, 0x00 },
	{ 0x0624, 0x00 },
	{ 0x0625, 0x00 },
	{ 0x0626, 0x00 },
	{ 0x0627, 0x00 },
	{ 0x0628, 0x00 },
	{ 0x0629, 0x00 },
	{ 0x062A, 0x00 },
	{ 0x062B, 0x01 },
	{ 0x062C, 0x87 },
	{ 0x062D, 0x03 },
	{ 0x062E, 0x19 },
	{ 0x062F, 0x19 },
	{ 0x0631, 0x00 },
	{ 0x0632, 0xC3 },
	{ 0x0633, 0xA2 },
	{ 0x0634, 0x00 },
	{ 0x0635, 0x00 },
	{ 0x0636, 0x06 },
	{ 0x0637, 0x00 },
	{ 0x0638, 0x21 },
	{ 0x0639, 0x43 },
	{ 0x063A, 0x02 },
	{ 0x063B, 0x03 },
	{ 0x063C, 0x00 },
	{ 0x063D, 0x0C },
	{ 0x063E, 0x06 },
	{ 0x0642, 0x00 },
	{ 0x0643, 0x00 },
	{ 0x0644, 0x00 },
	{ 0x0645, 0x00 },
	{ 0x0689, 0xC1 },
	{ 0x068A, 0x02 },
	{ 0x069B, 0xFA },
	{ 0x069D, 0x10 },
	{ 0x069E, 0x20 },
	{ 0x069F, 0x0D },
	{ 0x06A0, 0x0C },
	{ 0x06A1, 0x07 },
	{ 0x06A2, 0x07 },
	{ 0x06A6, 0x0B },
	{ 0x0702, 0x01 },
	{ 0x0709, 0x10 },
	{ 0x070A, 0x1E },
	{ 0x070B, 0x0D },
	{ 0x070C, 0x0C },
	{ 0x070D, 0x07 },
	{ 0x070E, 0x07 },
	{ 0x070F, 0x14 },
	{ 0x0710, 0x28 },
	{ 0x0711, 0x09 },
	{ 0x0712, 0x08 },
	{ 0x0713, 0x07 },
	{ 0x0714, 0x07 },
	{ 0x0716, 0x00 },
	{ 0x0717, 0x00 },
	{ 0x0718, 0x00 },
	{ 0x0719, 0x00 },
	{ 0x071A, 0x02 },
	{ 0x071B, 0x3A },
	{ 0x071C, 0x00 },
	{ 0x071D, 0x00 },
	{ 0x071E, 0x00 },
	{ 0x071F, 0x00 },
	{ 0x0720, 0x80 },
	{ 0x0722, 0x2B },
	{ 0x0723, 0x01 },
	{ 0x0724, 0x00 },
	{ 0x0725, 0x00 },
	{ 0x0726, 0x00 },
	{ 0x0727, 0x00 },
	{ 0x0728, 0x00 },
	{ 0x0729, 0x00 },
	{ 0x072A, 0x00 },
	{ 0x072B, 0x00 },
	{ 0x072C, 0x01 },
	{ 0x072D, 0x87 },
	{ 0x072E, 0x03 },
	{ 0x072F, 0x19 },
	{ 0x0730, 0x19 },
	{ 0x0732, 0x00 },
	{ 0x0733, 0xC3 },
	{ 0x0734, 0xA2 },
	{ 0x0735, 0x00 },
	{ 0x0736, 0x00 },
	{ 0x0737, 0x06 },
	{ 0x0738, 0x00 },
	{ 0x0739, 0x21 },
	{ 0x073A, 0x43 },
	{ 0x073B, 0x02 },
	{ 0x073C, 0x03 },
	{ 0x073D, 0x00 },
	{ 0x073E, 0x0C },
	{ 0x073F, 0x06 },
	{ 0x0743, 0x00 },
	{ 0x0744, 0x00 },
	{ 0x0745, 0x00 },
	{ 0x0746, 0x00 },
	{ 0x0789, 0xC1 },
	{ 0x078A, 0x02 },
	{ 0x079B, 0xFA },
	{ 0x079D, 0x10 },
	{ 0x079E, 0x20 },
	{ 0x079F, 0x0D },
	{ 0x07A0, 0x0C },
	{ 0x07A1, 0x07 },
	{ 0x07A2, 0x07 },
	{ 0x07A6, 0x0B },
	{ 0x0802, 0x35 },
	{ 0x0803, 0x04 },
	{ 0x0804, 0x00 },
	{ 0x0805, 0x45 },
	{ 0x0806, 0x04 },
	{ 0x0807, 0x00 },
	{ 0x0808, 0x42 },
	{ 0x0809, 0x04 },
	{ 0x080A, 0x00 },
	{ 0x080B, 0x43 },
	{ 0x080C, 0x04 },
	{ 0x080D, 0x00 },
	{ 0x080E, 0x44 },
	{ 0x080F, 0x04 },
	{ 0x0810, 0x00 },
	{ 0x0811, 0x35 },
	{ 0x0812, 0x05 },
	{ 0x0813, 0x00 },
	{ 0x0814, 0x45 },
	{ 0x0815, 0x05 },
	{ 0x0816, 0x00 },
	{ 0x0817, 0x42 },
	{ 0x0818, 0x05 },
	{ 0x0819, 0x00 },
	{ 0x081A, 0x43 },
	{ 0x081B, 0x05 },
	{ 0x081C, 0x00 },
	{ 0x081D, 0x44 },
	{ 0x081E, 0x05 },
	{ 0x081F, 0x00 },
	{ 0x0820, 0x35 },
	{ 0x0821, 0x06 },
	{ 0x0822, 0x00 },
	{ 0x0823, 0x45 },
	{ 0x0824, 0x06 },
	{ 0x0825, 0x00 },
	{ 0x0826, 0x42 },
	{ 0x0827, 0x06 },
	{ 0x0828, 0x00 },
	{ 0x0829, 0x43 },
	{ 0x082A, 0x06 },
	{ 0x082B, 0x00 },
	{ 0x082C, 0x44 },
	{ 0x082D, 0x06 },
	{ 0x082E, 0x00 },
	{ 0x082F, 0x36 },
	{ 0x0830, 0x07 },
	{ 0x0831, 0x00 },
	{ 0x0832, 0x46 },
	{ 0x0833, 0x07 },
	{ 0x0834, 0x00 },
	{ 0x0835, 0x43 },
	{ 0x0836, 0x07 },
	{ 0x0837, 0x00 },
	{ 0x0838, 0x44 },
	{ 0x0839, 0x07 },
	{ 0x083A, 0x00 },
	{ 0x083B, 0x45 },
	{ 0x083C, 0x07 },
	{ 0x083D, 0x00 },
	{ 0x083E, 0x00 },
	{ 0x083F, 0x00 },
	{ 0x0840, 0x00 },
	{ 0x0841, 0x00 },
	{ 0x0842, 0x00 },
	{ 0x0843, 0x00 },
	{ 0x0844, 0x00 },
	{ 0x0845, 0x00 },
	{ 0x0846, 0x00 },
	{ 0x0847, 0x00 },
	{ 0x0848, 0x00 },
	{ 0x0849, 0x00 },
	{ 0x084A, 0x00 },
	{ 0x084B, 0x00 },
	{ 0x084C, 0x00 },
	{ 0x084D, 0x00 },
	{ 0x084E, 0x00 },
	{ 0x084F, 0x00 },
	{ 0x0850, 0x00 },
	{ 0x0851, 0x00 },
	{ 0x0852, 0x00 },
	{ 0x0853, 0x00 },
	{ 0x0854, 0x00 },
	{ 0x0855, 0x00 },
	{ 0x0856, 0x00 },
	{ 0x0857, 0x00 },
	{ 0x0858, 0x00 },
	{ 0x0859, 0x00 },
	{ 0x085A, 0x00 },
	{ 0x085B, 0x00 },
	{ 0x085C, 0x00 },
	{ 0x085D, 0x00 },
	{ 0x085E, 0x00 },
	{ 0x085F, 0x00 },
	{ 0x0860, 0x00 },
	{ 0x0861, 0x00 },
	{ 0x090E, 0x02 },
	{ 0x0943, 0x00 },
	{ 0x0949, 0x0F },
	{ 0x094A, 0x0F },
	{ 0x094E, 0x49 },
	{ 0x094F, 0x02 },
	{ 0x095E, 0x00 },
	{ 0x0A03, 0x0F },
	{ 0x0A04, 0x00 },
	{ 0x0A05, 0x0F },
	{ 0x0B44, 0xCF },
	{ 0x0B45, 0x00 },
	{ 0x0B46, 0x00 },
	{ 0x0B47, 0x00 },
	{ 0x0B48, 0x00 },
	{ 0x0B4A, 0x00 },
	{ 0x0B57, 0x0E },
	{ 0x0B58, 0x01 },
	/* End configuration registers */

	/* Start configuration postamble */
	{ 0x0414, 0x01 },
	{ 0x0514, 0x01 },
	{ 0x0614, 0x01 },
	{ 0x0715, 0x01 },
	{ 0x001C, 0x01 },
	{ 0x0B24, 0xC3 },
	{ 0x0B25, 0x02 },
	/* End configuration postamble */

};

/*
 * Design Report
 *
 * Overview
 * ========
 * Part:         Si5347A Rev D
 * Project File: Output\P3-Project.slabtimeproj
 * Design ID:    <none>
 * Created By:   CBProFOTF1 v2.23.5 [2018-05-02]
 * Timestamp:    2018-05-02 10:37:27 GMT-05:00
 * 
 * Design Rule Check
 * =================
 * Errors:
 * - No errors
 * 
 * Warnings:
 * - DSPLL A: hitless switching performance may not meet datasheet specification due to Fpfd less than 1 MHz
 * - DSPLL A: loop bandwidth 40 Hz or lower (39.1 Hz) with XTAL input on XA/XB [1]
 * - DSPLL B: hitless switching performance may not meet datasheet specification due to Fpfd less than 1 MHz
 * - DSPLL C: hitless switching performance may not meet datasheet specification due to Fpfd less than 1 MHz
 * - DSPLL D: hitless switching performance may not meet datasheet specification due to Fpfd less than 1 MHz
 * - IN0: LOS threshold “set for me” mode is recommended when hitless switching is enabled [2]
 * - IN1: LOS threshold “set for me” mode is recommended when hitless switching is enabled [2]
 * - IN2: LOS threshold “set for me” mode is recommended when hitless switching is enabled [2]
 * - IN3: LOS threshold “set for me” mode is recommended when hitless switching is enabled [2]
 * - OUT1 [80.566003... MHz] and OUT2 [168.041015... MHz] may have coupling [3]
 * 
 * Notes:
 * [1] A trade-off exists between jitter and wander with loop bandwidths at or below 40 Hz. See app note AN905 "Si534x External References; Optimizing Performance" for details. Driving XA/XB with a TCXO or OXCO may be helpful for designs that require low wander.
 * 
 * [2] Assert and de-assert thresholds are critical to optimum hitless switching performance. When “set for me” is checked on the LOS page, LOS thresholds will be calculated and updated based on your design’s frequency plan.
 * 
 * [3] To avoid coupling in outputs, Silicon Labs recommends the following:
 * 
 * - Avoid adjacent frequency values that are close. CBPro uses an output's integration bandwidth (IBW) to determine whether two adjacent frequencies are too close. An IBW of 20 MHz is used for frequencies 80 MHz and larger. Lower frequencies will use IBW of Freq/4.
 * - Adjacent frequency values that are integer multiples of one another are okay and these outputs should be grouped accordingly. For example, a 155.52 MHz and 622.08 MHz (155.52 x 4) can be adjacent.
 * - Unused outputs can be used to separate clock outputs that might otherwise interfere with one another.
 * 
 * Silicon Labs recommends you validate your design's jitter performance using an Evaluation Board. You can request a custom phase noise report for your design from CBPro's design dashboard.
 * 
 * Device Grade
 * ============
 * Maximum Output Frequency: 672.1640625 MHz
 * Frequency Synthesis Mode: Fractional
 * Frequency Plan Grade:     A
 * Minimum Base OPN:         Si5347A*
 * 
 * Device      Output Clock
 * Grade       Frequency Range       Typical Jitter
 * ---------   -------------------   --------------
 * Si5347A*    100 Hz to 720 MHz     < 150 fs
 * Si5347B     100 Hz to 350 MHz     "
 * 
 * * Based on your calculated frequency plan, a Si5347A grade device is
 * required for your design. See the datasheet Ordering Guide for more
 * information.
 * 
 * Design
 * ======
 * Host Interface:
 *    I/O Power Supply: VDD (Core)
 *    SPI Mode: 4-Wire
 *    I2C Address Range: 108d to 111d / 0x6C to 0x6F (selected via A0/A1 pins)
 * 
 * XA/XB:
 *    48 MHz (XTAL - Crystal)
 * 
 * Inputs:
 *     IN0: 25 MHz
 *          Standard
 *          DSPLL A,B,C,D
 *     IN1: 25 MHz
 *          Standard
 *          DSPLL A,B,C,D
 *     IN2: 19.44 MHz [ 19 + 11/25 MHz ]
 *          Standard
 *          DSPLL A,B,C,D
 *     IN3: 19.44 MHz [ 19 + 11/25 MHz ]
 *          Standard
 *          DSPLL A,B,C,D
 * 
 * Outputs:
 *    OUT0: 161.1320068359375 MHz [ 161 + 5407/40960 MHz ]
 *          [ 161+17/128 MHz - 5 ppm ]
 *          Enabled, LVDS 2.5 V
 *          DSPLL A
 *    OUT1: 80.56600341796875 MHz [ 80 + 46367/81920 MHz ]
 *          [ OUT0/2 ]
 *          Enabled, LVDS 2.5 V
 *          DSPLL A
 *    OUT2: 168.041015625 MHz [ 168 + 21/512 MHz ]
 *          Enabled, LVDS 2.5 V
 *          DSPLL B
 *    OUT3: 672.1640625 MHz [ 672 + 21/128 MHz ]
 *          Enabled, LVDS 2.5 V
 *          DSPLL B
 *    OUT4: 155.52 MHz [ 155 + 13/25 MHz ]
 *          Enabled, LVDS 2.5 V
 *          DSPLL C
 *    OUT5: 622.08 MHz [ 622 + 2/25 MHz ]
 *          Enabled, LVDS 2.5 V
 *          DSPLL C
 *    OUT6: 148.5 MHz [ 148 + 1/2 MHz ]
 *          Enabled, LVDS 2.5 V
 *          DSPLL D
 *    OUT7: 27 MHz
 *          Enabled, LVDS 2.5 V
 *          DSPLL D
 * 
 * Frequency Plan
 * ==============
 * Fvco = 14.16 GHz [ 14 + 4/25 GHz ]
 * MXAXB = 295
 * 
 * DSPLL A:
 *    Fpfd = 40 kHz
 *    Fdco = 966.792041015625 MHz [ 966 + 16221/20480 MHz ]
 *    I/O Delay not enabled
 *    MA = 24169.801025390625 [ 24169 + 3281/4096 ]
 *    N0 = 14.6463762621843412... [ 14 + 4266062/6599967 ]
 *    Nominal Bandwidth:
 *      Desired: 40.000 Hz
 *      Actual:  39.097 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  30
 *         BW2:  14
 *         BW3:  13
 *         BW4:  7
 *         BW5:  7
 *    Fastlock Bandwidth:
 *      Desired: 1.000 kHz
 *      Actual:  1.344 kHz
 *      Coefficients:
 *         BW0:  21
 *         BW1:  42
 *         BW2:  9
 *         BW3:  8
 *         BW4:  7
 *         BW5:  7
 *    Holdover Bandwidth:
 *       N/A (Ramped Exit from Holdover)
 * DSPLL B:
 *    Fpfd = 40 kHz
 *    Fdco = 1.344328125 GHz [ 1 + 22037/64000 GHz ]
 *    I/O Delay not enabled
 *    MB = 33608.203125 [ 33608 + 13/64 ]
 *    N1 = 10.5331427176679800... [ 10 + 15290/28679 ]
 *    Nominal Bandwidth:
 *      Desired: 40.000 Hz
 *      Actual:  47.925 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  30
 *         BW2:  13
 *         BW3:  12
 *         BW4:  7
 *         BW5:  7
 *    Fastlock Bandwidth:
 *      Desired: 1.000 kHz
 *      Actual:  803.849 Hz
 *      Coefficients:
 *         BW0:  20
 *         BW1:  40
 *         BW2:  9
 *         BW3:  8
 *         BW4:  7
 *         BW5:  7
 *    Holdover Bandwidth:
 *       N/A (Ramped Exit from Holdover)
 * DSPLL C:
 *    Fpfd = 40 kHz
 *    Fdco = 1.24416 GHz [ 1 + 763/3125 GHz ]
 *    I/O Delay not enabled
 *    MC = 31104
 *    N2 = 11.3811728395061728... [ 11 + 247/648 ]
 *    Nominal Bandwidth:
 *      Desired: 40.000 Hz
 *      Actual:  43.475 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  30
 *         BW2:  13
 *         BW3:  12
 *         BW4:  7
 *         BW5:  7
 *    Fastlock Bandwidth:
 *      Desired: 1.000 kHz
 *      Actual:  726.513 Hz
 *      Coefficients:
 *         BW0:  20
 *         BW1:  40
 *         BW2:  9
 *         BW3:  8
 *         BW4:  7
 *         BW5:  7
 *    Holdover Bandwidth:
 *       N/A (Ramped Exit from Holdover)
 * DSPLL D:
 *    Fpfd = 40 kHz
 *    Fdco = 1.188 GHz [ 1 + 47/250 GHz ]
 *    I/O Delay not enabled
 *    MD = 29700
 *    N3 = 11.9191919191919191... [ 11 + 91/99 ]
 *    Nominal Bandwidth:
 *      Desired: 40.000 Hz
 *      Actual:  41.057 Hz
 *      Coefficients:
 *         BW0:  16
 *         BW1:  30
 *         BW2:  13
 *         BW3:  12
 *         BW4:  7
 *         BW5:  7
 *    Fastlock Bandwidth:
 *      Desired: 1.000 kHz
 *      Actual:  684.697 Hz
 *      Coefficients:
 *         BW0:  20
 *         BW1:  40
 *         BW2:  9
 *         BW3:  8
 *         BW4:  7
 *         BW5:  7
 *    Holdover Bandwidth:
 *       N/A (Ramped Exit from Holdover)
 * 
 * P dividers:
 *    P0  = 625
 *    P1  = 625
 *    P2  = 486
 *    P3  = 486
 *    Pxaxb = 1
 * 
 * R dividers:
 *    R0 = 6
 *    R1 = 12
 *    R2 = 8
 *    R3 = 2
 *    R4 = 8
 *    R5 = 2
 *    R6 = 8
 *    R7 = 44
 * 
 * Dividers listed above show effective values. These values are translated to register settings by ClockBuilder Pro. For the actual register values, see below. Refer to the Family Reference Manual for information on registers related to frequency plan.
 * 
 * Digitally Controlled Oscillator (DCO)
 * =====================================
 * Mode: FINC/FDEC
 * 
 * DSPLL A: DCO Disabled
 * 
 * DSPLL B: DCO Disabled
 * 
 * DSPLL C: DCO Disabled
 * 
 * DSPLL D: DCO Disabled
 * 
 * Estimated Power & Junction Temperature
 * ======================================
 * Assumptions:
 * 
 * Revision: D
 * VDD:      1.8 V
 * Ta:       70 °C
 * Airflow:  None
 * 
 * Total Power: 1.307 W, On Chip Power: 1.259 W, Tj: 98 °C
 * 
 *                 Frequency  Format   Voltage   Current     Power
 *         -----------------  ------  --------  --------  --------
 * VDD                                   1.8 V  321.0 mA    578 mW
 * VDDA                                  3.3 V  120.4 mA    397 mW
 * VDDO0   161.132006... MHz  LVDS       2.5 V   16.0 mA     40 mW
 * VDDO1    80.566003... MHz  LVDS       2.5 V   15.4 mA     39 mW
 * VDDO2   168.041015... MHz  LVDS       2.5 V   16.0 mA     40 mW
 * VDDO3   672.164062... MHz  LVDS       2.5 V   19.4 mA     48 mW
 * VDDO4          155.52 MHz  LVDS       2.5 V   15.9 mA     40 mW
 * VDDO5          622.08 MHz  LVDS       2.5 V   19.0 mA     48 mW
 * VDDO6           148.5 MHz  LVDS       2.5 V   15.9 mA     40 mW
 * VDDO7              27 MHz  LVDS       2.5 V   15.1 mA     38 mW
 *                                              --------  --------
 *                                       Total  574.1 mA   1.307 W
 * 
 * Note:
 * 
 * -Total power includes on- and off-chip power. This is a typical value and estimate only.
 * -Use an EVB for a more exact power measurement
 * -On-chip power excludes power dissipated in external terminations.
 * -Tj is junction temperature. Tj must be less than 125 °C (on Si5347 Revision D) for device to comply with datasheet specifications.
 * 
 * Settings
 * ========
 * 
 * Location      Setting Name                Decimal Value      Hex Value        
 * ------------  --------------------------  -----------------  -----------------
 * 0x0006[23:0]  TOOL_VERSION                0                  0x000000         
 * 0x000B[6:0]   I2C_ADDR                    108                0x6C             
 * 0x0016[0]     LOL_ON_HOLD_PLLA            1                  0x1              
 * 0x0016[1]     LOL_ON_HOLD_PLLB            1                  0x1              
 * 0x0016[2]     LOL_ON_HOLD_PLLC            1                  0x1              
 * 0x0016[3]     LOL_ON_HOLD_PLLD            1                  0x1              
 * 0x0017[0]     SYSINCAL_INTR_MSK           0                  0x0              
 * 0x0017[1]     LOSXAXB_INTR_MSK            0                  0x0              
 * 0x0017[2]     LOSREF_INTR_MSK             1                  0x1              
 * 0x0017[3]     XAXB_ERR_INTR_MSK           1                  0x1              
 * 0x0017[5]     SMB_TMOUT_INTR_MSK          0                  0x0              
 * 0x0018[3:0]   LOS_INTR_MSK                0                  0x0              
 * 0x0018[7:4]   OOF_INTR_MSK                0                  0x0              
 * 0x0019[0]     LOL_INTR_MSK_PLLA           0                  0x0              
 * 0x0019[1]     LOL_INTR_MSK_PLLB           0                  0x0              
 * 0x0019[2]     LOL_INTR_MSK_PLLC           0                  0x0              
 * 0x0019[3]     LOL_INTR_MSK_PLLD           0                  0x0              
 * 0x0019[4]     HOLD_INTR_MSK_PLLA          0                  0x0              
 * 0x0019[5]     HOLD_INTR_MSK_PLLB          0                  0x0              
 * 0x0019[6]     HOLD_INTR_MSK_PLLC          0                  0x0              
 * 0x0019[7]     HOLD_INTR_MSK_PLLD          0                  0x0              
 * 0x001A[4]     CAL_INTR_MSK_PLLA           0                  0x0              
 * 0x001A[5]     CAL_INTR_MSK_PLLB           0                  0x0              
 * 0x001A[6]     CAL_INTR_MSK_PLLC           0                  0x0              
 * 0x001A[7]     CAL_INTR_MSK_PLLD           0                  0x0              
 * 0x0020[0]     FSTEP_PLL_SINGLE            1                  0x1              
 * 0x0020[1]     FSTEP_PLL_REGCTRL           0                  0x0              
 * 0x0020[3:2]   FSTEP_PLL                   0                  0x0              
 * 0x002B[3]     SPI_3WIRE                   0                  0x0              
 * 0x002C[3:0]   LOS_EN                      15                 0xF              
 * 0x002C[4]     LOSXAXB_DIS                 0                  0x0              
 * 0x002D[1:0]   LOS0_VAL_TIME               1                  0x1              
 * 0x002D[3:2]   LOS1_VAL_TIME               1                  0x1              
 * 0x002D[5:4]   LOS2_VAL_TIME               1                  0x1              
 * 0x002D[7:6]   LOS3_VAL_TIME               1                  0x1              
 * 0x002E[15:0]  LOS0_TRG_THR                2832               0x0B10           
 * 0x0030[15:0]  LOS1_TRG_THR                2832               0x0B10           
 * 0x0032[15:0]  LOS2_TRG_THR                2832               0x0B10           
 * 0x0034[15:0]  LOS3_TRG_THR                2832               0x0B10           
 * 0x0036[15:0]  LOS0_CLR_THR                2832               0x0B10           
 * 0x0038[15:0]  LOS1_CLR_THR                2832               0x0B10           
 * 0x003A[15:0]  LOS2_CLR_THR                2832               0x0B10           
 * 0x003C[15:0]  LOS3_CLR_THR                2832               0x0B10           
 * 0x003F[3:0]   OOF_EN                      15                 0xF              
 * 0x003F[7:4]   FAST_OOF_EN                 15                 0xF              
 * 0x0040[2:0]   OOF_REF_SEL                 4                  0x4              
 * 0x0041[4:0]   OOF0_DIV_SEL                11                 0x0B             
 * 0x0042[4:0]   OOF1_DIV_SEL                11                 0x0B             
 * 0x0043[4:0]   OOF2_DIV_SEL                11                 0x0B             
 * 0x0044[4:0]   OOF3_DIV_SEL                11                 0x0B             
 * 0x0045[4:0]   OOFXO_DIV_SEL               12                 0x0C             
 * 0x0046[7:0]   OOF0_SET_THR                50                 0x32             
 * 0x0047[7:0]   OOF1_SET_THR                50                 0x32             
 * 0x0048[7:0]   OOF2_SET_THR                50                 0x32             
 * 0x0049[7:0]   OOF3_SET_THR                50                 0x32             
 * 0x004A[7:0]   OOF0_CLR_THR                49                 0x31             
 * 0x004B[7:0]   OOF1_CLR_THR                49                 0x31             
 * 0x004C[7:0]   OOF2_CLR_THR                49                 0x31             
 * 0x004D[7:0]   OOF3_CLR_THR                49                 0x31             
 * 0x004E[2:0]   OOF0_DETWIN_SEL             5                  0x5              
 * 0x004E[6:4]   OOF1_DETWIN_SEL             5                  0x5              
 * 0x004F[2:0]   OOF2_DETWIN_SEL             5                  0x5              
 * 0x004F[6:4]   OOF3_DETWIN_SEL             5                  0x5              
 * 0x0050[3:0]   OOF_ON_LOS                  15                 0xF              
 * 0x0051[3:0]   FAST_OOF0_SET_THR           3                  0x3              
 * 0x0052[3:0]   FAST_OOF1_SET_THR           3                  0x3              
 * 0x0053[3:0]   FAST_OOF2_SET_THR           3                  0x3              
 * 0x0054[3:0]   FAST_OOF3_SET_THR           3                  0x3              
 * 0x0055[3:0]   FAST_OOF0_CLR_THR           2                  0x2              
 * 0x0056[3:0]   FAST_OOF1_CLR_THR           2                  0x2              
 * 0x0057[3:0]   FAST_OOF2_CLR_THR           2                  0x2              
 * 0x0058[3:0]   FAST_OOF3_CLR_THR           2                  0x2              
 * 0x0059[1:0]   FAST_OOF0_DETWIN_SEL        1                  0x1              
 * 0x0059[3:2]   FAST_OOF1_DETWIN_SEL        1                  0x1              
 * 0x0059[5:4]   FAST_OOF2_DETWIN_SEL        1                  0x1              
 * 0x0059[7:6]   FAST_OOF3_DETWIN_SEL        1                  0x1              
 * 0x005A[25:0]  OOF0_RATIO_REF              17476266           0x10AAAAA        
 * 0x005E[25:0]  OOF1_RATIO_REF              17476266           0x10AAAAA        
 * 0x0062[25:0]  OOF2_RATIO_REF              13589544           0x0CF5C28        
 * 0x0066[25:0]  OOF3_RATIO_REF              13589544           0x0CF5C28        
 * 0x0092[0]     LOL_FST_EN_PLLA             1                  0x1              
 * 0x0092[1]     LOL_FST_EN_PLLB             1                  0x1              
 * 0x0092[2]     LOL_FST_EN_PLLC             1                  0x1              
 * 0x0092[3]     LOL_FST_EN_PLLD             1                  0x1              
 * 0x0093[3:0]   LOL_FST_DETWIN_SEL_PLLA     10                 0xA              
 * 0x0093[7:4]   LOL_FST_DETWIN_SEL_PLLB     10                 0xA              
 * 0x0094[3:0]   LOL_FST_DETWIN_SEL_PLLC     10                 0xA              
 * 0x0094[7:4]   LOL_FST_DETWIN_SEL_PLLD     10                 0xA              
 * 0x0095[1:0]   LOL_FST_VALWIN_SEL_PLLA     0                  0x0              
 * 0x0095[3:2]   LOL_FST_VALWIN_SEL_PLLB     0                  0x0              
 * 0x0095[5:4]   LOL_FST_VALWIN_SEL_PLLC     0                  0x0              
 * 0x0095[7:6]   LOL_FST_VALWIN_SEL_PLLD     0                  0x0              
 * 0x0096[3:0]   LOL_FST_SET_THR_SEL_PLLA    8                  0x8              
 * 0x0096[7:4]   LOL_FST_SET_THR_SEL_PLLB    8                  0x8              
 * 0x0097[3:0]   LOL_FST_SET_THR_SEL_PLLC    8                  0x8              
 * 0x0097[7:4]   LOL_FST_SET_THR_SEL_PLLD    8                  0x8              
 * 0x0098[3:0]   LOL_FST_CLR_THR_SEL_PLLA    6                  0x6              
 * 0x0098[7:4]   LOL_FST_CLR_THR_SEL_PLLB    6                  0x6              
 * 0x0099[3:0]   LOL_FST_CLR_THR_SEL_PLLC    6                  0x6              
 * 0x0099[7:4]   LOL_FST_CLR_THR_SEL_PLLD    6                  0x6              
 * 0x009A[0]     LOL_SLOW_EN_PLLA            1                  0x1              
 * 0x009A[1]     LOL_SLOW_EN_PLLB            1                  0x1              
 * 0x009A[2]     LOL_SLOW_EN_PLLC            1                  0x1              
 * 0x009A[3]     LOL_SLOW_EN_PLLD            1                  0x1              
 * 0x009B[3:0]   LOL_SLW_DETWIN_SEL_PLLA     6                  0x6              
 * 0x009B[7:4]   LOL_SLW_DETWIN_SEL_PLLB     6                  0x6              
 * 0x009C[3:0]   LOL_SLW_DETWIN_SEL_PLLC     6                  0x6              
 * 0x009C[7:4]   LOL_SLW_DETWIN_SEL_PLLD     6                  0x6              
 * 0x009D[1:0]   LOL_SLW_VALWIN_SEL_PLLA     1                  0x1              
 * 0x009D[3:2]   LOL_SLW_VALWIN_SEL_PLLB     2                  0x2              
 * 0x009D[5:4]   LOL_SLW_VALWIN_SEL_PLLC     2                  0x2              
 * 0x009D[7:6]   LOL_SLW_VALWIN_SEL_PLLD     2                  0x2              
 * 0x009E[3:0]   LOL_SLW_SET_THR_PLLA        4                  0x4              
 * 0x009E[7:4]   LOL_SLW_SET_THR_PLLB        4                  0x4              
 * 0x009F[3:0]   LOL_SLW_SET_THR_PLLC        4                  0x4              
 * 0x009F[7:4]   LOL_SLW_SET_THR_PLLD        4                  0x4              
 * 0x00A0[3:0]   LOL_SLW_CLR_THR_PLLA        2                  0x2              
 * 0x00A0[7:4]   LOL_SLW_CLR_THR_PLLB        2                  0x2              
 * 0x00A1[3:0]   LOL_SLW_CLR_THR_PLLC        2                  0x2              
 * 0x00A1[7:4]   LOL_SLW_CLR_THR_PLLD        2                  0x2              
 * 0x00A2[0]     LOL_TIMER_EN_PLLA           0                  0x0              
 * 0x00A2[1]     LOL_TIMER_EN_PLLB           0                  0x0              
 * 0x00A2[2]     LOL_TIMER_EN_PLLC           0                  0x0              
 * 0x00A2[3]     LOL_TIMER_EN_PLLD           0                  0x0              
 * 0x00A4[28:0]  LOL_CLR_DELAY_DIV256_PLLA   13194              0x0000338A       
 * 0x00A9[28:0]  LOL_CLR_DELAY_DIV256_PLLB   25321              0x000062E9       
 * 0x00AE[28:0]  LOL_CLR_DELAY_DIV256_PLLC   25397              0x00006335       
 * 0x00B3[28:0]  LOL_CLR_DELAY_DIV256_PLLD   25444              0x00006364       
 * 0x00E5[4]     FASTLOCK_EXTEND_EN_PLLA     1                  0x1              
 * 0x00E5[5]     FASTLOCK_EXTEND_EN_PLLB     1                  0x1              
 * 0x00E5[6]     FASTLOCK_EXTEND_EN_PLLC     1                  0x1              
 * 0x00E5[7]     FASTLOCK_EXTEND_EN_PLLD     1                  0x1              
 * 0x00E6[28:0]  FASTLOCK_EXTEND_PLLA        12293              0x00003005       
 * 0x00EA[28:0]  FASTLOCK_EXTEND_PLLB        24586              0x0000600A       
 * 0x00EE[28:0]  FASTLOCK_EXTEND_PLLC        24586              0x0000600A       
 * 0x00F2[28:0]  FASTLOCK_EXTEND_PLLD        24586              0x0000600A       
 * 0x0102[0]     OUTALL_DISABLE_LOW          1                  0x1              
 * 0x0108[0]     OUT0_PDN                    0                  0x0              
 * 0x0108[1]     OUT0_OE                     1                  0x1              
 * 0x0108[2]     OUT0_RDIV_FORCE2            0                  0x0              
 * 0x0109[2:0]   OUT0_FORMAT                 1                  0x1              
 * 0x0109[3]     OUT0_SYNC_EN                1                  0x1              
 * 0x0109[5:4]   OUT0_DIS_STATE              0                  0x0              
 * 0x0109[7:6]   OUT0_CMOS_DRV               0                  0x0              
 * 0x010A[3:0]   OUT0_CM                     11                 0xB              
 * 0x010A[6:4]   OUT0_AMPL                   3                  0x3              
 * 0x010B[2:0]   OUT0_MUX_SEL                0                  0x0              
 * 0x010B[5:4]   OUT0_VDD_SEL                2                  0x2              
 * 0x010B[3]     OUT0_VDD_SEL_EN             1                  0x1              
 * 0x010B[7:6]   OUT0_INV                    0                  0x0              
 * 0x010C[2:0]   OUT0_DIS_SRC                1                  0x1              
 * 0x0112[0]     OUT1_PDN                    0                  0x0              
 * 0x0112[1]     OUT1_OE                     1                  0x1              
 * 0x0112[2]     OUT1_RDIV_FORCE2            0                  0x0              
 * 0x0113[2:0]   OUT1_FORMAT                 1                  0x1              
 * 0x0113[3]     OUT1_SYNC_EN                1                  0x1              
 * 0x0113[5:4]   OUT1_DIS_STATE              0                  0x0              
 * 0x0113[7:6]   OUT1_CMOS_DRV               0                  0x0              
 * 0x0114[3:0]   OUT1_CM                     11                 0xB              
 * 0x0114[6:4]   OUT1_AMPL                   3                  0x3              
 * 0x0115[2:0]   OUT1_MUX_SEL                0                  0x0              
 * 0x0115[5:4]   OUT1_VDD_SEL                2                  0x2              
 * 0x0115[3]     OUT1_VDD_SEL_EN             1                  0x1              
 * 0x0115[7:6]   OUT1_INV                    0                  0x0              
 * 0x0116[2:0]   OUT1_DIS_SRC                1                  0x1              
 * 0x0117[0]     OUT2_PDN                    0                  0x0              
 * 0x0117[1]     OUT2_OE                     1                  0x1              
 * 0x0117[2]     OUT2_RDIV_FORCE2            0                  0x0              
 * 0x0118[2:0]   OUT2_FORMAT                 1                  0x1              
 * 0x0118[3]     OUT2_SYNC_EN                1                  0x1              
 * 0x0118[5:4]   OUT2_DIS_STATE              0                  0x0              
 * 0x0118[7:6]   OUT2_CMOS_DRV               0                  0x0              
 * 0x0119[3:0]   OUT2_CM                     11                 0xB              
 * 0x0119[6:4]   OUT2_AMPL                   3                  0x3              
 * 0x011A[2:0]   OUT2_MUX_SEL                1                  0x1              
 * 0x011A[5:4]   OUT2_VDD_SEL                2                  0x2              
 * 0x011A[3]     OUT2_VDD_SEL_EN             1                  0x1              
 * 0x011A[7:6]   OUT2_INV                    0                  0x0              
 * 0x011B[2:0]   OUT2_DIS_SRC                2                  0x2              
 * 0x011C[0]     OUT3_PDN                    0                  0x0              
 * 0x011C[1]     OUT3_OE                     1                  0x1              
 * 0x011C[2]     OUT3_RDIV_FORCE2            1                  0x1              
 * 0x011D[2:0]   OUT3_FORMAT                 1                  0x1              
 * 0x011D[3]     OUT3_SYNC_EN                1                  0x1              
 * 0x011D[5:4]   OUT3_DIS_STATE              0                  0x0              
 * 0x011D[7:6]   OUT3_CMOS_DRV               0                  0x0              
 * 0x011E[3:0]   OUT3_CM                     11                 0xB              
 * 0x011E[6:4]   OUT3_AMPL                   3                  0x3              
 * 0x011F[2:0]   OUT3_MUX_SEL                1                  0x1              
 * 0x011F[5:4]   OUT3_VDD_SEL                2                  0x2              
 * 0x011F[3]     OUT3_VDD_SEL_EN             1                  0x1              
 * 0x011F[7:6]   OUT3_INV                    0                  0x0              
 * 0x0120[2:0]   OUT3_DIS_SRC                2                  0x2              
 * 0x0126[0]     OUT4_PDN                    0                  0x0              
 * 0x0126[1]     OUT4_OE                     1                  0x1              
 * 0x0126[2]     OUT4_RDIV_FORCE2            0                  0x0              
 * 0x0127[2:0]   OUT4_FORMAT                 1                  0x1              
 * 0x0127[3]     OUT4_SYNC_EN                1                  0x1              
 * 0x0127[5:4]   OUT4_DIS_STATE              0                  0x0              
 * 0x0127[7:6]   OUT4_CMOS_DRV               0                  0x0              
 * 0x0128[3:0]   OUT4_CM                     11                 0xB              
 * 0x0128[6:4]   OUT4_AMPL                   3                  0x3              
 * 0x0129[2:0]   OUT4_MUX_SEL                2                  0x2              
 * 0x0129[5:4]   OUT4_VDD_SEL                2                  0x2              
 * 0x0129[3]     OUT4_VDD_SEL_EN             1                  0x1              
 * 0x0129[7:6]   OUT4_INV                    0                  0x0              
 * 0x012A[2:0]   OUT4_DIS_SRC                3                  0x3              
 * 0x012B[0]     OUT5_PDN                    0                  0x0              
 * 0x012B[1]     OUT5_OE                     1                  0x1              
 * 0x012B[2]     OUT5_RDIV_FORCE2            1                  0x1              
 * 0x012C[2:0]   OUT5_FORMAT                 1                  0x1              
 * 0x012C[3]     OUT5_SYNC_EN                1                  0x1              
 * 0x012C[5:4]   OUT5_DIS_STATE              0                  0x0              
 * 0x012C[7:6]   OUT5_CMOS_DRV               0                  0x0              
 * 0x012D[3:0]   OUT5_CM                     11                 0xB              
 * 0x012D[6:4]   OUT5_AMPL                   3                  0x3              
 * 0x012E[2:0]   OUT5_MUX_SEL                2                  0x2              
 * 0x012E[5:4]   OUT5_VDD_SEL                2                  0x2              
 * 0x012E[3]     OUT5_VDD_SEL_EN             1                  0x1              
 * 0x012E[7:6]   OUT5_INV                    0                  0x0              
 * 0x012F[2:0]   OUT5_DIS_SRC                3                  0x3              
 * 0x0130[0]     OUT6_PDN                    0                  0x0              
 * 0x0130[1]     OUT6_OE                     1                  0x1              
 * 0x0130[2]     OUT6_RDIV_FORCE2            0                  0x0              
 * 0x0131[2:0]   OUT6_FORMAT                 1                  0x1              
 * 0x0131[3]     OUT6_SYNC_EN                1                  0x1              
 * 0x0131[5:4]   OUT6_DIS_STATE              0                  0x0              
 * 0x0131[7:6]   OUT6_CMOS_DRV               0                  0x0              
 * 0x0132[3:0]   OUT6_CM                     11                 0xB              
 * 0x0132[6:4]   OUT6_AMPL                   3                  0x3              
 * 0x0133[2:0]   OUT6_MUX_SEL                3                  0x3              
 * 0x0133[5:4]   OUT6_VDD_SEL                2                  0x2              
 * 0x0133[3]     OUT6_VDD_SEL_EN             1                  0x1              
 * 0x0133[7:6]   OUT6_INV                    0                  0x0              
 * 0x0134[2:0]   OUT6_DIS_SRC                4                  0x4              
 * 0x013A[0]     OUT7_PDN                    0                  0x0              
 * 0x013A[1]     OUT7_OE                     1                  0x1              
 * 0x013A[2]     OUT7_RDIV_FORCE2            0                  0x0              
 * 0x013B[2:0]   OUT7_FORMAT                 1                  0x1              
 * 0x013B[3]     OUT7_SYNC_EN                1                  0x1              
 * 0x013B[5:4]   OUT7_DIS_STATE              0                  0x0              
 * 0x013B[7:6]   OUT7_CMOS_DRV               0                  0x0              
 * 0x013C[3:0]   OUT7_CM                     11                 0xB              
 * 0x013C[6:4]   OUT7_AMPL                   3                  0x3              
 * 0x013D[2:0]   OUT7_MUX_SEL                3                  0x3              
 * 0x013D[5:4]   OUT7_VDD_SEL                2                  0x2              
 * 0x013D[3]     OUT7_VDD_SEL_EN             1                  0x1              
 * 0x013D[7:6]   OUT7_INV                    0                  0x0              
 * 0x013E[2:0]   OUT7_DIS_SRC                4                  0x4              
 * 0x013F[11:0]  OUTX_ALWAYS_ON              0                  0x000            
 * 0x0141[0]     OUT_DIS_MSK_PLLA            0                  0x0              
 * 0x0141[1]     OUT_DIS_MSK_PLLB            0                  0x0              
 * 0x0141[2]     OUT_DIS_MSK_PLLC            0                  0x0              
 * 0x0141[3]     OUT_DIS_MSK_PLLD            0                  0x0              
 * 0x0141[5]     OUT_DIS_LOL_MSK             0                  0x0              
 * 0x0141[6]     OUT_DIS_LOSXAXB_MSK         1                  0x1              
 * 0x0141[7]     OUT_DIS_MSK_LOS_PFD         0                  0x0              
 * 0x0142[0]     OUT_DIS_MSK_LOL_PLLA        1                  0x1              
 * 0x0142[1]     OUT_DIS_MSK_LOL_PLLB        1                  0x1              
 * 0x0142[2]     OUT_DIS_MSK_LOL_PLLC        1                  0x1              
 * 0x0142[3]     OUT_DIS_MSK_LOL_PLLD        1                  0x1              
 * 0x0142[4]     OUT_DIS_MSK_HOLD_PLLA       1                  0x1              
 * 0x0142[5]     OUT_DIS_MSK_HOLD_PLLB       1                  0x1              
 * 0x0142[6]     OUT_DIS_MSK_HOLD_PLLC       1                  0x1              
 * 0x0142[7]     OUT_DIS_MSK_HOLD_PLLD       1                  0x1              
 * 0x0206[1:0]   PXAXB                       0                  0x0              
 * 0x0208[47:0]  P0_NUM                      625                0x000000000271   
 * 0x020E[31:0]  P0_DEN                      1                  0x00000001       
 * 0x0212[47:0]  P1_NUM                      625                0x000000000271   
 * 0x0218[31:0]  P1_DEN                      1                  0x00000001       
 * 0x021C[47:0]  P2_NUM                      486                0x0000000001E6   
 * 0x0222[31:0]  P2_DEN                      1                  0x00000001       
 * 0x0226[47:0]  P3_NUM                      486                0x0000000001E6   
 * 0x022C[31:0]  P3_DEN                      1                  0x00000001       
 * 0x0231[3:0]   P0_FRACN_MODE               11                 0xB              
 * 0x0231[4]     P0_FRACN_EN                 0                  0x0              
 * 0x0232[3:0]   P1_FRACN_MODE               11                 0xB              
 * 0x0232[4]     P1_FRACN_EN                 0                  0x0              
 * 0x0233[3:0]   P2_FRACN_MODE               11                 0xB              
 * 0x0233[4]     P2_FRACN_EN                 0                  0x0              
 * 0x0234[3:0]   P3_FRACN_MODE               11                 0xB              
 * 0x0234[4]     P3_FRACN_EN                 0                  0x0              
 * 0x0235[43:0]  MXAXB_NUM                   633507676160       0x09380000000    
 * 0x023B[31:0]  MXAXB_DEN                   2147483648         0x80000000       
 * 0x024A[23:0]  R0_REG                      2                  0x000002         
 * 0x0250[23:0]  R1_REG                      5                  0x000005         
 * 0x0253[23:0]  R2_REG                      3                  0x000003         
 * 0x0256[23:0]  R3_REG                      0                  0x000000         
 * 0x025C[23:0]  R4_REG                      3                  0x000003         
 * 0x025F[23:0]  R5_REG                      0                  0x000000         
 * 0x0262[23:0]  R6_REG                      3                  0x000003         
 * 0x0268[23:0]  R7_REG                      21                 0x000015         
 * 0x026B[7:0]   DESIGN_ID0                  0                  0x00             
 * 0x026C[7:0]   DESIGN_ID1                  0                  0x00             
 * 0x026D[7:0]   DESIGN_ID2                  0                  0x00             
 * 0x026E[7:0]   DESIGN_ID3                  0                  0x00             
 * 0x026F[7:0]   DESIGN_ID4                  0                  0x00             
 * 0x0270[7:0]   DESIGN_ID5                  0                  0x00             
 * 0x0271[7:0]   DESIGN_ID6                  0                  0x00             
 * 0x0272[7:0]   DESIGN_ID7                  0                  0x00             
 * 0x028A[4:0]   OOF0_TRG_THR_EXT            0                  0x00             
 * 0x028B[4:0]   OOF1_TRG_THR_EXT            0                  0x00             
 * 0x028C[4:0]   OOF2_TRG_THR_EXT            0                  0x00             
 * 0x028D[4:0]   OOF3_TRG_THR_EXT            0                  0x00             
 * 0x028E[4:0]   OOF0_CLR_THR_EXT            0                  0x00             
 * 0x028F[4:0]   OOF1_CLR_THR_EXT            0                  0x00             
 * 0x0290[4:0]   OOF2_CLR_THR_EXT            0                  0x00             
 * 0x0291[4:0]   OOF3_CLR_THR_EXT            0                  0x00             
 * 0x0294[3:0]   FASTLOCK_EXTEND_SCL_PLLA    13                 0xD              
 * 0x0294[7:4]   FASTLOCK_EXTEND_SCL_PLLB    12                 0xC              
 * 0x0295[3:0]   FASTLOCK_EXTEND_SCL_PLLC    12                 0xC              
 * 0x0295[7:4]   FASTLOCK_EXTEND_SCL_PLLD    12                 0xC              
 * 0x0296[0]     LOL_SLW_VALWIN_SELX_PLLA    1                  0x1              
 * 0x0296[1]     LOL_SLW_VALWIN_SELX_PLLB    1                  0x1              
 * 0x0296[2]     LOL_SLW_VALWIN_SELX_PLLC    1                  0x1              
 * 0x0296[3]     LOL_SLW_VALWIN_SELX_PLLD    1                  0x1              
 * 0x0297[0]     FASTLOCK_DLY_ONSW_EN_PLLA   1                  0x1              
 * 0x0297[1]     FASTLOCK_DLY_ONSW_EN_PLLB   1                  0x1              
 * 0x0297[2]     FASTLOCK_DLY_ONSW_EN_PLLC   1                  0x1              
 * 0x0297[3]     FASTLOCK_DLY_ONSW_EN_PLLD   1                  0x1              
 * 0x0299[0]     FASTLOCK_DLY_ONLOL_EN_PLLA  1                  0x1              
 * 0x0299[1]     FASTLOCK_DLY_ONLOL_EN_PLLB  1                  0x1              
 * 0x0299[2]     FASTLOCK_DLY_ONLOL_EN_PLLC  1                  0x1              
 * 0x0299[3]     FASTLOCK_DLY_ONLOL_EN_PLLD  1                  0x1              
 * 0x029A[19:0]  FASTLOCK_DLY_ONLOL_PLLA     281                0x00119          
 * 0x029D[19:0]  FASTLOCK_DLY_ONLOL_PLLB     506                0x001FA          
 * 0x02A0[19:0]  FASTLOCK_DLY_ONLOL_PLLC     506                0x001FA          
 * 0x02A3[19:0]  FASTLOCK_DLY_ONLOL_PLLD     506                0x001FA          
 * 0x02A6[19:0]  FASTLOCK_DLY_ONSW_PLLA      614                0x00266          
 * 0x02A9[19:0]  FASTLOCK_DLY_ONSW_PLLB      1228               0x004CC          
 * 0x02AC[19:0]  FASTLOCK_DLY_ONSW_PLLC      1228               0x004CC          
 * 0x02AF[19:0]  FASTLOCK_DLY_ONSW_PLLD      1228               0x004CC          
 * 0x02B7[1:0]   LOL_NOSIG_TIME_PLLA         3                  0x3              
 * 0x02B7[3:2]   LOL_NOSIG_TIME_PLLB         3                  0x3              
 * 0x02B7[5:4]   LOL_NOSIG_TIME_PLLC         3                  0x3              
 * 0x02B7[7:6]   LOL_NOSIG_TIME_PLLD         3                  0x3              
 * 0x0302[43:0]  N0_NUM                      49492787200        0x00B86000000    
 * 0x0308[31:0]  N0_DEN                      3379183104         0xC96A3E00       
 * 0x030C[0]     N0_UPDATE                   0                  0x0              
 * 0x030D[43:0]  N1_NUM                      39594229760        0x00938000000    
 * 0x0313[31:0]  N1_DEN                      3759013888         0xE00E0000       
 * 0x0317[0]     N1_UPDATE                   0                  0x0              
 * 0x0318[43:0]  N2_NUM                      30932992000        0x00733C00000    
 * 0x031E[31:0]  N2_DEN                      2717908992         0xA2000000       
 * 0x0322[0]     N2_UPDATE                   0                  0x0              
 * 0x0323[43:0]  N3_NUM                      39594229760        0x00938000000    
 * 0x0329[31:0]  N3_DEN                      3321888768         0xC6000000       
 * 0x032D[0]     N3_UPDATE                   0                  0x0              
 * 0x0338[1]     N_UPDATE                    0                  0x0              
 * 0x033B[43:0]  N0_FSTEPW                   0                  0x00000000000    
 * 0x0341[43:0]  N1_FSTEPW                   0                  0x00000000000    
 * 0x0347[43:0]  N2_FSTEPW                   0                  0x00000000000    
 * 0x034D[43:0]  N3_FSTEPW                   0                  0x00000000000    
 * 0x0408[5:0]   BW0_PLLA                    16                 0x10             
 * 0x0409[5:0]   BW1_PLLA                    30                 0x1E             
 * 0x040A[5:0]   BW2_PLLA                    14                 0x0E             
 * 0x040B[5:0]   BW3_PLLA                    13                 0x0D             
 * 0x040C[5:0]   BW4_PLLA                    7                  0x07             
 * 0x040D[5:0]   BW5_PLLA                    7                  0x07             
 * 0x040E[5:0]   FASTLOCK_BW0_PLLA           21                 0x15             
 * 0x040F[5:0]   FASTLOCK_BW1_PLLA           42                 0x2A             
 * 0x0410[5:0]   FASTLOCK_BW2_PLLA           9                  0x09             
 * 0x0411[5:0]   FASTLOCK_BW3_PLLA           8                  0x08             
 * 0x0412[5:0]   FASTLOCK_BW4_PLLA           7                  0x07             
 * 0x0413[5:0]   FASTLOCK_BW5_PLLA           7                  0x07             
 * 0x0415[55:0]  M_NUM_PLLA                  51904252477440     0x002F34E6880000 
 * 0x041C[31:0]  M_DEN_PLLA                  2147483648         0x80000000       
 * 0x0421[3:0]   M_FRAC_MODE_PLLA            11                 0xB              
 * 0x0421[4]     M_FRAC_EN_PLLA              1                  0x1              
 * 0x0422[0]     M_FSTEP_MSK_PLLA            1                  0x1              
 * 0x0422[1]     M_FSTEPW_DEN_PLLA           0                  0x0              
 * 0x0423[55:0]  M_FSTEPW_PLLA               0                  0x00000000000000 
 * 0x042A[2:0]   IN_SEL_PLLA                 0                  0x0              
 * 0x042B[0]     FASTLOCK_AUTO_EN_PLLA       1                  0x1              
 * 0x042B[1]     FASTLOCK_MAN_PLLA           0                  0x0              
 * 0x042C[0]     HOLD_EN_PLLA                1                  0x1              
 * 0x042C[3]     HOLD_RAMP_BYP_PLLA          0                  0x0              
 * 0x042C[4]     HOLDEXIT_BW_SEL1_PLLA       0                  0x0              
 * 0x042C[7:5]   RAMP_STEP_INTERVAL_PLLA     4                  0x4              
 * 0x042D[1]     HOLD_RAMPBYP_NOHIST_PLLA    1                  0x1              
 * 0x042E[4:0]   HOLD_HIST_LEN_PLLA          25                 0x19             
 * 0x042F[4:0]   HOLD_HIST_DELAY_PLLA        25                 0x19             
 * 0x0431[4:0]   HOLD_REF_COUNT_FRC_PLLA     0                  0x00             
 * 0x0432[23:0]  HOLD_15M_CYC_COUNT_PLLA     41667              0x00A2C3         
 * 0x0435[0]     FORCE_HOLD_PLLA             0                  0x0              
 * 0x0436[1:0]   CLK_SWITCH_MODE_PLLA        2                  0x2              
 * 0x0436[2]     HSW_EN_PLLA                 1                  0x1              
 * 0x0437[3:0]   IN_LOS_MSK_PLLA             0                  0x0              
 * 0x0437[7:4]   IN_OOF_MSK_PLLA             0                  0x0              
 * 0x0438[2:0]   IN0_PRIORITY_PLLA           1                  0x1              
 * 0x0438[6:4]   IN1_PRIORITY_PLLA           2                  0x2              
 * 0x0439[2:0]   IN2_PRIORITY_PLLA           3                  0x3              
 * 0x0439[6:4]   IN3_PRIORITY_PLLA           4                  0x4              
 * 0x043A[1:0]   HSW_MODE_PLLA               2                  0x2              
 * 0x043A[3:2]   HSW_PHMEAS_CTRL_PLLA        0                  0x0              
 * 0x043B[9:0]   HSW_PHMEAS_THR_PLLA         3                  0x003            
 * 0x043D[4:0]   HSW_COARSE_PM_LEN_PLLA      12                 0x0C             
 * 0x043E[4:0]   HSW_COARSE_PM_DLY_PLLA      6                  0x06             
 * 0x0442[17:0]  FINE_ADJ_OVR_PLLA           0                  0x00000          
 * 0x0445[1]     FORCE_FINE_ADJ_PLLA         0                  0x0              
 * 0x0489[12:0]  PFD_EN_DELAY_PLLA           705                0x02C1           
 * 0x049B[1]     INIT_LP_CLOSE_HO_PLLA       1                  0x1              
 * 0x049B[2]     HO_SKIP_PHASE_PLLA          0                  0x0              
 * 0x049B[4]     HOLD_PRESERVE_HIST_PLLA     1                  0x1              
 * 0x049B[5]     HOLD_FRZ_WITH_INTONLY_PLLA  1                  0x1              
 * 0x049B[6]     HOLDEXIT_BW_SEL0_PLLA       1                  0x1              
 * 0x049B[7]     HOLDEXIT_STD_BO_PLLA        1                  0x1              
 * 0x049D[5:0]   BW0_HO_PLLA                 16                 0x10             
 * 0x049E[5:0]   BW1_HO_PLLA                 32                 0x20             
 * 0x049F[5:0]   BW2_HO_PLLA                 14                 0x0E             
 * 0x04A0[5:0]   BW3_HO_PLLA                 13                 0x0D             
 * 0x04A1[5:0]   BW4_HO_PLLA                 7                  0x07             
 * 0x04A2[5:0]   BW5_HO_PLLA                 7                  0x07             
 * 0x04A6[2:0]   RAMP_STEP_SIZE_PLLA         3                  0x3              
 * 0x04A6[3]     RAMP_SWITCH_EN_PLLA         1                  0x1              
 * 0x0508[5:0]   BW0_PLLB                    16                 0x10             
 * 0x0509[5:0]   BW1_PLLB                    30                 0x1E             
 * 0x050A[5:0]   BW2_PLLB                    13                 0x0D             
 * 0x050B[5:0]   BW3_PLLB                    12                 0x0C             
 * 0x050C[5:0]   BW4_PLLB                    7                  0x07             
 * 0x050D[5:0]   BW5_PLLB                    7                  0x07             
 * 0x050E[5:0]   FASTLOCK_BW0_PLLB           20                 0x14             
 * 0x050F[5:0]   FASTLOCK_BW1_PLLB           40                 0x28             
 * 0x0510[5:0]   FASTLOCK_BW2_PLLB           9                  0x09             
 * 0x0511[5:0]   FASTLOCK_BW3_PLLB           8                  0x08             
 * 0x0512[5:0]   FASTLOCK_BW4_PLLB           7                  0x07             
 * 0x0513[5:0]   FASTLOCK_BW5_PLLB           7                  0x07             
 * 0x0515[55:0]  M_NUM_PLLB                  72173066649600     0x0041A41A000000 
 * 0x051C[31:0]  M_DEN_PLLB                  2147483648         0x80000000       
 * 0x0521[3:0]   M_FRAC_MODE_PLLB            11                 0xB              
 * 0x0521[4]     M_FRAC_EN_PLLB              1                  0x1              
 * 0x0522[0]     M_FSTEP_MSK_PLLB            1                  0x1              
 * 0x0522[1]     M_FSTEPW_DEN_PLLB           0                  0x0              
 * 0x0523[55:0]  M_FSTEPW_PLLB               0                  0x00000000000000 
 * 0x052A[0]     IN_SEL_REGCTRL_PLLB         1                  0x1              
 * 0x052A[3:1]   IN_SEL_PLLB                 0                  0x0              
 * 0x052B[0]     FASTLOCK_AUTO_EN_PLLB       1                  0x1              
 * 0x052B[1]     FASTLOCK_MAN_PLLB           0                  0x0              
 * 0x052C[0]     HOLD_EN_PLLB                1                  0x1              
 * 0x052C[3]     HOLD_RAMP_BYP_PLLB          0                  0x0              
 * 0x052C[4]     HOLDEXIT_BW_SEL1_PLLB       0                  0x0              
 * 0x052C[7:5]   RAMP_STEP_INTERVAL_PLLB     4                  0x4              
 * 0x052D[1]     HOLD_RAMPBYP_NOHIST_PLLB    1                  0x1              
 * 0x052E[4:0]   HOLD_HIST_LEN_PLLB          25                 0x19             
 * 0x052F[4:0]   HOLD_HIST_DELAY_PLLB        25                 0x19             
 * 0x0531[4:0]   HOLD_REF_COUNT_FRC_PLLB     0                  0x00             
 * 0x0532[23:0]  HOLD_15M_CYC_COUNT_PLLB     41667              0x00A2C3         
 * 0x0535[0]     FORCE_HOLD_PLLB             0                  0x0              
 * 0x0536[1:0]   CLK_SWITCH_MODE_PLLB        2                  0x2              
 * 0x0536[2]     HSW_EN_PLLB                 1                  0x1              
 * 0x0537[3:0]   IN_LOS_MSK_PLLB             0                  0x0              
 * 0x0537[7:4]   IN_OOF_MSK_PLLB             0                  0x0              
 * 0x0538[2:0]   IN0_PRIORITY_PLLB           1                  0x1              
 * 0x0538[6:4]   IN1_PRIORITY_PLLB           2                  0x2              
 * 0x0539[2:0]   IN2_PRIORITY_PLLB           3                  0x3              
 * 0x0539[6:4]   IN3_PRIORITY_PLLB           4                  0x4              
 * 0x053A[1:0]   HSW_MODE_PLLB               2                  0x2              
 * 0x053A[3:2]   HSW_PHMEAS_CTRL_PLLB        0                  0x0              
 * 0x053B[9:0]   HSW_PHMEAS_THR_PLLB         3                  0x003            
 * 0x053D[4:0]   HSW_COARSE_PM_LEN_PLLB      12                 0x0C             
 * 0x053E[4:0]   HSW_COARSE_PM_DLY_PLLB      6                  0x06             
 * 0x0542[17:0]  FINE_ADJ_OVR_PLLB           0                  0x00000          
 * 0x0545[1]     FORCE_FINE_ADJ_PLLB         0                  0x0              
 * 0x0589[12:0]  PFD_EN_DELAY_PLLB           705                0x02C1           
 * 0x059B[1]     INIT_LP_CLOSE_HO_PLLB       1                  0x1              
 * 0x059B[2]     HO_SKIP_PHASE_PLLB          0                  0x0              
 * 0x059B[4]     HOLD_PRESERVE_HIST_PLLB     1                  0x1              
 * 0x059B[5]     HOLD_FRZ_WITH_INTONLY_PLLB  1                  0x1              
 * 0x059B[6]     HOLDEXIT_BW_SEL0_PLLB       1                  0x1              
 * 0x059B[7]     HOLDEXIT_STD_BO_PLLB        1                  0x1              
 * 0x059D[5:0]   HOLDEXIT_BW0_PLLB           16                 0x10             
 * 0x059E[5:0]   HOLDEXIT_BW1_PLLB           32                 0x20             
 * 0x059F[5:0]   HOLDEXIT_BW2_PLLB           13                 0x0D             
 * 0x05A0[5:0]   HOLDEXIT_BW3_PLLB           12                 0x0C             
 * 0x05A1[5:0]   HOLDEXIT_BW4_PLLB           7                  0x07             
 * 0x05A2[5:0]   HOLDEXIT_BW5_PLLB           7                  0x07             
 * 0x05A6[2:0]   RAMP_STEP_SIZE_PLLB         3                  0x3              
 * 0x05A6[3]     RAMP_SWITCH_EN_PLLB         1                  0x1              
 * 0x0602[4]     ADD_DIV256_PLLC             0                  0x0              
 * 0x0608[5:0]   BW0_PLLC                    16                 0x10             
 * 0x0609[5:0]   BW1_PLLC                    30                 0x1E             
 * 0x060A[5:0]   BW2_PLLC                    13                 0x0D             
 * 0x060B[5:0]   BW3_PLLC                    12                 0x0C             
 * 0x060C[5:0]   BW4_PLLC                    7                  0x07             
 * 0x060D[5:0]   BW5_PLLC                    7                  0x07             
 * 0x060E[5:0]   FASTLOCK_BW0_PLLC           20                 0x14             
 * 0x060F[5:0]   FASTLOCK_BW1_PLLC           40                 0x28             
 * 0x0610[5:0]   FASTLOCK_BW2_PLLC           9                  0x09             
 * 0x0611[5:0]   FASTLOCK_BW3_PLLC           8                  0x08             
 * 0x0612[5:0]   FASTLOCK_BW4_PLLC           7                  0x07             
 * 0x0613[5:0]   FASTLOCK_BW5_PLLC           7                  0x07             
 * 0x0615[55:0]  M_NUM_PLLC                  66795331387392     0x003CC000000000 
 * 0x061C[31:0]  M_DEN_PLLC                  2147483648         0x80000000       
 * 0x0621[3:0]   M_FRAC_MODE_PLLC            11                 0xB              
 * 0x0621[4]     M_FRAC_EN_PLLC              0                  0x0              
 * 0x0622[0]     M_FSTEP_MSK_PLLC            1                  0x1              
 * 0x0622[1]     M_FSTEPW_DEN_PLLC           0                  0x0              
 * 0x0623[55:0]  M_FSTEPW_PLLC               0                  0x00000000000000 
 * 0x062A[2:0]   IN_SEL_PLLC                 0                  0x0              
 * 0x062B[0]     FASTLOCK_AUTO_EN_PLLC       1                  0x1              
 * 0x062B[1]     FASTLOCK_MAN_PLLC           0                  0x0              
 * 0x062C[0]     HOLD_EN_PLLC                1                  0x1              
 * 0x062C[3]     HOLD_RAMP_BYP_PLLC          0                  0x0              
 * 0x062C[4]     HOLDEXIT_BW_SEL1_PLLC       0                  0x0              
 * 0x062C[7:5]   RAMP_STEP_INTERVAL_PLLC     4                  0x4              
 * 0x062D[1]     HOLD_RAMPBYP_NOHIST_PLLC    1                  0x1              
 * 0x062E[4:0]   HOLD_HIST_LEN_PLLC          25                 0x19             
 * 0x062F[4:0]   HOLD_HIST_DELAY_PLLC        25                 0x19             
 * 0x0631[4:0]   HOLD_REF_COUNT_FRC_PLLC     0                  0x00             
 * 0x0632[23:0]  HOLD_15M_CYC_COUNT_PLLC     41667              0x00A2C3         
 * 0x0635[0]     FORCE_HOLD_PLLC             0                  0x0              
 * 0x0636[1:0]   CLK_SWITCH_MODE_PLLC        2                  0x2              
 * 0x0636[2]     HSW_EN_PLLC                 1                  0x1              
 * 0x0637[3:0]   IN_LOS_MSK_PLLC             0                  0x0              
 * 0x0637[7:4]   IN_OOF_MSK_PLLC             0                  0x0              
 * 0x0638[2:0]   IN0_PRIORITY_PLLC           1                  0x1              
 * 0x0638[6:4]   IN1_PRIORITY_PLLC           2                  0x2              
 * 0x0639[2:0]   IN2_PRIORITY_PLLC           3                  0x3              
 * 0x0639[6:4]   IN3_PRIORITY_PLLC           4                  0x4              
 * 0x063A[1:0]   HSW_MODE_PLLC               2                  0x2              
 * 0x063A[3:2]   HSW_PHMEAS_CTRL_PLLC        0                  0x0              
 * 0x063B[9:0]   HSW_PHMEAS_THR_PLLC         3                  0x003            
 * 0x063D[4:0]   HSW_COARSE_PM_LEN_PLLC      12                 0x0C             
 * 0x063E[4:0]   HSW_COARSE_PM_DLY_PLLC      6                  0x06             
 * 0x0642[17:0]  FINE_ADJ_OVR_PLLC           0                  0x00000          
 * 0x0645[1]     FORCE_FINE_ADJ_PLLC         0                  0x0              
 * 0x0689[12:0]  PFD_EN_DELAY_PLLC           705                0x02C1           
 * 0x069B[1]     INIT_LP_CLOSE_HO_PLLC       1                  0x1              
 * 0x069B[2]     HO_SKIP_PHASE_PLLC          0                  0x0              
 * 0x069B[4]     HOLD_PRESERVE_HIST_PLLC     1                  0x1              
 * 0x069B[5]     HOLD_FRZ_WITH_INTONLY_PLLC  1                  0x1              
 * 0x069B[6]     HOLDEXIT_BW_SEL0_PLLC       1                  0x1              
 * 0x069B[7]     HOLDEXIT_STD_BO_PLLC        1                  0x1              
 * 0x069D[5:0]   HOLDEXIT_BW0_PLLC           16                 0x10             
 * 0x069E[5:0]   HOLDEXIT_BW1_PLLC           32                 0x20             
 * 0x069F[5:0]   HOLDEXIT_BW2_PLLC           13                 0x0D             
 * 0x06A0[5:0]   HOLDEXIT_BW3_PLLC           12                 0x0C             
 * 0x06A1[5:0]   HOLDEXIT_BW4_PLLC           7                  0x07             
 * 0x06A2[5:0]   HOLDEXIT_BW5_PLLC           7                  0x07             
 * 0x06A6[2:0]   RAMP_STEP_SIZE_PLLC         3                  0x3              
 * 0x06A6[3]     RAMP_SWITCH_EN_PLLC         1                  0x1              
 * 0x0702[4]     ADD_DIV256_PLLD             0                  0x0              
 * 0x0709[5:0]   BW0_PLLD                    16                 0x10             
 * 0x070A[5:0]   BW1_PLLD                    30                 0x1E             
 * 0x070B[5:0]   BW2_PLLD                    13                 0x0D             
 * 0x070C[5:0]   BW3_PLLD                    12                 0x0C             
 * 0x070D[5:0]   BW4_PLLD                    7                  0x07             
 * 0x070E[5:0]   BW5_PLLD                    7                  0x07             
 * 0x070F[5:0]   FASTLOCK_BW0_PLLD           20                 0x14             
 * 0x0710[5:0]   FASTLOCK_BW1_PLLD           40                 0x28             
 * 0x0711[5:0]   FASTLOCK_BW2_PLLD           9                  0x09             
 * 0x0712[5:0]   FASTLOCK_BW3_PLLD           8                  0x08             
 * 0x0713[5:0]   FASTLOCK_BW4_PLLD           7                  0x07             
 * 0x0714[5:0]   FASTLOCK_BW5_PLLD           7                  0x07             
 * 0x0716[55:0]  M_NUM_PLLD                  63780264345600     0x003A0200000000 
 * 0x071D[31:0]  M_DEN_PLLD                  2147483648         0x80000000       
 * 0x0722[3:0]   M_FRAC_MODE_PLLD            11                 0xB              
 * 0x0722[4]     M_FRAC_EN_PLLD              0                  0x0              
 * 0x0723[0]     M_FSTEP_MSK_PLLD            1                  0x1              
 * 0x0723[1]     M_FSTEPW_DEN_PLLD           0                  0x0              
 * 0x0724[55:0]  M_FSTEPW_PLLD               0                  0x00000000000000 
 * 0x072B[2:0]   IN_SEL_PLLD                 0                  0x0              
 * 0x072C[0]     FASTLOCK_AUTO_EN_PLLD       1                  0x1              
 * 0x072C[1]     FASTLOCK_MAN_PLLD           0                  0x0              
 * 0x072D[0]     HOLD_EN_PLLD                1                  0x1              
 * 0x072D[3]     HOLD_RAMP_BYP_PLLD          0                  0x0              
 * 0x072D[4]     HOLDEXIT_BW_SEL1_PLLD       0                  0x0              
 * 0x072D[7:5]   RAMP_STEP_INTERVAL_PLLD     4                  0x4              
 * 0x072E[1]     HOLD_RAMPBYP_NOHIST_PLLD    1                  0x1              
 * 0x072F[4:0]   HOLD_HIST_LEN_PLLD          25                 0x19             
 * 0x0730[4:0]   HOLD_HIST_DELAY_PLLD        25                 0x19             
 * 0x0732[4:0]   HOLD_REF_COUNT_FRC_PLLD     0                  0x00             
 * 0x0733[23:0]  HOLD_15M_CYC_COUNT_PLLD     41667              0x00A2C3         
 * 0x0736[0]     FORCE_HOLD_PLLD             0                  0x0              
 * 0x0737[1:0]   CLK_SWITCH_MODE_PLLD        2                  0x2              
 * 0x0737[2]     HSW_EN_PLLD                 1                  0x1              
 * 0x0738[3:0]   IN_LOS_MSK_PLLD             0                  0x0              
 * 0x0738[7:4]   IN_OOF_MSK_PLLD             0                  0x0              
 * 0x0739[2:0]   IN0_PRIORITY_PLLD           1                  0x1              
 * 0x0739[6:4]   IN1_PRIORITY_PLLD           2                  0x2              
 * 0x073A[2:0]   IN2_PRIORITY_PLLD           3                  0x3              
 * 0x073A[6:4]   IN3_PRIORITY_PLLD           4                  0x4              
 * 0x073B[1:0]   HSW_MODE_PLLD               2                  0x2              
 * 0x073B[3:2]   HSW_PHMEAS_CTRL_PLLD        0                  0x0              
 * 0x073C[9:0]   HSW_PHMEAS_THR_PLLD         3                  0x003            
 * 0x073E[4:0]   HSW_COARSE_PM_LEN_PLLD      12                 0x0C             
 * 0x073F[4:0]   HSW_COARSE_PM_DLY_PLLD      6                  0x06             
 * 0x0743[17:0]  FINE_ADJ_OVR_PLLD           0                  0x00000          
 * 0x0746[1]     FORCE_FINE_ADJ_PLLD         0                  0x0              
 * 0x0789[12:0]  PFD_EN_DELAY_PLLD           705                0x02C1           
 * 0x079B[1]     INIT_LP_CLOSE_HO_PLLD       1                  0x1              
 * 0x079B[2]     HO_SKIP_PHASE_PLLD          0                  0x0              
 * 0x079B[4]     HOLD_PRESERVE_HIST_PLLD     1                  0x1              
 * 0x079B[5]     HOLD_FRZ_WITH_INTONLY_PLLD  1                  0x1              
 * 0x079B[6]     HOLDEXIT_BW_SEL0_PLLD       1                  0x1              
 * 0x079B[7]     HOLDEXIT_STD_BO_PLLD        1                  0x1              
 * 0x079D[5:0]   HOLDEXIT_BW0_PLLD           16                 0x10             
 * 0x079E[5:0]   HOLDEXIT_BW1_PLLD           32                 0x20             
 * 0x079F[5:0]   HOLDEXIT_BW2_PLLD           13                 0x0D             
 * 0x07A0[5:0]   HOLDEXIT_BW3_PLLD           12                 0x0C             
 * 0x07A1[5:0]   HOLDEXIT_BW4_PLLD           7                  0x07             
 * 0x07A2[5:0]   HOLDEXIT_BW5_PLLD           7                  0x07             
 * 0x07A6[2:0]   RAMP_STEP_SIZE_PLLD         3                  0x3              
 * 0x07A6[3]     RAMP_SWITCH_EN_PLLD         1                  0x1              
 * 0x0802[15:0]  FIXREGSA0                   1077               0x0435           
 * 0x0804[7:0]   FIXREGSD0                   0                  0x00             
 * 0x0805[15:0]  FIXREGSA1                   1093               0x0445           
 * 0x0807[7:0]   FIXREGSD1                   0                  0x00             
 * 0x0808[15:0]  FIXREGSA2                   1090               0x0442           
 * 0x080A[7:0]   FIXREGSD2                   0                  0x00             
 * 0x080B[15:0]  FIXREGSA3                   1091               0x0443           
 * 0x080D[7:0]   FIXREGSD3                   0                  0x00             
 * 0x080E[15:0]  FIXREGSA4                   1092               0x0444           
 * 0x0810[7:0]   FIXREGSD4                   0                  0x00             
 * 0x0811[15:0]  FIXREGSA5                   1333               0x0535           
 * 0x0813[7:0]   FIXREGSD5                   0                  0x00             
 * 0x0814[15:0]  FIXREGSA6                   1349               0x0545           
 * 0x0816[7:0]   FIXREGSD6                   0                  0x00             
 * 0x0817[15:0]  FIXREGSA7                   1346               0x0542           
 * 0x0819[7:0]   FIXREGSD7                   0                  0x00             
 * 0x081A[15:0]  FIXREGSA8                   1347               0x0543           
 * 0x081C[7:0]   FIXREGSD8                   0                  0x00             
 * 0x081D[15:0]  FIXREGSA9                   1348               0x0544           
 * 0x081F[7:0]   FIXREGSD9                   0                  0x00             
 * 0x0820[15:0]  FIXREGSA10                  1589               0x0635           
 * 0x0822[7:0]   FIXREGSD10                  0                  0x00             
 * 0x0823[15:0]  FIXREGSA11                  1605               0x0645           
 * 0x0825[7:0]   FIXREGSD11                  0                  0x00             
 * 0x0826[15:0]  FIXREGSA12                  1602               0x0642           
 * 0x0828[7:0]   FIXREGSD12                  0                  0x00             
 * 0x0829[15:0]  FIXREGSA13                  1603               0x0643           
 * 0x082B[7:0]   FIXREGSD13                  0                  0x00             
 * 0x082C[15:0]  FIXREGSA14                  1604               0x0644           
 * 0x082E[7:0]   FIXREGSD14                  0                  0x00             
 * 0x082F[15:0]  FIXREGSA15                  1846               0x0736           
 * 0x0831[7:0]   FIXREGSD15                  0                  0x00             
 * 0x0832[15:0]  FIXREGSA16                  1862               0x0746           
 * 0x0834[7:0]   FIXREGSD16                  0                  0x00             
 * 0x0835[15:0]  FIXREGSA17                  1859               0x0743           
 * 0x0837[7:0]   FIXREGSD17                  0                  0x00             
 * 0x0838[15:0]  FIXREGSA18                  1860               0x0744           
 * 0x083A[7:0]   FIXREGSD18                  0                  0x00             
 * 0x083B[15:0]  FIXREGSA19                  1861               0x0745           
 * 0x083D[7:0]   FIXREGSD19                  0                  0x00             
 * 0x083E[15:0]  FIXREGSA20                  0                  0x0000           
 * 0x0840[7:0]   FIXREGSD20                  0                  0x00             
 * 0x0841[15:0]  FIXREGSA21                  0                  0x0000           
 * 0x0843[7:0]   FIXREGSD21                  0                  0x00             
 * 0x0844[15:0]  FIXREGSA22                  0                  0x0000           
 * 0x0846[7:0]   FIXREGSD22                  0                  0x00             
 * 0x0847[15:0]  FIXREGSA23                  0                  0x0000           
 * 0x0849[7:0]   FIXREGSD23                  0                  0x00             
 * 0x084A[15:0]  FIXREGSA24                  0                  0x0000           
 * 0x084C[7:0]   FIXREGSD24                  0                  0x00             
 * 0x084D[15:0]  FIXREGSA25                  0                  0x0000           
 * 0x084F[7:0]   FIXREGSD25                  0                  0x00             
 * 0x0850[15:0]  FIXREGSA26                  0                  0x0000           
 * 0x0852[7:0]   FIXREGSD26                  0                  0x00             
 * 0x0853[15:0]  FIXREGSA27                  0                  0x0000           
 * 0x0855[7:0]   FIXREGSD27                  0                  0x00             
 * 0x0856[15:0]  FIXREGSA28                  0                  0x0000           
 * 0x0858[7:0]   FIXREGSD28                  0                  0x00             
 * 0x0859[15:0]  FIXREGSA29                  0                  0x0000           
 * 0x085B[7:0]   FIXREGSD29                  0                  0x00             
 * 0x085C[15:0]  FIXREGSA30                  0                  0x0000           
 * 0x085E[7:0]   FIXREGSD30                  0                  0x00             
 * 0x085F[15:0]  FIXREGSA31                  0                  0x0000           
 * 0x0861[7:0]   FIXREGSD31                  0                  0x00             
 * 0x090E[0]     XAXB_EXTCLK_EN              0                  0x0              
 * 0x0943[0]     IO_VDD_SEL                  0                  0x0              
 * 0x0949[3:0]   IN_EN                       15                 0xF              
 * 0x0949[7:4]   IN_PULSED_CMOS_EN           0                  0x0              
 * 0x094A[3:0]   INX_TO_PFD_EN               15                 0xF              
 * 0x094E[11:0]  REFCLK_HYS_SEL              585                0x249            
 * 0x095E[0]     MXAXB_INTEGER               0                  0x0              
 * 0x0A03[4:0]   N_CLK_TO_OUTX_EN            15                 0x0F             
 * 0x0A04[4:0]   N_PIBYP                     0                  0x00             
 * 0x0A05[4:0]   N_PDNB                      15                 0x0F             
 * 0x0B44[3:0]   PDIV_FRACN_CLK_DIS          15                 0xF              
 * 0x0B44[4]     FRACN_CLK_DIS_PLLA          0                  0x0              
 * 0x0B44[5]     FRACN_CLK_DIS_PLLB          0                  0x0              
 * 0x0B44[6]     FRACN_CLK_DIS_PLLC          1                  0x1              
 * 0x0B44[7]     FRACN_CLK_DIS_PLLD          1                  0x1              
 * 0x0B45[0]     CLK_DIS_PLLA                0                  0x0              
 * 0x0B45[1]     CLK_DIS_PLLB                0                  0x0              
 * 0x0B45[2]     CLK_DIS_PLLC                0                  0x0              
 * 0x0B45[3]     CLK_DIS_PLLD                0                  0x0              
 * 0x0B46[3:0]   LOS_CLK_DIS                 0                  0x0              
 * 0x0B47[4:0]   OOF_CLK_DIS                 0                  0x00             
 * 0x0B48[4:0]   OOF_DIV_CLK_DIS             0                  0x00             
 * 0x0B4A[4:0]   N_CLK_DIS                   0                  0x00             
 * 0x0B57[11:0]  VCO_RESET_CALCODE           270                0x10E
 * 
 *
 */

#endif