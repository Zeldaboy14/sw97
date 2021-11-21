#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_bombpouch.h"

static Vtx object_gi_bombpouchVtx_000000[34];
static Vtx object_gi_bombpouchVtx_000220[62];
static Vtx object_gi_bombpouchVtx_000600[32];
static Vtx object_gi_bombpouchVtx_000800[24];
static Vtx object_gi_bombpouchVtx_000980[3];
static Vtx object_gi_bombpouchVtx_0009B0[18];

static Vtx object_gi_bombpouchVtx_000000[34] = {
    VTX(0, 16, 0, 32, 1024, 0, 136, 0, 255),
    VTX(-14, 25, 6, 64, 1488, 197, 155, 24, 255),
    VTX(-19, 31, 0, 0, 1414, 182, 162, 246, 255),
    VTX(0, 16, 0, 96, 1024, 0, 136, 0, 255),
    VTX(-13, 31, 13, 128, 1414, 211, 162, 59, 255),
    VTX(0, 16, 0, 160, 1024, 0, 136, 0, 255),
    VTX(-6, 28, 15, 192, 1450, 230, 158, 64, 255),
    VTX(0, 16, 0, 224, 1024, 0, 136, 0, 255),
    VTX(0, 31, 19, 256, 1414, 246, 162, 74, 255),
    VTX(0, 16, 0, 288, 1024, 0, 136, 0, 255),
    VTX(6, 25, 14, 320, 1488, 24, 155, 59, 255),
    VTX(0, 16, 0, 352, 1024, 0, 136, 0, 255),
    VTX(13, 31, 13, 384, 1414, 59, 162, 45, 255),
    VTX(0, 16, 0, 416, 1024, 0, 136, 0, 255),
    VTX(15, 28, 6, 448, 1450, 64, 158, 26, 255),
    VTX(0, 16, 0, 480, 1024, 0, 136, 0, 255),
    VTX(19, 31, 0, 512, 1414, 74, 162, 10, 255),
    VTX(0, 16, 0, 544, 1024, 0, 136, 0, 255),
    VTX(14, 25, -6, 576, 1488, 59, 155, 232, 255),
    VTX(0, 16, 0, 608, 1024, 0, 136, 0, 255),
    VTX(13, 31, -13, 640, 1414, 45, 162, 197, 255),
    VTX(0, 16, 0, 672, 1024, 0, 136, 0, 255),
    VTX(6, 28, -15, 704, 1450, 26, 158, 192, 255),
    VTX(0, 16, 0, 736, 1024, 0, 136, 0, 255),
    VTX(0, 31, -19, 768, 1414, 10, 162, 182, 255),
    VTX(0, 16, 0, 800, 1024, 0, 136, 0, 255),
    VTX(-6, 25, -14, 832, 1488, 232, 155, 197, 255),
    VTX(0, 16, 0, 864, 1024, 0, 136, 0, 255),
    VTX(-13, 31, -13, 896, 1414, 197, 162, 211, 255),
    VTX(0, 16, 0, 928, 1024, 0, 136, 0, 255),
    VTX(-15, 28, -6, 960, 1450, 192, 158, 230, 255),
    VTX(0, 16, 0, -32, 1024, 0, 136, 0, 255),
    VTX(-19, 31, 0, 0, 1414, 182, 162, 246, 255),
    VTX(-15, 28, -6, -64, 1450, 192, 158, 230, 255),
}; 

