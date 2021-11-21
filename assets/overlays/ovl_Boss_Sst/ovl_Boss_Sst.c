#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "ovl_Boss_Sst.h"

static Vtx ovl_Boss_SstVtx_00A3F8[4];
static Vtx ovl_Boss_SstVtx_00A8C0[3];

Gfx sBodyStaticDList[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(NOISE, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, 
                       COMBINED),
    gsSPEndDisplayList(),
}; 

Gfx sHandTrailDList[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | ZMODE_XLU | FORCE_BL | G_RM_PASS, 
                      AA_EN | Z_CMP | Z_UPD | IM_RD | CLR_ON_CVG | CVG_DST_WRAP | ZMODE_XLU | FORCE_BL | 
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                GBL_c2(G_BL_CLR_IN,
                                                                                                                
                                                                                                                
                                                                                                                G_BL_A_IN,
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                G_BL_CLR_MEM,
                                                                                                                
                                                                                                                
                                                                                                                
                                                                                                                G_BL_1MA)),
    gsSPEndDisplayList(),
}; 

static Vtx ovl_Boss_SstVtx_00A3F8[4] = {
    VTX(400, 400, 0, 2048, 0, 255, 255, 255, 255),
    VTX(-400, 400, 0, 0, 0, 255, 255, 255, 255),
    VTX(-400, -400, 0, 0, 6144, 255, 255, 255, 255),
    VTX(400, -400, 0, 2048, 6144, 255, 255, 255, 255),
}; 

u64 ovl_Boss_SstTex_00A438[] = {
#include "assets/overlays/ovl_Boss_Sst/ovl_Boss_SstTex_00A438.i8.inc.c"
};

Gfx sIntroVanishDList[] = {
    gsDPPipeSync(),
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(0, 0, 0, 0, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, PRIMITIVE, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(Z_CMP | Z_UPD | IM_RD | CVG_DST_FULL | ZMODE_XLU | FORCE_BL | G_RM_PASS, Z_CMP | Z_UPD | IM_RD | 
                      CVG_DST_FULL | ZMODE_XLU | FORCE_BL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetEnvColor(0, 0, 0, 0),
    gsDPLoadTextureBlock(ovl_Boss_SstTex_00A438, G_IM_FMT_I, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_Boss_SstVtx_00A3F8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx ovl_Boss_SstVtx_00A8C0[3] = {
    VTX(-128, 0, 75, -639, -127, 160, 151, 205, 255),
    VTX(129, 0, 74, 1642, -165, 160, 151, 205, 255),
    VTX(0, 0, -148, 534, 1830, 160, 151, 205, 255),
}; 

u64 ovl_Boss_SstTex_00A8F0[] = {
#include "assets/overlays/ovl_Boss_Sst/ovl_Boss_SstTex_00A8F0.i8.inc.c"
};

Gfx sShadowDList[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ovl_Boss_SstTex_00A8F0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(NOISE, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED, 0, 0, 
                       0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&ovl_Boss_SstVtx_00A8C0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 


