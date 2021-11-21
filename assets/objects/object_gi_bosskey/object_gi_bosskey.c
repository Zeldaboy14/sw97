#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_bosskey.h"

static Vtx object_gi_bosskeyVtx_000000[4];
static Vtx object_gi_bosskeyVtx_000040[94];
static Vtx object_gi_bosskeyVtx_000620[81];
static Vtx object_gi_bosskeyVtx_000B30[3];
static Vtx object_gi_bosskeyVtx_000B60[20];

static Vtx object_gi_bosskeyVtx_000000[4] = {
    VTX(-10, -22, 2, 468, 1896, 53, 203, 94, 255),
    VTX(-11, -24, 0, 512, 1916, 242, 137, 0, 255),
    VTX(-10, -22, -2, 556, 1896, 53, 203, 162, 255),
    VTX(-8, -20, 0, 512, 1881, 119, 14, 0, 255),
}; 

static Vtx object_gi_bosskeyVtx_000040[94] = {
    VTX(-8, -20, 0, 512, 1881, 119, 14, 0, 255),
    VTX(-10, -22, -2, -468, 1896, 53, 203, 162, 255),
    VTX(-16, -16, -3, -256, 1991, 7, 249, 137, 255),
    VTX(-14, -14, 0, 0, 2048, 91, 77, 0, 255),
    VTX(-11, -24, 0, 512, 1916, 242, 137, 0, 255),
    VTX(-18, -18, 0, 0, 2048, 179, 165, 0, 255),
    VTX(-10, -22, 2, 468, 1896, 53, 203, 94, 255),
    VTX(-16, -16, 3, 256, 1991, 7, 249, 119, 255),
    VTX(-14, -29, 2, 476, 1917, 52, 204, 94, 255),
    VTX(-15, -31, 0, 512, 1930, 241, 137, 0, 255),
    VTX(-14, -29, -2, 548, 1917, 52, 204, 162, 255),
    VTX(-12, -27, 0, 512, 1908, 119, 15, 0, 255),
    VTX(-14, -29, -2, -476, 1917, 52, 204, 162, 255),
    VTX(-21, -21, -3, -256, 2009, 6, 250, 137, 255),
    VTX(-19, -19, 0, 0, 2048, 90, 78, 0, 255),
    VTX(-24, -24, 0, 0, 2048, 178, 166, 0, 255),
    VTX(-21, -21, 3, 256, 2009, 6, 250, 119, 255),
    VTX(-23, -28, 0, 512, 2011, 20, 138, 0, 255),
    VTX(-25, -25, 4, 256, 2011, 207, 207, 97, 255),
    VTX(-28, -23, 0, 0, 2011, 138, 20, 0, 255),
    VTX(-25, -25, -4, -256, 2011, 207, 207, 159, 255),
    VTX(-6, 0, 0, 0, 1516, 142, 36, 0, 255),
    VTX(-3, -3, -4, -256, 1516, 248, 248, 137, 255),
    VTX(-3, -3, 4, 256, 1516, 248, 248, 119, 255),
    VTX(0, -6, 0, 512, 1516, 36, 142, 0, 255),
    VTX(-25, -25, -4, 768, 2011, 207, 207, 159, 255),
    VTX(-3, -3, -4, 768, 1516, 248, 248, 137, 255),
    VTX(2, 19, 4, 50, 1212, 30, 7, 115, 255),
    VTX(2, 19, -4, -50, 1212, 25, 21, 141, 255),
    VTX(1, 23, -3, -26, 1233, 65, 8, 156, 255),
    VTX(1, 23, 3, 26, 1233, 35, 25, 111, 255),
    VTX(19, 2, -4, 562, 1212, 7, 30, 141, 255),
    VTX(19, 2, 4, 462, 1212, 21, 25, 115, 255),
    VTX(23, 1, 3, 486, 1233, 25, 35, 111, 255),
    VTX(23, 1, -3, 538, 1233, 8, 65, 156, 255),
    VTX(3, 0, 3, 347, 1202, 12, 240, 118, 255),
    VTX(0, -6, 0, 512, 1516, 36, 142, 0, 255),
    VTX(13, -2, 4, 456, 1264, 1, 6, 119, 255),
    VTX(22, -6, 0, 512, 1323, 50, 147, 0, 255),
    VTX(13, -2, -4, 568, 1264, 9, 3, 137, 255),
    VTX(3, 0, -3, 677, 1202, 12, 240, 138, 255),
    VTX(-2, 13, 4, 56, 1264, 3, 9, 119, 255),
    VTX(-6, 0, 0, 0, 1516, 142, 36, 0, 255),
    VTX(0, 3, 3, 165, 1202, 240, 12, 118, 255),
    VTX(-6, 22, 0, 0, 1323, 147, 50, 0, 255),
    VTX(-2, 13, -4, -56, 1264, 6, 1, 137, 255),
    VTX(0, 3, -3, -165, 1202, 240, 12, 138, 255),
    VTX(-3, -3, -4, -256, 1516, 248, 248, 137, 255),
    VTX(25, 2, 2, 491, 1225, 233, 61, 100, 255),
    VTX(25, 2, -2, 533, 1225, 246, 30, 141, 255),
    VTX(2, 25, 2, 21, 1225, 61, 233, 100, 255),
    VTX(0, 30, 0, 0, 1246, 206, 109, 0, 255),
    VTX(-3, -3, -4, 768, 1516, 248, 248, 137, 255),
    VTX(0, 3, -3, 859, 1202, 240, 12, 138, 255),
    VTX(18, 18, 0, 0, 1024, 84, 84, 0, 255),
    VTX(19, 2, -4, -462, 1212, 7, 30, 141, 255),
    VTX(2, 25, -2, -21, 1225, 30, 246, 141, 255),
    VTX(9, 29, 0, 0, 1164, 119, 255, 0, 255),
    VTX(2, 19, -4, 974, 1212, 25, 21, 141, 255),
    VTX(12, 12, -1, 768, 1043, 205, 205, 160, 255),
    VTX(6, 15, -1, 989, 1126, 19, 199, 153, 255),
    VTX(1, 23, -3, -26, 1233, 65, 8, 156, 255),
    VTX(19, 2, 4, 462, 1212, 21, 25, 115, 255),
    VTX(12, 12, 1, 256, 1043, 205, 205, 96, 255),
    VTX(15, 6, 1, 477, 1126, 199, 19, 103, 255),
    VTX(23, 1, -3, 538, 1233, 8, 65, 156, 255),
    VTX(23, 1, 3, 486, 1233, 25, 35, 111, 255),
    VTX(25, 2, 2, 491, 1225, 233, 61, 100, 255),
    VTX(-2, 13, -4, -56, 1264, 6, 1, 137, 255),
    VTX(0, 3, -3, -165, 1202, 240, 12, 138, 255),
    VTX(-6, 0, 0, 0, 1516, 142, 36, 0, 255),
    VTX(1, 23, 3, 26, 1233, 35, 25, 111, 255),
    VTX(-6, 22, 0, 0, 1323, 147, 50, 0, 255),
    VTX(-2, 13, 4, 56, 1264, 3, 9, 119, 255),
    VTX(1, 11, 1, 29, 1198, 70, 245, 96, 255),
    VTX(6, 15, 1, 35, 1126, 0, 196, 103, 255),
    VTX(2, 19, 4, 50, 1212, 30, 7, 115, 255),
    VTX(3, 0, -3, 677, 1202, 12, 240, 138, 255),
    VTX(0, -6, 0, 512, 1516, 36, 142, 0, 255),
    VTX(-3, -3, -4, 768, 1516, 248, 248, 137, 255),
    VTX(13, -2, -4, 568, 1264, 9, 3, 137, 255),
    VTX(19, 2, -4, 562, 1212, 7, 30, 141, 255),
    VTX(22, -6, 0, 512, 1323, 50, 147, 0, 255),
    VTX(30, 0, 0, 512, 1246, 109, 206, 0, 255),
    VTX(8, 2, -1, 566, 1134, 31, 88, 181, 255),
    VTX(11, 1, -1, 541, 1198, 245, 70, 160, 255),
    VTX(3, 0, 3, 347, 1202, 12, 240, 118, 255),
    VTX(-3, -3, 4, 256, 1516, 248, 248, 119, 255),
    VTX(19, 2, -4, -462, 1212, 7, 30, 141, 255),
    VTX(15, 15, -4, -256, 1072, 6, 6, 137, 255),
    VTX(18, 18, 0, 0, 1024, 84, 84, 0, 255),
    VTX(-2, 13, -4, 968, 1264, 6, 1, 137, 255),
    VTX(1, 11, -1, 995, 1198, 83, 251, 170, 255),
    VTX(2, 8, -1, 970, 1134, 88, 31, 181, 255),
}; 

