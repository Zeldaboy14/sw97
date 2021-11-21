#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_truth_mask.h"

static Vtx object_gi_truth_maskVtx_000800[3];
static Vtx object_gi_truth_maskVtx_000830[32];
static Vtx object_gi_truth_maskVtx_000A30[27];
static Vtx object_gi_truth_maskVtx_000BE0[32];
static Vtx object_gi_truth_maskVtx_000DE0[32];
static Vtx object_gi_truth_maskVtx_000FE0[24];
static Vtx object_gi_truth_maskVtx_001160[8];
static Vtx object_gi_truth_maskVtx_0011E0[3];
static Vtx object_gi_truth_maskVtx_001210[11];
static Vtx object_gi_truth_maskVtx_0012C0[9];
static Vtx object_gi_truth_maskVtx_001350[8];

u64 object_gi_truth_maskTex_000000[] = {
#include "assets/objects/object_gi_truth_mask//object_gi_truth_maskTex_000000.i8.inc.c"
};

u64 object_gi_truth_maskTex_000400[] = {
#include "assets/objects/object_gi_truth_mask//object_gi_truth_maskTex_000400.i8.inc.c"
};

static Vtx object_gi_truth_maskVtx_000800[3] = {
    VTX(-19, -3, 5, 46, 1591, 162, 236, 71, 255),
    VTX(-18, -1, 7, 66, 1548, 166, 245, 78, 255),
    VTX(-19, 5, 5, 47, 1459, 168, 16, 80, 255),
}; 

static Vtx object_gi_truth_maskVtx_000830[32] = {
    VTX(-18, -1, 7, 66, 1548, 166, 245, 78, 255),
    VTX(-17, 3, 8, 77, 1488, 180, 18, 90, 255),
    VTX(-19, 5, 5, 47, 1459, 168, 16, 80, 255),
    VTX(18, -1, 7, 446, 1548, 90, 245, 78, 255),
    VTX(19, 5, 5, 465, 1459, 88, 16, 80, 255),
    VTX(17, 3, 8, 435, 1488, 76, 18, 90, 255),
    VTX(19, -3, 5, 466, 1591, 94, 236, 71, 255),
    VTX(3, -14, 11, 302, 1814, 0, 209, 110, 255),
    VTX(8, -12, 12, 346, 1768, 25, 250, 117, 255),
    VTX(0, -11, 13, 256, 1767, 0, 243, 119, 255),
    VTX(9, -8, 11, 365, 1701, 48, 254, 109, 255),
    VTX(-21, 19, 0, 1, 1300, 201, 64, 85, 255),
    VTX(-11, 10, 10, 128, 1342, 201, 32, 101, 255),
    VTX(-6, 12, 11, 183, 1293, 233, 45, 108, 255),
    VTX(-9, -8, 11, 147, 1701, 208, 254, 109, 255),
    VTX(-8, -12, 12, 166, 1768, 231, 250, 117, 255),
    VTX(-19, -3, 5, 46, 1591, 162, 236, 71, 255),
    VTX(9, -22, 5, 423, 1903, 76, 185, 59, 255),
    VTX(15, -19, -5, 556, 1826, 97, 198, 39, 255),
    VTX(7, -28, -4, 581, 1956, 80, 176, 40, 255),
    VTX(0, -31, 3, 256, 2016, 0, 172, 85, 255),
    VTX(0, -28, 5, 256, 1988, 0, 196, 103, 255),
    VTX(-9, -22, 5, 89, 1903, 180, 185, 59, 255),
    VTX(-7, -28, -4, -69, 1956, 176, 176, 40, 255),
    VTX(-15, -19, -5, -44, 1826, 159, 198, 39, 255),
    VTX(-30, 7, -13, -66, 1464, 150, 227, 48, 255),
    VTX(30, 7, -13, 578, 1464, 106, 227, 48, 255),
    VTX(21, 19, 0, 511, 1300, 55, 64, 85, 255),
    VTX(31, 27, -10, 564, 1310, 80, 30, 84, 255),
    VTX(-31, 27, -10, -52, 1310, 176, 30, 84, 255),
    VTX(0, 31, 5, 256, 1074, 0, 102, 63, 255),
    VTX(0, 30, -12, -256, 1148, 0, 113, 39, 255),
}; 

