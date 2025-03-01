/*
 * File: z_en_dns.c
 * Overlay: En_Dns
 * Description: Deku Salesman
 */

#include "z_en_dns.h"
#include "vt.h"

#define FLAGS 0x00000009

#define THIS ((EnDns*)thisx)

void EnDns_Init(Actor* thisx, GlobalContext* globalCtx);
void EnDns_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnDns_Update(Actor* thisx, GlobalContext* globalCtx);
void EnDns_Draw(Actor* thisx, GlobalContext* globalCtx);

u32 func_809EF5A4(EnDns* this);
u32 func_809EF658(EnDns* this);
u32 func_809EF70C(EnDns* this);
u32 func_809EF73C(EnDns* this);
u32 func_809EF800(EnDns* this);
u32 func_809EF854(EnDns* this);
u32 func_809EF8F4(EnDns* this);
u32 func_809EF9A4(EnDns* this);

void func_809EF9F8(EnDns* this);
void func_809EFA28(EnDns* this);
void func_809EFA58(EnDns* this);
void func_809EFA9C(EnDns* this);
void func_809EFACC(EnDns* this);
void func_809EFAFC(EnDns* this);
void func_809EFB40(EnDns* this);

void EnDns_SetupWait(EnDns* this, GlobalContext* globalCtx);
void EnDns_Wait(EnDns* this, GlobalContext* globalCtx);
void EnDns_Talk(EnDns* this, GlobalContext* globalCtx);
void func_809EFDD0(EnDns* this, GlobalContext* globalCtx);
void func_809EFEE8(EnDns* this, GlobalContext* globalCtx);
void func_809EFF50(EnDns* this, GlobalContext* globalCtx);
void func_809EFF98(EnDns* this, GlobalContext* globalCtx);
void func_809F008C(EnDns* this, GlobalContext* globalCtx);
void EnDns_SetupBurrow(EnDns* this, GlobalContext* globalCtx);
void EnDns_Burrow(EnDns* this, GlobalContext* globalCtx);

const ActorInit En_Dns_InitVars = {
    ACTOR_EN_DNS,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SHOPNUTS,
    sizeof(EnDns),
    (ActorFunc)EnDns_Init,
    (ActorFunc)EnDns_Destroy,
    (ActorFunc)EnDns_Update,
    (ActorFunc)EnDns_Draw,
};

static ColliderCylinderInitType1 sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0xFFCFFFFF, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_ON,
        OCELEM_ON,
    },
    { 18, 32, 0, { 0, 0, 0 } },
};

u16 D_809F040C[] = {
    0x10A0, 0x10A1, 0x10A2, 0x10CA, 0x10CB, 0x10CC, 0x10CD, 0x10CE, 0x10CF, 0x10DC, 0x10DD,
};

// Debug text: sells  { Deku Nuts, Deku Sticks, Piece of Heart, Deku Seeds,
//                      Deku Shield, Bombs, Arrows, Red Potion,
//                      Green Potion, Deku Stick Upgrade, Deku Nut Upgrade }
char* D_809F0424[] = {
    "デクの実売り            ", "デクの棒売り            ", "ハートの欠片売り        ", "デクの種売り            ",
    "デクの盾売り            ", "バクダン売り            ", "矢売り                  ", "赤のくすり売り          ",
    "緑のくすり売り          ", "デクの棒持てる数を増やす", "デクの実持てる数を増やす",
};

DnsItemEntry D_809F0450 = { 20, 5, GI_NUTS_5_2, func_809EF5A4, func_809EFA28 };

DnsItemEntry D_809F0460 = { 15, 1, GI_STICKS_1, func_809EF658, func_809EF9F8 };

DnsItemEntry D_809F0470 = { 10, 1, GI_HEART_PIECE, func_809EF70C, func_809EFA58 };

DnsItemEntry D_809F0480 = { 40, 30, GI_SEEDS_30, func_809EF73C, func_809EF9F8 };

