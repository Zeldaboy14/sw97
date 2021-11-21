#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_dekunuts.h"

static s16 sDekuNutsSpitAnimFrameData[150] = {
    0x0000, 0x4000, 0x02BC, 0xC000, 0xE000, 0x2000, 0x0000, 0xFFE4, 0xFFA1, 0xFF50, 0xFF0A, 0xFEE9, 0xFF06, 0x009F, 
    0x0222, 0x0221, 0x01F8, 0x01B2, 0x015A, 0x00FA, 0x009D, 0x004D, 0x0015, 0x0000, 0x4000, 0x3E2C, 0x39BC, 0x3441, 
    0x2F4D, 0x2C72, 0x2D42, 0x43AA, 0x5956, 0x59D1, 0x5834, 0x550A, 0x50E0, 0x4C40, 0x47B4, 0x43C9, 0x410A, 0x4000, 
    0x0000, 0x024C, 0x07E4, 0x0ED1, 0x151F, 0x18D9, 0x180A, 0xFCB8, 0xE22B, 0xE177, 0xE34A, 0xE6FD, 0xEBE9, 0xF167, 
    0xF6CF, 0xFB7B, 0xFEC3, 0x0000, 0x9FC8, 0x9DC0, 0x9883, 0x915A, 0x898D, 0x8264, 0x7D26, 0x7DE7, 0x80F5, 0x80D9, 
    0x7FF8, 0x7FC2, 0x81A7, 0x86FA, 0x8EB9, 0x96D2, 0x9D32, 0x9FC8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0xFFB2, 0x0000, 0x03AB, 0xFC00, 0xFD8D, 0x0000, 0x005E, 0x0069, 0x0046, 0x0017, 0x0000, 0x4000, 0x403C, 
    0x40D1, 0x4194, 0x4256, 0x42EB, 0x4327, 0x4235, 0x4000, 0x3BE9, 0x3914, 0x3976, 0x3A73, 0x3BCD, 0x3D47, 0x3EA1, 
    0x3F9E, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFF18, 0xFE30, 0x0000, 0x0BE7, 0x145F, 0x04BF, 
    0xF4D3, 0xF4A9, 0xF8B7, 0xFD9E, 0x0000, 0x0000, 0x4000, 0x4164, 0x4491, 0x4806, 0x4A43, 0x49C7, 0x43DF, 0x39CB, 
    0x2FFF, 0x2AED, 0x2CF7, 0x3359, 0x3AC9, 0x4000, 0x4157, 0x40AB, 0x4000, 0x4000, 
}; 

static JointIndex sDekuNutsSpitAnimJointIndices[25] = {
    { 0x0000, 0x0002, 0x0006 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0018 },
    { 0x0000, 0x0000, 0x002A },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x003C },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x004E, 0x0000, 0x0060 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0072, 0x0000, 0x0084 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0003, 0x0004 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0005, 0x0001, 0x0004 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuNutsSpitAnim = { { 18 }, sDekuNutsSpitAnimFrameData, sDekuNutsSpitAnimJointIndices, 6 }; 


static s16 sDekuNutsDamageAnimFrameData[120] = {
    0x0000, 0x4000, 0xC000, 0xAEDB, 0xE000, 0xC61D, 0x2000, 0xC6ED, 0x076C, 0x076C, 0x076C, 0x076C, 0x076B, 0x076B, 
    0x076B, 0x076B, 0x076B, 0x076B, 0x076B, 0x076B, 0x076B, 0x076C, 0x0000, 0x6894, 0xBDC5, 0x0000, 0x3505, 0x62C2, 
    0x89E6, 0xAB1F, 0xC71C, 0xDD69, 0xED91, 0xF843, 0xFE2E, 0x0000, 0x0000, 0x003F, 0x00D7, 0x0193, 0x023E, 0x02A0, 
    0x0285, 0x01B7, 0x0000, 0xF43C, 0xE997, 0xEE68, 0xF833, 0x0000, 0x0000, 0xFFCD, 0xFF50, 0xFEB6, 0xFE2B, 0xFDDA, 
    0xFDF0, 0xFE99, 0x0000, 0x0A03, 0x1256, 0x0B11, 0xFF0A, 0xF842, 0x0000, 0xFEE2, 0xFC0A, 0xF835, 0xF425, 0xF098, 
    0xEE4F, 0xEE08, 0xF084, 0x0D17, 0x2927, 0x2162, 0x0E68, 0x0000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x3F90, 0x3F20, 0x4000, 0xF641, 0xF61D, 0xF5BD, 0xF533, 0xF490, 0xF3E8, 
    0xF34C, 0xF2CE, 0xF280, 0xF274, 0xF2BC, 0xF36A, 0xF490, 0xF641, 0xF367, 0xF348, 0xF2F5, 0xF27E, 0xF1F2, 0xF160, 
    0xF0DA, 0xF06D, 0xF029, 0xF01F, 0xF05D, 0xF0F4, 0xF1F2, 0xF367, 
}; 