static Vtx object_gi_truth_maskVtx_000A30[27] = {
    VTX(0, 30, -12, 768, 1148, 0, 113, 39, 255),
    VTX(0, 31, 5, 256, 1074, 0, 102, 63, 255),
    VTX(21, 19, 0, 511, 1300, 55, 64, 85, 255),
    VTX(31, 27, -10, 564, 1310, 80, 30, 84, 255),
    VTX(11, 10, 10, 384, 1342, 55, 32, 101, 255),
    VTX(8, 7, 12, 351, 1394, 34, 23, 112, 255),
    VTX(14, 3, 10, 409, 1486, 51, 10, 108, 255),
    VTX(-11, 10, 10, 128, 1342, 201, 32, 101, 255),
    VTX(-14, 3, 10, 103, 1486, 205, 10, 108, 255),
    VTX(-8, 7, 12, 161, 1394, 222, 23, 112, 255),
    VTX(-6, 12, 11, 183, 1293, 233, 45, 108, 255),
    VTX(6, 12, 11, 329, 1293, 23, 45, 108, 255),
    VTX(0, 9, 13, 256, 1329, 0, 34, 115, 255),
    VTX(0, 27, 6, 256, 1104, 0, 48, 109, 255),
    VTX(-21, 19, 0, 1, 1300, 201, 64, 85, 255),
    VTX(-8, -12, 12, 166, 1768, 231, 250, 117, 255),
    VTX(-3, -14, 11, 210, 1814, 0, 209, 110, 255),
    VTX(0, -11, 13, 256, 1767, 0, 243, 119, 255),
    VTX(-19, -3, 5, 46, 1591, 162, 236, 71, 255),
    VTX(-31, 27, -10, -52, 1310, 176, 30, 84, 255),
    VTX(-30, 7, -13, -66, 1464, 150, 227, 48, 255),
    VTX(-19, 5, 5, 47, 1459, 168, 16, 80, 255),
    VTX(19, -3, 5, 466, 1591, 94, 236, 71, 255),
    VTX(19, 5, 5, 465, 1459, 88, 16, 80, 255),
    VTX(30, 7, -13, 578, 1464, 106, 227, 48, 255),
    VTX(-17, 3, 8, 77, 1488, 180, 18, 90, 255),
    VTX(17, 3, 8, 435, 1488, 76, 18, 90, 255),
}; 

static Vtx object_gi_truth_maskVtx_000BE0[32] = {
    VTX(11, 10, 10, 384, 1342, 72, 25, 92, 255),
    VTX(19, 5, 5, 465, 1459, 72, 25, 92, 255),
    VTX(21, 19, 0, 511, 1300, 72, 25, 92, 255),
    VTX(-6, 12, 11, 183, 1293, 0, 38, 113, 255),
    VTX(6, 12, 11, 329, 1293, 0, 38, 113, 255),
    VTX(0, 27, 6, 256, 1104, 0, 38, 113, 255),
    VTX(-19, 5, 5, 47, 1459, 184, 25, 92, 255),
    VTX(-11, 10, 10, 128, 1342, 184, 25, 92, 255),
    VTX(-21, 19, 0, 1, 1300, 184, 25, 92, 255),
    VTX(-9, -8, 11, -5, 1756, 195, 209, 91, 255),
    VTX(-7, -7, 13, 38, 1752, 206, 199, 92, 255),
    VTX(-14, 0, 10, -13, 1515, 197, 248, 104, 255),
    VTX(-9, -8, 11, 1019, 1756, 195, 209, 91, 255),
    VTX(-14, 0, 10, 1011, 1515, 197, 248, 104, 255),
    VTX(-18, -1, 7, 988, 1535, 190, 235, 97, 255),
    VTX(-4, 4, 15, 109, 1312, 192, 44, 91, 255),
    VTX(0, 7, 15, 256, 1185, 0, 81, 88, 255),
    VTX(0, 9, 13, 256, 1065, 0, 57, 105, 255),
    VTX(-7, 5, 12, 29, 1290, 212, 26, 108, 255),
    VTX(-8, 7, 12, 17, 1290, 221, 10, 114, 255),
    VTX(7, -7, 13, 474, 1752, 50, 199, 92, 255),
    VTX(0, -9, 14, 256, 1954, 0, 195, 103, 255),
    VTX(0, -11, 13, 256, 2005, 0, 236, 118, 255),
    VTX(9, -8, 11, 517, 1756, 61, 209, 91, 255),
    VTX(18, -1, 7, 548, 1535, 66, 235, 97, 255),
    VTX(14, 0, 10, 525, 1515, 59, 248, 104, 255),
    VTX(-14, 3, 10, -18, 1457, 204, 20, 106, 255),
    VTX(4, -6, 12, 463, 1837, 37, 183, 87, 255),
    VTX(8, 0, 12, 487, 1521, 75, 242, 92, 255),
    VTX(3, -4, 15, 366, 1768, 37, 185, 89, 255),
    VTX(5, 0, 15, 413, 1503, 72, 242, 95, 255),
    VTX(4, 4, 15, 403, 1312, 64, 44, 91, 255),
}; 

