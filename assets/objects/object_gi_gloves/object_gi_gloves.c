#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_gloves.h"

static Vtx object_gi_glovesVtx_000800[3];
static Vtx object_gi_glovesVtx_000830[11];
static Vtx object_gi_glovesVtx_0008E0[30];
static Vtx object_gi_glovesVtx_000AC0[32];
static Vtx object_gi_glovesVtx_000CC0[46];
static Vtx object_gi_glovesVtx_000FA0[6];
static Vtx object_gi_glovesVtx_001000[24];
static Vtx object_gi_glovesVtx_001180[52];

u64 object_gi_glovesTex_000000[] = {
#include "assets/objects/object_gi_gloves//object_gi_glovesTex_000000.i8.inc.c"
};

static Vtx object_gi_glovesVtx_000800[3] = {
    VTX(16, 18, 5, 537, 1383, 56, 5, 105, 255),
    VTX(8, 9, 9, 461, 1606, 39, 1, 113, 255),
    VTX(12, -2, 6, 521, 1833, 32, 233, 113, 255),
}; 

static Vtx object_gi_glovesVtx_000830[11] = {
    VTX(1, 3, 9, 189, 1953, 254, 222, 114, 255),
    VTX(12, -2, 6, 521, 1833, 32, 233, 113, 255),
    VTX(8, 9, 9, 461, 1606, 39, 1, 113, 255),
    VTX(-7, 9, 9, 40, 1592, 215, 248, 112, 255),
    VTX(-8, -1, 6, -10, 1832, 218, 225, 109, 255),
    VTX(2, -2, 7, 351, 2034, 254, 213, 111, 255),
    VTX(-12, 19, 6, -7, 1374, 193, 249, 102, 255),
    VTX(16, 18, 5, 537, 1383, 56, 5, 105, 255),
    VTX(9, 21, 7, 500, 1221, 34, 15, 113, 255),
    VTX(1, 20, 9, 186, 1103, 5, 13, 119, 255),
    VTX(-9, 24, 8, 14, 1246, 226, 6, 115, 255),
}; 

static Vtx object_gi_glovesVtx_0008E0[30] = {
    VTX(2, -14, 11, 238, 1957, 1, 22, 117, 255),
    VTX(2, -2, 7, 256, 1395, 1, 33, 115, 255),
    VTX(-8, -1, 6, -39, 1384, 207, 21, 107, 255),
    VTX(12, -2, 6, 551, 1406, 55, 21, 104, 255),
    VTX(-9, -10, 6, -31, 1649, 189, 14, 98, 255),
    VTX(13, -10, 6, 543, 1656, 73, 13, 93, 255),
    VTX(2, -25, 13, 247, 1976, 0, 9, 119, 255),
    VTX(-11, -21, 7, -25, 1813, 195, 13, 102, 255),
    VTX(2, -36, 14, 249, 1993, 246, 12, 118, 255),
    VTX(-12, -31, 7, -17, 1876, 192, 15, 100, 255),
    VTX(16, -31, 7, 529, 1879, 70, 16, 96, 255),
    VTX(14, -21, 7, 537, 1818, 64, 13, 100, 255),
    VTX(2, -14, 11, 238, 1957, 0, 21, 118, 255),
    VTX(-9, -10, 6, -31, 1649, 198, 14, 104, 255),
    VTX(2, -25, 13, 247, 1976, 0, 16, 118, 255),
    VTX(-11, -21, 7, -25, 1813, 189, 11, 98, 255),
    VTX(14, -21, 7, 537, 1818, 72, 12, 95, 255),
    VTX(13, -10, 6, 543, 1656, 61, 15, 102, 255),
    VTX(-8, -1, 6, 985, 1384, 207, 21, 107, 255),
    VTX(-11, -7, 4, 965, 1562, 168, 18, 79, 255),
    VTX(-9, -10, 6, 993, 1649, 189, 14, 98, 255),
    VTX(-9, -10, 6, 993, 1649, 198, 14, 104, 255),
    VTX(-13, -18, 4, 977, 1744, 175, 12, 87, 255),
    VTX(-11, -21, 7, 999, 1813, 189, 11, 98, 255),
    VTX(-11, -21, 7, 999, 1813, 195, 13, 102, 255),
    VTX(-14, -28, 4, 982, 1838, 162, 18, 71, 255),
    VTX(-12, -31, 7, 1007, 1876, 192, 15, 100, 255),
    VTX(15, -8, 3, 575, 1573, 98, 16, 66, 255),
    VTX(16, -18, 4, 562, 1756, 90, 14, 78, 255),
    VTX(18, -28, 4, 555, 1839, 90, 18, 76, 255),
}; 

