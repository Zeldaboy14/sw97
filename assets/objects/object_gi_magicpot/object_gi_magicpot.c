#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_magicpot.h"

static Vtx object_gi_magicpotVtx_000000[3];
static Vtx object_gi_magicpotVtx_000030[13];
static Vtx object_gi_magicpotVtx_000100[59];
static Vtx object_gi_magicpotVtx_0004B0[13];
static Vtx object_gi_magicpotVtx_0007F0[3];
static Vtx object_gi_magicpotVtx_000820[13];
static Vtx object_gi_magicpotVtx_0008F0[82];
static Vtx object_gi_magicpotVtx_000E10[13];

static Vtx object_gi_magicpotVtx_000000[3] = {
    VTX(-4, 8, 2, 85, 1372, 143, 0, 39, 255),
    VTX(-4, 8, -2, -85, 1372, 166, 0, 178, 255),
    VTX(-4, 2, -2, -85, 1700, 143, 0, 217, 255),
}; 

static Vtx object_gi_magicpotVtx_000030[13] = {
    VTX(0, 8, 5, 256, 1372, 233, 0, 117, 255),
    VTX(-4, 8, 2, 85, 1372, 143, 0, 39, 255),
    VTX(-4, 2, 2, 85, 1700, 166, 0, 78, 255),
    VTX(4, 8, 2, 427, 1372, 90, 0, 78, 255),
    VTX(0, 2, 5, 256, 1700, 23, 0, 117, 255),
    VTX(4, 8, -2, 597, 1372, 113, 0, 217, 255),
    VTX(4, 2, 2, 427, 1700, 113, 0, 39, 255),
    VTX(0, 8, -5, 768, 1372, 23, 0, 139, 255),
    VTX(4, 2, -2, 597, 1700, 90, 0, 178, 255),
    VTX(-4, 8, -2, 939, 1372, 166, 0, 178, 255),
    VTX(0, 2, -5, 768, 1700, 233, 0, 139, 255),
    VTX(-4, 2, -2, -85, 1700, 143, 0, 217, 255),
    VTX(-4, 2, -2, 939, 1700, 143, 0, 217, 255),
}; 