static Vtx object_gi_truth_maskVtx_000DE0[32] = {
    VTX(8, 0, 12, 487, 1521, 75, 242, 92, 255),
    VTX(7, 5, 12, 483, 1290, 44, 26, 108, 255),
    VTX(4, 4, 15, 403, 1312, 64, 44, 91, 255),
    VTX(-4, 4, 15, 109, 1312, 192, 44, 91, 255),
    VTX(-7, 5, 12, 29, 1290, 212, 26, 108, 255),
    VTX(-8, 0, 12, 25, 1521, 181, 242, 92, 255),
    VTX(-5, 0, 15, 99, 1503, 184, 242, 95, 255),
    VTX(-3, -4, 15, 146, 1768, 208, 194, 90, 255),
    VTX(-4, -6, 12, 49, 1837, 231, 176, 85, 255),
    VTX(0, 9, 13, 256, 1065, 0, 57, 105, 255),
    VTX(0, 7, 15, 256, 1185, 0, 81, 88, 255),
    VTX(8, 7, 12, 495, 1290, 35, 10, 114, 255),
    VTX(14, 0, 10, 525, 1515, 59, 248, 104, 255),
    VTX(14, 3, 10, 530, 1457, 52, 20, 106, 255),
    VTX(0, -11, 13, 256, 2005, 0, 236, 118, 255),
    VTX(0, -9, 14, 256, 1954, 0, 195, 103, 255),
    VTX(-7, -7, 13, 38, 1752, 206, 199, 92, 255),
    VTX(-9, -8, 11, -5, 1756, 195, 209, 91, 255),
    VTX(17, 3, 8, 540, 1469, 58, 3, 105, 255),
    VTX(18, -1, 7, 548, 1535, 66, 235, 97, 255),
    VTX(-14, 0, 10, 1011, 1515, 197, 248, 104, 255),
    VTX(-17, 3, 8, 996, 1469, 198, 3, 105, 255),
    VTX(-18, -1, 7, 988, 1535, 190, 235, 97, 255),
    VTX(-14, 3, 10, 1006, 1457, 204, 20, 106, 255),
    VTX(3, -4, 15, 366, 1768, 37, 185, 89, 255),
    VTX(4, -6, 12, 463, 1837, 37, 183, 87, 255),
    VTX(8, -12, 12, 454, 1421, 35, 234, 112, 255),
    VTX(7, -17, 11, 475, 1585, 43, 218, 105, 255),
    VTX(15, -10, 8, 526, 1422, 86, 217, 73, 255),
    VTX(-15, -10, 8, -14, 1422, 170, 217, 73, 255),
    VTX(-7, -17, 11, 37, 1585, 213, 218, 105, 255),
    VTX(-8, -12, 12, 58, 1421, 221, 234, 112, 255),
}; 