static Vtx object_gi_bosskeyVtx_000620[81] = {
    VTX(-2, 13, -4, 968, 1264, 6, 1, 137, 255),
    VTX(2, 8, -1, 970, 1134, 88, 31, 181, 255),
    VTX(0, 3, -3, 859, 1202, 240, 12, 138, 255),
    VTX(23, 1, -3, 538, 1233, 8, 65, 156, 255),
    VTX(25, 2, -2, 533, 1225, 246, 30, 141, 255),
    VTX(22, -6, 0, 512, 1323, 50, 147, 0, 255),
    VTX(30, 0, 0, 512, 1246, 109, 206, 0, 255),
    VTX(29, 9, 0, 512, 1164, 255, 119, 0, 255),
    VTX(6, 15, -1, 989, 1126, 19, 199, 153, 255),
    VTX(1, 11, -1, 995, 1198, 83, 251, 170, 255),
    VTX(11, 1, -1, 541, 1198, 245, 70, 160, 255),
    VTX(15, 6, -1, 547, 1126, 196, 0, 153, 255),
    VTX(19, 2, -4, 562, 1212, 7, 30, 141, 255),
    VTX(0, 3, 3, 165, 1202, 240, 12, 118, 255),
    VTX(-3, -3, 4, 256, 1516, 248, 248, 119, 255),
    VTX(3, 0, 3, 347, 1202, 12, 240, 118, 255),
    VTX(18, 18, 0, 0, 1024, 84, 84, 0, 255),
    VTX(15, 15, 4, 256, 1072, 6, 6, 119, 255),
    VTX(19, 2, 4, 462, 1212, 21, 25, 115, 255),
    VTX(13, -2, 4, 456, 1264, 1, 6, 119, 255),
    VTX(23, 1, 3, 486, 1233, 25, 35, 111, 255),
    VTX(2, 19, -4, 974, 1212, 25, 21, 141, 255),
    VTX(25, 2, 2, 491, 1225, 233, 61, 100, 255),
    VTX(-6, 22, 0, 0, 1323, 147, 50, 0, 255),
    VTX(1, 23, -3, -26, 1233, 65, 8, 156, 255),
    VTX(-2, 13, -4, -56, 1264, 6, 1, 137, 255),
    VTX(2, 25, 2, 21, 1225, 61, 233, 100, 255),
    VTX(1, 23, 3, 26, 1233, 35, 25, 111, 255),
    VTX(9, 29, 0, 0, 1164, 119, 255, 0, 255),
    VTX(2, 25, -2, -21, 1225, 30, 246, 141, 255),
    VTX(0, 30, 0, 0, 1246, 206, 109, 0, 255),
    VTX(13, -2, 4, 456, 1264, 1, 6, 119, 255),
    VTX(11, 1, 1, 483, 1198, 251, 83, 86, 255),
    VTX(8, 2, 1, 458, 1134, 31, 88, 75, 255),
    VTX(3, 0, 3, 347, 1202, 12, 240, 118, 255),
    VTX(-2, 13, 4, 56, 1264, 3, 9, 119, 255),
    VTX(2, 19, 4, 50, 1212, 30, 7, 115, 255),
    VTX(1, 23, 3, 26, 1233, 35, 25, 111, 255),
    VTX(23, 1, 3, 486, 1233, 25, 35, 111, 255),
    VTX(22, -6, 0, 512, 1323, 50, 147, 0, 255),
    VTX(25, 2, 2, 491, 1225, 233, 61, 100, 255),
    VTX(2, 8, 1, 54, 1134, 88, 31, 75, 255),
    VTX(1, 11, 1, 29, 1198, 70, 245, 96, 255),
    VTX(0, 3, 3, 165, 1202, 240, 12, 118, 255),
    VTX(12, 12, 1, 256, 1043, 205, 205, 96, 255),
    VTX(15, 15, 4, 256, 1072, 6, 6, 119, 255),
    VTX(2, 25, 2, 21, 1225, 61, 233, 100, 255),
    VTX(-6, 22, 0, 0, 1323, 147, 50, 0, 255),
    VTX(2, 19, -4, 974, 1212, 25, 21, 141, 255),
    VTX(-2, 13, -4, 968, 1264, 6, 1, 137, 255),
    VTX(1, 23, -3, 998, 1233, 65, 8, 156, 255),
    VTX(19, 2, -4, 562, 1212, 7, 30, 141, 255),
    VTX(13, -2, -4, 568, 1264, 9, 3, 137, 255),
    VTX(11, 1, -1, 541, 1198, 245, 70, 160, 255),
    VTX(12, 12, -1, 768, 1043, 205, 205, 160, 255),
    VTX(15, 15, -4, 768, 1072, 6, 6, 137, 255),
    VTX(15, 6, -1, 547, 1126, 196, 0, 153, 255),
    VTX(19, 2, 4, 462, 1212, 21, 25, 115, 255),
    VTX(15, 6, 1, 477, 1126, 199, 19, 103, 255),
    VTX(1, 23, -3, -26, 1233, 65, 8, 156, 255),
    VTX(2, 25, -2, -21, 1225, 30, 246, 141, 255),
    VTX(6, 15, 1, 35, 1126, 0, 196, 103, 255),
    VTX(30, 0, 0, 512, 1246, 109, 206, 0, 255),
    VTX(22, -6, 0, 512, 1323, 50, 147, 0, 255),
    VTX(25, 2, -2, 533, 1225, 246, 30, 141, 255),
    VTX(0, 30, 0, 0, 1246, 206, 109, 0, 255),
    VTX(2, 25, -2, -21, 1225, 30, 246, 141, 255),
    VTX(-6, 22, 0, 0, 1323, 147, 50, 0, 255),
    VTX(15, 15, -4, 768, 1072, 6, 6, 137, 255),
    VTX(19, 2, -4, 562, 1212, 7, 30, 141, 255),
    VTX(12, 12, -1, 768, 1043, 205, 205, 160, 255),
    VTX(29, 9, 0, 512, 1164, 255, 119, 0, 255),
    VTX(25, 2, 2, 491, 1225, 233, 61, 100, 255),
    VTX(-6, 0, 0, 0, 1516, 142, 36, 0, 255),
    VTX(-3, -3, 4, 256, 1516, 248, 248, 119, 255),
    VTX(0, 3, 3, 165, 1202, 240, 12, 118, 255),
    VTX(18, 18, 0, 0, 1024, 84, 84, 0, 255),
    VTX(15, 15, -4, -256, 1072, 6, 6, 137, 255),
    VTX(2, 19, -4, -50, 1212, 25, 21, 141, 255),
    VTX(2, 19, 4, 50, 1212, 30, 7, 115, 255),
    VTX(15, 15, 4, 256, 1072, 6, 6, 119, 255),
}; 