static JointIndex sDekuNutsDamageAnimJointIndices[25] = {
    { 0x0000, 0x0008, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0016, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0024, 0x0003 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0032, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0040, 0x0000, 0x004E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0002, 0x0004 },
    { 0x0000, 0x0000, 0x0005 },
    { 0x0000, 0x0000, 0x005C },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0006, 0x0001, 0x0004 },
    { 0x0000, 0x0000, 0x0007 },
    { 0x0000, 0x0000, 0x006A },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuNutsDamageAnim = { { 14 }, sDekuNutsDamageAnimFrameData, sDekuNutsDamageAnimJointIndices, 8 }; 


static s16 sDekuNutsBurrowAnimFrameData[96] = {
    0x0000, 0x4000, 0xC000, 0xE000, 0x2000, 0x02BC, 0x03E8, 0xFD72, 0xF7CC, 0xF6A9, 0xF6CA, 0xF76B, 0xF7CC, 0xF7CC, 
    0xF7CC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF01C, 0x0073, 0x1018, 0x090A, 0x0000, 0x0000, 0xEBA1, 0xF73B, 
    0x062C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0514, 0x0EF5, 0x1768, 0x182B, 0x182B, 0x182B, 
    0x182B, 0x182B, 0x182B, 0x0000, 0x0183, 0xFEE3, 0xFC22, 0xFBDF, 0xFBDF, 0xFBDF, 0xFBDF, 0xFBDF, 0xFBDF, 0x8000, 
    0x7A3B, 0x99AC, 0xB878, 0xBB59, 0xBB59, 0xBB59, 0xBB59, 0xBB59, 0xBB59, 0x0000, 0x0092, 0x014E, 0x00BC, 0xFA39, 
    0xF26E, 0xFCE6, 0x07F9, 0x04D6, 0x0000, 0x0000, 0xFFE2, 0xFFBA, 0xFFD9, 0x010F, 0x02D6, 0x028E, 0x01B0, 0x00AB, 
    0x0000, 0x4000, 0x3FA9, 0x3F39, 0x3F90, 0x4399, 0x4814, 0x3FC7, 0x379C, 0x3B4D, 0x4000, 0x0000, 
}; 