static Vtx object_gi_truth_maskVtx_000FE0[24] = {
    VTX(-8, -12, 12, 58, 1421, 221, 234, 112, 255),
    VTX(-7, -17, 11, 37, 1585, 213, 218, 105, 255),
    VTX(0, -21, 11, 256, 1966, 0, 216, 113, 255),
    VTX(-3, -14, 11, 96, 1416, 188, 239, 97, 255),
    VTX(0, -18, 13, 256, 1727, 0, 188, 98, 255),
    VTX(15, -10, 8, 526, 1422, 86, 217, 73, 255),
    VTX(19, -3, 5, 545, 1355, 88, 227, 75, 255),
    VTX(8, -12, 12, 454, 1421, 35, 234, 112, 255),
    VTX(-19, -3, 5, -33, 1355, 168, 227, 75, 255),
    VTX(-15, -10, 8, -14, 1422, 170, 217, 73, 255),
    VTX(-2, -15, 13, 188, 1492, 183, 13, 93, 255),
    VTX(3, -14, 11, 416, 1416, 68, 239, 97, 255),
    VTX(7, -17, 11, 475, 1585, 43, 218, 105, 255),
    VTX(9, -22, 5, 579, 1732, 78, 180, 50, 255),
    VTX(8, -21, 8, 532, 1721, 76, 180, 51, 255),
    VTX(-8, -21, 8, 1004, 1721, 180, 180, 51, 255),
    VTX(-15, -10, 8, 1010, 1422, 170, 217, 73, 255),
    VTX(-9, -22, 5, 957, 1732, 178, 180, 50, 255),
    VTX(-19, -3, 5, 991, 1355, 168, 227, 75, 255),
    VTX(2, -15, 13, 324, 1492, 73, 13, 93, 255),
    VTX(0, -11, 13, 256, 1242, 0, 236, 118, 255),
    VTX(0, -14, 13, 256, 1397, 0, 39, 113, 255),
    VTX(0, -28, 5, 768, 1936, 0, 155, 63, 255),
    VTX(0, -26, 8, 768, 2014, 0, 154, 62, 255),
}; 

static Vtx object_gi_truth_maskVtx_001160[8] = {
    VTX(-3, -4, 15, -62, 1891, 236, 221, 112, 255),
    VTX(3, -4, 15, 574, 1891, 20, 221, 112, 255),
    VTX(0, 1, 17, 256, 1601, 0, 253, 119, 255),
    VTX(5, 0, 15, 542, 1612, 43, 247, 111, 255),
    VTX(4, 4, 15, 546, 1355, 38, 18, 112, 255),
    VTX(0, 7, 15, -256, 1051, 0, 31, 115, 255),
    VTX(-4, 4, 15, -34, 1355, 218, 18, 112, 255),
    VTX(-5, 0, 15, -30, 1612, 213, 247, 111, 255),
}; 

static Vtx object_gi_truth_maskVtx_0011E0[3] = {
    VTX(-7, -7, 13, 22, 1724, 250, 26, 116, 255),
    VTX(-4, -6, 12, 21, 1810, 9, 41, 112, 255),
    VTX(-8, 0, 12, 10, 1479, 232, 9, 117, 255),
}; 

static Vtx object_gi_truth_maskVtx_001210[11] = {
    VTX(4, -6, 12, 491, 1810, 247, 41, 112, 255),
    VTX(-4, -6, 12, 21, 1810, 9, 41, 112, 255),
    VTX(0, -9, 14, 256, 1970, 0, 56, 105, 255),
    VTX(-7, -7, 13, 22, 1724, 250, 26, 116, 255),
    VTX(7, -7, 13, 490, 1724, 6, 26, 116, 255),
    VTX(8, 0, 12, 502, 1479, 24, 9, 117, 255),
    VTX(-14, 0, 10, -21, 1491, 212, 7, 111, 255),
    VTX(-8, 0, 12, 10, 1479, 232, 9, 117, 255),
    VTX(-7, 5, 12, 12, 1262, 213, 11, 111, 255),
    VTX(14, 0, 10, 533, 1491, 44, 7, 111, 255),
    VTX(7, 5, 12, 500, 1262, 43, 11, 111, 255),
}; 

static Vtx object_gi_truth_maskVtx_0012C0[9] = {
    VTX(-19, 5, 5, 16, 939, 184, 25, 92, 255),
    VTX(-11, 10, 10, 1053, 939, 184, 25, 92, 255),
    VTX(-21, 19, 0, 499, -335, 184, 25, 92, 255),
    VTX(-6, 12, 11, -59, 992, 0, 38, 113, 255),
    VTX(6, 12, 11, 1083, 992, 0, 38, 113, 255),
    VTX(0, 27, 6, 512, -341, 0, 38, 113, 255),
    VTX(11, 10, 10, 1053, 939, 72, 25, 92, 255),
    VTX(19, 5, 5, 16, 939, 72, 25, 92, 255),
    VTX(21, 19, 0, 499, -335, 72, 25, 92, 255),
}; 

static Vtx object_gi_truth_maskVtx_001350[8] = {
    VTX(19, -3, 5, 1079, 129, 106, 227, 48, 255),
    VTX(30, 7, -13, 169, 934, 106, 227, 48, 255),
    VTX(31, 27, -10, -389, 119, 104, 247, 58, 255),
    VTX(15, -19, -5, 1318, 1274, 104, 209, 36, 255),
    VTX(-19, -3, 5, 1079, 129, 150, 227, 48, 255),
    VTX(-31, 27, -10, -389, 119, 152, 247, 58, 255),
    VTX(-30, 7, -13, 169, 934, 150, 227, 48, 255),
    VTX(-15, -19, -5, 1318, 1274, 152, 209, 36, 255),
}; 