static Vtx object_gi_bosskeyVtx_000B30[3] = {
    VTX(12, 12, 1, 256, 1079, 50, 50, 96, 255),
    VTX(6, 15, 1, 35, 1320, 247, 69, 97, 255),
    VTX(7, 7, 7, 256, 1521, 248, 248, 119, 255),
}; 

static Vtx object_gi_bosskeyVtx_000B60[20] = {
    VTX(6, 15, 1, 35, 1320, 247, 69, 97, 255),
    VTX(1, 11, 1, 29, 1615, 184, 10, 95, 255),
    VTX(7, 7, 7, 256, 1521, 248, 248, 119, 255),
    VTX(2, 8, 1, 54, 1740, 169, 13, 81, 255),
    VTX(0, 3, 3, 165, 1891, 197, 19, 102, 255),
    VTX(3, 0, 3, 347, 1891, 19, 197, 102, 255),
    VTX(8, 2, 1, 458, 1740, 13, 169, 81, 255),
    VTX(11, 1, 1, 483, 1615, 10, 184, 95, 255),
    VTX(15, 6, 1, 477, 1320, 69, 247, 97, 255),
    VTX(12, 12, 1, 256, 1079, 50, 50, 96, 255),
    VTX(7, 7, -7, 768, 1521, 248, 248, 137, 255),
    VTX(6, 15, -1, 989, 1320, 247, 69, 159, 255),
    VTX(12, 12, -1, 768, 1079, 50, 50, 160, 255),
    VTX(1, 11, -1, 995, 1615, 184, 10, 161, 255),
    VTX(2, 8, -1, 970, 1740, 169, 13, 175, 255),
    VTX(0, 3, -3, 859, 1891, 197, 19, 154, 255),
    VTX(3, 0, -3, 677, 1891, 19, 197, 154, 255),
    VTX(8, 2, -1, 566, 1740, 13, 169, 175, 255),
    VTX(11, 1, -1, 541, 1615, 10, 184, 161, 255),
    VTX(15, 6, -1, 547, 1320, 69, 247, 159, 255),
}; 

