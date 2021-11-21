#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_11.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_11Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_11Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_11Set0000Cmd02;
static SCmdMesh water_temple_room_11Set0000Cmd03;
static SCmdObjectList water_temple_room_11Set0000Cmd04;
static SCmdActorList water_temple_room_11Set0000Cmd05;
static SCmdEndMarker water_temple_room_11Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx water_temple_room_11Vtx_000080[34];
static Vtx water_temple_room_11Vtx_0002A0[16];
static Vtx water_temple_room_11Vtx_0003A0[16];
static Vtx water_temple_room_11Vtx_0004A0[32];
static Vtx water_temple_room_11Vtx_0006A0[54];
static Vtx water_temple_room_11Vtx_000A00[8];
static Vtx water_temple_room_11Vtx_000A80[63];
static Vtx water_temple_room_11Vtx_000E70[15];
static Vtx water_temple_room_11Vtx_000F60[13];
static Vtx water_temple_room_11Vtx_001030[8];
static Vtx water_temple_room_11Vtx_0010B0[19];
static Vtx water_temple_room_11Vtx_0011E0[14];
static Vtx water_temple_room_11Vtx_0012C0[21];
static Vtx water_temple_room_11Vtx_001410[8];
static Vtx water_temple_room_11Vtx_001490[4];
static Vtx water_temple_room_11Vtx_0014D0[32];
static Vtx water_temple_room_11Vtx_0016D0[12];
static Vtx water_temple_room_11Vtx_001790[8];

static SCmdEchoSettings water_temple_room_11Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_11Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_11Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh water_temple_room_11Set0000Cmd03 = {  0x0A, 0, (u32)&water_temple_room_11MeshHeader0x000060 }; // 0x0018

static SCmdObjectList water_temple_room_11Set0000Cmd04 = {  0x0B, 0x01, (u32)water_temple_room_11ObjectList0x000038 }; // 0x0020

static SCmdActorList water_temple_room_11Set0000Cmd05 = {  0x01, 0x02, (u32)water_temple_room_11ActorList0x00003C }; // 0x0028 }; 

static SCmdEndMarker water_temple_room_11Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 water_temple_room_11ObjectList0x000038[1] = {
	OBJECT_BOX,
}; 

ActorEntry water_temple_room_11ActorList0x00003C[2] = {
	{ ACTOR_DUNGEON_KEEP, 480, 1240, -2340, 0, 0, 0, 0x0023 }, //0x00003C
	{ ACTOR_DUNGEON_KEEP, 1320, 1240, -2340, 0, 0, 0, 0x0023 }, //0x00004C
}; 

static u32 pad5C = 0;

MeshHeader0 water_temple_room_11MeshHeader0x000060 = { { 0 }, 0x01, (u32)&water_temple_room_11MeshDListEntry0x00006C, (u32)&(water_temple_room_11MeshDListEntry0x00006C) + sizeof(water_temple_room_11MeshDListEntry0x00006C) }; 