Gfx gGiMaskOfTruthDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(140, 110, 120, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_truth_maskVtx_000800[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_truth_maskVtx_000830[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 8, 6, 10, 0),
    gsSP2Triangles(10, 6, 3, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 9, 0, 16, 15, 14, 0),
    gsSP2Triangles(14, 0, 16, 0, 17, 18, 6, 0),
    gsSP2Triangles(17, 19, 18, 0, 20, 17, 21, 0),
    gsSP2Triangles(17, 20, 19, 0, 21, 22, 20, 0),
    gsSP2Triangles(23, 20, 22, 0, 22, 24, 23, 0),
    gsSP2Triangles(16, 24, 22, 0, 16, 25, 24, 0),
    gsSP2Triangles(6, 18, 26, 0, 27, 4, 28, 0),
    gsSP2Triangles(29, 2, 11, 0, 30, 31, 11, 0),
    gsSP1Triangle(29, 11, 31, 0),
    gsSPVertex(&object_gi_truth_maskVtx_000A30[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 5, 4, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 9, 12, 0),
    gsSP2Triangles(12, 5, 11, 0, 2, 1, 13, 0),
    gsSP2Triangles(14, 13, 1, 0, 13, 11, 2, 0),
    gsSP2Triangles(2, 11, 4, 0, 13, 14, 10, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 21, 19, 0, 22, 3, 23, 0),
    gsSP2Triangles(22, 24, 3, 0, 25, 7, 21, 0),
    gsSP2Triangles(8, 7, 25, 0, 26, 4, 6, 0),
    gsSP1Triangle(26, 23, 4, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 100, 0, 255),
    gsDPSetEnvColor(100, 0, 50, 255),
    gsSPVertex(&object_gi_truth_maskVtx_000BE0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 18, 17, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(11, 18, 19, 0, 22, 23, 20, 0),
    gsSP2Triangles(25, 20, 23, 0, 19, 26, 11, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 28, 30, 0),
    gsSP1Triangle(30, 28, 31, 0),
    gsSPVertex(&object_gi_truth_maskVtx_000DE0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(5, 8, 7, 0, 2, 9, 10, 0),
    gsSP2Triangles(2, 1, 9, 0, 1, 11, 9, 0),
    gsSP2Triangles(12, 11, 1, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(12, 18, 13, 0, 12, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 8, 25, 0, 24, 7, 8, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_gi_truth_maskVtx_000FE0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 0, 8, 9, 0),
    gsSP2Triangles(2, 3, 0, 0, 4, 10, 3, 0),
    gsSP2Triangles(2, 7, 11, 0, 2, 12, 7, 0),
    gsSP2Triangles(13, 5, 14, 0, 6, 5, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 17, 16, 18, 0),
    gsSP2Triangles(11, 4, 2, 0, 11, 19, 4, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 11, 20, 0),
    gsSP2Triangles(22, 23, 17, 0, 23, 15, 17, 0),
    gsSP2Triangles(20, 10, 21, 0, 20, 3, 10, 0),
    gsSP2Triangles(14, 23, 13, 0, 23, 22, 13, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(160, 120, 0, 255),
    gsSPTexture(5000, 5000, 0, 0, G_ON),
    gsSPVertex(&object_gi_truth_maskVtx_001160[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 2, 4, 5, 0),
    gsSP2Triangles(2, 5, 6, 0, 2, 6, 7, 0),
    gsSP1Triangle(2, 7, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiMaskOfTruthAccentsDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(200, 100, 255, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_gi_truth_maskVtx_0011E0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_truth_maskVtx_001210[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 2, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 3, 7, 0, 6, 7, 8, 0),
    gsSP2Triangles(4, 9, 5, 0, 5, 9, 10, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetPrimColor(0, 0, 255, 255, 200, 255),
    gsDPSetEnvColor(100, 100, 0, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_truth_maskTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_truth_maskVtx_0012C0[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 150, 0, 0, 255),
    gsDPSetEnvColor(50, 0, 0, 255),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_truth_maskTex_000400),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_gi_truth_maskVtx_001350[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 