DnsItemEntry D_809F0490 = { 50, 1, GI_SHIELD_DEKU, func_809EF800, func_809EF9F8 };

DnsItemEntry D_809F04A0 = { 40, 5, GI_BOMBS_5, func_809EF854, func_809EFA9C };

DnsItemEntry D_809F04B0 = { 70, 20, GI_ARROWS_LARGE, func_809EF8F4, func_809EFACC };

DnsItemEntry D_809F04C0 = { 40, 1, GI_POTION_RED, func_809EF9A4, func_809EF9F8 };

DnsItemEntry D_809F04D0 = { 40, 1, GI_POTION_GREEN, func_809EF9A4, func_809EF9F8 };

DnsItemEntry D_809F04E0 = { 40, 1, GI_STICK_UPGRADE_20, func_809EF70C, func_809EFAFC };

DnsItemEntry D_809F04F0 = { 40, 1, GI_NUT_UPGRADE_30, func_809EF70C, func_809EFB40 };

DnsItemEntry* D_809F0500[] = {
    &D_809F0450, &D_809F0460, &D_809F0470, &D_809F0480, &D_809F0490, &D_809F04A0,
    &D_809F04B0, &D_809F04C0, &D_809F04D0, &D_809F04E0, &D_809F04F0,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_S8(naviEnemyId, 78, ICHAIN_CONTINUE),
    ICHAIN_U8(targetMode, 2, ICHAIN_CONTINUE),
    ICHAIN_F32(targetArrowOffset, 30, ICHAIN_STOP),
};

typedef struct {
    /* 0x00 */ AnimationHeader* anim;
    /* 0x04 */ u8 mode;
    /* 0x08 */ f32 transitionRate;
} DnsAnimInfo; // size = 0xC

DnsAnimInfo D_809F0538[] = {
    { 0x06001108, 0x00, 0.0f },
    { 0x06004404, 0x02, 0.0f },
    { 0x060009A0, 0x02, 0.0f },
};

extern FlexSkeletonHeader D_060041A8;
extern AnimationHeader D_060009A0;
extern AnimationHeader D_06004404;

void EnDns_Init(Actor* thisx, GlobalContext* globalCtx) {
    EnDns* this = THIS;

    if (this->actor.params < 0) {
        // "Function Error (Deku Salesman)"
        osSyncPrintf(VT_FGCOL(RED) "引数エラー（売りナッツ）[ arg_data = %d ]" VT_RST "\n", this->actor.params);
        Actor_Kill(&this->actor);
        return;
    }
    // Sell Seeds instead of Arrows if Link is child
    if ((this->actor.params == 0x0006) && (LINK_AGE_IN_YEARS == YEARS_CHILD)) {
        this->actor.params = 0x0003;
    }
    // Deku Salesman
    osSyncPrintf(VT_FGCOL(GREEN) "◆◆◆ 売りナッツ『%s』 ◆◆◆" VT_RST "\n", D_809F0424[this->actor.params],
                 this->actor.params);
    Actor_ProcessInitChain(&this->actor, sInitChain);
    SkelAnime_InitFlex(globalCtx, &this->skelAnime, &D_060041A8, &D_060009A0, this->jointTable, this->morphTable, 18);
    Collider_InitCylinder(globalCtx, &this->collider);
    Collider_SetCylinderType1(globalCtx, &this->collider, &this->actor, &sCylinderInit);
    ActorShape_Init(&this->actor.shape, 0.0f, &ActorShadow_DrawCircle, 35.0f);
    this->actor.textId = D_809F040C[this->actor.params];
    Actor_SetScale(&this->actor, 0.01f);
    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->maintainCollider = 1;
    this->standOnGround = 1;
    this->dropCollectible = 0;
    this->actor.speedXZ = 0.0f;
    this->actor.velocity.y = 0.0f;
    this->actor.gravity = -1.0f;
    this->dnsItemEntry = D_809F0500[this->actor.params];
    this->actionFunc = EnDns_SetupWait;
}

void EnDns_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    EnDns* this = THIS;

    Collider_DestroyCylinder(globalCtx, &this->collider);
}