static Vtx object_gi_glovesVtx_000AC0[32] = {
    VTX(-18, 15, -11, 346, -1060, 149, 227, 212, 255),
    VTX(-13, 18, -10, 338, -1203, 58, 55, 167, 255),
    VTX(-16, 10, -10, 345, -804, 168, 203, 195, 255),
    VTX(-4, 11, -4, 278, -836, 28, 27, 143, 255),
    VTX(-11, 19, -3, 377, -1136, 226, 107, 213, 255),
    VTX(-4, 25, -3, 361, -1377, 240, 36, 143, 255),
    VTX(-18, 18, -3, 378, -1188, 213, 86, 71, 255),
    VTX(-16, 14, 1, 400, -941, 146, 5, 48, 255),
    VTX(-12, 19, 6, 433, -1134, 146, 31, 34, 255),
    VTX(-9, 24, 8, 453, -1338, 40, 67, 91, 255),
    VTX(-8, 29, 5, 444, -1552, 204, 57, 91, 255),
    VTX(-11, 28, -4, 369, -1487, 177, 7, 166, 255),
    VTX(-8, -1, 6, 452, -366, 162, 236, 71, 255),
    VTX(-9, -3, -7, 340, -313, 214, 6, 144, 255),
    VTX(-7, -35, -14, 298, 946, 186, 17, 160, 255),
    VTX(-13, -37, 3, 412, 1024, 141, 7, 31, 255),
    VTX(16, -37, 1, 112, 1024, 117, 5, 26, 255),
    VTX(10, -35, -14, 199, 946, 50, 25, 150, 255),
    VTX(12, -3, -4, 143, -304, 74, 5, 162, 255),
    VTX(12, -2, 6, 79, -336, 94, 0, 73, 255),
    VTX(2, -37, 10, 15, 1024, 4, 2, 119, 255),
    VTX(16, 18, 5, 96, -1117, 111, 15, 41, 255),
    VTX(18, 22, -6, 145, -1275, 81, 255, 168, 255),
    VTX(16, 26, 4, 99, -1407, 190, 57, 82, 255),
    VTX(5, 24, -3, 143, -1330, 254, 38, 143, 255),
    VTX(9, 21, 7, 63, -1231, 62, 75, 70, 255),
    VTX(8, 28, 5, 70, -1505, 181, 58, 73, 255),
    VTX(6, 27, -3, 146, -1445, 166, 34, 185, 255),
    VTX(2, -37, 10, 527, 1024, 4, 2, 119, 255),
    VTX(11, 25, -4, 144, -1381, 87, 249, 174, 255),
    VTX(11, 21, -4, 141, -1237, 218, 36, 149, 255),
    VTX(13, 24, -4, 142, -1354, 167, 48, 192, 255),
}; 