MeshEntry0 water_temple_room_11MeshDListEntry0x00006C[1] = {
	{ (u32)water_temple_room_11Dlist0x008F98, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad78 = 0;
static u32 pad7C = 0;

static Vtx water_temple_room_11Vtx_000080[34] = {
    VTX(870, 1070, -1420, 1024, 1024, 149, 149, 186, 255),
    VTX(930, 1070, -1420, -512, 1024, 149, 149, 186, 255),
    VTX(930, 1070, -1400, -512, 512, 0, 0, 0, 255),
    VTX(870, 1070, -1400, 1024, 512, 0, 0, 0, 255),
    VTX(930, 970, -1420, 2560, 512, 255, 255, 255, 255),
    VTX(930, 970, -1400, 2560, 1024, 0, 0, 0, 255),
    VTX(930, 1070, -1400, 0, 1024, 0, 0, 0, 255),
    VTX(930, 1070, -1420, 0, 512, 149, 149, 186, 255),
    VTX(870, 970, -1400, 2560, 1024, 0, 0, 0, 255),
    VTX(870, 970, -1420, 2560, 512, 255, 255, 255, 255),
    VTX(870, 1070, -1420, 0, 512, 149, 149, 186, 255),
    VTX(870, 1070, -1400, 0, 1024, 0, 0, 0, 255),
    VTX(870, 970, -1420, 1024, 1024, 255, 255, 255, 255),
    VTX(870, 970, -1400, 1024, 512, 0, 0, 0, 255),
    VTX(930, 970, -1400, -512, 512, 0, 0, 0, 255),
    VTX(930, 970, -1420, -512, 1024, 255, 255, 255, 255),
    VTX(900, 970, -1420, 256, 1024, 33, 33, 33, 255),
    VTX(870, 1510, -1420, 1024, 1024, 255, 255, 255, 255),
    VTX(870, 1510, -1400, 1024, 512, 0, 0, 0, 255),
    VTX(930, 1510, -1400, -512, 512, 0, 0, 0, 255),
    VTX(930, 1510, -1420, -512, 1024, 255, 255, 255, 255),
    VTX(900, 1510, -1420, 256, 1024, 33, 33, 33, 255),
    VTX(870, 1510, -1400, 2560, 1024, 0, 0, 0, 255),
    VTX(870, 1510, -1420, 2560, 512, 255, 255, 255, 255),
    VTX(870, 1610, -1420, 0, 512, 149, 149, 186, 255),
    VTX(870, 1610, -1400, 0, 1024, 0, 0, 0, 255),
    VTX(930, 1510, -1420, 2560, 512, 255, 255, 255, 255),
    VTX(930, 1510, -1400, 2560, 1024, 0, 0, 0, 255),
    VTX(930, 1610, -1400, 0, 1024, 0, 0, 0, 255),
    VTX(930, 1610, -1420, 0, 512, 149, 149, 186, 255),
    VTX(870, 1610, -1420, 1024, 1024, 149, 149, 186, 255),
    VTX(930, 1610, -1420, -512, 1024, 149, 149, 186, 255),
    VTX(930, 1610, -1400, -512, 512, 0, 0, 0, 255),
    VTX(870, 1610, -1400, 1024, 512, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_11Vtx_0002A0[16] = {
    VTX(840, 880, -1940, -3072, 0, 33, 33, 33, 255),
    VTX(840, 880, -1860, -3072, 2048, 149, 149, 186, 255),
    VTX(960, 880, -1860, 1024, 2048, 149, 149, 186, 255),
    VTX(960, 880, -1940, 1024, 0, 33, 33, 33, 255),
    VTX(840, 1180, -1980, -5120, 0, 33, 33, 33, 255),
    VTX(840, 1180, -1940, -5120, 2048, 255, 255, 255, 255),
    VTX(960, 1180, -1940, 1024, 2048, 255, 255, 255, 255),
    VTX(960, 1180, -1980, 1024, 0, 33, 33, 33, 255),
    VTX(400, 970, -1660, -15360, 0, 255, 255, 255, 255),
    VTX(400, 970, -1420, -15360, 4096, 33, 33, 33, 255),
    VTX(1400, 970, -1420, 1024, 4096, 33, 33, 33, 255),
    VTX(1400, 970, -1660, 1024, 0, 255, 255, 255, 255),
    VTX(400, 1510, -1660, -15360, 0, 255, 255, 255, 255),
    VTX(400, 1510, -1420, -15360, 4096, 33, 33, 33, 255),
    VTX(1400, 1510, -1660, 1024, 0, 255, 255, 255, 255),
    VTX(1400, 1510, -1420, 1024, 4096, 33, 33, 33, 255),
}; 

static Vtx water_temple_room_11Vtx_0003A0[16] = {
    VTX(400, 1240, -1420, 1024, 2048, 149, 149, 186, 255),
    VTX(400, 1470, -1420, 1024, -2048, 33, 33, 33, 255),
    VTX(1400, 1470, -1420, -15360, -2048, 149, 149, 186, 255),
    VTX(1400, 1240, -1420, -15360, 2048, 255, 255, 255, 255),
    VTX(1400, 1240, -1420, 1024, 2048, 149, 149, 186, 255),
    VTX(1400, 1470, -1420, 1024, -2048, 33, 33, 33, 255),
    VTX(1400, 1470, -2420, -15360, -2048, 149, 149, 186, 255),
    VTX(1400, 1240, -2420, -15360, 2048, 255, 255, 255, 255),
    VTX(1400, 1240, -2420, -15360, 2048, 149, 149, 186, 255),
    VTX(1400, 1470, -2420, -15360, -2048, 33, 33, 33, 255),
    VTX(400, 1470, -2420, 1024, -2048, 149, 149, 186, 255),
    VTX(400, 1240, -2420, 1024, 2048, 255, 255, 255, 255),
    VTX(400, 1240, -2420, -15360, 2048, 149, 149, 186, 255),
    VTX(400, 1470, -2420, -15360, -2048, 33, 33, 33, 255),
    VTX(400, 1470, -1420, 1024, -2048, 149, 149, 186, 255),
    VTX(400, 1240, -1420, 1024, 2048, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_11Vtx_0004A0[32] = {
    VTX(1400, 1510, -1660, 0, 0, 33, 33, 33, 255),
    VTX(1400, 1510, -2420, 18432, 0, 33, 33, 33, 255),
    VTX(1400, 1470, -2420, 18432, 1024, 149, 149, 186, 255),
    VTX(1400, 1470, -1660, 0, 1024, 255, 255, 255, 255),
    VTX(1400, 1470, -2420, 22528, 1024, 255, 255, 255, 255),
    VTX(400, 1510, -2420, 0, 0, 33, 33, 33, 255),
    VTX(400, 1470, -2420, 0, 1024, 149, 149, 186, 255),
    VTX(1400, 1510, -2420, 22528, 0, 33, 33, 33, 255),
    VTX(1400, 970, -2420, 0, 0, 33, 33, 33, 255),
    VTX(1400, 930, -2420, 0, 1024, 149, 149, 186, 255),
    VTX(1400, 930, -1660, 18432, 1024, 255, 255, 255, 255),
    VTX(1400, 970, -1660, 18432, 0, 33, 33, 33, 255),
    VTX(400, 930, -1660, 18432, 1024, 149, 149, 186, 255),
    VTX(400, 930, -2420, 0, 1024, 255, 255, 255, 255),
    VTX(400, 970, -2420, 0, 0, 33, 33, 33, 255),
    VTX(400, 970, -1660, 18432, 0, 33, 33, 33, 255),
    VTX(400, 970, -2420, 0, 0, 33, 33, 33, 255),
    VTX(400, 930, -2420, 0, 1024, 149, 149, 186, 255),
    VTX(1400, 930, -2420, 22528, 1024, 255, 255, 255, 255),
    VTX(1400, 970, -2420, 22528, 0, 33, 33, 33, 255),
    VTX(1000, 1240, -1820, 4096, 2048, 255, 255, 255, 255),
    VTX(960, 1240, -1860, 3072, 1024, 255, 255, 255, 255),
    VTX(840, 1240, -1860, 0, 1024, 255, 255, 255, 255),
    VTX(800, 1240, -1820, -1024, 2048, 255, 255, 255, 255),
    VTX(1400, 970, -1660, 22528, 0, 33, 33, 33, 255),
    VTX(1400, 930, -1660, 22528, 1024, 149, 149, 186, 255),
    VTX(400, 930, -1660, 0, 1024, 255, 255, 255, 255),
    VTX(400, 970, -1660, 0, 0, 33, 33, 33, 255),
    VTX(1400, 1510, -1660, 22528, 0, 33, 33, 33, 255),
    VTX(1400, 1470, -1660, 22528, 1024, 149, 149, 186, 255),
    VTX(400, 1510, -1660, 0, 0, 33, 33, 33, 255),
    VTX(400, 1470, -1660, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_11Vtx_0006A0[54] = {
    VTX(800, 1240, -1820, 0, 1024, 255, 255, 255, 255),
    VTX(840, 1240, -1860, 1024, 2048, 255, 255, 255, 255),
    VTX(840, 1240, -1980, 4096, 2048, 255, 255, 255, 255),
    VTX(800, 1240, -2020, 5120, 1024, 255, 255, 255, 255),
    VTX(840, 1240, -1980, 4096, 0, 255, 255, 255, 255),
    VTX(960, 1240, -1980, 1024, 0, 255, 255, 255, 255),
    VTX(1000, 1240, -2020, 0, 1024, 255, 255, 255, 255),
    VTX(930, 1070, -1420, 0, 1024, 149, 149, 186, 255),
    VTX(870, 1070, -1420, 3072, 1024, 149, 149, 186, 255),
    VTX(850, 1090, -1420, 4096, 0, 149, 149, 186, 255),
    VTX(950, 1090, -1420, -1024, 0, 33, 33, 33, 255),
    VTX(930, 1070, -1420, 2048, 2048, 149, 149, 186, 255),
    VTX(950, 1090, -1420, 3072, 1024, 33, 33, 33, 255),
    VTX(950, 970, -1420, -3072, 1024, 255, 255, 255, 255),
    VTX(930, 970, -1420, -3072, 2048, 255, 255, 255, 255),
    VTX(870, 1070, -1420, 2048, 1024, 149, 149, 186, 255),
    VTX(870, 970, -1420, -3072, 1024, 255, 255, 255, 255),
    VTX(850, 970, -1420, -3072, 2048, 255, 255, 255, 255),
    VTX(850, 1090, -1420, 3072, 2048, 149, 149, 186, 255),
    VTX(1000, 1240, -2020, 5120, 1024, 255, 255, 255, 255),
    VTX(960, 1240, -1980, 4096, 0, 255, 255, 255, 255),
    VTX(960, 1240, -1860, 1024, 0, 255, 255, 255, 255),
    VTX(1000, 1240, -1820, 0, 1024, 255, 255, 255, 255),
    VTX(870, 1610, -1420, 2048, 1024, 149, 149, 186, 255),
    VTX(870, 1510, -1420, -3072, 1024, 255, 255, 255, 255),
    VTX(850, 1510, -1420, -3072, 2048, 255, 255, 255, 255),
    VTX(850, 1630, -1420, 3072, 2048, 149, 149, 186, 255),
    VTX(930, 1610, -1420, 2048, 2048, 149, 149, 186, 255),
    VTX(950, 1630, -1420, 3072, 1024, 33, 33, 33, 255),
    VTX(950, 1510, -1420, -3072, 1024, 255, 255, 255, 255),
    VTX(930, 1510, -1420, -3072, 2048, 255, 255, 255, 255),
    VTX(930, 1610, -1420, 0, 1024, 149, 149, 186, 255),
    VTX(870, 1610, -1420, 3072, 1024, 149, 149, 186, 255),
    VTX(850, 1630, -1420, 4096, 0, 149, 149, 186, 255),
    VTX(950, 1630, -1420, -1024, 0, 33, 33, 33, 255),
    VTX(1000, 1180, -2020, 0, 1024, 149, 149, 186, 255),
    VTX(960, 1180, -1980, 1024, 0, 33, 33, 33, 255),
    VTX(840, 1180, -1980, 4096, 0, 33, 33, 33, 255),
    VTX(800, 1180, -2020, 5120, 1024, 149, 149, 186, 255),
    VTX(1000, 1180, -1820, 0, 1024, 149, 149, 186, 255),
    VTX(960, 1180, -1860, 1024, 0, 255, 255, 255, 255),
    VTX(960, 1180, -1980, 4096, 0, 33, 33, 33, 255),
    VTX(1000, 1180, -2020, 5120, 1024, 149, 149, 186, 255),
    VTX(800, 1180, -1820, -1024, 2048, 149, 149, 186, 255),
    VTX(840, 1180, -1860, 0, 1024, 255, 255, 255, 255),
    VTX(960, 1180, -1860, 3072, 1024, 255, 255, 255, 255),
    VTX(1000, 1180, -1820, 4096, 2048, 149, 149, 186, 255),
    VTX(840, 1180, -1980, 4096, 2048, 33, 33, 33, 255),
    VTX(840, 1180, -1860, 1024, 2048, 255, 255, 255, 255),
    VTX(800, 1180, -1820, 0, 1024, 149, 149, 186, 255),
    VTX(400, 1470, -2420, 18432, 1024, 255, 255, 255, 255),
    VTX(400, 1510, -2420, 18432, 0, 33, 33, 33, 255),
    VTX(400, 1510, -1660, 0, 0, 33, 33, 33, 255),
    VTX(400, 1470, -1660, 0, 1024, 149, 149, 186, 255),
}; 

static Vtx water_temple_room_11Vtx_000A00[8] = {
    VTX(1000, 1240, -2020, 10854, -9831, 255, 255, 255, 255),
    VTX(1400, 1240, -2420, 17408, -16384, 33, 33, 33, 255),
    VTX(400, 1240, -2420, 1024, -16384, 33, 33, 33, 255),
    VTX(800, 1240, -2020, 7578, -9830, 255, 255, 255, 255),
    VTX(1400, 1240, -1420, 17408, 0, 33, 33, 33, 255),
    VTX(1000, 1240, -1820, 10854, -6554, 255, 255, 255, 255),
    VTX(800, 1240, -1820, 7578, -6554, 255, 255, 255, 255),
    VTX(400, 1240, -1420, 1024, 0, 33, 33, 33, 255),
}; 

static Vtx water_temple_room_11Vtx_000A80[63] = {
    VTX(960, 880, -1860, 3072, 512, 33, 33, 33, 255),
    VTX(960, 570, -1860, 3072, 8448, 255, 255, 255, 255),
    VTX(960, 880, -1980, 0, 512, 33, 33, 33, 255),
    VTX(960, 570, -1980, 0, 8448, 149, 149, 186, 255),
    VTX(840, 880, -1860, 0, -6144, 33, 33, 33, 255),
    VTX(840, 570, -1860, 0, 1792, 255, 255, 255, 255),
    VTX(960, 880, -1860, 3072, -6144, 33, 33, 33, 255),
    VTX(960, 570, -1860, 3072, 1792, 149, 149, 186, 255),
    VTX(840, 880, -1980, 0, 512, 33, 33, 33, 255),
    VTX(840, 570, -1980, 0, 8448, 255, 255, 255, 255),
    VTX(840, 880, -1860, 3072, 512, 33, 33, 33, 255),
    VTX(840, 570, -1860, 3072, 8448, 149, 149, 186, 255),
    VTX(1400, 930, -2420, 10240, -4096, 33, 33, 33, 255),
    VTX(1400, 570, -2420, 10240, 2048, 255, 255, 255, 255),
    VTX(1400, 930, -1420, -6827, -4096, 33, 33, 33, 255),
    VTX(1400, 570, -1420, -6827, 2048, 149, 149, 186, 255),
    VTX(960, 1180, -1980, -1024, -6656, 33, 33, 33, 255),
    VTX(960, 880, -1980, -1024, 1024, 33, 33, 33, 255),
    VTX(840, 1180, -1980, 2048, -6656, 33, 33, 33, 255),
    VTX(840, 880, -1980, 2048, 1024, 149, 149, 186, 255),
    VTX(960, 1180, -1940, 1024, -7168, 255, 255, 255, 255),
    VTX(960, 880, -1980, 0, 512, 149, 149, 186, 255),
    VTX(960, 1180, -1980, 0, -7168, 33, 33, 33, 255),
    VTX(960, 880, -1940, 1024, 512, 33, 33, 33, 255),
    VTX(840, 1180, -1940, 0, -13824, 149, 149, 186, 255),
    VTX(960, 880, -1940, 3072, -6144, 149, 149, 186, 255),
    VTX(960, 1180, -1940, 3072, -13824, 255, 255, 255, 255),
    VTX(840, 880, -1940, 0, -6144, 33, 33, 33, 255),
    VTX(840, 1180, -1980, 0, -7168, 33, 33, 33, 255),
    VTX(840, 880, -1940, 1024, 512, 149, 149, 186, 255),
    VTX(840, 1180, -1940, 1024, -7168, 255, 255, 255, 255),
    VTX(840, 1180, -1980, 4096, 2048, 255, 255, 255, 255),
    VTX(840, 1240, -1860, 0, 0, 33, 33, 33, 255),
    VTX(840, 1180, -1860, 0, 2048, 149, 149, 186, 255),
    VTX(840, 1240, -1980, 4096, 0, 33, 33, 33, 255),
    VTX(840, 1180, -1860, 4096, 2048, 255, 255, 255, 255),
    VTX(960, 1240, -1860, 0, 0, 33, 33, 33, 255),
    VTX(960, 1180, -1860, 0, 2048, 149, 149, 186, 255),
    VTX(840, 1240, -1860, 4096, 0, 33, 33, 33, 255),
    VTX(960, 1180, -1860, 4111, 2001, 255, 255, 255, 255),
    VTX(960, 1240, -1980, -15, 16, 33, 33, 33, 255),
    VTX(960, 1180, -1980, 16, 2063, 149, 149, 186, 255),
    VTX(960, 1240, -1860, 4080, -46, 33, 33, 33, 255),
    VTX(960, 1180, -1980, 4096, 2048, 255, 255, 255, 255),
    VTX(840, 1240, -1980, 0, 0, 33, 33, 33, 255),
    VTX(840, 1180, -1980, 0, 2048, 149, 149, 186, 255),
    VTX(960, 1240, -1980, 4096, 0, 33, 33, 33, 255),
    VTX(400, 570, -2420, 9387, 6144, 33, 33, 33, 255),
    VTX(400, 570, -1420, 9387, -10923, 33, 33, 33, 255),
    VTX(900, 570, -1920, 853, -2389, 255, 255, 255, 255),
    VTX(1400, 570, -2420, -7680, 6144, 33, 33, 33, 255),
    VTX(1400, 570, -1420, -7680, -10923, 33, 33, 33, 255),
    VTX(1400, 930, -1420, -6315, -3072, 33, 33, 33, 255),
    VTX(1400, 570, -1420, -6315, 3072, 255, 255, 255, 255),
    VTX(400, 930, -1420, 10752, -3072, 33, 33, 33, 255),
    VTX(400, 570, -1420, 10752, 3072, 149, 149, 186, 255),
    VTX(1400, 930, -1660, -9387, -1536, 149, 149, 186, 255),
    VTX(400, 930, -1420, 7680, 2560, 33, 33, 33, 255),
    VTX(400, 930, -1660, 7680, -1536, 149, 149, 186, 255),
    VTX(1400, 930, -1420, -9387, 2560, 33, 33, 33, 255),
    VTX(400, 570, -1420, -6827, 2048, 255, 255, 255, 255),
    VTX(400, 570, -2420, 10240, 2048, 149, 149, 186, 255),
    VTX(400, 930, -2420, 10240, -4096, 33, 33, 33, 255),
}; 

static Vtx water_temple_room_11Vtx_000E70[15] = {
    VTX(400, 930, -1420, -6827, -4096, 33, 33, 33, 255),
    VTX(400, 570, -1420, -6827, 2048, 255, 255, 255, 255),
    VTX(400, 930, -2420, 10240, -4096, 33, 33, 33, 255),
    VTX(400, 930, -2420, 10752, -3072, 33, 33, 33, 255),
    VTX(400, 570, -2420, 10752, 3072, 255, 255, 255, 255),
    VTX(1400, 930, -2420, -6315, -3072, 33, 33, 33, 255),
    VTX(1400, 570, -2420, -6315, 3072, 149, 149, 186, 255),
    VTX(1400, 1470, -1660, -10923, -2048, 90, 90, 99, 255),
    VTX(1400, 1470, -1420, -10923, 2048, 33, 33, 33, 255),
    VTX(400, 1470, -1660, 6144, -2048, 90, 90, 99, 255),
    VTX(400, 1470, -1420, 6144, 2048, 33, 33, 33, 255),
    VTX(960, 880, -1980, -1024, 1024, 33, 33, 33, 255),
    VTX(960, 570, -1980, -1024, 8960, 255, 255, 255, 255),
    VTX(840, 880, -1980, 2048, 1024, 33, 33, 33, 255),
    VTX(840, 570, -1980, 2048, 8960, 149, 149, 186, 255),
}; 

static Vtx water_temple_room_11Vtx_000F60[13] = {
    VTX(900, 1860, -1920, 8192, -7168, 149, 149, 186, 255),
    VTX(400, 1860, -2420, 0, -15360, 33, 33, 33, 255),
    VTX(1400, 1860, -2420, 0, 1024, 33, 33, 33, 255),
    VTX(1400, 1860, -1420, 16384, 1024, 33, 33, 33, 255),
    VTX(400, 1860, -1420, 16384, -15360, 33, 33, 33, 255),
    VTX(800, 1180, -1820, 9830, -8806, 149, 149, 186, 255),
    VTX(400, 1180, -1420, 16384, -15360, 33, 33, 33, 255),
    VTX(400, 1180, -2420, 0, -15360, 33, 33, 33, 255),
    VTX(800, 1180, -2020, 6554, -8806, 149, 149, 186, 255),
    VTX(1000, 1180, -1820, 9830, -5529, 149, 149, 186, 255),
    VTX(1400, 1180, -1420, 16384, 1024, 33, 33, 33, 255),
    VTX(1000, 1180, -2020, 6554, -5529, 149, 149, 186, 255),
    VTX(1400, 1180, -2420, 0, 1024, 33, 33, 33, 255),
}; 

static Vtx water_temple_room_11Vtx_001030[8] = {
    VTX(850, 1090, -1420, 2048, 1024, 255, 255, 255, 255),
    VTX(850, 1180, -1420, 2048, 0, 33, 33, 33, 255),
    VTX(950, 1180, -1420, 0, 0, 33, 33, 33, 255),
    VTX(950, 1090, -1420, 0, 1024, 149, 149, 186, 255),
    VTX(850, 1630, -1420, 2048, 1024, 255, 255, 255, 255),
    VTX(850, 1760, -1420, 2048, 0, 33, 33, 33, 255),
    VTX(950, 1760, -1420, 0, 0, 33, 33, 33, 255),
    VTX(950, 1630, -1420, 0, 1024, 149, 149, 186, 255),
}; 

static Vtx water_temple_room_11Vtx_0010B0[19] = {
    VTX(1400, 1510, -1420, 0, 1024, 149, 149, 186, 255),
    VTX(1400, 1760, -1420, 0, -3072, 33, 33, 33, 255),
    VTX(1400, 1760, -2420, 16384, -3072, 33, 33, 33, 255),
    VTX(1400, 1510, -2420, 16384, 1024, 255, 255, 255, 255),
    VTX(1400, 1510, -2420, 16384, 1024, 149, 149, 186, 255),
    VTX(400, 1760, -2420, 0, -3072, 33, 33, 33, 255),
    VTX(400, 1510, -2420, 0, 1024, 255, 255, 255, 255),
    VTX(400, 1510, -2420, 16384, 1024, 149, 149, 186, 255),
    VTX(400, 1760, -2420, 16384, -3072, 33, 33, 33, 255),
    VTX(400, 1760, -1420, 0, -3072, 33, 33, 33, 255),
    VTX(400, 1510, -1420, 0, 1024, 255, 255, 255, 255),
    VTX(400, 1760, -1420, 8192, -3072, 33, 33, 33, 255),
    VTX(850, 1760, -1420, 0, -3072, 33, 33, 33, 255),
    VTX(850, 1510, -1420, 0, 1024, 255, 255, 255, 255),
    VTX(400, 1510, -1420, 8192, 1024, 107, 104, 104, 255),
    VTX(950, 1760, -1420, 8192, -3072, 33, 33, 33, 255),
    VTX(1400, 1760, -1420, 0, -3072, 33, 33, 33, 255),
    VTX(1400, 1510, -1420, 0, 1024, 255, 255, 255, 255),
    VTX(950, 1510, -1420, 8192, 1024, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_11Vtx_0011E0[14] = {
    VTX(1400, 1760, -1420, 0, 1024, 90, 90, 99, 255),
    VTX(1400, 1860, -2420, 16384, -1024, 33, 33, 33, 255),
    VTX(1400, 1760, -2420, 16384, 1024, 90, 90, 99, 255),
    VTX(1400, 1860, -1420, 0, -1024, 33, 33, 33, 255),
    VTX(400, 1760, -2420, 0, 1024, 90, 90, 99, 255),
    VTX(400, 1860, -1420, 16384, -1024, 33, 33, 33, 255),
    VTX(400, 1760, -1420, 16384, 1024, 90, 90, 99, 255),
    VTX(400, 1860, -2420, 0, -1024, 33, 33, 33, 255),
    VTX(400, 1760, -1420, 16384, 1024, 90, 90, 99, 255),
    VTX(1400, 1860, -1420, 0, -1024, 33, 33, 33, 255),
    VTX(1400, 1760, -1420, 0, 1024, 90, 90, 99, 255),
    VTX(1400, 1760, -2420, 16384, 1024, 90, 90, 99, 255),
    VTX(400, 1860, -2420, 0, -1024, 33, 33, 33, 255),
    VTX(400, 1760, -2420, 0, 1024, 90, 90, 99, 255),
}; 

static Vtx water_temple_room_11Vtx_0012C0[21] = {
    VTX(950, 1180, -1420, 8192, -2048, 33, 33, 33, 255),
    VTX(1400, 1180, -1420, 0, -2048, 33, 33, 33, 255),
    VTX(950, 1090, -1420, 8192, -293, 255, 255, 255, 255),
    VTX(1400, 970, -1420, 0, 2048, 149, 149, 186, 255),
    VTX(400, 1180, -1420, 8192, -2048, 33, 33, 33, 255),
    VTX(850, 1180, -1420, 0, -2048, 33, 33, 33, 255),
    VTX(400, 1090, -1420, 8192, -293, 255, 255, 255, 255),
    VTX(850, 970, -1420, 0, 2048, 149, 149, 186, 255),
    VTX(400, 970, -1420, 8192, 2048, 255, 255, 255, 255),
    VTX(950, 970, -1420, 8192, 2048, 255, 255, 255, 255),
    VTX(1400, 970, -2420, 16384, 2048, 149, 149, 186, 255),
    VTX(1400, 1180, -2420, 16384, -2048, 33, 33, 33, 255),
    VTX(400, 1180, -2420, 0, -2048, 33, 33, 33, 255),
    VTX(400, 970, -2420, 0, 2048, 255, 255, 255, 255),
    VTX(400, 970, -2420, 16384, 2048, 149, 149, 186, 255),
    VTX(400, 1180, -2420, 16384, -2048, 33, 33, 33, 255),
    VTX(400, 1180, -1420, 0, -2048, 33, 33, 33, 255),
    VTX(400, 970, -1420, 0, 2048, 255, 255, 255, 255),
    VTX(1400, 970, -1420, 0, 2048, 149, 149, 186, 255),
    VTX(1400, 1180, -1420, 0, -2048, 33, 33, 33, 255),
    VTX(1400, 970, -2420, 16384, 2048, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_11Vtx_001410[8] = {
    VTX(884, 880, -1937, 0, 1024, 82, 82, 82, 255),
    VTX(916, 880, -1937, 2048, 1024, 132, 146, 129, 255),
    VTX(916, 1190, -1937, 2048, -20152, 132, 146, 129, 255),
    VTX(884, 1190, -1937, 0, -20152, 82, 82, 82, 255),
    VTX(884, 880, -1939, 0, 1024, 0, 0, 0, 255),
    VTX(916, 880, -1939, 2048, 1024, 0, 0, 0, 255),
    VTX(916, 1190, -1939, 2048, -20152, 0, 0, 0, 255),
    VTX(884, 1190, -1939, 0, -20152, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_11Vtx_001490[4] = {
    VTX(962, 1180, -1982, 5, 0, 76, 76, 76, 255),
    VTX(962, 1120, -1982, 5, 512, 76, 76, 76, 255),
    VTX(838, 1120, -1982, 1280, 512, 76, 76, 76, 255),
    VTX(838, 1180, -1982, 1280, 0, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_11Vtx_0014D0[32] = {
    VTX(962, 1120, -1938, 255, 512, 76, 76, 76, 255),
    VTX(962, 1120, -1982, 0, 512, 76, 76, 76, 255),
    VTX(962, 1180, -1982, 0, 0, 76, 76, 76, 255),
    VTX(962, 1180, -1938, 255, 0, 76, 76, 76, 255),
    VTX(838, 1120, -1982, 0, 512, 76, 76, 76, 255),
    VTX(838, 1120, -1938, 255, 512, 76, 76, 76, 255),
    VTX(838, 1180, -1938, 255, 0, 76, 76, 76, 255),
    VTX(838, 1180, -1982, 0, 0, 76, 76, 76, 255),
    VTX(838, 1120, -1938, 1280, 512, 76, 76, 76, 255),
    VTX(962, 1120, -1938, 5, 512, 76, 76, 76, 255),
    VTX(962, 1180, -1938, 5, 0, 76, 76, 76, 255),
    VTX(838, 1180, -1938, 1280, 0, 76, 76, 76, 255),
    VTX(1398, 1190, -1422, 26, 0, 76, 76, 76, 255),
    VTX(1398, 1110, -1422, 26, 512, 76, 76, 76, 255),
    VTX(402, 1110, -1422, 6400, 512, 76, 76, 76, 255),
    VTX(402, 1190, -1422, 6400, 0, 76, 76, 76, 255),
    VTX(1398, 1110, -2418, 6374, 512, 76, 76, 76, 255),
    VTX(1398, 1110, -1422, 0, 512, 76, 76, 76, 255),
    VTX(1398, 1190, -1422, 0, 0, 76, 76, 76, 255),
    VTX(1398, 1190, -2418, 6374, 0, 76, 76, 76, 255),
    VTX(402, 1110, -1422, 0, 512, 76, 76, 76, 255),
    VTX(402, 1110, -2418, 6374, 512, 76, 76, 76, 255),
    VTX(402, 1190, -2418, 6374, 0, 76, 76, 76, 255),
    VTX(402, 1190, -1422, 0, 0, 76, 76, 76, 255),
    VTX(402, 1110, -2418, 6400, 512, 76, 76, 76, 255),
    VTX(1398, 1110, -2418, 26, 512, 76, 76, 76, 255),
    VTX(1398, 1190, -2418, 26, 0, 76, 76, 76, 255),
    VTX(402, 1190, -2418, 6400, 0, 76, 76, 76, 255),
    VTX(1398, 1790, -1422, 26, 0, 76, 76, 76, 255),
    VTX(1398, 1710, -1422, 26, 512, 76, 76, 76, 255),
    VTX(402, 1710, -1422, 6400, 512, 76, 76, 76, 255),
    VTX(402, 1790, -1422, 6400, 0, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_11Vtx_0016D0[12] = {
    VTX(1398, 1710, -2418, 6374, 512, 76, 76, 76, 255),
    VTX(1398, 1710, -1422, 0, 512, 76, 76, 76, 255),
    VTX(1398, 1790, -1422, 0, 0, 76, 76, 76, 255),
    VTX(1398, 1790, -2418, 6374, 0, 76, 76, 76, 255),
    VTX(402, 1710, -1422, 0, 512, 76, 76, 76, 255),
    VTX(402, 1710, -2418, 6374, 512, 76, 76, 76, 255),
    VTX(402, 1790, -2418, 6374, 0, 76, 76, 76, 255),
    VTX(402, 1790, -1422, 0, 0, 76, 76, 76, 255),
    VTX(402, 1710, -2418, 6400, 512, 76, 76, 76, 255),
    VTX(1398, 1710, -2418, 26, 512, 76, 76, 76, 255),
    VTX(1398, 1790, -2418, 26, 0, 76, 76, 76, 255),
    VTX(402, 1790, -2418, 6400, 0, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_11Vtx_001790[8] = {
    VTX(400, 570, -2420, 0, 0, 0, 0, 0, 0),
    VTX(1400, 570, -2420, 0, 0, 0, 0, 0, 0),
    VTX(400, 1860, -2420, 0, 0, 0, 0, 0, 0),
    VTX(1400, 1860, -2420, 0, 0, 0, 0, 0, 0),
    VTX(400, 570, -1400, 0, 0, 0, 0, 0, 0),
    VTX(1400, 570, -1400, 0, 0, 0, 0, 0, 0),
    VTX(400, 1860, -1400, 0, 0, 0, 0, 0, 0),
    VTX(1400, 1860, -1400, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_11Dlist0x001810[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_11Vtx_001790[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_sceneTex_018B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_11Vtx_000080[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&water_temple_room_11Vtx_000080[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_001F98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_0002A0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_002798, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_0003A0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_003798, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_0004A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&water_temple_room_11Vtx_0006A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&water_temple_room_11Vtx_0006A0[31], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(7, 16, 17, 0, 7, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_003F98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_000A00[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_004798, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_000A80[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 8, 29, 0),
    gsSPVertex(&water_temple_room_11Vtx_000A80[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 19, 18, 0, 20, 18, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 24, 23, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 28, 26, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&water_temple_room_11Vtx_000E70[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP1Triangle(12, 14, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_004F98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_000F60[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 6, 5, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 8, 7, 12, 0),
    gsSP2Triangles(8, 12, 11, 0, 0, 4, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_005798, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_001030[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_005F98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_0010B0[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_006798, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_0011E0[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 5, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 1, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_006F98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_0012C0[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(7, 8, 6, 0, 3, 9, 2, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 11, 0, 18, 11, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_11Tex_007F98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_11Vtx_001410[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsSPVertex(&water_temple_room_11Vtx_001490[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_11Vtx_0014D0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_11Vtx_0016D0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_11Tex_001F98[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_001F98.rgb5a1.inc.c"
};

u64 water_temple_room_11Tex_002798[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_002798.rgb5a1.inc.c"
};

u64 water_temple_room_11Tex_003798[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_003798.rgb5a1.inc.c"
};

u64 water_temple_room_11Tex_003F98[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_003F98.rgb5a1.inc.c"
};

u64 water_temple_room_11Tex_004798[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_004798.rgb5a1.inc.c"
};

u64 water_temple_room_11Tex_004F98[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_004F98.rgb5a1.inc.c"
};

u64 water_temple_room_11Tex_005798[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_005798.rgb5a1.inc.c"
};

u64 water_temple_room_11Tex_005F98[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_005F98.rgb5a1.inc.c"
};

u64 water_temple_room_11Tex_006798[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_006798.rgb5a1.inc.c"
};

u64 water_temple_room_11Tex_006F98[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_006F98.rgb5a1.inc.c"
};

u64 water_temple_room_11Tex_007F98[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_11Tex_007F98.rgb5a1.inc.c"
};

Gfx water_temple_room_11Dlist0x008F98[] = {
    gsSPDisplayList(water_temple_room_11Dlist0x001810),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_008FA8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