static JointIndex sDekuNutsBurrowAnimJointIndices[25] = {
    { 0x0000, 0x0005, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x000F, 0x0000, 0x0019 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0023, 0x002D, 0x0037 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0041, 0x004B, 0x0055 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0001, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuNutsBurrowAnim = { { 10 }, sDekuNutsBurrowAnimFrameData, sDekuNutsBurrowAnimJointIndices, 5 }; 


static s16 sDekuNutsDieAnimFrameData[148] = {
    0x0000, 0x4000, 0xC000, 0xE000, 0x2000, 0x076C, 0x07C0, 0x0777, 0x0552, 0x029E, 0x014A, 0x0265, 0x037D, 0x0300, 
    0x021C, 0x01A2, 0x0000, 0x01E7, 0x03CE, 0x0000, 0xE878, 0xD538, 0xD538, 0xD538, 0xD538, 0xD538, 0xD538, 0x0000, 
    0x00B5, 0x0000, 0xF976, 0xF4AB, 0xFB0F, 0x02A4, 0x0280, 0x00D6, 0x01BD, 0x02A4, 0x0000, 0x000C, 0x0000, 0x0AE1, 
    0x1128, 0xFF80, 0xEC5B, 0xECFF, 0xF196, 0xEEF8, 0xEC5B, 0xAEDB, 0xB23E, 0xAEDB, 0x9205, 0x78AD, 0x83CA, 0x9497, 
    0x9171, 0x8BE4, 0x903E, 0x9497, 0xF842, 0xFA19, 0xFF89, 0x0602, 0x0AF5, 0x0BD1, 0xFAFD, 0xEA00, 0xEEA7, 0xF9C5, 
    0x0000, 0x0000, 0xFCF4, 0xFE7A, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEAE, 
    0xFD5B, 0x0000, 0x114D, 0x1DBE, 0x07E1, 0xF0ED, 0xF230, 0xFAC5, 0x0000, 0x4000, 0x43F0, 0x4931, 0x4BD1, 0x46A5, 
    0x4000, 0x3F43, 0x4000, 0x4000, 0x4000, 0x4000, 0xC61D, 0xC323, 0xC61D, 0xD980, 0xF22D, 0x0199, 0xF48F, 0xE3DB, 
    0xE927, 0xF473, 0xFAAC, 0xF641, 0x031E, 0x13FF, 0x1CCB, 0x236E, 0x285E, 0x29DB, 0x292F, 0x28D5, 0x2843, 0x27F6, 
    0xC6ED, 0xC40E, 0xC6ED, 0xD996, 0xF15B, 0x0060, 0xF48A, 0xE514, 0xEA07, 0xF480, 0xFA43, 0xF367, 0xFE19, 0x0D12, 
    0x16DC, 0x1F81, 0x26BD, 0x2B82, 0x2D42, 0x2C47, 0x2A07, 0x28C7, 
}; 

static JointIndex sDekuNutsDieAnimJointIndices[25] = {
    { 0x0000, 0x0005, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0010, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x001B, 0x0026, 0x0031 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x003C, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0047, 0x0052, 0x005D },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x0068 },
    { 0x0000, 0x0000, 0x0073 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0001, 0x0003 },
    { 0x0000, 0x0000, 0x007E },
    { 0x0000, 0x0000, 0x0089 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuNutsDieAnim = { { 11 }, sDekuNutsDieAnimFrameData, sDekuNutsDieAnimJointIndices, 5 }; 


static s16 sDekuNutsUnburrowAnimFrameData[182] = {
    0x0000, 0x4000, 0xC000, 0xE000, 0x2000, 0x02BC, 0x0B06, 0x1085, 0x139E, 0x14B4, 0x1403, 0x11DB, 0x0EC0, 0x0B35, 
    0x07BF, 0x04E2, 0x04E2, 0x04E2, 0x04E2, 0x04E2, 0x04E2, 0x0000, 0x05A2, 0x152A, 0x2C8B, 0x49BA, 0x6AAB, 0x8D50, 
    0xAF9E, 0xCF88, 0xEB02, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF6D5, 0xEDAA, 0xEE41, 0xEFD8, 
    0xF22D, 0xF500, 0xF80D, 0xFB13, 0xFDCF, 0x0000, 0x0075, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xED0C, 0xDA28, 
    0xE324, 0xF497, 0x00A4, 0x034F, 0x02F1, 0x012E, 0xFFA7, 0x0000, 0x072E, 0x0D72, 0x09F6, 0x037C, 0x0000, 0x8826, 
    0x87E0, 0x8730, 0x864C, 0x8568, 0x84B8, 0x8472, 0x84CA, 0x85F4, 0x8826, 0x9717, 0xA6B5, 0xA7AD, 0xA3B1, 0x9CD0, 
    0x8826, 0x4000, 0x401D, 0x406B, 0x40D9, 0x4156, 0x41D3, 0x4240, 0x428C, 0x42A7, 0x4281, 0x420A, 0x3D17, 0x3842, 
    0x3A16, 0x3DE7, 0x4000, 0x4000, 0x3F71, 0x3DF5, 0x3BD0, 0x394C, 0x36AD, 0x343B, 0x323D, 0x30FA, 0x30B8, 0x31BD, 
    0x3B80, 0x4C54, 0x56D1, 0x4C1F, 0x4000, 0xC000, 0xC000, 0xFF27, 0x0727, 0x0A85, 0x09E3, 0x05E4, 0xFF27, 0xED07, 
    0xD221, 0xC000, 0xBAF3, 0xBA51, 0xBC36, 0xBEBD, 0xC000, 0x4000, 0x0260, 0x041B, 0x0318, 0x00B9, 0xFEDB, 0xFF5D, 
    0x041B, 0x154C, 0x2ECF, 0x4000, 0x44CB, 0x4564, 0x4398, 0x4133, 0x4000, 0xC000, 0xC000, 0xFDEE, 0x05C6, 0x0914, 
    0x0875, 0x0489, 0xFDEE, 0xEC27, 0xD1C7, 0xC000, 0xBB0C, 0xBA6D, 0xBC49, 0xBEC3, 0xC000, 0x4000, 0x01AD, 0x00D9, 
    0xFF7F, 0xFCF5, 0xFB19, 0xFBC6, 0x00D9, 0x12F9, 0x2DDF, 0x4000, 0x450D, 0x45AF, 0x43CA, 0x4143, 0x4000, 0x0000, 
    
}; 

static JointIndex sDekuNutsUnburrowAnimJointIndices[25] = {
    { 0x0000, 0x0005, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0015, 0x0000, 0x0001 },
    { 0x0000, 0x0025, 0x0035 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0045 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0055 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0065 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x0075 },
    { 0x0000, 0x0000, 0x0085 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0001, 0x0003 },
    { 0x0000, 0x0000, 0x0095 },
    { 0x0000, 0x0000, 0x00A5 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuNutsUnburrowAnim = { { 16 }, sDekuNutsUnburrowAnimFrameData, sDekuNutsUnburrowAnimJointIndices, 5 }; 


static s16 sDekuNutsLookAroundAnimFrameData[188] = {
    0x0000, 0x4000, 0xC000, 0xE000, 0x2000, 0x02BC, 0x02C3, 0x02D6, 0x02EE, 0x0306, 0x0319, 0x0320, 0x031A, 0x030C, 
    0x02F9, 0x02E3, 0x02D0, 0x02C2, 0x02BC, 0x02C3, 0x02D6, 0x02EE, 0x0306, 0x0319, 0x0320, 0x0319, 0x0306, 0x02EE, 
    0x02D6, 0x02C3, 0x02BC, 0x012F, 0x0000, 0xF659, 0xE925, 0xE000, 0xE000, 0xE000, 0xE000, 0xE000, 0xE925, 0xF659, 
    0x0000, 0x012F, 0xFED1, 0x0000, 0x09A7, 0x16DB, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x16DB, 0x09A7, 0x0000, 
    0xFED1, 0x9739, 0x99F8, 0x9F12, 0xA1D1, 0x9ED2, 0x9978, 0x9739, 0x9AAE, 0xA0D2, 0xA6AD, 0xA949, 0xA4E0, 0x9C73, 
    0x9739, 0x99FA, 0x9FE5, 0xA1D1, 0x99D1, 0x8DC1, 0x8826, 0x913E, 0xA0F2, 0xA949, 0xA2AF, 0x951D, 0x89ED, 0x0000, 
    0x0090, 0x011F, 0x0000, 0xF90E, 0xF35F, 0xF50C, 0xF8E5, 0xFD23, 0x0000, 0x00DA, 0x00B1, 0x0030, 0x0000, 0xFF9D, 
    0xFF66, 0x0160, 0x0AFB, 0x12B6, 0x1081, 0x0B61, 0x0596, 0x0160, 0xFFD4, 0xFFC3, 0x0000, 0x0000, 0xFFFF, 0xFFFD, 
    0x0000, 0x0012, 0x0020, 0x001C, 0x0012, 0x0007, 0x0000, 0xFFFE, 0xFFFE, 0xFFFF, 0x0000, 0x0006, 0x000C, 0x0000, 
    0xFFB4, 0xFF75, 0xFF87, 0xFFB1, 0xFFDF, 0x0000, 0x0009, 0x0004, 0x0000, 0x4000, 0x3FFC, 0x3FF7, 0x4000, 0x4037, 
    0x4063, 0x4056, 0x4038, 0x4017, 0x4000, 0x3FF9, 0x3FFA, 0x3FFE, 0x4000, 0x3FF4, 0x3FE7, 0x4000, 0x409A, 0x4118, 
    0x40F4, 0x40A0, 0x4042, 0x4000, 0x3FEE, 0x3FF7, 0x4000, 0x0000, 0x00F3, 0x01E7, 0x0000, 0xF772, 0xEC09, 0xE655, 
    0xE768, 0xEA45, 0xEE5D, 0xF322, 0xF809, 0xFC82, 0x0000, 0x00CA, 0x0043, 0x0289, 0x0C06, 0x1850, 0x1E41, 0x1BD1, 
    0x1629, 0x0EEA, 0x07B8, 0x0234, 0x0000, 0x0000, 
}; 

static JointIndex sDekuNutsLookAroundAnimJointIndices[25] = {
    { 0x0000, 0x0005, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x001F, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0039 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0053, 0x006D, 0x0087 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x00A1, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0001, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuNutsLookAroundAnim = { { 26 }, sDekuNutsLookAroundAnimFrameData, sDekuNutsLookAroundAnimJointIndices, 5 }; 

static s16 sDekuNutsUpAnimFrameData[194] = {
    0x0000, 0x4000, 0xC000, 0xE000, 0x2000, 0x0000, 0x0071, 0x00C8, 0xFFF3, 0xFF38, 0xFFF6, 0x00C8, 0x00AC, 0x0049, 
    0x0000, 0xFFF0, 0xFFF2, 0xFFFB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7CC, 0xF7CC, 
    0xF7CC, 0xF7CC, 0xF7CC, 0xF7CC, 0xF7CC, 0xF7CC, 0xF7CC, 0xF7CC, 0xFA88, 0xFD44, 0x0000, 0x02BC, 0x02BC, 0x02BC, 
    0x02BC, 0x02BC, 0x02BC, 0x02BC, 0x02BC, 0x0000, 0x0071, 0x00C8, 0xFFF3, 0xFF38, 0xFFF6, 0x00C8, 0x00AC, 0x0049, 
    0x0000, 0xFFF0, 0xFFF2, 0xFFFB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFEF, 
    0xFFC5, 0xFF8E, 0xFF57, 0xFF2D, 0xFF1C, 0xFF31, 0xFF79, 0x0000, 0x0421, 0x0755, 0x048F, 0xFFEA, 0xFB5D, 0xF8DE, 
    0xF916, 0xFACB, 0xFD19, 0xFF21, 0x0000, 0x8000, 0x8237, 0x8845, 0x9145, 0x9C53, 0xA889, 0xB503, 0xC0DD, 0xCB32, 
    0xD31E, 0xD7DF, 0xD6FD, 0xCD01, 0xB121, 0x8C28, 0x7500, 0x717B, 0x758B, 0x7D47, 0x84C8, 0x8826, 0x4000, 0x3FFD, 
    0x3FF6, 0x3FED, 0x3FE4, 0x3FDD, 0x3FDA, 0x3FDE, 0x3FEA, 0x4000, 0x4126, 0x4139, 0x3BFD, 0x37DA, 0x3A4E, 0x3EEA, 
    0x420A, 0x4260, 0x419A, 0x4089, 0x4000, 0x0000, 0xFE0F, 0xFDFE, 0xFDF7, 0xFC91, 0xFBAD, 0xFD80, 0xFFA8, 0x0019, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x063A, 
    0xFDC0, 0xF70F, 0xFFA5, 0x0895, 0x0341, 0xFC35, 0xFD91, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4000, 0x33A1, 0x3F9A, 0x4930, 0x3AE9, 0x2CCD, 0x36B3, 0x43AF, 0x430B, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
}; 

static JointIndex sDekuNutsUpAnimJointIndices[25] = {
    { 0x0005, 0x001A, 0x002F },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0044 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0059 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x006E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0083, 0x0098, 0x00AD },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0001, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuNutsUpAnim = { { 21 }, sDekuNutsUpAnimFrameData, sDekuNutsUpAnimJointIndices, 5 }; 


static s16 sDekuNutsStandAnimFrameData[82] = {
    0x0000, 0x4000, 0x02BC, 0xC000, 0xE000, 0x2000, 0x4000, 0x40BF, 0x42AA, 0x454B, 0x4827, 0x4AC8, 0x4CB3, 0x4D72, 
    0x4CE6, 0x4B74, 0x4965, 0x4704, 0x4499, 0x4270, 0x40D2, 0xF5D0, 0xF4D8, 0xF257, 0xEEEB, 0xEB31, 0xE7C5, 0xE544, 
    0xE44B, 0xE50C, 0xE708, 0xE9D6, 0xED0E, 0xF045, 0xF314, 0xF510, 0x9B4C, 0x9D73, 0xA229, 0xA6CC, 0xA8BE, 0xA71C, 
    0xA387, 0x9F2D, 0x9B38, 0x98D3, 0x9829, 0x9861, 0x9925, 0x9A1D, 0x9AF2, 0x4000, 0x4044, 0x40E5, 0x41A3, 0x423D, 
    0x4272, 0x421B, 0x4164, 0x4087, 0x3FBE, 0x3F44, 0x3F30, 0x3F59, 0x3FA0, 0x3FE2, 0x4000, 0x40AC, 0x4235, 0x43E5, 
    0x4507, 0x44E4, 0x42C3, 0x3F1D, 0x3B09, 0x379A, 0x35E6, 0x368D, 0x38D4, 0x3BC8, 0x3E78, 0x0000, 
}; 

static JointIndex sDekuNutsStandAnimJointIndices[25] = {
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0015 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0024 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0033 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0042 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0003, 0x0004 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0005, 0x0001, 0x0004 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0001 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuNutsStandAnim = { { 15 }, sDekuNutsStandAnimFrameData, sDekuNutsStandAnimJointIndices, 6 }; 


static s16 sDekuNutsGaspAnimFrameData[134] = {
    0x0000, 0x4000, 0x047E, 0xF9E3, 0xC000, 0xE000, 0x2000, 0xCF7C, 0x5FC8, 0x5E1F, 0x5A7A, 0x56D5, 0x552D, 0x5647, 
    0x58E8, 0x5C0C, 0x5EAD, 0x8000, 0x8391, 0x8B69, 0x9340, 0x96D1, 0x9472, 0x8EC9, 0x8808, 0x825F, 0x4000, 0x3EC8, 
    0x3C1A, 0x396D, 0x3835, 0x3904, 0x3AF3, 0x3D42, 0x3F31, 0x4000, 0x3ADC, 0x31A9, 0x2DBE, 0x3577, 0x4278, 0x4B00, 
    0x4980, 0x4387, 0xFF7C, 0xFF82, 0xFF8E, 0xFF9B, 0xFFA0, 0xFF9C, 0xFF93, 0xFF89, 0xFF80, 0xD9B2, 0xDBBB, 0xE037, 
    0xE4B2, 0xE6BB, 0xE560, 0xE225, 0xDE49, 0xDB0D, 0xCF84, 0xCF7C, 0xCF6A, 0xCF59, 0xCF51, 0xCF56, 0xCF63, 0xCF72, 
    0xCF7E, 0x0685, 0x0670, 0x0643, 0x0616, 0x0601, 0x060F, 0x062F, 0x0656, 0x0677, 0xE655, 0xE4E2, 0xE1B3, 0xDE83, 
    0xDD11, 0xDE07, 0xE054, 0xE312, 0xE55E, 0x3226, 0x3192, 0x304C, 0x2F06, 0x2E71, 0x2ED4, 0x2FBF, 0x30D8, 0x31C3, 
    0x25E4, 0x23DB, 0x1F5F, 0x1AE4, 0x18DB, 0x1A36, 0x1D71, 0x214D, 0x2489, 0xFA47, 0xFACF, 0xFBFA, 0xFD24, 0xFDAC, 
    0xFD52, 0xFC7A, 0xFB79, 0xFAA2, 0x1A68, 0x1BEB, 0x1F3D, 0x228E, 0x2411, 0x2310, 0x20AA, 0x1DCF, 0x1B69, 0x321A, 
    0x31C5, 0x3108, 0x304C, 0x2FF6, 0x302F, 0x30B7, 0x3159, 0x31E1, 
}; 

static JointIndex sDekuNutsGaspAnimJointIndices[25] = {
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0008 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0011 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x001A },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0023 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0005, 0x0004, 0x0005 },
    { 0x002C, 0x0035, 0x003E },
    { 0x0047, 0x0050, 0x0059 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0006, 0x0001, 0x0005 },
    { 0x0000, 0x0062, 0x0007 },
    { 0x006B, 0x0074, 0x007D },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuNutsGaspAnim = { { 9 }, sDekuNutsGaspAnimFrameData, sDekuNutsGaspAnimJointIndices, 8 }; 

static s16 sDekuNutsRunAnimFrameData[420] = {
    0x0000, 0x4000, 0xC000, 0xE000, 0x2000, 0x044C, 0x054C, 0x064C, 0x054C, 0x044C, 0x054C, 0x064C, 0x05C7, 0x04D1, 
    0x044C, 0x054C, 0x064C, 0x05C7, 0x04D1, 0x044C, 0x054C, 0x064C, 0x054C, 0x0AAB, 0x0755, 0x0000, 0xF8AB, 0xF555, 
    0xF78D, 0xFCD8, 0x0328, 0x0873, 0x0AAB, 0x0755, 0x0000, 0xF8AB, 0xF555, 0xF78D, 0xFCD8, 0x0328, 0x0873, 0xF568, 
    0xF8C8, 0x0034, 0x07A0, 0x0B00, 0x0965, 0x0551, 0xFFE2, 0xFA35, 0xF568, 0xF709, 0x1B85, 0x4000, 0x4000, 0x4000, 
    0x1F95, 0x006F, 0xF642, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0xFFB8, 0xFF70, 0xFF70, 0xFFBB, 0x0000, 0x0009, 0x0000, 0x078A, 0x0F13, 0x07AF, 0x0000, 0x02E7, 0x08E6, 
    0x0C30, 0x071C, 0x0000, 0x0000, 0x0F13, 0x08CB, 0x0000, 0x0000, 0x071C, 0x0C30, 0x0618, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x015C, 0x02B7, 0x0000, 0xEDC3, 0xE171, 0xF1A3, 0x0B2B, 
    0x1CA3, 0x8826, 0x8DD3, 0x938F, 0x8DCA, 0x889F, 0x9113, 0x98D2, 0x9524, 0x8DD2, 0x8826, 0x8656, 0x862C, 0x864C, 
    0x86A0, 0x8739, 0x878C, 0x87D2, 0x8810, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0xFF22, 0x0000, 0x07CB, 0x0DDA, 0x07CB, 0x0000, 0xFF22, 0x4000, 0x3B8F, 0x3772, 0x3D33, 0x42A1, 
    0x3D09, 0x3772, 0x3C80, 0x42A1, 0x4208, 0x4000, 0x3FAF, 0x3FB4, 0x3FB7, 0x3FC8, 0x3FD9, 0x3FEA, 0x3FF9, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEEE, 0xFDDB, 0x0000, 0x0A83, 0x183C, 0x1CEE, 0x0EB1, 0xF76C, 
    0xE893, 0xEC81, 0xF8DB, 0x4000, 0x43C8, 0x4A19, 0x4B69, 0x4175, 0x3280, 0x29C1, 0x2DC3, 0x37FB, 0x4000, 0x426D, 
    0x42A8, 0x4279, 0x4256, 0x41C9, 0x413C, 0x40BB, 0x403B, 0x0A2F, 0x0544, 0x092F, 0x0A2F, 0x0544, 0x092F, 0x0A2F, 
    0x0544, 0x092F, 0x0A2F, 0x0544, 0x092F, 0x0A2F, 0x0544, 0x092F, 0x0A2F, 0x0544, 0x092F, 0xF4E7, 0xF680, 0x0759, 
    0xF4E7, 0xF680, 0x0759, 0xF4E7, 0xF680, 0x0759, 0xF4E7, 0xF680, 0x0759, 0xF4E7, 0xF680, 0x0759, 0xF4E7, 0xF680, 
    0x0759, 0xD586, 0xEF1C, 0xD574, 0xD586, 0xEF1C, 0xD574, 0xD586, 0xEF1C, 0xD574, 0xD586, 0xEF1C, 0xD574, 0xD586, 
    0xEF1C, 0xD574, 0xD586, 0xEF1C, 0xD574, 0xEC3C, 0xF07C, 0xF4BC, 0xEC3C, 0xF07C, 0xF4BC, 0xEC3C, 0xF07C, 0xF4BC, 
    0xEC3C, 0xF07C, 0xF4BC, 0xEC3C, 0xF07C, 0xF4BC, 0xEC3C, 0xF07C, 0xF4BC, 0x1691, 0xFDCB, 0xE505, 0x1691, 0xFDCB, 
    0xE505, 0x1691, 0xFDCB, 0xE505, 0x1691, 0xFDCB, 0xE505, 0x1691, 0xFDCB, 0xE505, 0x1691, 0xFDCB, 0xE505, 0x2B06, 
    0x2F2E, 0x3384, 0x2B06, 0x2F2E, 0x3384, 0x2B06, 0x2F2E, 0x3384, 0x2B06, 0x2F2E, 0x3384, 0x2B06, 0x2F2E, 0x3384, 
    0x2B06, 0x2F2E, 0x3384, 0xF5D1, 0xFABC, 0xF6D1, 0xF5D1, 0xFABC, 0xF6D1, 0xF5D1, 0xFABC, 0xF6D1, 0xF5D1, 0xFABC, 
    0xF6D1, 0xF5D1, 0xFABC, 0xF6D1, 0xF5D1, 0xFABC, 0xF6D1, 0xF4E7, 0xF680, 0x0759, 0xF4E7, 0xF680, 0x0759, 0xF4E7, 
    0xF680, 0x0759, 0xF4E7, 0xF680, 0x0759, 0xF4E7, 0xF680, 0x0759, 0xF4E7, 0xF680, 0x0759, 0xD586, 0xEF1C, 0xD574, 
    0xD586, 0xEF1C, 0xD574, 0xD586, 0xEF1C, 0xD574, 0xD586, 0xEF1C, 0xD574, 0xD586, 0xEF1C, 0xD574, 0xD586, 0xEF1C, 
    0xD574, 0x13C4, 0x0F84, 0x0B44, 0x13C4, 0x0F84, 0x0B44, 0x13C4, 0x0F84, 0x0B44, 0x13C4, 0x0F84, 0x0B44, 0x13C4, 
    0x0F84, 0x0B44, 0x13C4, 0x0F84, 0x0B44, 0x1691, 0xFDCB, 0xE505, 0x1691, 0xFDCB, 0xE505, 0x1691, 0xFDCB, 0xE505, 
    0x1691, 0xFDCB, 0xE505, 0x1691, 0xFDCB, 0xE505, 0x1691, 0xFDCB, 0xE505, 0x2B06, 0x2F2E, 0x3384, 0x2B06, 0x2F2E, 
    0x3384, 0x2B06, 0x2F2E, 0x3384, 0x2B06, 0x2F2E, 0x3384, 0x2B06, 0x2F2E, 0x3384, 0x2B06, 0x2F2E, 0x3384, 0x0000, 
    
}; 

static JointIndex sDekuNutsRunAnimJointIndices[25] = {
    { 0x0000, 0x0005, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0017, 0x0000, 0x0001 },
    { 0x0029, 0x003B, 0x004D },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x005F, 0x0071 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0083, 0x0000, 0x0095 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x00A7, 0x0000, 0x00B9 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x00CB, 0x00DD, 0x00EF },
    { 0x0101, 0x0113, 0x0125 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0001, 0x0003 },
    { 0x0137, 0x0149, 0x015B },
    { 0x016D, 0x017F, 0x0191 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuNutsRunAnim = { { 18 }, sDekuNutsRunAnimFrameData, sDekuNutsRunAnimJointIndices, 5 }; 