static Vtx object_gi_glovesVtx_000CC0[46] = {
    VTX(12, -2, 6, 591, -336, 94, 0, 73, 255),
    VTX(-8, -1, 6, 452, -366, 162, 236, 71, 255),
    VTX(2, -37, 10, 527, 1024, 4, 2, 119, 255),
    VTX(18, 22, -6, 145, -1275, 81, 255, 168, 255),
    VTX(17, 15, -5, 143, -1001, 80, 236, 170, 255),
    VTX(11, 21, -4, 141, -1237, 218, 36, 149, 255),
    VTX(9, 21, 7, 63, -1231, 62, 75, 70, 255),
    VTX(11, 25, -4, 144, -1381, 87, 249, 174, 255),
    VTX(8, 28, 5, 70, -1505, 181, 58, 73, 255),
    VTX(16, 18, 5, 96, -1117, 111, 15, 41, 255),
    VTX(-9, 24, 8, 453, -1338, 40, 67, 91, 255),
    VTX(1, 23, 8, 518, -1306, 15, 80, 87, 255),
    VTX(-4, 25, -3, 361, -1377, 240, 36, 143, 255),
    VTX(1, 20, 9, 520, -1195, 8, 31, 115, 255),
    VTX(1, 23, 8, 6, -1306, 15, 80, 87, 255),
    VTX(5, 24, -3, 143, -1330, 254, 38, 143, 255),
    VTX(1, 20, 9, 8, -1195, 8, 31, 115, 255),
    VTX(16, 26, 4, 99, -1407, 190, 57, 82, 255),
    VTX(12, -3, -4, 143, -304, 74, 5, 162, 255),
    VTX(-11, 19, -3, 377, -1136, 226, 107, 213, 255),
    VTX(-12, 19, 6, 433, -1134, 146, 31, 34, 255),
    VTX(-11, 28, -4, 369, -1487, 177, 7, 166, 255),
    VTX(-16, 14, 1, 400, -941, 146, 5, 48, 255),
    VTX(4, 27, -3, 154, -1471, 57, 251, 151, 255),
    VTX(1, 30, 6, 12, -1559, 8, 64, 101, 255),
    VTX(1, 30, 6, 524, -1559, 8, 64, 101, 255),
    VTX(-2, 28, -3, 337, -1499, 167, 29, 181, 255),
    VTX(12, -2, 6, 79, -336, 94, 0, 73, 255),
    VTX(6, 27, -3, 146, -1445, 166, 34, 185, 255),
    VTX(-4, 28, -3, 358, -1503, 118, 17, 245, 255),
    VTX(-8, 29, 5, 444, -1552, 204, 57, 91, 255),
    VTX(12, -3, -4, 143, -304, 74, 5, 162, 255),
    VTX(-9, -3, -7, 340, -313, 214, 6, 144, 255),
    VTX(-4, 11, -4, 278, -836, 28, 27, 143, 255),
    VTX(-16, 10, -10, 345, -804, 168, 203, 195, 255),
    VTX(-8, -1, 6, 452, -366, 162, 236, 71, 255),
    VTX(-16, 14, 1, 400, -941, 146, 5, 48, 255),
    VTX(-11, 28, -4, 369, -1487, 177, 7, 166, 255),
    VTX(-4, 25, -3, 361, -1377, 240, 36, 143, 255),
    VTX(-11, 19, -3, 377, -1136, 226, 107, 213, 255),
    VTX(-4, 28, -3, 358, -1503, 118, 17, 245, 255),
    VTX(-18, 15, -11, 346, -1060, 149, 227, 212, 255),
    VTX(-18, 18, -3, 378, -1188, 213, 86, 71, 255),
    VTX(5, 24, -3, 143, -1330, 254, 38, 143, 255),
    VTX(11, 21, -4, 141, -1237, 218, 36, 149, 255),
    VTX(-13, 18, -10, 338, -1203, 58, 55, 167, 255),
}; 

static Vtx object_gi_glovesVtx_000FA0[6] = {
    VTX(-7, 9, 9, -46, 1623, 195, 245, 102, 255),
    VTX(1, 9, 13, 256, 1783, 233, 222, 112, 255),
    VTX(1, 20, 9, 768, 1110, 0, 47, 110, 255),
    VTX(1, 9, 13, 256, 1783, 57, 41, 97, 255),
    VTX(8, 9, 9, 558, 1623, 61, 245, 102, 255),
    VTX(1, 3, 9, 768, 1966, 0, 187, 98, 255),
}; 

static Vtx object_gi_glovesVtx_001000[24] = {
    VTX(-7, -35, -14, -175, 1919, 244, 227, 141, 255),
    VTX(2, -14, 0, 391, 1957, 252, 138, 240, 255),
    VTX(-13, -37, 3, 57, 1925, 29, 178, 170, 255),
    VTX(10, -35, -14, 651, 1900, 188, 202, 174, 255),
    VTX(-7, -35, -14, 849, 1919, 0, 189, 99, 255),
    VTX(16, -37, 1, 480, 1896, 105, 231, 51, 255),
    VTX(16, -37, 1, 480, 1896, 195, 213, 163, 255),
    VTX(2, -37, 10, 290, 1931, 195, 213, 163, 255),
    VTX(2, -37, 10, 290, 1931, 31, 237, 114, 255),
    VTX(-18, 18, -3, 996, 1234, 158, 53, 44, 255),
    VTX(-13, 18, -10, 934, 1211, 48, 110, 254, 255),
    VTX(-18, 15, -11, 941, 1273, 146, 43, 15, 255),
    VTX(-8, 29, 5, 124, 1125, 8, 85, 83, 255),
    VTX(-4, 28, -3, -16, 1062, 75, 84, 216, 255),
    VTX(-11, 28, -4, -27, 1141, 196, 66, 176, 255),
    VTX(1, 30, 6, 287, 1106, 10, 85, 83, 255),
    VTX(4, 27, -3, 526, 1070, 56, 64, 172, 255),
    VTX(-2, 28, -3, -35, 1042, 199, 95, 211, 255),
    VTX(16, 26, 4, 455, 1199, 174, 73, 47, 255),
    VTX(18, 22, -6, 544, 1224, 84, 47, 184, 255),
    VTX(13, 24, -4, 527, 1165, 205, 98, 211, 255),
    VTX(8, 28, 5, 399, 1140, 216, 92, 65, 255),
    VTX(11, 25, -4, 529, 1148, 85, 54, 192, 255),
    VTX(6, 27, -3, 521, 1090, 203, 94, 205, 255),
}; 

