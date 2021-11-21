#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_box.h"

static s16 sTreasureChestAnim_000128FrameData[132];
static JointIndex sTreasureChestAnim_000128JointIndices[5];
static s16 sTreasureChestAnim_00024CFrameData[118];
static JointIndex sTreasureChestAnim_00024CJointIndices[5];
static s16 sTreasureChestAnim_00043CFrameData[102];
static JointIndex sTreasureChestAnim_00043CJointIndices[5];
static Vtx object_boxVtx_0004B0[36];
static Vtx object_boxVtx_0008A8[36];
static Vtx object_boxVtx_000CA0[66];
static Vtx object_boxVtx_001258[66];
static Vtx gTreasureChestCurveSkelLimbsVtx_005780[37];

static s16 sTreasureChestAnim_000128FrameData[132] = {
    0x0000, 0xC000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x7FAD, 0x7F1A, 
    0x7E55, 0x7D6B, 0x7C68, 0x7B5B, 0x7A50, 0x7954, 0x7875, 0x77C0, 0x7743, 0x7709, 0x76F9, 0x76EE, 0x76E7, 0x76E4, 
    0x76E6, 0x76EC, 0x76F6, 0x7704, 0x7716, 0x772B, 0x7743, 0x775F, 0x777D, 0x779E, 0x77C2, 0x77E9, 0x7811, 0x783C, 
    0x7869, 0x7898, 0x78C8, 0x78FA, 0x792D, 0x7961, 0x7996, 0x79CC, 0x7A03, 0x7A3A, 0x7A71, 0x7AA9, 0x7AE0, 0x7B17, 
    0x7B4E, 0x7B85, 0x7BBA, 0x7BEF, 0x7C23, 0x7C55, 0x7C9B, 0x7D03, 0x7D82, 0x7E0E, 0x7E9E, 0x7F28, 0x7FA1, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x7DCB, 0x7B96, 0x7961, 0x772C, 0x74F7, 0x6EC3, 0x6694, 0x6016, 0x5B9B, 0x570C, 
    0x5276, 0x4DE4, 0x4964, 0x4501, 0x40C8, 0x3CC6, 0x3906, 0x3595, 0x327F, 0x2FD1, 0x2F44, 0x3152, 0x3427, 0x35EE, 
    0x35D6, 0x34F4, 0x344C, 0x3450, 0x348E, 0x34B5, 
}; 

static JointIndex sTreasureChestAnim_000128JointIndices[5] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gTreasureChestAnim_000128 = { 
    { 130 },
    sTreasureChestAnim_000128FrameData,
    sTreasureChestAnim_000128JointIndices,
    2
}; 

static s16 sTreasureChestAnim_00024CFrameData[118] = {
    0x0000, 0xC000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x800A, 0x801A, 0x801D, 0x8000, 0x7FAB, 0x7EC7, 0x7D6A, 0x7ABA, 
    0x7479, 0x6EE2, 0x6D00, 0x6C2C, 0x6BAF, 0x6AD0, 0x695D, 0x67B9, 0x660A, 0x6476, 0x62D4, 0x6121, 0x5FBB, 0x5EFF, 
    0x5EE3, 0x5F13, 0x5F81, 0x601E, 0x60DD, 0x61AF, 0x637F, 0x65A1, 0x660A, 0x6546, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 
    0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 
    0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 0x64B4, 
    0x64B4, 0x64B4, 0x64B4, 0x64E1, 0x6526, 0x6580, 0x65EB, 0x6663, 0x66E4, 0x676C, 0x67F6, 0x6880, 0x6904, 0x6981, 
    0x69F1, 0x6A52, 0x6AA1, 0x6AD8, 0x6AF6, 0x6AF1, 0x69DC, 0x6667, 0x605E, 0x5918, 0x511E, 0x48F6, 0x4125, 0x3A33, 
    0x34A5, 0x334D, 0x35B7, 0x377F, 0x3612, 0x34A5, 
}; 

static JointIndex sTreasureChestAnim_00024CJointIndices[5] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gTreasureChestAnim_00024C = { 
    { 116 },
    sTreasureChestAnim_00024CFrameData,
    sTreasureChestAnim_00024CJointIndices,
    2
};

static s16 sTreasureChestAnim_00043CFrameData[102] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x003A, 0x004D, 0xFFE7, 0xFFDD, 0x0006, 0x0028, 0x0003, 0xFFF2, 0x0008, 0x0009, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x7AD8, 0x7110, 0x6433, 0x55C9, 
    0x475C, 0x3A74, 0x309C, 0x32E8, 0x3927, 0x3550, 0x30FB, 0x32F0, 0x35A7, 0x34BD, 0x3376, 0x336D, 0x3386, 0x33B5, 
    0x33F3, 0x3436, 0x3474, 0x34A5, 
}; 