static Vtx object_gi_magicpotVtx_000100[59] = {
    VTX(-4, 23, 2, 85, 1095, 162, 195, 40, 255),
    VTX(-4, 23, -2, -85, 1095, 174, 195, 194, 255),
    VTX(-4, 8, -2, -85, 1224, 143, 0, 217, 255),
    VTX(0, 23, 5, 256, 1095, 244, 195, 102, 255),
    VTX(-4, 8, 2, 85, 1224, 166, 0, 78, 255),
    VTX(4, 23, 2, 427, 1095, 82, 195, 62, 255),
    VTX(0, 8, 5, 256, 1224, 23, 0, 117, 255),
    VTX(4, 23, -2, 597, 1095, 94, 195, 216, 255),
    VTX(4, 8, 2, 427, 1224, 113, 0, 39, 255),
    VTX(0, 23, -5, 768, 1095, 12, 195, 154, 255),
    VTX(4, 8, -2, 597, 1224, 90, 0, 178, 255),
    VTX(-4, 23, -2, 939, 1095, 174, 195, 194, 255),
    VTX(0, 8, -5, 768, 1224, 233, 0, 139, 255),
    VTX(-8, 25, 0, 0, 1133, 146, 209, 0, 255),
    VTX(-4, 25, -7, -171, 1133, 201, 209, 161, 255),
    VTX(-4, 25, 7, 171, 1133, 201, 209, 95, 255),
    VTX(4, 25, 7, 341, 1133, 55, 209, 95, 255),
    VTX(8, 25, 0, 512, 1133, 110, 209, 0, 255),
    VTX(4, 25, -7, 683, 1133, 55, 209, 161, 255),
    VTX(-4, 25, -7, 853, 1133, 201, 209, 161, 255),
    VTX(-6, 31, -4, 939, 1100, 202, 102, 225, 255),
    VTX(0, 31, -7, 768, 1100, 0, 102, 194, 255),
    VTX(-6, 31, 4, 85, 1100, 202, 102, 31, 255),
    VTX(-6, 31, -4, -85, 1100, 202, 102, 225, 255),
    VTX(0, 31, 7, 256, 1100, 0, 102, 62, 255),
    VTX(6, 31, 4, 427, 1100, 54, 102, 31, 255),
    VTX(6, 31, -4, 597, 1100, 54, 102, 225, 255),
    VTX(-4, 8, -2, 939, 1224, 143, 0, 217, 255),
    VTX(0, 2, -5, 768, 1435, 0, 54, 149, 255),
    VTX(4, 2, -2, 597, 1435, 92, 54, 203, 255),
    VTX(6, -13, -11, 683, 1814, 68, 26, 161, 255),
    VTX(4, 2, -2, 597, 1435, 92, 54, 203, 255),
    VTX(4, 2, 2, 427, 1435, 92, 54, 53, 255),
    VTX(12, -13, 0, 512, 1814, 116, 26, 11, 255),
    VTX(0, 2, 5, 256, 1435, 0, 54, 107, 255),
    VTX(6, -13, 11, 341, 1814, 48, 26, 106, 255),
    VTX(-4, 2, 2, 85, 1435, 164, 54, 53, 255),
    VTX(-6, -13, 11, 171, 1814, 188, 26, 95, 255),
    VTX(-4, 2, -2, -85, 1435, 164, 54, 203, 255),
    VTX(-12, -13, 0, 0, 1814, 140, 26, 245, 255),
    VTX(-4, 2, -2, 939, 1435, 164, 54, 203, 255),
    VTX(0, 2, -5, 768, 1435, 0, 54, 149, 255),
    VTX(-6, -13, -11, 853, 1814, 208, 26, 150, 255),
    VTX(-6, -23, 11, 171, 1895, 209, 220, 104, 255),
    VTX(-12, -23, 0, 0, 1895, 143, 220, 12, 255),
    VTX(-7, -29, 4, 85, 1964, 193, 161, 36, 255),
    VTX(6, -23, 11, 341, 1895, 67, 220, 92, 255),
    VTX(0, -29, 8, 256, 1964, 0, 147, 49, 255),
    VTX(12, -23, 0, 512, 1895, 113, 220, 244, 255),
    VTX(7, -29, 4, 427, 1964, 63, 161, 36, 255),
    VTX(6, -23, -11, 683, 1895, 47, 220, 152, 255),
    VTX(7, -29, -4, 597, 1964, 42, 147, 232, 255),
    VTX(-6, -23, -11, 853, 1895, 189, 220, 164, 255),
    VTX(0, -29, -8, 768, 1964, 0, 161, 183, 255),
    VTX(-6, -23, -11, -171, 1895, 189, 220, 164, 255),
    VTX(-7, -29, -4, -85, 1964, 214, 147, 232, 255),
    VTX(6, -13, -11, 683, 1814, 68, 26, 161, 255),
    VTX(-6, -13, -11, -171, 1814, 208, 26, 150, 255),
    VTX(-7, -29, -4, 939, 1964, 214, 147, 232, 255),
}; 

static Vtx object_gi_magicpotVtx_0004B0[13] = {
    VTX(0, 31, -7, 768, 1322, 0, 102, 194, 255),
    VTX(-6, 31, -4, 939, 1322, 202, 102, 225, 255),
    VTX(0, 20, 0, 853, 1024, 0, 120, 0, 255),
    VTX(6, 31, -4, 597, 1322, 54, 102, 225, 255),
    VTX(0, 20, 0, 683, 1024, 0, 120, 0, 255),
    VTX(0, 20, 0, 512, 1024, 0, 120, 0, 255),
    VTX(6, 31, 4, 427, 1322, 54, 102, 31, 255),
    VTX(0, 20, 0, 341, 1024, 0, 120, 0, 255),
    VTX(0, 31, 7, 256, 1322, 0, 102, 62, 255),
    VTX(-6, 31, 4, 85, 1322, 202, 102, 31, 255),
    VTX(0, 20, 0, 171, 1024, 0, 120, 0, 255),
    VTX(-6, 31, -4, -85, 1322, 202, 102, 225, 255),
    VTX(0, 20, 0, 0, 1024, 0, 120, 0, 255),
}; 