void EnDns_Change(EnDns* this, u8 arg1) {
    s16 frameCount;

    frameCount = Animation_GetLastFrame(D_809F0538[arg1].anim);
    this->unk_2BA = arg1; // Not used anywhere else?
    Animation_Change(&this->skelAnime, D_809F0538[arg1].anim, 1.0f, 0.0f, (f32)frameCount, D_809F0538[arg1].mode,
                     D_809F0538[arg1].transitionRate);
}

/* Item give checking functions */

u32 func_809EF5A4(EnDns* this) {
    if ((CUR_CAPACITY(UPG_NUTS) != 0) && (AMMO(ITEM_NUT) >= CUR_CAPACITY(UPG_NUTS))) {
        return 1;
    }
    if (gSaveContext.rupees < this->dnsItemEntry->itemPrice) {
        return 0;
    }
    if (Item_CheckObtainability(ITEM_NUT) == ITEM_NONE) {
        return 2;
    }
    return 4;
}

u32 func_809EF658(EnDns* this) {
    if ((CUR_CAPACITY(UPG_STICKS) != 0) && (AMMO(ITEM_STICK) >= CUR_CAPACITY(UPG_STICKS))) {
        return 1;
    }
    if (gSaveContext.rupees < this->dnsItemEntry->itemPrice) {
        return 0;
    }
    if (Item_CheckObtainability(ITEM_STICK) == ITEM_NONE) {
        return 2;
    }
    return 4;
}

u32 func_809EF70C(EnDns* this) {
    if (gSaveContext.rupees < this->dnsItemEntry->itemPrice) {
        return 0;
    }
    return 4;
}

u32 func_809EF73C(EnDns* this) {
    if (INV_CONTENT(ITEM_SLINGSHOT) == ITEM_NONE) {
        return 3;
    }
    if (AMMO(ITEM_SLINGSHOT) >= CUR_CAPACITY(UPG_BULLET_BAG)) {
        return 1;
    }
    if (gSaveContext.rupees < this->dnsItemEntry->itemPrice) {
        return 0;
    }
    if (Item_CheckObtainability(ITEM_SEEDS) == ITEM_NONE) {
        return 2;
    }
    return 4;
}

u32 func_809EF800(EnDns* this) {
    if (gBitFlags[4] & gSaveContext.inventory.equipment) {
        return 1;
    }
    if (gSaveContext.rupees < this->dnsItemEntry->itemPrice) {
        return 0;
    }
    return 4;
}

u32 func_809EF854(EnDns* this) {
    if (!CHECK_QUEST_ITEM(QUEST_GORON_RUBY)) {
        return 3;
    }
    if (AMMO(ITEM_BOMB) >= CUR_CAPACITY(UPG_BOMB_BAG)) {
        return 1;
    }
    if (gSaveContext.rupees < this->dnsItemEntry->itemPrice) {
        return 0;
    }
    return 4;
}

u32 func_809EF8F4(EnDns* this) {
    if (Item_CheckObtainability(ITEM_BOW) == ITEM_NONE) {
        return 3;
    }
    if (AMMO(ITEM_BOW) >= CUR_CAPACITY(UPG_QUIVER)) {
        return 1;
    }
    if (gSaveContext.rupees < this->dnsItemEntry->itemPrice) {
        return 0;
    }
    return 4;
}

u32 func_809EF9A4(EnDns* this) {
    if (!Inventory_HasEmptyBottle()) {
        return 1;
    }
    if (gSaveContext.rupees < this->dnsItemEntry->itemPrice) {
        return 0;
    }
    return 4;
}

/* Paying and flagging functions */

void func_809EF9F8(EnDns* this) {
    Rupees_ChangeBy(-this->dnsItemEntry->itemPrice);
}

void func_809EFA28(EnDns* this) {
    Rupees_ChangeBy(-this->dnsItemEntry->itemPrice);
}