static Vtx object_gi_bombpouchVtx_000220[62] = {
    VTX(-22, 0, 9, 64, 1461, 153, 43, 43, 255),
    VTX(-9, 0, 22, 192, 1461, 213, 43, 103, 255),
    VTX(-9, 11, 9, 128, 1248, 200, 90, 56, 255),
    VTX(9, 0, 22, 320, 1461, 43, 43, 103, 255),
    VTX(0, 11, 13, 256, 1248, 0, 90, 78, 255),
    VTX(22, 0, 9, 448, 1461, 103, 43, 43, 255),
    VTX(9, 11, 9, 384, 1248, 56, 90, 56, 255),
    VTX(22, 0, -9, 576, 1461, 103, 43, 213, 255),
    VTX(13, 11, 0, 512, 1248, 78, 90, 0, 255),
    VTX(9, 0, -22, 704, 1461, 43, 43, 153, 255),
    VTX(9, 11, -9, 640, 1248, 56, 90, 200, 255),
    VTX(-9, 0, -22, 832, 1461, 213, 43, 153, 255),
    VTX(0, 11, -13, 768, 1248, 0, 90, 178, 255),
    VTX(-22, 0, -9, 960, 1461, 153, 43, 213, 255),
    VTX(-9, 11, -9, 896, 1248, 200, 90, 200, 255),
    VTX(-22, 0, -9, -64, 1461, 153, 43, 213, 255),
    VTX(-13, 11, 0, 0, 1248, 177, 90, 0, 255),
    VTX(0, -14, 23, 256, 1657, 0, 221, 114, 255),
    VTX(-16, -14, 16, 128, 1657, 175, 221, 81, 255),
    VTX(-6, -26, 15, 192, 1836, 226, 166, 72, 255),
    VTX(16, -14, 16, 384, 1657, 81, 221, 81, 255),
    VTX(6, -26, 15, 320, 1836, 30, 166, 72, 255),
    VTX(23, -14, 0, 512, 1657, 114, 221, 0, 255),
    VTX(15, -26, 6, 448, 1836, 72, 166, 30, 255),
    VTX(16, -14, -16, 640, 1657, 81, 221, 175, 255),
    VTX(15, -26, -6, 576, 1836, 72, 166, 226, 255),
    VTX(0, -14, -23, 768, 1657, 0, 221, 142, 255),
    VTX(6, -26, -15, 704, 1836, 30, 166, 184, 255),
    VTX(-16, -14, -16, 896, 1657, 175, 221, 175, 255),
    VTX(-6, -26, -15, 832, 1836, 226, 166, 184, 255),
    VTX(-23, -14, 0, 0, 1657, 142, 221, 0, 255),
    VTX(-16, -14, -16, -128, 1657, 175, 221, 175, 255),
    VTX(-15, -26, -6, -64, 1836, 184, 166, 226, 255),
    VTX(-16, -14, 16, 128, 1657, 175, 221, 81, 255),
    VTX(-15, -26, 6, 64, 1836, 184, 166, 30, 255),
    VTX(-9, 0, 22, 192, 1461, 213, 43, 103, 255),
    VTX(-22, 0, 9, 64, 1461, 153, 43, 43, 255),
    VTX(9, 0, 22, 320, 1461, 43, 43, 103, 255),
    VTX(0, -14, 23, 256, 1657, 0, 221, 114, 255),
    VTX(22, 0, 9, 448, 1461, 103, 43, 43, 255),
    VTX(16, -14, 16, 384, 1657, 81, 221, 81, 255),
    VTX(22, 0, -9, 576, 1461, 103, 43, 213, 255),
    VTX(23, -14, 0, 512, 1657, 114, 221, 0, 255),
    VTX(9, 0, -22, 704, 1461, 43, 43, 153, 255),
    VTX(16, -14, -16, 640, 1657, 81, 221, 175, 255),
    VTX(-9, 0, -22, 832, 1461, 213, 43, 153, 255),
    VTX(0, -14, -23, 768, 1657, 0, 221, 142, 255),
    VTX(-22, 0, -9, 960, 1461, 153, 43, 213, 255),
    VTX(-16, -14, -16, 896, 1657, 175, 221, 175, 255),
    VTX(-22, 0, -9, -64, 1461, 153, 43, 213, 255),
    VTX(-9, 11, 9, 128, 1248, 200, 90, 56, 255),
    VTX(-13, 11, 0, 0, 1248, 177, 90, 0, 255),
    VTX(0, 11, 13, 256, 1248, 0, 90, 78, 255),
    VTX(9, 11, 9, 384, 1248, 56, 90, 56, 255),
    VTX(13, 11, 0, 512, 1248, 78, 90, 0, 255),
    VTX(9, 11, -9, 640, 1248, 56, 90, 200, 255),
    VTX(0, 11, -13, 768, 1248, 0, 90, 178, 255),
    VTX(-9, 11, -9, 896, 1248, 200, 90, 200, 255),
    VTX(-9, 11, -9, -128, 1248, 200, 90, 200, 255),
    VTX(0, 20, 0, 64, 1024, 0, 120, 0, 255),
    VTX(0, 20, 0, 192, 1024, 0, 120, 0, 255),
    VTX(0, 20, 0, 320, 1024, 0, 120, 0, 255),
}; 