Gfx gGiMagicJarSmallDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(50, 60, 60, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_magicpotVtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_magicpotVtx_000030[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 7, 10, 0, 11, 2, 1, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 6, 3, 0),
    gsSP2Triangles(6, 8, 5, 0, 8, 10, 7, 0),
    gsSP1Triangle(10, 12, 9, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 40, 100, 40, 255),
    gsDPSetEnvColor(0, 30, 20, 255),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsSPVertex(&object_gi_magicpotVtx_000100[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 7, 10, 0, 11, 9, 12, 0),
    gsSP2Triangles(13, 14, 1, 0, 15, 13, 0, 0),
    gsSP2Triangles(16, 15, 3, 0, 17, 16, 5, 0),
    gsSP2Triangles(18, 17, 7, 0, 19, 18, 9, 0),
    gsSP2Triangles(20, 21, 19, 0, 22, 23, 13, 0),
    gsSP2Triangles(24, 22, 15, 0, 25, 24, 16, 0),
    gsSP2Triangles(26, 25, 17, 0, 21, 26, 18, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 6, 3, 0),
    gsSP2Triangles(6, 8, 5, 0, 8, 10, 7, 0),
    gsSP2Triangles(10, 12, 9, 0, 12, 27, 11, 0),
    gsSP2Triangles(1, 0, 13, 0, 0, 3, 15, 0),
    gsSP2Triangles(3, 5, 16, 0, 5, 7, 17, 0),
    gsSP2Triangles(7, 9, 18, 0, 9, 11, 19, 0),
    gsSP2Triangles(14, 13, 23, 0, 13, 15, 22, 0),
    gsSP2Triangles(15, 16, 24, 0, 16, 17, 25, 0),
    gsSP2Triangles(17, 18, 26, 0, 18, 19, 21, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_gi_magicpotVtx_000100[31], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 12, 16, 0, 17, 15, 18, 0),
    gsSP2Triangles(19, 17, 20, 0, 21, 19, 22, 0),
    gsSP2Triangles(13, 23, 24, 0, 6, 8, 13, 0),
    gsSP2Triangles(4, 6, 12, 0, 2, 4, 15, 0),
    gsSP2Triangles(25, 2, 17, 0, 11, 25, 19, 0),
    gsSP2Triangles(8, 26, 23, 0, 27, 22, 20, 0),
    gsSP2Triangles(25, 11, 10, 0, 2, 25, 0, 0),
    gsSP2Triangles(4, 2, 1, 0, 6, 4, 3, 0),
    gsSP2Triangles(8, 6, 5, 0, 26, 8, 7, 0),
    gsSP2Triangles(14, 16, 12, 0, 16, 18, 15, 0),
    gsSP2Triangles(18, 20, 17, 0, 20, 22, 19, 0),
    gsSP2Triangles(22, 27, 21, 0, 24, 14, 13, 0),
    gsSP2Triangles(13, 12, 6, 0, 12, 15, 4, 0),
    gsSP2Triangles(15, 17, 2, 0, 17, 19, 25, 0),
    gsSP2Triangles(19, 21, 11, 0, 23, 13, 8, 0),
    gsSP2Triangles(20, 16, 24, 0, 16, 14, 24, 0),
    gsSP1Triangle(20, 18, 16, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 10, 50, 20, 255),
    gsDPSetEnvColor(0, 10, 0, 255),
    gsSPVertex(&object_gi_magicpotVtx_0004B0[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 9, 12, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_gi_magicpotVtx_0007F0[3] = {
    VTX(-4, 8, 2, 85, 1372, 143, 0, 39, 255),
    VTX(-4, 8, -2, -85, 1372, 166, 0, 178, 255),
    VTX(-4, 3, -2, -85, 1700, 143, 0, 217, 255),
}; 

static Vtx object_gi_magicpotVtx_000820[13] = {
    VTX(0, 8, 5, 256, 1372, 233, 0, 117, 255),
    VTX(-4, 8, 2, 85, 1372, 143, 0, 39, 255),
    VTX(-4, 3, 2, 85, 1700, 166, 0, 78, 255),
    VTX(4, 8, 2, 427, 1372, 90, 0, 78, 255),
    VTX(0, 3, 5, 256, 1700, 23, 0, 117, 255),
    VTX(4, 8, -2, 597, 1372, 113, 0, 217, 255),
    VTX(4, 3, 2, 427, 1700, 113, 0, 39, 255),
    VTX(0, 8, -5, 768, 1372, 23, 0, 139, 255),
    VTX(4, 3, -2, 597, 1700, 90, 0, 178, 255),
    VTX(-4, 8, -2, 939, 1372, 166, 0, 178, 255),
    VTX(0, 3, -5, 768, 1700, 233, 0, 139, 255),
    VTX(-4, 3, -2, -85, 1700, 143, 0, 217, 255),
    VTX(-4, 3, -2, 939, 1700, 143, 0, 217, 255),
}; 

static Vtx object_gi_magicpotVtx_0008F0[82] = {
    VTX(-4, 23, 2, 85, 1093, 162, 195, 40, 255),
    VTX(-4, 23, -2, -85, 1093, 174, 195, 194, 255),
    VTX(-4, 8, -2, -85, 1211, 143, 0, 217, 255),
    VTX(0, 23, 5, 256, 1093, 244, 195, 102, 255),
    VTX(-4, 8, 2, 85, 1211, 166, 0, 78, 255),
    VTX(4, 23, 2, 427, 1093, 82, 195, 62, 255),
    VTX(0, 8, 5, 256, 1211, 23, 0, 117, 255),
    VTX(4, 23, -2, 597, 1093, 94, 195, 216, 255),
    VTX(4, 8, 2, 427, 1211, 113, 0, 39, 255),
    VTX(0, 23, -5, 768, 1093, 12, 195, 154, 255),
    VTX(4, 8, -2, 597, 1211, 90, 0, 178, 255),
    VTX(-4, 23, -2, 939, 1093, 174, 195, 194, 255),
    VTX(0, 8, -5, 768, 1211, 233, 0, 139, 255),
    VTX(-8, 25, 0, 0, 1130, 146, 209, 0, 255),
    VTX(-4, 25, -7, -171, 1130, 201, 209, 161, 255),
    VTX(-4, 25, 7, 171, 1130, 201, 209, 95, 255),
    VTX(4, 25, 7, 341, 1130, 55, 209, 95, 255),
    VTX(8, 25, 0, 512, 1130, 110, 209, 0, 255),
    VTX(4, 25, -7, 683, 1130, 55, 209, 161, 255),
    VTX(-4, 25, -7, 853, 1130, 201, 209, 161, 255),
    VTX(-6, 31, -3, 939, 1098, 202, 102, 225, 255),
    VTX(0, 31, -7, 768, 1098, 0, 102, 194, 255),
    VTX(-6, 31, 3, 85, 1098, 202, 102, 31, 255),
    VTX(-6, 31, -3, -85, 1098, 202, 102, 225, 255),
    VTX(0, 31, 7, 256, 1098, 0, 102, 62, 255),
    VTX(6, 31, 3, 427, 1098, 54, 102, 31, 255),
    VTX(6, 31, -3, 597, 1098, 54, 102, 225, 255),
    VTX(-4, 8, -2, 939, 1211, 143, 0, 217, 255),
    VTX(0, 3, -5, 768, 1397, 0, 101, 192, 255),
    VTX(4, 3, -2, 597, 1397, 55, 101, 224, 255),
    VTX(9, -6, -16, 683, 1649, 62, 59, 173, 255),
    VTX(4, 3, -2, 597, 1397, 55, 101, 224, 255),
    VTX(4, 3, 2, 427, 1397, 55, 101, 32, 255),
    VTX(18, -6, 0, 512, 1649, 103, 59, 12, 255),
    VTX(0, 3, 5, 256, 1397, 0, 101, 64, 255),
    VTX(9, -6, 16, 341, 1649, 41, 59, 96, 255),
    VTX(-4, 3, 2, 85, 1397, 201, 101, 32, 255),
    VTX(-9, -6, 16, 171, 1649, 194, 59, 83, 255),
    VTX(-4, 3, -2, -85, 1397, 201, 101, 224, 255),
    VTX(-18, -6, 0, 0, 1649, 153, 59, 244, 255),
    VTX(-4, 3, -2, 939, 1397, 201, 101, 224, 255),
    VTX(0, 3, -5, 768, 1397, 0, 101, 192, 255),
    VTX(-9, -6, -16, 853, 1649, 215, 59, 160, 255),
    VTX(-9, -21, 16, 171, 1821, 208, 232, 107, 255),
    VTX(-18, -21, 0, 0, 1821, 139, 232, 11, 255),
    VTX(-12, -30, 7, 85, 1910, 183, 171, 42, 255),
    VTX(9, -21, 16, 341, 1821, 68, 232, 95, 255),
    VTX(0, -30, 14, 256, 1910, 0, 151, 57, 255),
    VTX(18, -21, 0, 512, 1821, 117, 232, 245, 255),
    VTX(12, -30, 7, 427, 1910, 73, 171, 42, 255),
    VTX(9, -21, -16, 683, 1821, 48, 232, 149, 255),
    VTX(12, -30, -7, 597, 1910, 49, 151, 228, 255),
    VTX(-9, -21, -16, 853, 1821, 188, 232, 161, 255),
    VTX(0, -30, -14, 768, 1910, 0, 171, 172, 255),
    VTX(-9, -21, -16, -171, 1821, 188, 232, 161, 255),
    VTX(-12, -30, -7, -85, 1910, 207, 151, 228, 255),
    VTX(9, -6, -16, 683, 1649, 62, 59, 173, 255),
    VTX(-9, -6, -16, -171, 1649, 215, 59, 160, 255),
    VTX(-12, -30, -7, 939, 1910, 207, 151, 228, 255),
    VTX(-8, 11, 0, 0, 1233, 50, 170, 190, 255),
    VTX(-11, 15, -2, -37, 1231, 204, 84, 189, 255),
    VTX(11, 15, -2, -475, 1234, 54, 26, 153, 255),
    VTX(8, 11, 0, 512, 1229, 197, 152, 2, 255),
    VTX(11, 15, -2, 549, 1234, 54, 26, 153, 255),
    VTX(16, 5, -2, 537, 1446, 57, 234, 153, 255),
    VTX(11, 5, 0, 512, 1400, 137, 242, 2, 255),
    VTX(12, -4, -2, 543, 1655, 0, 255, 137, 255),
    VTX(-8, 11, 0, 0, 1233, 50, 170, 190, 255),
    VTX(-11, 5, 0, 0, 1407, 119, 244, 1, 255),
    VTX(-16, 5, -2, -25, 1441, 199, 237, 153, 255),
    VTX(11, 15, 2, 475, 1234, 2, 59, 104, 255),
    VTX(16, 5, 2, 487, 1446, 54, 25, 104, 255),
    VTX(12, -4, 2, 481, 1655, 98, 223, 60, 255),
    VTX(-9, -3, 0, 0, 1648, 98, 31, 60, 255),
    VTX(-13, -4, -2, -31, 1649, 0, 255, 137, 255),
    VTX(9, -2, 0, 512, 1639, 158, 30, 61, 255),
    VTX(-11, 15, -2, -37, 1231, 204, 84, 189, 255),
    VTX(-11, 15, 2, 37, 1231, 255, 0, 119, 255),
    VTX(-16, 5, 2, 25, 1441, 203, 27, 104, 255),
    VTX(-13, -4, 2, 31, 1649, 158, 224, 60, 255),
    VTX(11, 15, -2, -475, 1234, 54, 26, 153, 255),
    VTX(-11, 15, -2, 987, 1231, 204, 84, 189, 255),
}; 

static Vtx object_gi_magicpotVtx_000E10[13] = {
    VTX(6, 31, 3, 427, 1320, 54, 102, 31, 255),
    VTX(0, 20, 0, 341, 1024, 0, 120, 0, 255),
    VTX(0, 31, 7, 256, 1320, 0, 102, 62, 255),
    VTX(6, 31, -3, 597, 1320, 54, 102, 225, 255),
    VTX(0, 20, 0, 512, 1024, 0, 120, 0, 255),
    VTX(0, 31, -7, 768, 1320, 0, 102, 194, 255),
    VTX(0, 20, 0, 683, 1024, 0, 120, 0, 255),
    VTX(-6, 31, -3, 939, 1320, 202, 102, 225, 255),
    VTX(0, 20, 0, 853, 1024, 0, 120, 0, 255),
    VTX(-6, 31, -3, -85, 1320, 202, 102, 225, 255),
    VTX(-6, 31, 3, 85, 1320, 202, 102, 31, 255),
    VTX(0, 20, 0, 0, 1024, 0, 120, 0, 255),
    VTX(0, 20, 0, 171, 1024, 0, 120, 0, 255),
}; 

Gfx gGiMagicJarLargeDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 255, 255, 150, 255),
    gsDPSetEnvColor(100, 70, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_magicpotVtx_0007F0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_magicpotVtx_000820[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 7, 10, 0, 11, 2, 1, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 6, 3, 0),
    gsSP2Triangles(6, 8, 5, 0, 8, 10, 7, 0),
    gsSP1Triangle(10, 12, 9, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 40, 100, 40, 255),
    gsDPSetEnvColor(0, 30, 20, 255),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsSPVertex(&object_gi_magicpotVtx_0008F0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 7, 10, 0, 11, 9, 12, 0),
    gsSP2Triangles(13, 14, 1, 0, 15, 13, 0, 0),
    gsSP2Triangles(16, 15, 3, 0, 17, 16, 5, 0),
    gsSP2Triangles(18, 17, 7, 0, 19, 18, 9, 0),
    gsSP2Triangles(20, 21, 19, 0, 22, 23, 13, 0),
    gsSP2Triangles(24, 22, 15, 0, 25, 24, 16, 0),
    gsSP2Triangles(26, 25, 17, 0, 21, 26, 18, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 6, 3, 0),
    gsSP2Triangles(6, 8, 5, 0, 8, 10, 7, 0),
    gsSP2Triangles(10, 12, 9, 0, 12, 27, 11, 0),
    gsSP2Triangles(1, 0, 13, 0, 0, 3, 15, 0),
    gsSP2Triangles(3, 5, 16, 0, 5, 7, 17, 0),
    gsSP2Triangles(7, 9, 18, 0, 9, 11, 19, 0),
    gsSP2Triangles(14, 13, 23, 0, 13, 15, 22, 0),
    gsSP2Triangles(15, 16, 24, 0, 16, 17, 25, 0),
    gsSP2Triangles(17, 18, 26, 0, 18, 19, 21, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_gi_magicpotVtx_0008F0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 12, 16, 0, 17, 15, 18, 0),
    gsSP2Triangles(19, 17, 20, 0, 21, 19, 22, 0),
    gsSP2Triangles(13, 23, 24, 0, 6, 8, 13, 0),
    gsSP2Triangles(4, 6, 12, 0, 2, 4, 15, 0),
    gsSP2Triangles(25, 2, 17, 0, 11, 25, 19, 0),
    gsSP2Triangles(8, 26, 23, 0, 27, 22, 20, 0),
    gsSP2Triangles(25, 11, 10, 0, 2, 25, 0, 0),
    gsSP2Triangles(4, 2, 1, 0, 6, 4, 3, 0),
    gsSP2Triangles(8, 6, 5, 0, 26, 8, 7, 0),
    gsSP2Triangles(14, 16, 12, 0, 16, 18, 15, 0),
    gsSP2Triangles(18, 20, 17, 0, 20, 22, 19, 0),
    gsSP2Triangles(22, 27, 21, 0, 24, 14, 13, 0),
    gsSP2Triangles(13, 12, 6, 0, 12, 15, 4, 0),
    gsSP2Triangles(15, 17, 2, 0, 17, 19, 25, 0),
    gsSP2Triangles(19, 21, 11, 0, 23, 13, 8, 0),
    gsSP2Triangles(20, 16, 24, 0, 16, 14, 24, 0),
    gsSP2Triangles(20, 18, 16, 0, 28, 29, 30, 0),
    gsSPVertex(&object_gi_magicpotVtx_0008F0[62], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 1, 8, 9, 0),
    gsSP2Triangles(2, 9, 10, 0, 6, 11, 12, 0),
    gsSP2Triangles(8, 0, 3, 0, 9, 3, 13, 0),
    gsSP2Triangles(14, 15, 8, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 13, 3, 0, 14, 7, 16, 0),
    gsSP2Triangles(9, 2, 1, 0, 10, 4, 2, 0),
    gsSP2Triangles(7, 12, 17, 0, 3, 9, 8, 0),
    gsSP2Triangles(13, 10, 9, 0, 15, 5, 0, 0),
    gsSP2Triangles(7, 14, 5, 0, 12, 7, 6, 0),
    gsSP2Triangles(15, 16, 6, 0, 16, 15, 14, 0),
    gsSP2Triangles(17, 16, 7, 0, 16, 17, 11, 0),
    gsSP2Triangles(6, 5, 15, 0, 11, 6, 16, 0),
    gsSP2Triangles(18, 0, 5, 0, 8, 1, 19, 0),
    gsSP1Triangle(0, 8, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 10, 50, 20, 255),
    gsDPSetEnvColor(0, 10, 0, 255),
    gsSPVertex(&object_gi_magicpotVtx_000E10[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 2, 12, 0),
    gsSPEndDisplayList(),
}; 


