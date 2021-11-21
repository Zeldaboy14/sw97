#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_mir_ray.h"

static Vtx object_mir_rayVtx_000000[6];
static Vtx object_mir_rayVtx_000060[5];
static Vtx object_mir_rayVtx_000B90[12];

static Vtx object_mir_rayVtx_000000[6] = {
    VTX(-536, 939, 0, -433, -4, 255, 255, 255, 255),
    VTX(-1690, 0, 0, 768, 1473, 255, 255, 255, 255),
    VTX(-536, 0, 0, 768, -4, 255, 255, 255, 255),
    VTX(-1690, 0, 0, -256, 1473, 255, 255, 255, 255),
    VTX(-536, -938, 0, 945, -4, 255, 255, 255, 255),
    VTX(-536, 0, 0, -256, -4, 255, 255, 255, 255),
}; 

static Vtx object_mir_rayVtx_000060[5] = {
    VTX(-536, 939, 0, 1281, 1337, 255, 255, 255, 255),
    VTX(-536, -938, 0, -257, 1337, 255, 255, 255, 255),
    VTX(758, -800, 0, -143, 132, 255, 255, 255, 255),
    VTX(921, 0, 0, 512, -20, 255, 255, 255, 255),
    VTX(758, 800, 0, 1167, 132, 255, 255, 255, 255),
}; 

Gfx gShieldBeamImageDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gShieldBeamImageCircleTex, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, TEXEL1, 0, PRIM_LOD_FRAC, 
                       COMBINED),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsSPVertex(&object_mir_rayVtx_000000[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gShieldBeamImageGerudoSymbolNewTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_mir_rayVtx_000060[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
}; 

u64 gShieldBeamImageCircleTex[] = {
#include "assets/objects/object_mir_ray/shield_beam_image_circle.ia16.inc.c"
};

u64 gShieldBeamImageGerudoSymbolNewTex[] = {
#include "assets/objects/object_mir_ray/shield_beam_image_gerudo_symbol_new.ia16.inc.c"
};

static u8 unaccounted_000B88[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx object_mir_rayVtx_000B90[12] = {
    VTX(758, 800, 0, 1288, 8192, 255, 255, 255, 255),
    VTX(921, 0, 0, 1455, 8192, 255, 255, 255, 255),
    VTX(921, 0, -2000, 1455, 200, 255, 255, 255, 255),
    VTX(758, 800, -2000, 1288, 200, 255, 255, 255, 255),
    VTX(758, -800, 0, 1288, 8192, 255, 255, 255, 255),
    VTX(758, -800, -2000, 1288, 200, 255, 255, 255, 255),
    VTX(-536, -939, 0, -37, 8192, 255, 255, 255, 255),
    VTX(-536, -939, -2000, -37, 200, 255, 255, 255, 255),
    VTX(-1690, 0, 0, -1219, 8192, 255, 255, 255, 255),
    VTX(-1690, 0, -2000, -1219, 200, 255, 255, 255, 255),
    VTX(-536, 938, 0, -37, 8192, 255, 255, 255, 255),
    VTX(-536, 938, -2000, -37, 200, 255, 255, 255, 255),
}; 

Gfx gShieldBeamGlowDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gShieldBeamGlowRayTex, G_IM_FMT_IA, G_IM_SIZ_16b, 8, 256, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 3, 8, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_mir_rayVtx_000B90[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 0, 3, 0, 10, 3, 11, 0),
    gsSPEndDisplayList(),
}; 

u64 gShieldBeamGlowRayTex[] = {
#include "assets/objects/object_mir_ray/shield_beam_glow_ray.ia16.inc.c"
};

static u8 unaccounted_001CF8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