static Vtx object_gi_bombpouchVtx_000600[32] = {
    VTX(0, 20, 0, 448, 1024, 0, 120, 0, 255),
    VTX(9, 11, 9, 384, 1248, 56, 90, 56, 255),
    VTX(13, 11, 0, 512, 1248, 78, 90, 0, 255),
    VTX(0, 20, 0, 576, 1024, 0, 120, 0, 255),
    VTX(9, 11, -9, 640, 1248, 56, 90, 200, 255),
    VTX(0, 20, 0, 704, 1024, 0, 120, 0, 255),
    VTX(0, 11, -13, 768, 1248, 0, 90, 178, 255),
    VTX(0, 20, 0, 832, 1024, 0, 120, 0, 255),
    VTX(-9, 11, -9, 896, 1248, 200, 90, 200, 255),
    VTX(0, 20, 0, -64, 1024, 0, 120, 0, 255),
    VTX(-9, 11, -9, -128, 1248, 200, 90, 200, 255),
    VTX(-13, 11, 0, 0, 1248, 177, 90, 0, 255),
    VTX(0, -31, 0, 256, 1024, 0, 136, 0, 255),
    VTX(6, -26, 15, 320, 1836, 30, 166, 72, 255),
    VTX(-6, -26, 15, 192, 1836, 226, 166, 72, 255),
    VTX(0, -31, 0, 384, 1024, 0, 136, 0, 255),
    VTX(15, -26, 6, 448, 1836, 72, 166, 30, 255),
    VTX(0, -31, 0, 512, 1024, 0, 136, 0, 255),
    VTX(15, -26, -6, 576, 1836, 72, 166, 226, 255),
    VTX(0, -31, 0, 640, 1024, 0, 136, 0, 255),
    VTX(6, -26, -15, 704, 1836, 30, 166, 184, 255),
    VTX(0, -31, 0, 768, 1024, 0, 136, 0, 255),
    VTX(-6, -26, -15, 832, 1836, 226, 166, 184, 255),
    VTX(0, -31, 0, 896, 1024, 0, 136, 0, 255),
    VTX(-15, -26, -6, 960, 1836, 184, 166, 226, 255),
    VTX(0, -31, 0, 0, 1024, 0, 136, 0, 255),
    VTX(-15, -26, 6, 64, 1836, 184, 166, 30, 255),
    VTX(-15, -26, -6, -64, 1836, 184, 166, 226, 255),
    VTX(0, -31, 0, 128, 1024, 0, 136, 0, 255),
    VTX(0, -14, 23, 256, 1657, 0, 221, 114, 255),
    VTX(16, -14, 16, 384, 1657, 81, 221, 81, 255),
    VTX(23, -14, 0, 512, 1657, 114, 221, 0, 255),
}; 

static Vtx object_gi_bombpouchVtx_000800[24] = {
    VTX(15, -26, -6, 576, 1836, 72, 166, 226, 255),
    VTX(6, -26, -15, 704, 1836, 30, 166, 184, 255),
    VTX(16, -14, -16, 640, 1657, 81, 221, 175, 255),
    VTX(-6, -26, -15, 832, 1836, 226, 166, 184, 255),
    VTX(0, -14, -23, 768, 1657, 0, 221, 142, 255),
    VTX(-15, -26, -6, 960, 1836, 184, 166, 226, 255),
    VTX(-16, -14, -16, 896, 1657, 175, 221, 175, 255),
    VTX(-15, -26, -6, -64, 1836, 184, 166, 226, 255),
    VTX(-15, -26, 6, 64, 1836, 184, 166, 30, 255),
    VTX(-23, -14, 0, 0, 1657, 142, 221, 0, 255),
    VTX(-6, -26, 15, 192, 1836, 226, 166, 72, 255),
    VTX(-16, -14, 16, 128, 1657, 175, 221, 81, 255),
    VTX(0, -14, 23, 256, 1657, 0, 221, 114, 255),
    VTX(-9, 0, 22, 192, 1461, 213, 43, 103, 255),
    VTX(16, -14, 16, 384, 1657, 81, 221, 81, 255),
    VTX(9, 0, 22, 320, 1461, 43, 43, 103, 255),
    VTX(23, -14, 0, 512, 1657, 114, 221, 0, 255),
    VTX(22, 0, 9, 448, 1461, 103, 43, 43, 255),
    VTX(22, 0, -9, 576, 1461, 103, 43, 213, 255),
    VTX(9, 0, -22, 704, 1461, 43, 43, 153, 255),
    VTX(-9, 0, -22, 832, 1461, 213, 43, 153, 255),
    VTX(-16, -14, -16, -128, 1657, 175, 221, 175, 255),
    VTX(-22, 0, -9, -64, 1461, 153, 43, 213, 255),
    VTX(-22, 0, 9, 64, 1461, 153, 43, 43, 255),
}; 

static Vtx object_gi_bombpouchVtx_000980[3] = {
    VTX(-3, 20, -7, 832, 1434, 226, 0, 140, 255),
    VTX(3, 20, -7, 704, 1434, 60, 0, 153, 255),
    VTX(3, 16, -7, 704, 1638, 30, 0, 140, 255),
}; 