void func_809EFA58(EnDns* this) {
    gSaveContext.itemGetInf[0] |= 0x800;
    Rupees_ChangeBy(-this->dnsItemEntry->itemPrice);
}

void func_809EFA9C(EnDns* this) {
    Rupees_ChangeBy(-this->dnsItemEntry->itemPrice);
}

void func_809EFACC(EnDns* this) {
    Rupees_ChangeBy(-this->dnsItemEntry->itemPrice);
}

void func_809EFAFC(EnDns* this) {
    gSaveContext.infTable[25] |= 0x4;
    Rupees_ChangeBy(-this->dnsItemEntry->itemPrice);
}

void func_809EFB40(EnDns* this) {
    gSaveContext.infTable[25] |= 0x8;
    Rupees_ChangeBy(-this->dnsItemEntry->itemPrice);
}

void EnDns_SetupWait(EnDns* this, GlobalContext* globalCtx) {
    if (this->skelAnime.curFrame == this->skelAnime.endFrame) {
        this->actionFunc = EnDns_Wait;
        EnDns_Change(this, 0);
    }
}

void EnDns_Wait(EnDns* this, GlobalContext* globalCtx) {
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 3, 2000, 0);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (Actor_IsTalking(&this->actor, globalCtx)) {
        this->actionFunc = EnDns_Talk;
    } else {
        if ((this->collider.base.ocFlags1 & OC1_HIT) || this->actor.isTargeted) {
            this->actor.flags |= 0x10000;
        } else {
            this->actor.flags &= ~0x10000;
        }
        if (this->actor.xzDistToPlayer < 130.0f) {
            Actor_RequestToTalk(&this->actor, globalCtx);
        }
    }
}

void EnDns_Talk(EnDns* this, GlobalContext* globalCtx) {
    if ((func_8010BDBC(&globalCtx->msgCtx) == 4) && (func_80106BC8(globalCtx))) {
        switch (globalCtx->msgCtx.choiceIndex) {
            case 0: // OK
                switch (this->dnsItemEntry->purchaseableCheck(this)) {
                    case 0:
                        func_8010B720(globalCtx, 0x10A5);
                        this->actionFunc = func_809F008C;
                        break;
                    case 1:
                        func_8010B720(globalCtx, 0x10A6);
                        this->actionFunc = func_809F008C;
                        break;
                    case 3:
                        func_8010B720(globalCtx, 0x10DE);
                        this->actionFunc = func_809F008C;
                        break;
                    case 2:
                    case 4:
                        func_8010B720(globalCtx, 0x10A7);
                        this->actionFunc = func_809EFEE8;
                        break;
                }
                break;
            case 1: // No way
                func_8010B720(globalCtx, 0x10A4);
                this->actionFunc = func_809F008C;
        }
    }
}

void func_809EFDD0(EnDns* this, GlobalContext* globalCtx) {
    if (this->actor.params == 0x9) {
        if (CUR_UPG_VALUE(UPG_STICKS) < 2) {
            func_8002F434(&this->actor, globalCtx, GI_STICK_UPGRADE_20, 130.0f, 100.0f);
        } else {
            func_8002F434(&this->actor, globalCtx, GI_STICK_UPGRADE_30, 130.0f, 100.0f);
        }
    } else if (this->actor.params == 0xA) {
        if (CUR_UPG_VALUE(UPG_NUTS) < 2) {
            func_8002F434(&this->actor, globalCtx, GI_NUT_UPGRADE_30, 130.0f, 100.0f);
        } else {
            func_8002F434(&this->actor, globalCtx, GI_NUT_UPGRADE_40, 130.0f, 100.0f);
        }
    } else {
        func_8002F434(&this->actor, globalCtx, this->dnsItemEntry->getItemId, 130.0f, 100.0f);
    }
}

void func_809EFEE8(EnDns* this, GlobalContext* globalCtx) {
    if ((func_8010BDBC(&globalCtx->msgCtx) == 5) && (func_80106BC8(globalCtx) != 0)) {
        func_80106CCC(globalCtx);
        func_809EFDD0(this, globalCtx);
        this->actionFunc = func_809EFF50;
    }
}