static Vtx object_gi_glovesVtx_001180[52] = {
    VTX(16, -31, 7, 1697, 1024, 70, 16, 96, 255),
    VTX(18, -28, 4, 2098, 827, 90, 18, 76, 255),
    VTX(14, -21, 7, 2073, 84, 67, 13, 98, 255),
    VTX(2, -25, 13, 557, 83, 0, 13, 119, 255),
    VTX(2, -36, 14, 0, 1024, 246, 12, 118, 255),
    VTX(2, -14, 11, 669, 147, 0, 22, 117, 255),
    VTX(2, -25, 13, 0, 1024, 0, 13, 119, 255),
    VTX(13, -10, 6, 2118, 141, 66, 14, 99, 255),
    VTX(14, -21, 7, 1686, 1024, 67, 13, 98, 255),
    VTX(16, -18, 4, 2119, 851, 90, 14, 78, 255),
    VTX(13, -10, 6, 1634, 1024, 66, 14, 99, 255),
    VTX(15, -8, 3, 2104, 822, 98, 16, 66, 255),
    VTX(12, -2, 6, 2062, 157, 44, 254, 111, 255),
    VTX(2, -14, 11, 0, 1024, 0, 22, 117, 255),
    VTX(2, -14, 11, 0, 1024, 0, 22, 117, 255),
    VTX(2, -2, 7, 992, -216, 0, 251, 119, 255),
    VTX(-8, -1, 6, 2066, 85, 211, 251, 111, 255),
    VTX(2, -2, 7, 1029, -203, 0, 251, 119, 255),
    VTX(-12, -31, 7, 1685, 1024, 192, 15, 100, 255),
    VTX(2, -36, 14, 0, 1024, 246, 12, 118, 255),
    VTX(-11, -21, 7, 2079, 90, 193, 12, 101, 255),
    VTX(-14, -28, 4, 2059, 834, 162, 18, 71, 255),
    VTX(-9, -10, 6, 2143, 66, 195, 14, 102, 255),
    VTX(-13, -18, 4, 2155, 834, 175, 12, 87, 255),
    VTX(-11, -21, 7, 1674, 1024, 193, 12, 101, 255),
    VTX(-11, -7, 4, 2159, 813, 168, 18, 79, 255),
    VTX(-9, -10, 6, 1622, 1024, 195, 14, 102, 255),
    VTX(2, -25, 13, 0, 1024, 0, 13, 119, 255),
    VTX(2, -14, 11, 704, 73, 0, 22, 117, 255),
    VTX(2, -25, 13, 573, 89, 0, 13, 119, 255),
    VTX(-9, 24, 8, 2129, 244, 226, 6, 115, 255),
    VTX(-12, 19, 6, 2048, 1024, 193, 249, 102, 255),
    VTX(-7, 9, 9, -510, 300, 215, 248, 112, 255),
    VTX(1, 20, 9, 0, 1024, 5, 13, 119, 255),
    VTX(-9, 24, 8, 1744, 1024, 226, 6, 115, 255),
    VTX(-7, 9, 9, 236, -848, 215, 248, 112, 255),
    VTX(8, 9, 9, 386, -962, 39, 1, 113, 255),
    VTX(9, 21, 7, 0, 1024, 34, 15, 113, 255),
    VTX(1, 20, 9, 1660, 1024, 5, 13, 119, 255),
    VTX(16, 18, 5, 2114, 1040, 56, 5, 105, 255),
    VTX(9, 21, 7, 2059, 91, 34, 15, 113, 255),
    VTX(8, 9, 9, -178, 374, 39, 1, 113, 255),
    VTX(-8, -1, 6, -1732, 1024, 211, 251, 111, 255),
    VTX(1, 3, 9, 672, 400, 254, 222, 114, 255),
    VTX(-8, -1, 6, 1920, 1024, 211, 251, 111, 255),
    VTX(2, -2, 7, 670, 1024, 0, 251, 119, 255),
    VTX(1, 3, 9, 1387, -40, 254, 222, 114, 255),
    VTX(2, -2, 7, 2059, 230, 0, 251, 119, 255),
    VTX(12, -2, 6, 2048, 1024, 44, 254, 111, 255),
    VTX(-7, 9, 9, 1486, -360, 215, 248, 112, 255),
    VTX(8, 9, 9, 380, 415, 39, 1, 113, 255),
    VTX(12, -2, 6, -1993, 1115, 44, 254, 111, 255),
}; 

