#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_10.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_10Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_10Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_10Set0000Cmd02;
static SCmdMesh water_temple_room_10Set0000Cmd03;
static SCmdObjectList water_temple_room_10Set0000Cmd04;
static SCmdActorList water_temple_room_10Set0000Cmd05;
static SCmdEndMarker water_temple_room_10Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx water_temple_room_10Vtx_000070[4];
static Vtx water_temple_room_10Vtx_0000B0[5];
static Vtx water_temple_room_10Vtx_000100[4];
static Vtx water_temple_room_10Vtx_000140[4];
static Vtx water_temple_room_10Vtx_000180[38];
static Vtx water_temple_room_10Vtx_0003E0[5];
static Vtx water_temple_room_10Vtx_000430[12];
static Vtx water_temple_room_10Vtx_0004F0[16];
static Vtx water_temple_room_10Vtx_0005F0[12];
static Vtx water_temple_room_10Vtx_0006B0[32];
static Vtx water_temple_room_10Vtx_0008B0[32];
static Vtx water_temple_room_10Vtx_000AB0[32];
static Vtx water_temple_room_10Vtx_000CB0[16];
static Vtx water_temple_room_10Vtx_000DB0[32];
static Vtx water_temple_room_10Vtx_000FB0[32];
static Vtx water_temple_room_10Vtx_0011B0[32];
static Vtx water_temple_room_10Vtx_0013B0[32];
static Vtx water_temple_room_10Vtx_0015B0[8];
static Vtx water_temple_room_10Vtx_001630[8];

static SCmdEchoSettings water_temple_room_10Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_10Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_10Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh water_temple_room_10Set0000Cmd03 = {  0x0A, 0, (u32)&water_temple_room_10MeshHeader0x000050 }; // 0x0018

static SCmdObjectList water_temple_room_10Set0000Cmd04 = {  0x0B, 0x01, (u32)water_temple_room_10ObjectList0x000038 }; // 0x0020

static SCmdActorList water_temple_room_10Set0000Cmd05 = {  0x01, 0x01, (u32)water_temple_room_10ActorList0x00003C }; // 0x0028 }; 

static SCmdEndMarker water_temple_room_10Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 water_temple_room_10ObjectList0x000038[1] = {
	OBJECT_BOX,
}; 

ActorEntry water_temple_room_10ActorList0x00003C[1] = {
	{ ACTOR_DUNGEON_KEEP, 120, 1210, 2060, 0, 32767, 0, 0x0015 }, //0x00003C
}; 

static u32 pad4C = 0;

MeshHeader0 water_temple_room_10MeshHeader0x000050 = { { 0 }, 0x01, (u32)&water_temple_room_10MeshDListEntry0x00005C, (u32)&(water_temple_room_10MeshDListEntry0x00005C) + sizeof(water_temple_room_10MeshDListEntry0x00005C) }; 