Gfx gGiBossKeyDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, 1, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsDPSetEnvColor(140, 120, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032090),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_bosskeyVtx_000000[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000040[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(12, 9, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(9, 8, 16, 0, 9, 16, 15, 0),
    gsSP2Triangles(8, 11, 14, 0, 8, 14, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(19, 18, 23, 0, 19, 23, 21, 0),
    gsSP2Triangles(18, 17, 24, 0, 18, 24, 23, 0),
    gsSP2Triangles(17, 25, 26, 0, 17, 26, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000040[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 5, 9, 0, 7, 5, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 16, 11, 0),
    gsSP2Triangles(17, 18, 3, 0, 13, 19, 20, 0),
    gsSP2Triangles(2, 6, 7, 0, 21, 22, 9, 0),
    gsSP2Triangles(23, 1, 24, 0, 19, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 20, 19, 26, 0),
    gsSP1Triangle(30, 13, 25, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000040[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 3, 0, 3, 20, 18, 0),
    gsSP2Triangles(21, 5, 20, 0, 22, 23, 18, 0),
    gsSP2Triangles(18, 15, 22, 0, 24, 25, 16, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000620[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 7, 0, 8, 9, 0, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 18, 0),
    gsSP2Triangles(0, 21, 8, 0, 7, 22, 6, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 24, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000620[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 4, 0, 12, 10, 4, 0),
    gsSP2Triangles(5, 13, 14, 0, 15, 16, 6, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 17, 24, 0, 25, 23, 20, 0),
    gsSP2Triangles(0, 26, 27, 0, 28, 29, 15, 0),
    gsSP2Triangles(27, 1, 0, 0, 5, 4, 11, 0),
    gsSP2Triangles(13, 5, 30, 0, 13, 26, 14, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000620[62], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 2, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 18, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiBossKeyGemDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, 1, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 128, 255, 170, 255, 255),
    gsDPSetEnvColor(255, 0, 100, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(6000, 6000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032090),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 1, 0, 0, 5, 15, 0, 5, 15),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_bosskeyVtx_000B30[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_bosskeyVtx_000B60[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 2, 4, 5, 0),
    gsSP2Triangles(2, 5, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(2, 7, 8, 0, 2, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(10, 14, 13, 0, 15, 14, 10, 0),
    gsSP2Triangles(16, 15, 10, 0, 17, 16, 10, 0),
    gsSP2Triangles(18, 17, 10, 0, 19, 18, 10, 0),
    gsSP1Triangle(12, 19, 10, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_001008[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