static JointIndex sTreasureChestAnim_00043CJointIndices[5] = {
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0034 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gTreasureChestAnim_00043C = { 
    { 50 },
    sTreasureChestAnim_00043CFrameData,
    sTreasureChestAnim_00043CJointIndices,
    2
}; 

static Vtx object_boxVtx_0004B0[] = {
    VTX(2525, 2733, -1942, -53, -95, 0, 0, 136, 255),
    VTX(2525, 2, -1942, -53, 2116, 0, 0, 136, 255),
    VTX(-2525, 2, -1942, 2101, 2116, 0, 0, 136, 255),
    VTX(-2525, 2733, -1942, 2101, -95, 0, 0, 136, 255),
    VTX(2525, 2733, 1962, 2084, -95, 0, 0, 120, 255),
    VTX(-2525, 2733, 1962, -36, -95, 0, 0, 120, 255),
    VTX(-2525, 2, 1962, -36, 2128, 0, 0, 120, 255),
    VTX(2525, 2, 1962, 2084, 2128, 0, 0, 120, 255),
    VTX(2525, 2733, 1962, -57, -95, 120, 0, 0, 255),
    VTX(2525, 2, 1962, -57, 2143, 120, 0, 0, 255),
    VTX(2525, 2, -1942, 2105, 2143, 120, 0, 0, 255),
    VTX(2525, 2733, -1942, 2105, -95, 120, 0, 0, 255),
    VTX(-2525, 2, -1942, -57, 2143, 136, 0, 0, 255),
    VTX(-2525, 2, 1962, 2105, 2143, 136, 0, 0, 255),
    VTX(-2525, 2733, 1962, 2105, -95, 136, 0, 0, 255),
    VTX(-2525, 2733, -1942, -57, -95, 136, 0, 0, 255),
    VTX(2525, 2733, -1942, -53, -85, 0, 120, 0, 255),
    VTX(-2525, 2733, -1942, 2101, -85, 0, 120, 0, 255),
    VTX(-2225, 2733, -1642, 1973, 85, 0, 120, 0, 255),
    VTX(2225, 2733, -1642, 75, 85, 0, 120, 0, 255),
    VTX(-2225, 2733, 1662, 1938, -88, 0, 120, 0, 255),
    VTX(-2225, 2733, -1638, 111, -88, 0, 120, 0, 255),
    VTX(-2525, 2733, -1942, -57, 88, 0, 120, 0, 255),
    VTX(-2525, 2733, 1962, 2104, 88, 0, 120, 0, 255),
    VTX(2525, 197, -1942, -53, 2135, 0, 120, 0, 255),
    VTX(-2525, 197, -1942, 2101, 2135, 0, 120, 0, 255),
    VTX(-2525, 197, 1962, 2101, -87, 0, 120, 0, 255),
    VTX(2525, 197, 1962, -53, -87, 0, 120, 0, 255),
    VTX(-2525, 2733, 1962, -2, 82, 0, 120, 0, 255),
    VTX(2525, 2733, 1962, 2050, 82, 0, 120, 0, 255),
    VTX(2225, 2733, 1662, 1928, -82, 0, 120, 0, 255),
    VTX(-2225, 2733, 1662, 120, -82, 0, 120, 0, 255),
    VTX(2225, 2733, -1642, 1938, -88, 0, 120, 0, 255),
    VTX(2225, 2733, 1658, 111, -88, 0, 120, 0, 255),
    VTX(2525, 2733, 1962, -57, 88, 0, 120, 0, 255),
    VTX(2525, 2733, -1942, 2104, 88, 0, 120, 0, 255),
};

Gfx gTreasureChestChestFrontDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x0A000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_boxVtx_0004B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_boxVtx_0004B0[4], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(0x0A000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_boxVtx_0004B0[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_boxVtx_0004B0[20], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_boxVtx_0008A8[] = {
    VTX(2525, 2733, -1942, 0, -1, 0, 0, 136, 255),
    VTX(2525, 2, -1942, 0, 2048, 0, 0, 136, 255),
    VTX(-2525, 2, -1942, 2051, 2048, 0, 0, 136, 255),
    VTX(-2525, 2733, -1942, 2051, -1, 0, 0, 136, 255),
    VTX(2525, 2733, 1962, 2048, 0, 0, 0, 120, 255),
    VTX(-2525, 2733, 1962, 0, 0, 0, 0, 120, 255),
    VTX(-2525, 2, 1962, 0, 2048, 0, 0, 120, 255),
    VTX(2525, 2, 1962, 2048, 2048, 0, 0, 120, 255),
    VTX(2525, 2733, 1962, 0, 0, 120, 0, 0, 255),
    VTX(2525, 2, 1962, 0, 2048, 120, 0, 0, 255),
    VTX(2525, 2, -1942, 2048, 2048, 120, 0, 0, 255),
    VTX(2525, 2733, -1942, 2048, 0, 120, 0, 0, 255),
    VTX(-2525, 2, -1942, 0, 2048, 136, 0, 0, 255),
    VTX(-2525, 2, 1962, 2048, 2048, 136, 0, 0, 255),
    VTX(-2525, 2733, 1962, 2048, 0, 136, 0, 0, 255),
    VTX(-2525, 2733, -1942, 0, 0, 136, 0, 0, 255),
    VTX(-2525, 2733, 1962, 0, 785, 0, 120, 0, 255),
    VTX(2525, 2733, 1962, 0, 2048, 0, 120, 0, 255),
    VTX(2225, 2733, 1662, 75, 1973, 0, 120, 0, 255),
    VTX(-2225, 2733, 1662, 75, 860, 0, 120, 0, 255),
    VTX(-2225, 2733, 1662, 65, 1983, 0, 120, 0, 255),
    VTX(-2225, 2733, -1638, 65, 1266, 0, 120, 0, 255),
    VTX(-2525, 2733, -1942, 0, 1200, 0, 120, 0, 255),
    VTX(-2525, 2733, 1962, 0, 2048, 0, 120, 0, 255),
    VTX(2525, 2733, -1942, 0, 955, 0, 120, 0, 255),
    VTX(-2525, 2733, -1942, 0, 2048, 0, 120, 0, 255),
    VTX(-2225, 2733, -1642, 65, 1983, 0, 120, 0, 255),
    VTX(2225, 2733, -1642, 65, 1020, 0, 120, 0, 255),
    VTX(2225, 2733, -1642, 60, 1988, 0, 120, 0, 255),
    VTX(2225, 2733, 1658, 60, 1332, 0, 120, 0, 255),
    VTX(2525, 2733, 1962, 0, 1271, 0, 120, 0, 255),
    VTX(2525, 2733, -1942, 0, 2048, 0, 120, 0, 255),
    VTX(2525, 197, -1942, 0, 2048, 0, 120, 0, 255),
    VTX(-2525, 197, -1942, 2048, 2048, 0, 120, 0, 255),
    VTX(-2525, 197, 1962, 2048, 0, 0, 120, 0, 255),
    VTX(2525, 197, 1962, 0, 0, 0, 120, 0, 255),
};

Gfx gTreasureChestBossKeyChestFrontDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gTreasureChestBossKeyFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_boxVtx_0008A8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gTreasureChestBossKeySideAndTopTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_boxVtx_0008A8[4], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gTreasureChestBossKeyFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_boxVtx_0008A8[16], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gTreasureChestBossKeySideAndTopTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_boxVtx_0008A8[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_boxVtx_000CA0[] = {
    VTX(0, 0, -2525, 2105, 1782, 144, 213, 0, 255),
    VTX(400, -1039, -2525, 2105, 1275, 168, 176, 0, 255),
    VTX(400, -1039, 2525, -57, 1275, 154, 194, 0, 255),
    VTX(0, 0, 2525, -57, 1782, 144, 213, 0, 255),
    VTX(400, -1039, -2525, 2110, 1778, 168, 176, 0, 255),
    VTX(1352, -1742, -2525, 2110, 1282, 213, 144, 0, 255),
    VTX(1352, -1742, 2525, -62, 1282, 198, 152, 0, 255),
    VTX(400, -1039, 2525, -62, 1778, 154, 194, 0, 255),
    VTX(1352, -1742, -2525, 2100, 1778, 213, 144, 0, 255),
    VTX(2552, -1742, -2525, 2100, 1286, 9, 137, 0, 255),
    VTX(2552, -1742, 2525, -52, 1286, 247, 137, 0, 255),
    VTX(1352, -1742, 2525, -52, 1778, 198, 152, 0, 255),
    VTX(2552, -1742, -2525, 2104, 1781, 58, 152, 0, 255),
    VTX(3504, -1039, -2525, 2104, 1288, 96, 184, 0, 255),
    VTX(3504, -1039, 2525, -56, 1288, 96, 184, 0, 255),
    VTX(2552, -1742, 2525, -56, 1781, 43, 144, 0, 255),
    VTX(3905, 0, -2525, 2101, 1273, 112, 213, 0, 255),
    VTX(3905, 0, 2525, -53, 1273, 112, 213, 0, 255),
    VTX(3504, -1039, 2525, -53, 1768, 96, 184, 0, 255),
    VTX(3504, -1039, -2525, 2101, 1768, 96, 184, 0, 255),
    VTX(0, 0, -2525, -75, 61, 0, 120, 0, 255),
    VTX(0, 0, 2525, -75, 1986, 0, 120, 0, 255),
    VTX(300, 0, 2225, 76, 1846, 0, 120, 0, 255),
    VTX(300, 0, -2225, 76, 201, 0, 120, 0, 255),
    VTX(3905, 0, 2525, -75, 61, 0, 120, 0, 255),
    VTX(3905, 0, -2525, -75, 1986, 0, 120, 0, 255),
    VTX(3605, 0, -2225, 76, 1846, 0, 120, 0, 255),
    VTX(3605, 0, 2225, 76, 201, 0, 120, 0, 255),
    VTX(1952, 0, -2525, 964, 513, 0, 0, 0, 255),
    VTX(1352, -1742, -2525, -65, 212, 0, 0, 136, 255),
    VTX(400, -1039, -2525, -65, 858, 0, 0, 136, 255),
    VTX(1952, 0, -2525, 954, 514, 0, 0, 0, 255),
    VTX(2552, -1742, -2525, -65, 818, 0, 0, 136, 255),
    VTX(1352, -1742, -2525, -65, 209, 0, 0, 136, 255),
    VTX(1952, 0, -2525, 965, 481, 0, 0, 0, 255),
    VTX(3504, -1039, -2525, -63, 784, 0, 0, 136, 255),
    VTX(2552, -1742, -2525, -63, 216, 0, 0, 136, 255),
    VTX(1952, 0, -2525, 984, 462, 0, 0, 0, 255),
    VTX(3905, 0, -2525, -53, 885, 0, 0, 136, 255),
    VTX(3504, -1039, -2525, -53, 213, 0, 0, 136, 255),
    VTX(3504, -1039, 2525, -53, 213, 0, 0, 120, 255),
    VTX(3905, 0, 2525, -53, 885, 0, 0, 120, 255),
    VTX(1952, 0, 2525, 984, 462, 0, 0, 0, 255),
    VTX(2552, -1742, 2525, -63, 216, 0, 0, 120, 255),
    VTX(3504, -1039, 2525, -63, 784, 0, 0, 120, 255),
    VTX(1952, 0, 2525, 965, 481, 0, 0, 0, 255),
    VTX(1352, -1742, 2525, -65, 209, 0, 0, 120, 255),
    VTX(2552, -1742, 2525, -65, 818, 0, 0, 120, 255),
    VTX(1952, 0, 2525, 954, 514, 0, 0, 0, 255),
    VTX(400, -1039, 2525, -65, 858, 0, 0, 120, 255),
    VTX(1352, -1742, 2525, -65, 212, 0, 0, 120, 255),
    VTX(1952, 0, 2525, 964, 513, 0, 0, 0, 255),
    VTX(400, -1039, 2525, -61, 221, 0, 0, 120, 255),
    VTX(1952, 0, 2525, 976, 456, 0, 0, 0, 255),
    VTX(0, 0, 2525, -61, 857, 0, 0, 120, 255),
    VTX(0, 0, -2525, -61, 857, 0, 0, 136, 255),
    VTX(1952, 0, -2525, 976, 456, 0, 0, 0, 255),
    VTX(400, -1039, -2525, -61, 221, 0, 0, 136, 255),
    VTX(3905, 0, -2525, -70, 5, 0, 120, 0, 255),
    VTX(0, 0, -2525, -70, 2048, 0, 120, 0, 255),
    VTX(300, 0, -2225, 74, 1857, 0, 120, 0, 255),
    VTX(3605, 0, -2225, 74, 196, 0, 120, 0, 255),
    VTX(0, 0, 2525, -70, 5, 0, 120, 0, 255),
    VTX(3905, 0, 2525, -70, 2048, 0, 120, 0, 255),
    VTX(3605, 0, 2225, 74, 1857, 0, 120, 0, 255),
    VTX(300, 0, 2225, 74, 196, 0, 120, 0, 255),
};

Gfx gTreasureChestChestSideAndLidDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x0A000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_boxVtx_000CA0[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_boxVtx_000CA0[28], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(0x0A000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_boxVtx_000CA0[58], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_boxVtx_001258[] = {
    VTX(0, 0, -2525, 0, 3, 144, 213, 0, 255),
    VTX(400, -1039, -2525, 0, 1024, 168, 176, 0, 255),
    VTX(400, -1039, 2525, 2047, 1024, 154, 194, 0, 255),
    VTX(0, 0, 2525, 2047, 3, 144, 213, 0, 255),
    VTX(400, -1039, -2525, 2050, 1024, 168, 176, 0, 255),
    VTX(1352, -1742, -2525, 2050, -13, 213, 144, 0, 255),
    VTX(1352, -1742, 2525, 0, -13, 198, 152, 0, 255),
    VTX(400, -1039, 2525, 0, 1024, 154, 194, 0, 255),
    VTX(1352, -1742, -2525, -1, -6, 213, 144, 0, 255),
    VTX(2552, -1742, -2525, -1, -2055, 9, 137, 0, 255),
    VTX(2552, -1742, 2525, 2048, -2055, 247, 137, 0, 255),
    VTX(1352, -1742, 2525, 2048, -6, 198, 152, 0, 255),
    VTX(2552, -1742, -2525, 0, 1, 58, 152, 0, 255),
    VTX(3504, -1039, -2525, 0, 1024, 96, 184, 0, 255),
    VTX(3504, -1039, 2525, 2051, 1024, 96, 184, 0, 255),
    VTX(2552, -1742, 2525, 2051, 1, 43, 144, 0, 255),
    VTX(3905, 0, -2525, 2045, 2, 112, 213, 0, 255),
    VTX(3905, 0, 2525, 0, 2, 112, 213, 0, 255),
    VTX(3504, -1039, 2525, 0, 1024, 96, 184, 0, 255),
    VTX(3504, -1039, -2525, 2045, 1024, 96, 184, 0, 255),
    VTX(0, 0, -2525, 0, -361, 0, 120, 0, 255),
    VTX(0, 0, 2525, 0, 1024, 0, 120, 0, 255),
    VTX(300, 0, 2225, 82, 942, 0, 120, 0, 255),
    VTX(300, 0, -2225, 82, -278, 0, 120, 0, 255),
    VTX(3504, -1039, 2525, 0, 1024, 0, 0, 120, 255),
    VTX(3905, 0, 2525, 0, 12, 0, 0, 120, 255),
    VTX(1952, 0, 2525, 1024, 1024, 0, 0, 120, 255),
    VTX(2552, -1742, 2525, 0, 5, 0, 0, 120, 255),
    VTX(3504, -1039, 2525, 0, 1024, 0, 0, 120, 255),
    VTX(1952, 0, 2525, 1024, 1024, 0, 0, 120, 255),
    VTX(1352, -1742, 2525, 0, 14, 0, 0, 120, 255),
    VTX(2552, -1742, 2525, 0, 2034, 0, 0, 120, 255),
    VTX(1952, 0, 2525, 1024, 1024, 0, 0, 120, 255),
    VTX(400, -1039, 2525, 0, 1024, 0, 0, 120, 255),
    VTX(1352, -1742, 2525, 0, -1, 0, 0, 120, 255),
    VTX(1952, 0, 2525, 1024, 1024, 0, 0, 120, 255),
    VTX(400, -1039, 2525, 0, 1024, 0, 0, 120, 255),
    VTX(1952, 0, 2525, 1024, 1024, 0, 0, 120, 255),
    VTX(0, 0, 2525, -2, -5, 0, 0, 120, 255),
    VTX(3905, 0, 2525, 0, -659, 0, 120, 0, 255),
    VTX(3905, 0, -2525, 0, 1024, 0, 120, 0, 255),
    VTX(3605, 0, -2225, 100, 924, 0, 120, 0, 255),
    VTX(3605, 0, 2225, 100, -559, 0, 120, 0, 255),
    VTX(1952, 0, -2525, 1024, 1024, 0, 0, 136, 255),
    VTX(2552, -1742, -2525, 0, 2034, 0, 0, 136, 255),
    VTX(1352, -1742, -2525, 0, 14, 0, 0, 136, 255),
    VTX(1952, 0, -2525, 1024, 1024, 0, 0, 136, 255),
    VTX(3504, -1039, -2525, 0, 1024, 0, 0, 136, 255),
    VTX(2552, -1742, -2525, 0, 5, 0, 0, 136, 255),
    VTX(1952, 0, -2525, 1024, 1024, 0, 0, 136, 255),
    VTX(3905, 0, -2525, 0, 12, 0, 0, 136, 255),
    VTX(3504, -1039, -2525, 0, 1024, 0, 0, 136, 255),
    VTX(0, 0, -2525, -2, -5, 0, 0, 136, 255),
    VTX(1952, 0, -2525, 1024, 1024, 0, 0, 136, 255),
    VTX(400, -1039, -2525, 0, 1024, 0, 0, 136, 255),
    VTX(1952, 0, -2525, 1024, 1024, 0, 0, 136, 255),
    VTX(1352, -1742, -2525, 0, -1, 0, 0, 136, 255),
    VTX(400, -1039, -2525, 0, 1024, 0, 0, 136, 255),
    VTX(0, 0, 2525, 0, -305, 0, 120, 0, 255),
    VTX(3905, 0, 2525, 0, 1024, 0, 120, 0, 255),
    VTX(3605, 0, 2225, 102, 922, 0, 120, 0, 255),
    VTX(300, 0, 2225, 102, -203, 0, 120, 0, 255),
    VTX(3905, 0, -2525, 0, 82, 0, 120, 0, 255),
    VTX(0, 0, -2525, 0, 1024, 0, 120, 0, 255),
    VTX(300, 0, -2225, 72, 952, 0, 120, 0, 255),
    VTX(3605, 0, -2225, 72, 154, 0, 120, 0, 255),
};

Gfx gTreasureChestBossKeyChestSideAndTopDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gTreasureChestBossKeySideAndTopTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_boxVtx_001258[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_boxVtx_001258[30], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_boxVtx_001258[58], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 gTreasureChestFrontTex[] = {
    #include "assets/objects/object_box/chest_front.rgb5a1.inc.c"
};

u64 gTreasureChestSideAndTopTex[] = {
    #include "assets/objects/object_box/side_and_top.rgb5a1.inc.c"
};

u64 gTreasureChestBossKeySideAndTopTex[] = {
    #include "assets/objects/object_box/boss_key_side_and_top.rgb5a1.inc.c"
};

u64 gTreasureChestBossKeyFrontTex[] = {
    #include "assets/objects/object_box/boss_key_front_tex.rgb5a1.inc.c"
};

StandardLimb gTreasureChestSkelLimbsLimb_004798 = { 
    { 0, 0, 0 }, 0x01, 0xFF,
    NULL
}; 

StandardLimb gTreasureChestSkelLimbsLimb_0047A4 = { 
    { 0, 2733, 1982 }, 0x02, 0x03,
    NULL
}; 

StandardLimb gTreasureChestSkelLimbsLimb_0047B0 = { 
    { 0, 0, 0 }, 0xFF, 0xFF,
    NULL
}; 

StandardLimb gTreasureChestSkelLimbsLimb_0047BC = { 
    { 0, 2700, 0 }, 0xFF, 0xFF,
    NULL
}; 

void* gTreasureChestSkelLimbs[4] = {
    &gTreasureChestSkelLimbsLimb_004798,
    &gTreasureChestSkelLimbsLimb_0047A4,
    &gTreasureChestSkelLimbsLimb_0047B0,
    &gTreasureChestSkelLimbsLimb_0047BC,
}; 

SkeletonHeader gTreasureChestSkel = { 
    gTreasureChestSkelLimbs, 4
}; 

static u8 unaccounted_0047E0[16] = {
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u8 object_boxCurveAnime_Ref_0047F0[126] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 
    0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 
    0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

s16 object_boxCurveAnime_Copy_004870[117] = {
      1024,   1024,   1024,      0,      0,      0,      0,      0, 
         0,   1024,   1024,      0,      0,      0,      0,      0, 
         0,   1024,   1024,   1024,      0,      0,      0,   2127, 
      2734,      0,   1024,   1024,      0,      0,      0,      0, 
         0,   1024,   1024,   1024,      0,      0,      0,  -2127, 
     -2734,      0,   1024,   1024,   1024,      0,  16384,      0, 
         0,   2734,  -1551,   1024,   1024,      0,      0,      0, 
         0,      0,   1024,   1024,   1024,      0, -16384,      0, 
     -1551,  -2734,      0,   1024,   1024,   1024,      0, -32768, 
         0,  -2127,   2734,      0,   1024,   1024,      0,      0, 
         0,      0,      0,   1024,   1024,   1024,      0, -32768, 
         0,  -2127,  -2734,      0,   1024,   1024,   1024,      0, 
    -16384,      0,      0,   2734,   1551,   1024,   1024,      0, 
         0,      0,      0,      0,   1024,   1024,   1024,      0, 
     16384,      0,  -1551,  -2734,      0, 
}; 

TransformData object_boxCurveAnime_TransformData_00495C[43] = {
    { 0x000C, 0x0001, 0, 0, 1.200000f },
    { 0x0004, 0x0012, 0, 0, 1.200000f },
    { 0x0004, 0x001C, 3, 3, 2.000000f },
    { 0x0004, 0x0032, 0, 0, 2.300000f },
    { 0x0004, 0x0057, 0, 0, 2.300000f },
    { 0x0004, 0x006B, 9, 9, 3.500000f },
    { 0x0014, 0x0088, 0, 0, 4.000000f },
    { 0x000C, 0x0001, 0, 0, 0.000000f },
    { 0x0004, 0x0014, 0, 0, 0.000000f },
    { 0x0004, 0x001E, 0, 0, 5.500000f },
    { 0x0004, 0x0032, 0, 0, 0.000000f },
    { 0x0014, 0x0074, 0, 0, 0.000000f },
    { 0x000C, 0x0001, 0, 0, -85.000000f },
    { 0x0004, 0x0015, 0, 0, -85.000000f },
    { 0x0004, 0x0032, 0, 0, -36.000000f },
    { 0x0014, 0x0074, 0, 0, -36.000000f },
    { 0x000C, 0x0001, 0, 0, 0.000000f },
    { 0x0004, 0x0014, 0, 0, 0.000000f },
    { 0x0004, 0x001E, 0, 0, 5.500000f },
    { 0x0004, 0x0032, 0, 0, 0.000000f },
    { 0x0014, 0x0074, 0, 0, 0.000000f },
    { 0x000C, 0x0001, 0, 0, -85.000000f },
    { 0x0004, 0x0015, 0, 0, -85.000000f },
    { 0x0004, 0x0032, 0, 0, -40.000000f },
    { 0x0014, 0x0074, 0, 0, -40.000000f },
    { 0x000C, 0x0001, 0, 0, 0.000000f },
    { 0x0004, 0x0014, 0, 0, 0.000000f },
    { 0x0004, 0x001E, 0, 0, 5.500000f },
    { 0x0004, 0x0032, 0, 0, 0.000000f },
    { 0x0014, 0x0074, 0, 0, 0.000000f },
    { 0x000C, 0x0001, 0, 0, -85.000000f },
    { 0x0004, 0x0015, 0, 0, -85.000000f },
    { 0x0004, 0x0032, 0, 0, -36.000000f },
    { 0x0014, 0x0074, 0, 0, -36.000000f },
    { 0x000C, 0x0001, 0, 0, 0.000000f },
    { 0x0004, 0x0014, 0, 0, 0.000000f },
    { 0x0004, 0x001E, 0, 0, 1.200000f },
    { 0x0004, 0x0032, 0, 0, 0.000000f },
    { 0x0014, 0x0074, 0, 0, 0.000000f },
    { 0x000C, 0x0001, 0, 0, -40.000000f },
    { 0x0004, 0x0014, 0, 0, -40.000000f },
    { 0x0004, 0x0032, 0, 0, 6.000000f },
    { 0x0014, 0x0074, 0, 0, 6.000000f },
}; 

TransformUpdateIndex gTreasureChestCurveAnim_4B60 = { 
    object_boxCurveAnime_Ref_0047F0,
    object_boxCurveAnime_TransformData_00495C,
    object_boxCurveAnime_Copy_004870,
    1, 136
}; 

u8 object_boxCurveAnime_Ref_004B70[126] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
    0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x05, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 
    0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

s16 object_boxCurveAnime_Copy_004BF0[117] = {
      1024,   1024,   1024,      0,      0,      0,      0,      0, 
         0,   1024,   1024,      0,      0,      0,      0,      0, 
         0,   1024,   1024,   1024,      0,      0,      0,   2127, 
      2734,      0,   1024,   1024,      0,      0,      0,      0, 
         0,   1024,   1024,   1024,      0,      0,      0,  -2127, 
     -2734,      0,   1024,   1024,   1024,      0,  16384,      0, 
         0,   2734,  -1551,   1024,   1024,      0,      0,      0, 
         0,      0,   1024,   1024,   1024,      0, -16384,      0, 
     -1551,  -2734,      0,   1024,   1024,   1024,      0, -32768, 
         0,  -2127,   2734,      0,   1024,   1024,      0,      0, 
         0,      0,      0,   1024,   1024,   1024,      0, -32768, 
         0,  -2127,  -2734,      0,   1024,   1024,   1024,      0, 
    -16384,      0,      0,   2734,   1551,   1024,   1024,      0, 
         0,      0,      0,      0,   1024,   1024,   1024,      0, 
     16384,      0,  -1551,  -2734,      0, 
}; 

TransformData object_boxCurveAnime_TransformData_004CDC[55] = {
    { 0x000C, 0x0001, 0, 0, 1.200000f },
    { 0x0004, 0x0026, 0, 0, 1.200000f },
    { 0x0004, 0x0030, 3, 3, 1.600000f },
    { 0x0004, 0x0046, 0, 0, 1.800000f },
    { 0x0004, 0x0057, 0, 0, 1.800000f },
    { 0x0004, 0x006B, 8, 8, 2.800000f },
    { 0x0014, 0x0088, 0, 0, 3.500000f },
    { 0x000C, 0x0001, 0, 0, 0.000000f },
    { 0x0004, 0x0028, 0, 0, 0.000000f },
    { 0x0004, 0x0032, 0, 0, 5.500000f },
    { 0x0004, 0x0046, 0, 0, 0.000000f },
    { 0x0004, 0x0066, 0, 0, 0.000000f },
    { 0x0004, 0x0070, 0, 0, 5.500000f },
    { 0x0014, 0x0084, 0, 0, 0.000000f },
    { 0x000C, 0x0001, 0, 0, -85.000000f },
    { 0x0004, 0x0029, 0, 0, -85.000000f },
    { 0x0004, 0x0046, 0, 0, -36.000000f },
    { 0x0004, 0x0067, 0, 0, -85.000000f },
    { 0x0014, 0x0084, 0, 0, -36.000000f },
    { 0x000C, 0x0001, 0, 0, 0.000000f },
    { 0x0004, 0x0028, 0, 0, 0.000000f },
    { 0x0004, 0x0032, 0, 0, 5.500000f },
    { 0x0004, 0x0046, 0, 0, 0.000000f },
    { 0x0004, 0x0066, 0, 0, 0.000000f },
    { 0x0004, 0x0070, 0, 0, 5.500000f },
    { 0x0014, 0x0084, 0, 0, 0.000000f },
    { 0x000C, 0x0001, 0, 0, -85.000000f },
    { 0x0004, 0x0029, 0, 0, -85.000000f },
    { 0x0004, 0x0046, 0, 0, -40.000000f },
    { 0x0004, 0x0067, 0, 0, -85.000000f },
    { 0x0014, 0x0084, 0, 0, -40.000000f },
    { 0x000C, 0x0001, 0, 0, 0.000000f },
    { 0x0004, 0x0028, 0, 0, 0.000000f },
    { 0x0004, 0x0032, 0, 0, 5.500000f },
    { 0x0004, 0x0046, 0, 0, 0.000000f },
    { 0x0004, 0x0066, 0, 0, 0.000000f },
    { 0x0004, 0x0070, 0, 0, 5.500000f },
    { 0x0014, 0x0084, 0, 0, 0.000000f },
    { 0x000C, 0x0001, 0, 0, -85.000000f },
    { 0x0004, 0x0029, 0, 0, -85.000000f },
    { 0x0004, 0x0046, 0, 0, -36.000000f },
    { 0x0004, 0x0067, 0, 0, -85.000000f },
    { 0x0014, 0x0084, 0, 0, -36.000000f },
    { 0x000C, 0x0001, 0, 0, 0.000000f },
    { 0x0004, 0x0028, 0, 0, 0.000000f },
    { 0x0004, 0x0032, 0, 0, 1.200000f },
    { 0x0004, 0x0046, 0, 0, 0.000000f },
    { 0x0004, 0x0066, 0, 0, 0.000000f },
    { 0x0004, 0x0070, 0, 0, 1.200000f },
    { 0x0014, 0x0084, 0, 0, 0.000000f },
    { 0x000C, 0x0001, 0, 0, -40.000000f },
    { 0x0004, 0x0028, 0, 0, -40.000000f },
    { 0x0004, 0x0046, 0, 0, 6.000000f },
    { 0x0004, 0x0066, 0, 0, -40.000000f },
    { 0x0014, 0x0084, 0, 0, 6.000000f },
}; 

TransformUpdateIndex gTreasureChestCurveAnim_4F70 = { 
    object_boxCurveAnime_Ref_004B70,
    object_boxCurveAnime_TransformData_004CDC,
    object_boxCurveAnime_Copy_004BF0,
    1, 136
}; 

u64 object_boxTex_004F80[] = {
    #include "assets/objects/object_box/object_boxTex_004F80.i8.inc.c"
};

static Vtx gTreasureChestCurveSkelLimbsVtx_005780[] = {
    VTX(2127, 282, 1551, 1533, 1024, 0, 136, 0, 255),
    VTX(-2127, 282, -1551, 6653, 1024, 0, 136, 0, 255),
    VTX(2127, 282, -1551, 3587, 1024, 0, 136, 0, 255),
    VTX(-2127, 282, 1551, 8707, 1024, 0, 136, 0, 255),
    VTX(2127, 282, 1551, 11773, 1024, 0, 136, 0, 255),
    VTX(2127, 282, -1551, 3587, 1024, 0, 0, 136, 255),
    VTX(-2127, 2715, -1551, 6653, -211, 0, 0, 136, 255),
    VTX(2127, 2715, -1551, 3587, -211, 0, 0, 136, 255),
    VTX(-2127, 282, -1551, 6653, 1024, 0, 0, 136, 255),
    VTX(2127, 282, 1551, 1533, 1024, 120, 0, 0, 255),
    VTX(2127, 2715, -1551, 3587, -211, 120, 0, 0, 255),
    VTX(2127, 2715, 1551, 1533, -211, 120, 0, 0, 255),
    VTX(2127, 282, -1551, 3587, 1024, 120, 0, 0, 255),
    VTX(-2127, 282, 1551, 8707, 1024, 0, 0, 120, 255),
    VTX(2127, 2715, 1551, 11773, -211, 0, 0, 120, 255),
    VTX(-2127, 2715, 1551, 8707, -211, 0, 0, 120, 255),
    VTX(2127, 282, 1551, 11773, 1024, 0, 0, 120, 255),
    VTX(-2127, 282, -1551, 6653, 1024, 136, 0, 0, 255),
    VTX(-2127, 2715, 1551, 8707, -211, 136, 0, 0, 255),
    VTX(-2127, 2715, -1551, 6653, -211, 136, 0, 0, 255),
    VTX(-2127, 282, 1551, 8707, 1024, 136, 0, 0, 255),
    VTX(-2127, 2734, 1551, 17414, 1024, 0, 0, 120, 255),
    VTX(2127, 2734, 1551, 23546, 1024, 0, 0, 120, 255),
    VTX(2127, 3293, 1551, 23546, 0, 0, 0, 120, 255),
    VTX(-2127, 3293, 1551, 17414, 0, 0, 0, 120, 255),
    VTX(2127, 2734, -1551, 7174, 1024, 0, 0, 136, 255),
    VTX(-2127, 3293, -1551, 13306, 0, 0, 0, 136, 255),
    VTX(2127, 3293, -1551, 7174, 0, 0, 0, 136, 255),
    VTX(-2127, 2734, -1551, 13306, 1024, 0, 0, 136, 255),
    VTX(2127, 2734, 1551, 3066, 1024, 120, 0, 0, 255),
    VTX(2127, 3293, -1551, 7174, 0, 120, 0, 0, 255),
    VTX(2127, 3293, 1551, 3066, 0, 120, 0, 0, 255),
    VTX(2127, 2734, -1551, 7174, 1024, 120, 0, 0, 255),
    VTX(-2127, 2734, -1551, 13306, 1024, 136, 0, 0, 255),
    VTX(-2127, 3293, 1551, 17414, 0, 136, 0, 0, 255),
    VTX(-2127, 3293, -1551, 13306, 0, 136, 0, 0, 255),
    VTX(-2127, 2734, 1551, 17414, 1024, 136, 0, 0, 255),
};

// Space World Change: different shifts
Gfx gTreasureChestCurveSkelLimbsCurveLimbDL_0059D0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_boxTex_004F80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 6, 5, 2, 0),
    gsDPLoadMultiBlock(object_boxTex_004F80, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_MIRROR | G_TX_CLAMP, 6, 5, 3, 0),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, TEXEL0, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gTreasureChestCurveSkelLimbsVtx_005780[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 16, 14, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 20, 18, 0),
    gsSPEndDisplayList(),
}; 

Gfx gTreasureChestCurveSkelLimbsCurveLimbDL_005AB8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_boxTex_004F80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 6, 5, 1, 0),
    gsDPLoadMultiBlock(object_boxTex_004F80, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_MIRROR | G_TX_CLAMP, 6, 5, 2, 0),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, TEXEL0, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gTreasureChestCurveSkelLimbsVtx_005780[21], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx gTreasureChestCurveSkelLimbsCurveLimbDL_005B80[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_boxTex_004F80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 6, 5, 1, 0),
    gsDPLoadMultiBlock(object_boxTex_004F80, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_MIRROR | G_TX_CLAMP, 6, 5, 2, 0),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, TEXEL0, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gTreasureChestCurveSkelLimbsVtx_005780[25], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx gTreasureChestCurveSkelLimbsCurveLimbDL_005C48[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_boxTex_004F80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 6, 5, 1, 0),
    gsDPLoadMultiBlock(object_boxTex_004F80, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_MIRROR | G_TX_CLAMP, 6, 5, 2, 0),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, TEXEL0, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gTreasureChestCurveSkelLimbsVtx_005780[29], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx gTreasureChestCurveSkelLimbsCurveLimbDL_005D10[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_boxTex_004F80, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 6, 5, 1, 0),
    gsDPLoadMultiBlock(object_boxTex_004F80, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_MIRROR | G_TX_CLAMP, 6, 5, 2, 0),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, TEXEL0, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gTreasureChestCurveSkelLimbsVtx_005780[33], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005DD8 = { 
    0x01, 0xFF,
    { NULL, NULL }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005DE4 = { 
    0xFF, 0x02,
    { NULL, gTreasureChestCurveSkelLimbsCurveLimbDL_0059D0 }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005DF0 = { 
    0x03, 0x05,
    { NULL, NULL }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005DFC = { 
    0x04, 0xFF,
    { NULL, NULL }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005E08 = { 
    0xFF, 0xFF,
    { NULL, gTreasureChestCurveSkelLimbsCurveLimbDL_005C48 }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005E14 = { 
    0x06, 0x08,
    { NULL, NULL }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005E20 = { 
    0x07, 0xFF,
    { NULL, NULL }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005E2C = { 
    0xFF, 0xFF,
    { NULL, gTreasureChestCurveSkelLimbsCurveLimbDL_005B80 }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005E38 = { 
    0x09, 0x0B,
    { NULL, NULL }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005E44 = { 
    0x0A, 0xFF,
    { NULL, NULL }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005E50 = { 
    0xFF, 0xFF,
    { NULL, gTreasureChestCurveSkelLimbsCurveLimbDL_005D10 }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005E5C = { 
    0x0C, 0xFF,
    { NULL, NULL }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005E68 = { 
    0x0D, 0xFF,
    { NULL, NULL }
}; 

SkelCurveLimb gTreasureChestCurveSkelLimbsLimb_005E74 = { 
    0xFF, 0xFF,
    { NULL, gTreasureChestCurveSkelLimbsCurveLimbDL_005AB8 }
}; 

SkelCurveLimb* gTreasureChestCurveSkelLimbs[14] = {
    &gTreasureChestCurveSkelLimbsLimb_005DD8,
    &gTreasureChestCurveSkelLimbsLimb_005DE4,
    &gTreasureChestCurveSkelLimbsLimb_005DF0,
    &gTreasureChestCurveSkelLimbsLimb_005DFC,
    &gTreasureChestCurveSkelLimbsLimb_005E08,
    &gTreasureChestCurveSkelLimbsLimb_005E14,
    &gTreasureChestCurveSkelLimbsLimb_005E20,
    &gTreasureChestCurveSkelLimbsLimb_005E2C,
    &gTreasureChestCurveSkelLimbsLimb_005E38,
    &gTreasureChestCurveSkelLimbsLimb_005E44,
    &gTreasureChestCurveSkelLimbsLimb_005E50,
    &gTreasureChestCurveSkelLimbsLimb_005E5C,
    &gTreasureChestCurveSkelLimbsLimb_005E68,
    &gTreasureChestCurveSkelLimbsLimb_005E74,
}; 

SkelCurveLimbList gTreasureChestCurveSkel = { 
    gTreasureChestCurveSkelLimbs, 14
}; 

CamData gTreasureChestCol_camDataList_00005EC0[1] = {
    { 0x0000, 0, NULL },
}; 

SurfaceType gTreasureChestCol_surfaceType_00005EC8[] = {
    { 0x00000000, 0x000207CA },
    { 0x00200000, 0x000207CA },
}; 

CollisionPoly gTreasureChestCol_polygons_00005ED8[] = {
    { 0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xEE85 },
    { 0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xEE85 },
    { 0x0001, 0x2004, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xF856 },
    { 0x0001, 0x2004, 0x0000, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xF856 },
    { 0x0001, 0x2006, 0x0002, 0x0001, 0x7FFF, 0x0000, 0x0000, 0xF623 },
    { 0x0001, 0x2006, 0x0001, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xF623 },
    { 0x0001, 0x2007, 0x0003, 0x0002, 0x0000, 0x0000, 0x8001, 0xF86A },
    { 0x0001, 0x2007, 0x0002, 0x0006, 0x0000, 0x0000, 0x8001, 0xF86A },
    { 0x0001, 0x2005, 0x0000, 0x0003, 0x8001, 0x0000, 0x0000, 0xF623 },
    { 0x0001, 0x2005, 0x0003, 0x0007, 0x8001, 0x0000, 0x0000, 0xF623 },
    { 0x0000, 0x2007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0002 },
    { 0x0000, 0x2007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0002 },
}; 

Vec3s gTreasureChestCol_vtx_00005F98[] = {
    {  -2525,   4475,   1962 },
    {   2525,   4475,   1962 },
    {   2525,   4475,  -1942 },
    {  -2525,   4475,  -1942 },
    {   2525,      2,   1962 },
    {  -2525,      2,   1962 },
    {   2525,      2,  -1942 },
    {  -2525,      2,  -1942 },
}; 

CollisionHeader gTreasureChestCol = { 
    { -2525, 2, -1942 },
    { 2525, 4475, 1962 },
    8,
    gTreasureChestCol_vtx_00005F98,
    12,
    gTreasureChestCol_polygons_00005ED8,
    gTreasureChestCol_surfaceType_00005EC8,
    gTreasureChestCol_camDataList_00005EC0,
    0,
    NULL
}; 

// Space World changes
u64 gMMChestNormalFrontTex[] = {
#include "assets/objects/object_box/mm_front.rgb5a1.inc.c"
};

u64 gMMChestNormalTopTex[] = {
#include "assets/objects/object_box/mm_top.rgb5a1.inc.c"
};
