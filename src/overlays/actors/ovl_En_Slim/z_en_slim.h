#ifndef _Z_EN_SLIM_H_
#define _Z_EN_SLIM_H_

#include "ultra64.h"
#include "global.h"

struct EnSlim;

typedef void (*EnSlimActionFunc)(struct EnSlim*, GlobalContext*);

typedef enum {
    /* -2 */ TEKSLIM_BLUE = -2,
    /* -1 */ TEKSLIM_RED
} EnSlimType;

typedef struct EnSlim {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ SkelAnime skelAnime;
    /* 0x0190 */ Vec3s jointTable[25];
    /* 0x0226 */ Vec3s morphTable[25];
    /* 0x02BC */ u8 action;
    /* 0x02BD */ u8 flipState;
    /* 0x02C0 */ EnSlimActionFunc actionFunc;
    /* 0x02C4 */ struct_80032E24 unk_2C4; // Data for EnPart which is spawned at death
    /* 0x02DC */ s32 unk_2DC; // flags related to bgCheck drawn effects
    /* 0x02E0 */ s16 actionVar1; // Usage depends on current action function
    /* 0x02E2 */ u8 actionVar2; // Usage depends on current action function
    /* 0x02E3 */ u8 spawnIceTimer;
    /* 0x02E4 */ u8 damageEffect;
    /* 0x02E8 */ ColliderJntSph collider;
    /* 0x0308 */ ColliderJntSphElement colliderItem;
    /* 0x0348 */ Vec3f frontLeftFootPos;
    /* 0x0354 */ Vec3f frontRightFootPos;
    /* 0x0360 */ Vec3f backRightFootPos;
    /* 0x036C */ Vec3f backLeftFootPos;
    /*        */ s16 deformationCounter;
    u8 timer;
} EnSlim; // size = 0x0378

extern const ActorInit En_Slim_InitVars;

#endif