MeshEntry0 water_temple_room_10MeshDListEntry0x00005C[1] = {
	{ (u32)water_temple_room_10Dlist0x005CF0, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad68 = 0;
static u32 pad6C = 0;

static Vtx water_temple_room_10Vtx_000070[4] = {
    VTX(90, 1210, 1720, 1024, 512, 0, 0, 0, 255),
    VTX(90, 1210, 1740, 1024, 1024, 255, 251, 192, 255),
    VTX(150, 1210, 1740, -512, 1024, 255, 251, 192, 255),
    VTX(150, 1210, 1720, -512, 512, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_10Vtx_0000B0[5] = {
    VTX(200, 1210, 2140, 0, 0, 44, 44, 44, 255),
    VTX(120, 1210, 2060, 1024, 1024, 255, 251, 192, 255),
    VTX(40, 1210, 2140, 2048, 0, 44, 44, 44, 255),
    VTX(200, 1210, 1980, 0, 2048, 44, 44, 44, 255),
    VTX(40, 1210, 1980, 2048, 2048, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_10Vtx_000100[4] = {
    VTX(200, 1210, 1980, -3072, 0, 255, 251, 192, 255),
    VTX(200, 1210, 1740, -3072, 6144, 44, 44, 44, 255),
    VTX(40, 1210, 1740, 1024, 6144, 44, 44, 44, 255),
    VTX(40, 1210, 1980, 1024, 0, 255, 251, 192, 255),
}; 

static Vtx water_temple_room_10Vtx_000140[4] = {
    VTX(160, 1390, 2380, 0, 0, 44, 44, 44, 255),
    VTX(160, 1270, 2380, 0, 2048, 90, 90, 99, 255),
    VTX(80, 1270, 2380, 2048, 2048, 90, 90, 99, 255),
    VTX(80, 1390, 2380, 2048, 0, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_10Vtx_000180[38] = {
    VTX(-200, 1210, 2380, 8704, -9899, 44, 44, 44, 255),
    VTX(440, 1210, 2380, -2219, -9899, 44, 44, 44, 255),
    VTX(200, 1210, 2140, 1877, -5803, 255, 251, 192, 255),
    VTX(40, 1210, 2140, 4608, -5803, 255, 251, 192, 255),
    VTX(200, 1210, 1980, 1877, -3072, 255, 251, 192, 255),
    VTX(440, 1210, 1740, -2219, 1024, 44, 44, 44, 255),
    VTX(200, 1210, 1740, 1877, 1024, 44, 44, 44, 255),
    VTX(40, 1210, 1980, 4608, -3072, 255, 251, 192, 255),
    VTX(-200, 1210, 1740, 8704, 1024, 44, 44, 44, 255),
    VTX(40, 1210, 1740, 4608, 1024, 44, 44, 44, 255),
    VTX(440, 1210, 1980, -2219, -3072, 44, 44, 44, 255),
    VTX(440, 1210, 2380, 4096, 1024, 107, 104, 104, 255),
    VTX(440, 1510, 2380, 4096, -4737, 44, 44, 44, 255),
    VTX(440, 1210, 1740, -8192, 1024, 255, 251, 192, 255),
    VTX(440, 1510, 2380, 9225, -4742, 44, 44, 44, 255),
    VTX(440, 1510, 1740, -3075, -4742, 44, 44, 44, 255),
    VTX(440, 1210, 1740, -3075, 1024, 255, 251, 192, 255),
    VTX(440, 1210, 2380, 9225, 1024, 107, 104, 104, 255),
    VTX(70, 1330, 1740, 2114, -1282, 107, 104, 104, 255),
    VTX(170, 1330, 1740, 4036, -1282, 107, 104, 104, 255),
    VTX(440, 1510, 1740, 9225, -4742, 44, 44, 44, 255),
    VTX(-200, 1510, 1740, -3075, -4742, 44, 44, 44, 255),
    VTX(-200, 1210, 1740, -3075, 1024, 255, 251, 192, 255),
    VTX(70, 1210, 1740, 2114, 1024, 255, 251, 192, 255),
    VTX(440, 1210, 1740, 9225, 1024, 107, 104, 104, 255),
    VTX(170, 1210, 1740, 4036, 1024, 255, 251, 192, 255),
    VTX(-200, 1210, 1740, 9225, 1024, 107, 104, 104, 255),
    VTX(-200, 1510, 1740, 9225, -4742, 44, 44, 44, 255),
    VTX(-200, 1210, 2380, -3075, 1024, 255, 251, 192, 255),
    VTX(-200, 1510, 2380, -3075, -4742, 44, 44, 44, 255),
    VTX(440, 1510, 2380, -3075, -4742, 44, 44, 44, 255),
    VTX(160, 1390, 2380, 2306, -2435, 107, 104, 104, 255),
    VTX(80, 1390, 2380, 3844, -2435, 107, 104, 104, 255),
    VTX(-200, 1510, 2380, 9225, -4742, 44, 44, 44, 255),
    VTX(440, 1210, 2380, -3075, 1024, 255, 251, 192, 255),
    VTX(160, 1270, 2380, 2306, -129, 107, 104, 104, 255),
    VTX(-200, 1210, 2380, 9225, 1024, 107, 104, 104, 255),
    VTX(80, 1270, 2380, 3844, -129, 107, 104, 104, 255),
}; 

static Vtx water_temple_room_10Vtx_0003E0[5] = {
    VTX(-200, 1610, 1740, 8192, -7168, 44, 44, 44, 255),
    VTX(120, 1610, 2060, 4096, -3072, 107, 104, 104, 255),
    VTX(-200, 1610, 2380, 8192, 1024, 44, 44, 44, 255),
    VTX(440, 1610, 1740, 0, -7168, 44, 44, 44, 255),
    VTX(440, 1610, 2380, 0, 1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_10Vtx_000430[12] = {
    VTX(400, 1610, 1740, 8192, -1024, 44, 44, 44, 255),
    VTX(-160, 1610, 1740, 0, -1024, 44, 44, 44, 255),
    VTX(-160, 1510, 1740, 0, 1024, 255, 251, 192, 255),
    VTX(400, 1510, 1740, 8192, 1024, 107, 104, 104, 255),
    VTX(440, 1610, 2340, 8192, -1024, 44, 44, 44, 255),
    VTX(440, 1610, 1780, 0, -1024, 44, 44, 44, 255),
    VTX(440, 1510, 1780, 0, 1024, 255, 251, 192, 255),
    VTX(440, 1510, 2340, 8192, 1024, 107, 104, 104, 255),
    VTX(-160, 1610, 2380, 8192, -1024, 44, 44, 44, 255),
    VTX(400, 1610, 2380, 0, -1024, 44, 44, 44, 255),
    VTX(400, 1510, 2380, 0, 1024, 255, 251, 192, 255),
    VTX(-160, 1510, 2380, 8192, 1024, 107, 104, 104, 255),
}; 

static Vtx water_temple_room_10Vtx_0004F0[16] = {
    VTX(215, 1430, 1949, 0, 1024, 90, 90, 99, 255),
    VTX(25, 1430, 1950, 4096, 1024, 90, 90, 99, 255),
    VTX(25, 1490, 1950, 4096, -1024, 44, 44, 44, 255),
    VTX(215, 1490, 1949, 0, -1024, 44, 44, 44, 255),
    VTX(231, 1430, 2155, 0, 1024, 90, 90, 99, 255),
    VTX(230, 1430, 1965, 4096, 1024, 90, 90, 99, 255),
    VTX(230, 1490, 1965, 4096, -1024, 44, 44, 44, 255),
    VTX(231, 1490, 2155, 0, -1024, 44, 44, 44, 255),
    VTX(25, 1430, 2171, 0, 1024, 90, 90, 99, 255),
    VTX(215, 1430, 2170, 4096, 1024, 90, 90, 99, 255),
    VTX(215, 1490, 2170, 4096, -1024, 44, 44, 44, 255),
    VTX(25, 1490, 2171, 0, -1024, 44, 44, 44, 255),
    VTX(9, 1430, 1965, 0, 1024, 90, 90, 99, 255),
    VTX(10, 1430, 2155, 4096, 1024, 90, 90, 99, 255),
    VTX(10, 1490, 2155, 4096, -1024, 44, 44, 44, 255),
    VTX(9, 1490, 1965, 0, -1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_10Vtx_0005F0[12] = {
    VTX(-200, 1610, 1740, 8192, -1024, 44, 44, 44, 255),
    VTX(-200, 1610, 2380, 0, -1024, 44, 44, 44, 255),
    VTX(-200, 1510, 2380, 0, 1024, 255, 251, 192, 255),
    VTX(440, 1610, 1740, 8192, -1024, 44, 44, 44, 255),
    VTX(-200, 1610, 1740, 0, -1024, 44, 44, 44, 255),
    VTX(-200, 1510, 1740, 0, 1024, 255, 251, 192, 255),
    VTX(440, 1510, 1740, 8192, 1024, 107, 104, 104, 255),
    VTX(-200, 1610, 1780, 8192, -1024, 44, 44, 44, 255),
    VTX(-200, 1610, 2340, 0, -1024, 44, 44, 44, 255),
    VTX(-200, 1510, 2340, 0, 1024, 255, 251, 192, 255),
    VTX(-200, 1510, 1780, 8192, 1024, 107, 104, 104, 255),
    VTX(-200, 1510, 1740, 8192, 1024, 107, 104, 104, 255),
}; 

static Vtx water_temple_room_10Vtx_0006B0[32] = {
    VTX(-160, 1290, 2380, 1024, 0, 107, 104, 104, 255),
    VTX(-160, 1210, 2380, 1024, 1024, 107, 104, 104, 255),
    VTX(-160, 1210, 2340, 0, 1024, 255, 251, 192, 255),
    VTX(-160, 1290, 2340, 0, 0, 44, 44, 44, 255),
    VTX(-160, 1290, 2340, 1024, 0, 107, 104, 104, 255),
    VTX(-160, 1210, 2340, 1024, 1024, 255, 251, 192, 255),
    VTX(-200, 1210, 2340, 0, 1024, 255, 251, 192, 255),
    VTX(-200, 1290, 2340, 0, 0, 44, 44, 44, 255),
    VTX(215, 1270, 2155, 0, 0, 44, 44, 44, 255),
    VTX(215, 1210, 2155, 0, 1024, 255, 251, 192, 255),
    VTX(215, 1210, 2185, 1024, 1024, 107, 104, 104, 255),
    VTX(215, 1270, 2185, 1024, 0, 107, 104, 104, 255),
    VTX(245, 1270, 2155, 0, 0, 44, 44, 44, 255),
    VTX(245, 1210, 2155, 0, 1024, 255, 251, 192, 255),
    VTX(215, 1210, 2155, 1024, 1024, 255, 251, 192, 255),
    VTX(215, 1270, 2155, 1024, 0, 107, 104, 104, 255),
    VTX(215, 1270, 2185, 0, 0, 44, 44, 44, 255),
    VTX(215, 1210, 2185, 0, 1024, 255, 251, 192, 255),
    VTX(245, 1210, 2185, 1024, 1024, 255, 251, 192, 255),
    VTX(245, 1270, 2185, 1024, 0, 107, 104, 104, 255),
    VTX(245, 1270, 2185, 0, 0, 44, 44, 44, 255),
    VTX(245, 1210, 2185, 0, 1024, 255, 251, 192, 255),
    VTX(245, 1210, 2155, 1024, 1024, 107, 104, 104, 255),
    VTX(245, 1270, 2155, 1024, 0, 107, 104, 104, 255),
    VTX(-5, 1270, 2185, 0, 0, 44, 44, 44, 255),
    VTX(-5, 1210, 2185, 0, 1024, 255, 251, 192, 255),
    VTX(25, 1210, 2185, 1024, 1024, 107, 104, 104, 255),
    VTX(25, 1270, 2185, 1024, 0, 107, 104, 104, 255),
    VTX(-5, 1270, 2155, 0, 0, 44, 44, 44, 255),
    VTX(-5, 1210, 2155, 0, 1024, 255, 251, 192, 255),
    VTX(-5, 1210, 2185, 1024, 1024, 255, 251, 192, 255),
    VTX(-5, 1270, 2185, 1024, 0, 107, 104, 104, 255),
}; 

static Vtx water_temple_room_10Vtx_0008B0[32] = {
    VTX(25, 1270, 2185, 0, 0, 44, 44, 44, 255),
    VTX(25, 1210, 2185, 0, 1024, 255, 251, 192, 255),
    VTX(25, 1210, 2155, 1024, 1024, 255, 251, 192, 255),
    VTX(25, 1270, 2155, 1024, 0, 107, 104, 104, 255),
    VTX(25, 1270, 2155, 0, 0, 44, 44, 44, 255),
    VTX(25, 1210, 2155, 0, 1024, 255, 251, 192, 255),
    VTX(-5, 1210, 2155, 1024, 1024, 107, 104, 104, 255),
    VTX(-5, 1270, 2155, 1024, 0, 107, 104, 104, 255),
    VTX(25, 1270, 1965, 0, 0, 44, 44, 44, 255),
    VTX(25, 1210, 1965, 0, 1024, 255, 251, 192, 255),
    VTX(25, 1210, 1935, 1024, 1024, 107, 104, 104, 255),
    VTX(25, 1270, 1935, 1024, 0, 107, 104, 104, 255),
    VTX(-5, 1270, 1965, 0, 0, 44, 44, 44, 255),
    VTX(-5, 1210, 1965, 0, 1024, 255, 251, 192, 255),
    VTX(25, 1210, 1965, 1024, 1024, 255, 251, 192, 255),
    VTX(25, 1270, 1965, 1024, 0, 107, 104, 104, 255),
    VTX(25, 1270, 1935, 0, 0, 44, 44, 44, 255),
    VTX(25, 1210, 1935, 0, 1024, 255, 251, 192, 255),
    VTX(-5, 1210, 1935, 1024, 1024, 255, 251, 192, 255),
    VTX(-5, 1270, 1935, 1024, 0, 107, 104, 104, 255),
    VTX(-5, 1270, 1935, 0, 0, 44, 44, 44, 255),
    VTX(-5, 1210, 1935, 0, 1024, 255, 251, 192, 255),
    VTX(-5, 1210, 1965, 1024, 1024, 107, 104, 104, 255),
    VTX(-5, 1270, 1965, 1024, 0, 107, 104, 104, 255),
    VTX(245, 1270, 1935, 0, 0, 44, 44, 44, 255),
    VTX(245, 1210, 1935, 0, 1024, 255, 251, 192, 255),
    VTX(215, 1210, 1935, 1024, 1024, 107, 104, 104, 255),
    VTX(215, 1270, 1935, 1024, 0, 107, 104, 104, 255),
    VTX(245, 1270, 1965, 0, 0, 44, 44, 44, 255),
    VTX(245, 1210, 1965, 0, 1024, 255, 251, 192, 255),
    VTX(245, 1210, 1935, 1024, 1024, 255, 251, 192, 255),
    VTX(245, 1270, 1935, 1024, 0, 107, 104, 104, 255),
}; 

static Vtx water_temple_room_10Vtx_000AB0[32] = {
    VTX(215, 1270, 1935, 0, 0, 44, 44, 44, 255),
    VTX(215, 1210, 1935, 0, 1024, 255, 251, 192, 255),
    VTX(215, 1210, 1965, 1024, 1024, 255, 251, 192, 255),
    VTX(215, 1270, 1965, 1024, 0, 107, 104, 104, 255),
    VTX(215, 1270, 1965, 0, 0, 44, 44, 44, 255),
    VTX(215, 1210, 1965, 0, 1024, 255, 251, 192, 255),
    VTX(245, 1210, 1965, 1024, 1024, 107, 104, 104, 255),
    VTX(245, 1270, 1965, 1024, 0, 107, 104, 104, 255),
    VTX(150, 1210, 1720, 0, 1024, 0, 0, 0, 255),
    VTX(150, 1210, 1740, 1024, 1024, 255, 251, 192, 255),
    VTX(150, 1250, 1740, 1024, 0, 255, 251, 192, 255),
    VTX(150, 1250, 1720, 0, 0, 0, 0, 0, 255),
    VTX(90, 1250, 1740, 1024, 0, 255, 251, 192, 255),
    VTX(90, 1210, 1740, 1024, 1024, 255, 251, 192, 255),
    VTX(90, 1210, 1720, 0, 1024, 0, 0, 0, 255),
    VTX(90, 1250, 1720, 0, 0, 0, 0, 0, 255),
    VTX(150, 1250, 1740, 0, 0, 107, 104, 104, 255),
    VTX(150, 1210, 1740, 0, 1024, 255, 251, 192, 255),
    VTX(170, 1210, 1740, 1024, 1024, 255, 251, 192, 255),
    VTX(170, 1250, 1740, 1024, 0, 255, 251, 192, 255),
    VTX(70, 1210, 1740, -4096, 1024, 255, 251, 192, 255),
    VTX(90, 1210, 1740, -3072, 1024, 255, 251, 192, 255),
    VTX(90, 1250, 1740, -3072, 0, 255, 251, 192, 255),
    VTX(70, 1250, 1740, -4096, 0, 255, 251, 192, 255),
    VTX(400, 1290, 1780, 1024, 0, 107, 104, 104, 255),
    VTX(400, 1210, 1780, 1024, 1024, 255, 251, 192, 255),
    VTX(440, 1210, 1780, 0, 1024, 255, 251, 192, 255),
    VTX(440, 1290, 1780, 0, 0, 44, 44, 44, 255),
    VTX(400, 1290, 1740, 1024, 0, 107, 104, 104, 255),
    VTX(400, 1210, 1740, 1024, 1024, 107, 104, 104, 255),
    VTX(400, 1210, 1780, 0, 1024, 255, 251, 192, 255),
    VTX(400, 1290, 1780, 0, 0, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_10Vtx_000CB0[16] = {
    VTX(440, 1290, 2340, 0, 0, 44, 44, 44, 255),
    VTX(440, 1210, 2340, 0, 1024, 255, 251, 192, 255),
    VTX(400, 1210, 2340, 1024, 1024, 255, 251, 192, 255),
    VTX(400, 1290, 2340, 1024, 0, 107, 104, 104, 255),
    VTX(400, 1290, 2340, 0, 0, 44, 44, 44, 255),
    VTX(400, 1210, 2340, 0, 1024, 255, 251, 192, 255),
    VTX(400, 1210, 2380, 1024, 1024, 107, 104, 104, 255),
    VTX(400, 1290, 2380, 1024, 0, 107, 104, 104, 255),
    VTX(-160, 1290, 1780, 0, 0, 44, 44, 44, 255),
    VTX(-160, 1210, 1780, 0, 1024, 255, 251, 192, 255),
    VTX(-160, 1210, 1740, 1024, 1024, 107, 104, 104, 255),
    VTX(-160, 1290, 1740, 1024, 0, 107, 104, 104, 255),
    VTX(-200, 1290, 1780, 0, 0, 44, 44, 44, 255),
    VTX(-200, 1210, 1780, 0, 1024, 255, 251, 192, 255),
    VTX(-160, 1210, 1780, 1024, 1024, 255, 251, 192, 255),
    VTX(-160, 1290, 1780, 1024, 0, 107, 104, 104, 255),
}; 

static Vtx water_temple_room_10Vtx_000DB0[32] = {
    VTX(170, 1330, 1740, 5120, -1024, 107, 104, 104, 255),
    VTX(150, 1310, 1740, 4096, -512, 107, 104, 104, 255),
    VTX(150, 1250, 1740, 4096, 1024, 107, 104, 104, 255),
    VTX(170, 1250, 1740, 5120, 1024, 255, 251, 192, 255),
    VTX(25, 1510, 2155, 1024, -4437, 44, 44, 44, 255),
    VTX(25, 1510, 2185, 0, -4437, 44, 44, 44, 255),
    VTX(25, 1270, 2185, 0, 1024, 44, 44, 44, 255),
    VTX(25, 1270, 2155, 1024, 1024, 255, 251, 192, 255),
    VTX(400, 1610, 2340, 1024, -4437, 44, 44, 44, 255),
    VTX(440, 1610, 2340, 0, -4437, 44, 44, 44, 255),
    VTX(440, 1290, 2340, 0, 1024, 44, 44, 44, 255),
    VTX(400, 1290, 2340, 1024, 1024, 255, 251, 192, 255),
    VTX(-5, 1510, 2155, 1024, -4437, 44, 44, 44, 255),
    VTX(25, 1510, 2155, 0, -4437, 44, 44, 44, 255),
    VTX(25, 1270, 2155, 0, 1024, 44, 44, 44, 255),
    VTX(-5, 1270, 2155, 1024, 1024, 107, 104, 104, 255),
    VTX(25, 1510, 1935, 1024, -4437, 44, 44, 44, 255),
    VTX(25, 1510, 1965, 0, -4437, 44, 44, 44, 255),
    VTX(25, 1270, 1965, 0, 1024, 44, 44, 44, 255),
    VTX(25, 1270, 1935, 1024, 1024, 107, 104, 104, 255),
    VTX(400, 1610, 2380, 1024, -4437, 44, 44, 44, 255),
    VTX(400, 1610, 2340, 0, -4437, 44, 44, 44, 255),
    VTX(400, 1290, 2340, 0, 1024, 44, 44, 44, 255),
    VTX(400, 1290, 2380, 1024, 1024, 107, 104, 104, 255),
    VTX(25, 1510, 1965, 1024, -4437, 44, 44, 44, 255),
    VTX(-5, 1510, 1965, 0, -4437, 44, 44, 44, 255),
    VTX(-5, 1270, 1965, 0, 1024, 44, 44, 44, 255),
    VTX(25, 1270, 1965, 1024, 1024, 255, 251, 192, 255),
    VTX(-160, 1290, 2380, 1024, 1024, 107, 104, 104, 255),
    VTX(-160, 1290, 2340, 0, 1024, 44, 44, 44, 255),
    VTX(-160, 1610, 2340, 0, -4437, 44, 44, 44, 255),
    VTX(-160, 1610, 2380, 1024, -4437, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_10Vtx_000FB0[32] = {
    VTX(-160, 1290, 2340, 1024, 1024, 255, 251, 192, 255),
    VTX(-200, 1290, 2340, 0, 1024, 44, 44, 44, 255),
    VTX(-200, 1610, 2340, 0, -4437, 44, 44, 44, 255),
    VTX(-160, 1610, 2340, 1024, -4437, 44, 44, 44, 255),
    VTX(-5, 1510, 1935, 1024, -4437, 44, 44, 44, 255),
    VTX(25, 1510, 1935, 0, -4437, 44, 44, 44, 255),
    VTX(25, 1270, 1935, 0, 1024, 44, 44, 44, 255),
    VTX(-5, 1270, 1935, 1024, 1024, 255, 251, 192, 255),
    VTX(150, 1250, 1740, 0, 1024, 255, 251, 192, 255),
    VTX(150, 1310, 1740, 0, -512, 107, 104, 104, 255),
    VTX(150, 1310, 1720, 1024, -512, 0, 0, 0, 255),
    VTX(150, 1250, 1720, 1024, 1024, 0, 0, 0, 255),
    VTX(-5, 1510, 1965, 1024, -4437, 44, 44, 44, 255),
    VTX(-5, 1510, 1935, 0, -4437, 44, 44, 44, 255),
    VTX(-5, 1270, 1935, 0, 1024, 44, 44, 44, 255),
    VTX(-5, 1270, 1965, 1024, 1024, 107, 104, 104, 255),
    VTX(215, 1510, 1935, 1024, -4437, 44, 44, 44, 255),
    VTX(245, 1510, 1935, 0, -4437, 44, 44, 44, 255),
    VTX(245, 1270, 1935, 0, 1024, 44, 44, 44, 255),
    VTX(215, 1270, 1935, 1024, 1024, 107, 104, 104, 255),
    VTX(90, 1250, 1740, 1024, 1024, 255, 251, 192, 255),
    VTX(90, 1310, 1740, 1024, -512, 107, 104, 104, 255),
    VTX(70, 1330, 1740, 0, -1024, 107, 104, 104, 255),
    VTX(70, 1250, 1740, 0, 1024, 255, 251, 192, 255),
    VTX(245, 1510, 1935, 1024, -4437, 44, 44, 44, 255),
    VTX(245, 1510, 1965, 0, -4437, 44, 44, 44, 255),
    VTX(245, 1270, 1965, 0, 1024, 44, 44, 44, 255),
    VTX(245, 1270, 1935, 1024, 1024, 255, 251, 192, 255),
    VTX(90, 1310, 1740, 1024, 512, 107, 104, 104, 255),
    VTX(150, 1310, 1740, 1024, -1024, 107, 104, 104, 255),
    VTX(170, 1330, 1740, 0, -1536, 107, 104, 104, 255),
    VTX(70, 1330, 1740, 0, 1024, 107, 104, 104, 255),
}; 

static Vtx water_temple_room_10Vtx_0011B0[32] = {
    VTX(215, 1510, 2185, 1024, -4437, 44, 44, 44, 255),
    VTX(215, 1510, 2155, 0, -4437, 44, 44, 44, 255),
    VTX(215, 1270, 2155, 0, 1024, 44, 44, 44, 255),
    VTX(215, 1270, 2185, 1024, 1024, 107, 104, 104, 255),
    VTX(215, 1510, 1965, 1024, -4437, 44, 44, 44, 255),
    VTX(215, 1510, 1935, 0, -4437, 44, 44, 44, 255),
    VTX(215, 1270, 1935, 0, 1024, 44, 44, 44, 255),
    VTX(215, 1270, 1965, 1024, 1024, 255, 251, 192, 255),
    VTX(-160, 1610, 1740, 1024, -4437, 44, 44, 44, 255),
    VTX(-160, 1610, 1780, 0, -4437, 44, 44, 44, 255),
    VTX(-160, 1290, 1780, 0, 1024, 44, 44, 44, 255),
    VTX(-160, 1290, 1740, 1024, 1024, 107, 104, 104, 255),
    VTX(245, 1510, 1965, 1024, -4437, 44, 44, 44, 255),
    VTX(215, 1510, 1965, 0, -4437, 44, 44, 44, 255),
    VTX(215, 1270, 1965, 0, 1024, 44, 44, 44, 255),
    VTX(245, 1270, 1965, 1024, 1024, 107, 104, 104, 255),
    VTX(215, 1510, 1935, 1024, 1024, 107, 104, 104, 255),
    VTX(215, 1510, 1965, 1024, 0, 107, 104, 104, 255),
    VTX(245, 1510, 1965, 0, 0, 107, 104, 104, 255),
    VTX(245, 1510, 1935, 0, 1024, 107, 104, 104, 255),
    VTX(215, 1510, 2155, 1024, 1024, 107, 104, 104, 255),
    VTX(215, 1510, 2185, 1024, 0, 107, 104, 104, 255),
    VTX(245, 1510, 2185, 0, 0, 107, 104, 104, 255),
    VTX(245, 1510, 2155, 0, 1024, 107, 104, 104, 255),
    VTX(-5, 1510, 2155, 1024, 1024, 107, 104, 104, 255),
    VTX(-5, 1510, 2185, 1024, 0, 107, 104, 104, 255),
    VTX(25, 1510, 2185, 0, 0, 107, 104, 104, 255),
    VTX(25, 1510, 2155, 0, 1024, 107, 104, 104, 255),
    VTX(-5, 1510, 1935, 1024, 1024, 107, 104, 104, 255),
    VTX(-5, 1510, 1965, 1024, 0, 107, 104, 104, 255),
    VTX(25, 1510, 1965, 0, 0, 107, 104, 104, 255),
    VTX(25, 1510, 1935, 0, 1024, 107, 104, 104, 255),
}; 

static Vtx water_temple_room_10Vtx_0013B0[32] = {
    VTX(215, 1510, 2155, 1024, -4437, 44, 44, 44, 255),
    VTX(245, 1510, 2155, 0, -4437, 44, 44, 44, 255),
    VTX(245, 1270, 2155, 0, 1024, 44, 44, 44, 255),
    VTX(215, 1270, 2155, 1024, 1024, 255, 251, 192, 255),
    VTX(90, 1310, 1720, 1024, -512, 0, 0, 0, 255),
    VTX(90, 1310, 1740, 0, -512, 107, 104, 104, 255),
    VTX(90, 1250, 1740, 0, 1024, 255, 251, 192, 255),
    VTX(90, 1250, 1720, 1024, 1024, 0, 0, 0, 255),
    VTX(400, 1290, 1780, 1024, 1024, 255, 251, 192, 255),
    VTX(440, 1290, 1780, 0, 1024, 44, 44, 44, 255),
    VTX(440, 1610, 1780, 0, -4437, 44, 44, 44, 255),
    VTX(400, 1610, 1780, 1024, -4437, 44, 44, 44, 255),
    VTX(245, 1510, 2185, 1024, -4437, 44, 44, 44, 255),
    VTX(215, 1510, 2185, 0, -4437, 44, 44, 44, 255),
    VTX(215, 1270, 2185, 0, 1024, 44, 44, 44, 255),
    VTX(245, 1270, 2185, 1024, 1024, 255, 251, 192, 255),
    VTX(150, 1310, 1720, 1024, -512, 0, 0, 0, 255),
    VTX(150, 1310, 1740, 0, -512, 107, 104, 104, 255),
    VTX(90, 1310, 1740, 0, 1024, 107, 104, 104, 255),
    VTX(90, 1310, 1720, 1024, 1024, 0, 0, 0, 255),
    VTX(245, 1510, 2155, 1024, -4437, 44, 44, 44, 255),
    VTX(245, 1510, 2185, 0, -4437, 44, 44, 44, 255),
    VTX(245, 1270, 2185, 0, 1024, 44, 44, 44, 255),
    VTX(245, 1270, 2155, 1024, 1024, 107, 104, 104, 255),
    VTX(25, 1510, 2185, 1024, -4437, 44, 44, 44, 255),
    VTX(-5, 1510, 2185, 0, -4437, 44, 44, 44, 255),
    VTX(-5, 1270, 2185, 0, 1024, 44, 44, 44, 255),
    VTX(25, 1270, 2185, 1024, 1024, 107, 104, 104, 255),
    VTX(-160, 1610, 1780, 1024, -4437, 44, 44, 44, 255),
    VTX(-200, 1610, 1780, 0, -4437, 44, 44, 44, 255),
    VTX(-200, 1290, 1780, 0, 1024, 44, 44, 44, 255),
    VTX(-160, 1290, 1780, 1024, 1024, 255, 251, 192, 255),
}; 

static Vtx water_temple_room_10Vtx_0015B0[8] = {
    VTX(-5, 1510, 2185, 1024, -4437, 44, 44, 44, 255),
    VTX(-5, 1510, 2155, 0, -4437, 44, 44, 44, 255),
    VTX(-5, 1270, 2155, 0, 1024, 44, 44, 44, 255),
    VTX(-5, 1270, 2185, 1024, 1024, 255, 251, 192, 255),
    VTX(400, 1290, 1740, 1024, 1024, 107, 104, 104, 255),
    VTX(400, 1290, 1780, 0, 1024, 44, 44, 44, 255),
    VTX(400, 1610, 1780, 0, -4437, 44, 44, 44, 255),
    VTX(400, 1610, 1740, 1024, -4437, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_10Vtx_001630[8] = {
    VTX(-200, 1210, 1720, 0, 0, 0, 0, 0, 0),
    VTX(440, 1210, 1720, 0, 0, 0, 0, 0, 0),
    VTX(-200, 1610, 1720, 0, 0, 0, 0, 0, 0),
    VTX(440, 1610, 1720, 0, 0, 0, 0, 0, 0),
    VTX(-200, 1210, 2380, 0, 0, 0, 0, 0, 0),
    VTX(440, 1210, 2380, 0, 0, 0, 0, 0, 0),
    VTX(-200, 1610, 2380, 0, 0, 0, 0, 0, 0),
    VTX(440, 1610, 2380, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_10Dlist0x0016B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_10Vtx_001630[0], 8, 0),
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
    gsSPVertex(&water_temple_room_10Vtx_000070[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_10Tex_001CF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_10Vtx_0000B0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(2, 1, 4, 0, 3, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_10Tex_002CF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_10Vtx_000100[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_10Tex_0034F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_10Vtx_000140[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_10Tex_0044F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_10Vtx_000180[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 0, 7, 8, 0),
    gsSP2Triangles(9, 8, 7, 0, 1, 4, 2, 0),
    gsSP2Triangles(1, 10, 4, 0, 10, 5, 4, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 14, 16, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 18, 21, 0),
    gsSP2Triangles(22, 23, 18, 0, 19, 24, 20, 0),
    gsSP2Triangles(19, 25, 24, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 29, 28, 0, 0, 3, 7, 0),
    gsSPVertex(&water_temple_room_10Vtx_000180[30], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 4, 0, 7, 5, 4, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_10Tex_004CF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_10Vtx_0003E0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 3, 4, 0, 1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_10Tex_0054F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_10Vtx_000430[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_10Vtx_0004F0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_10Vtx_0005F0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 11, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_10Vtx_0006B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_10Vtx_0008B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_10Vtx_000AB0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_10Vtx_000CB0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_01A340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_10Vtx_000DB0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_10Vtx_000FB0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_10Vtx_0011B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_10Vtx_0013B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_10Vtx_0015B0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_10Tex_001CF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_10Tex_001CF0.rgb5a1.inc.c"
};

u64 water_temple_room_10Tex_002CF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_10Tex_002CF0.rgb5a1.inc.c"
};

u64 water_temple_room_10Tex_0034F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_10Tex_0034F0.rgb5a1.inc.c"
};

u64 water_temple_room_10Tex_0044F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_10Tex_0044F0.rgb5a1.inc.c"
};

u64 water_temple_room_10Tex_004CF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_10Tex_004CF0.rgb5a1.inc.c"
};

u64 water_temple_room_10Tex_0054F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_10Tex_0054F0.rgb5a1.inc.c"
};

Gfx water_temple_room_10Dlist0x005CF0[] = {
    gsSPDisplayList(water_temple_room_10Dlist0x0016B0),
    gsSPEndDisplayList(),
}; 