static Vtx object_gi_bombpouchVtx_0009B0[18] = {
    VTX(3, 20, -7, 704, 1434, 60, 0, 153, 255),
    VTX(7, 20, -3, 576, 1434, 116, 0, 226, 255),
    VTX(7, 16, -3, 576, 1638, 103, 0, 196, 255),
    VTX(7, 20, 3, 448, 1434, 103, 0, 60, 255),
    VTX(7, 16, 3, 448, 1638, 116, 0, 30, 255),
    VTX(3, 20, 7, 320, 1434, 30, 0, 116, 255),
    VTX(3, 16, 7, 320, 1638, 60, 0, 103, 255),
    VTX(-3, 20, 7, 192, 1434, 196, 0, 103, 255),
    VTX(-3, 16, 7, 192, 1638, 226, 0, 116, 255),
    VTX(-7, 20, 3, 64, 1434, 140, 0, 30, 255),
    VTX(-7, 16, 3, 64, 1638, 153, 0, 60, 255),
    VTX(-7, 20, -3, -64, 1434, 153, 0, 196, 255),
    VTX(-7, 16, -3, -64, 1638, 140, 0, 226, 255),
    VTX(-7, 20, -3, 960, 1434, 153, 0, 196, 255),
    VTX(-3, 20, -7, 832, 1434, 226, 0, 140, 255),
    VTX(-3, 16, -7, 832, 1638, 196, 0, 153, 255),
    VTX(3, 16, -7, 704, 1638, 30, 0, 140, 255),
    VTX(-7, 16, -3, 960, 1638, 140, 0, 226, 255),
}; 

Gfx gGiBombBag20BagColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 142, 194, 135, 255),
    gsDPSetEnvColor(63, 85, 60, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBombBag30BagColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 113, 145, 196, 255),
    gsDPSetEnvColor(48, 61, 82, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBombBag40BagColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 171, 112, 115, 255),
    gsDPSetEnvColor(68, 45, 46, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBombBag20RingColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 227, 182, 147, 255),
    gsDPSetEnvColor(112, 80, 61, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBombBag30RingColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 227, 182, 147, 255),
    gsDPSetEnvColor(112, 80, 61, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBombBag40RingColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 227, 182, 147, 255),
    gsDPSetEnvColor(112, 80, 61, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBombBagDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPVertex(&object_gi_bombpouchVtx_000000[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 12, 10, 0),
    gsSP2Triangles(13, 14, 12, 0, 15, 16, 14, 0),
    gsSP2Triangles(17, 18, 16, 0, 19, 20, 18, 0),
    gsSP2Triangles(21, 22, 20, 0, 23, 24, 22, 0),
    gsSP2Triangles(25, 26, 24, 0, 27, 28, 26, 0),
    gsSP1Triangle(29, 30, 28, 0),
    gsSPVertex(&object_gi_bombpouchVtx_000000[31], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_bombpouchVtx_000220[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 0, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 21, 0),
    gsSP2Triangles(22, 20, 23, 0, 24, 22, 25, 0),
    gsSP2Triangles(26, 24, 27, 0, 28, 26, 29, 0),
    gsSPVertex(&object_gi_bombpouchVtx_000220[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 7, 10, 0, 11, 9, 12, 0),
    gsSP2Triangles(13, 11, 14, 0, 15, 13, 16, 0),
    gsSP2Triangles(17, 15, 18, 0, 6, 19, 0, 0),
    gsSP2Triangles(20, 21, 6, 0, 22, 20, 5, 0),
    gsSP2Triangles(23, 22, 7, 0, 24, 23, 9, 0),
    gsSP2Triangles(25, 24, 11, 0, 26, 25, 13, 0),
    gsSP2Triangles(27, 26, 15, 0, 21, 28, 19, 0),
    gsSP2Triangles(29, 21, 20, 0, 30, 20, 22, 0),
    gsSP1Triangle(31, 22, 23, 0),
    gsSPVertex(&object_gi_bombpouchVtx_000600[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 13, 0, 17, 18, 16, 0),
    gsSP2Triangles(19, 20, 18, 0, 21, 22, 20, 0),
    gsSP2Triangles(23, 24, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 14, 26, 0, 14, 13, 29, 0),
    gsSP2Triangles(13, 16, 30, 0, 16, 18, 31, 0),
    gsSPVertex(&object_gi_bombpouchVtx_000800[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 2, 18, 0, 2, 4, 19, 0),
    gsSP2Triangles(4, 6, 20, 0, 21, 9, 22, 0),
    gsSP1Triangle(9, 11, 23, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiBombBagRingDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x04033130, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | 
                         G_TX_WRAP, 5, 5, 1, 1),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_bombpouchVtx_000980[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_bombpouchVtx_0009B0[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(2, 16, 0, 0, 4, 2, 1, 0),
    gsSP2Triangles(6, 4, 3, 0, 8, 6, 5, 0),
    gsSP2Triangles(10, 8, 7, 0, 12, 10, 9, 0),
    gsSP1Triangle(15, 17, 13, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000E58[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