Gfx gGiSilverGauntletsColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 230, 255),
    gsDPSetEnvColor(60, 70, 50, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGoldenGauntletsColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 190, 70, 255),
    gsDPSetEnvColor(90, 40, 10, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiSilverGauntletsPlateColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 60, 50, 90, 255),
    gsDPSetEnvColor(60, 80, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGoldenGauntletsPlateColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 60, 30, 60, 255),
    gsDPSetEnvColor(50, 30, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGauntletsDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_glovesVtx_000800[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_glovesVtx_000830[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 5, 1, 0, 0, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 2, 0),
    gsSP2Triangles(2, 8, 9, 0, 9, 10, 3, 0),
    gsSP1Triangle(10, 6, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_glovesVtx_0008E0[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 2, 0, 5, 3, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 8, 7, 0),
    gsSP2Triangles(10, 11, 8, 0, 6, 8, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 14, 13, 0),
    gsSP2Triangles(16, 17, 14, 0, 12, 14, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 5, 27, 3, 0),
    gsSP2Triangles(16, 28, 17, 0, 10, 29, 11, 0),
    gsSP1Triangle(9, 8, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 170, 60, 0, 255),
    gsDPSetEnvColor(60, 30, 0, 255),
    gsSPTexture(1000, 1000, 0, 0, G_ON),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_glovesVtx_000AC0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 1, 4, 0, 1, 6, 4, 0),
    gsSP2Triangles(6, 7, 4, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 11, 8, 0, 12, 8, 7, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 16, 0, 17, 14, 13, 0),
    gsSP2Triangles(18, 17, 13, 0, 12, 13, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(12, 15, 28, 0, 29, 25, 30, 0),
    gsSP2Triangles(23, 31, 30, 0, 31, 22, 30, 0),
    gsSPVertex(&object_gi_glovesVtx_000CC0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 6, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 6, 15, 0, 14, 16, 6, 0),
    gsSP2Triangles(5, 9, 17, 0, 5, 4, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 22, 20, 0),
    gsSP2Triangles(15, 23, 24, 0, 15, 24, 14, 0),
    gsSP2Triangles(25, 26, 12, 0, 25, 12, 11, 0),
    gsSP2Triangles(9, 27, 18, 0, 9, 18, 4, 0),
    gsSP2Triangles(9, 4, 3, 0, 15, 28, 7, 0),
    gsSP2Triangles(15, 7, 5, 0, 12, 26, 23, 0),
    gsSP2Triangles(12, 23, 15, 0, 29, 30, 10, 0),
    gsSP1Triangle(29, 10, 12, 0),
    gsSPVertex(&object_gi_glovesVtx_000CC0[31], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 9, 7, 0, 3, 5, 10, 0),
    gsSP2Triangles(5, 11, 10, 0, 2, 7, 12, 0),
    gsSP2Triangles(12, 13, 0, 0, 0, 2, 12, 0),
    gsSP2Triangles(1, 14, 2, 0, 1, 3, 14, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 60, 100, 255),
    gsDPSetEnvColor(60, 10, 20, 255),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsSPVertex(&object_gi_glovesVtx_000FA0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(1, 5, 4, 0, 1, 0, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 50, 20, 0, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_glovesVtx_001000[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(1, 3, 5, 0, 1, 6, 7, 0),
    gsSP2Triangles(2, 1, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiGauntletsPlateDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_glovesTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 1, 5, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_glovesVtx_001180[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(0, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 13, 12, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 16, 25, 26, 0),
    gsSP2Triangles(24, 27, 22, 0, 28, 22, 27, 0),
    gsSP2Triangles(18, 19, 20, 0, 29, 20, 19, 0),
    gsSP1Triangle(26, 14, 16, 0),
    gsSPVertex(&object_gi_glovesVtx_001180[30], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(2, 1, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 14, 13, 0),
    gsSP2Triangles(16, 18, 20, 0, 9, 11, 21, 0),
    gsSPEndDisplayList(),
}; 