void func_809EFF50(EnDns* this, GlobalContext* globalCtx) {
    if (Actor_HasParent(&this->actor, globalCtx)) {
        this->actor.parent = NULL;
        this->actionFunc = func_809EFF98;
    } else {
        func_809EFDD0(this, globalCtx);
    }
}

void func_809EFF98(EnDns* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    if (player->stateFlags1 & 0x400) {
        if ((func_8010BDBC(&globalCtx->msgCtx) == 6) && (func_80106BC8(globalCtx) != 0)) {
            this->dnsItemEntry->setRupeesAndFlags(this);
            this->dropCollectible = 1;
            this->maintainCollider = 0;
            this->actor.flags &= ~1;
            EnDns_Change(this, 1);
            this->actionFunc = EnDns_SetupBurrow;
        }
    } else {
        this->dnsItemEntry->setRupeesAndFlags(this);
        this->dropCollectible = 1;
        this->maintainCollider = 0;
        this->actor.flags &= ~1;
        EnDns_Change(this, 1);
        this->actionFunc = EnDns_SetupBurrow;
    }
}

void func_809F008C(EnDns* this, GlobalContext* globalCtx) {
    if ((func_8010BDBC(&globalCtx->msgCtx) == 6) && (func_80106BC8(globalCtx) != 0)) {
        this->maintainCollider = 0;
        this->actor.flags &= ~1;
        EnDns_Change(this, 1);
        this->actionFunc = EnDns_SetupBurrow;
    }
}

void EnDns_SetupBurrow(EnDns* this, GlobalContext* globalCtx) {
    f32 frameCount = Animation_GetLastFrame(&D_06004404);

    if (this->skelAnime.curFrame == frameCount) {
        Audio_PlayActorSound2(&this->actor, NA_SE_EN_AKINDONUTS_HIDE);
        this->actionFunc = EnDns_Burrow;
        this->standOnGround = 0;
        this->yInitPos = this->actor.world.pos.y;
    }
}

void EnDns_Burrow(EnDns* this, GlobalContext* globalCtx) {
    f32 depth;
    Vec3f initPos;
    s32 i;

    depth = this->yInitPos - this->actor.world.pos.y;
    if ((this->dustTimer & 3) == 0) {
        initPos.x = this->actor.world.pos.x;
        initPos.y = this->yInitPos;
        initPos.z = this->actor.world.pos.z;
        func_80028990(globalCtx, 20.0f, &initPos);
    }
    this->actor.shape.rot.y += 0x2000;
    // Drops only if you bought its item
    if (depth > 400.0f) {
        if (this->dropCollectible) {
            initPos.x = this->actor.world.pos.x;
            initPos.y = this->yInitPos;
            initPos.z = this->actor.world.pos.z;
            for (i = 0; i < 3; i++) {
                Item_DropCollectible(globalCtx, &initPos, ITEM00_HEART);
            }
        }
        Actor_Kill(&this->actor);
    }
}

void EnDns_Update(Actor* thisx, GlobalContext* globalCtx) {
    EnDns* this = THIS;
    s16 pad;

    this->dustTimer++;
    this->actor.textId = D_809F040C[this->actor.params];
    Actor_SetFocus(&this->actor, 60.0f);
    Actor_SetScale(&this->actor, 0.01f);
    SkelAnime_Update(&this->skelAnime);
    Actor_MoveForwardXZ(&this->actor);
    this->actionFunc(this, globalCtx);
    if (this->standOnGround) {
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 20.0f, 4);
    }
    if (this->maintainCollider) {
        Collider_UpdateCylinder(&this->actor, &this->collider);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    }
}

void EnDns_Draw(Actor* thisx, GlobalContext* globalCtx) {
    EnDns* this = THIS;

    func_80093D18(globalCtx->state.gfxCtx);
    SkelAnime_DrawFlexOpa(globalCtx, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount,
                          NULL, NULL, &this->actor);
}
