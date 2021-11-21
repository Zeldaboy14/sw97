#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_testroom_scene.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_testroom_scene.h"


static SCmdSoundSettings old_testroom_sceneSet0000Cmd00;
static SCmdRoomList old_testroom_sceneSet0000Cmd01;
static SCmdTransiActorList old_testroom_sceneSet0000Cmd02;
static SCmdColHeader old_testroom_sceneSet0000Cmd03;
static SCmdEntranceList old_testroom_sceneSet0000Cmd04;
static SCmdSpecialFiles old_testroom_sceneSet0000Cmd05;
static SCmdSpawnList old_testroom_sceneSet0000Cmd06;
static SCmdSkyboxSettings old_testroom_sceneSet0000Cmd07;
static SCmdLightSettingList old_testroom_sceneSet0000Cmd08;
static SCmdEndMarker old_testroom_sceneSet0000Cmd09;

static SCmdSoundSettings old_testroom_sceneSet0000Cmd00 = {  0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // 0x0000

static SCmdRoomList old_testroom_sceneSet0000Cmd01 = {  0x04, 0x04, (u32)&old_testroom_sceneRoomList0x0000B4 }; // 0x0008

static SCmdTransiActorList old_testroom_sceneSet0000Cmd02 = {  0x0E, 0x06, (u32)old_testroom_sceneTransitionActorList0x000060 }; // 0x0010

static SCmdColHeader old_testroom_sceneSet0000Cmd03 = {  0x03, 0x00, (u32)&old_testroom_sceneCollisionHeader0x0016D8 }; // 0x0018

static SCmdEntranceList old_testroom_sceneSet0000Cmd04 = {  0x06, 0x00, (u32)&old_testroom_sceneEntranceList0x0000D4 }; // 0x0020

static SCmdSpecialFiles old_testroom_sceneSet0000Cmd05 = {  0x07, 0x00, 0x0003 }; // 0x0028

static SCmdSpawnList old_testroom_sceneSet0000Cmd06 = {  0x00, 0x01, (u32)&old_testroom_sceneStartPositionList0x000050 }; // 0x0030

static SCmdSkyboxSettings old_testroom_sceneSet0000Cmd07 = {  0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }; // 0x0038

static SCmdLightSettingList old_testroom_sceneSet0000Cmd08 = {  0x0F, 4, (u32)&old_testroom_sceneLightSettings0x0000D8 }; // 0x0040

static SCmdEndMarker old_testroom_sceneSet0000Cmd09 = {  0x14, 0x00, 0x00 }; // 0x0048

ActorEntry old_testroom_sceneStartPositionList0x000050[] = {
	{ ACTOR_PLAYER, -555, 0, -799, 0, 16384, 0, 0x0FFF },

}; 

TransitionActorEntry old_testroom_sceneTransitionActorList0x000060[] = {
	{ 1, 255, 0, 255, ACTOR_DOOR_SHUTTER, 420, 0, -810, -16384, 0x0000 }, 
	{ 2, 255, 1, 1, ACTOR_EN_DOOR, 2100, 0, -810, -16384, 0x0000 }, 
	{ 0, 255, 3, 255, ACTOR_EN_HOLL, 24, 2, -120, 0, 0x0100 }, 
	{ 0, 255, 0, 255, ACTOR_EN_DOOR, -420, 0, -810, -16384, 0x0000 }, 
	{ 1, 255, 1, 255, ACTOR_EN_DOOR, 1260, 0, -810, -16384, 0x0000 }, 
	{ 2, 255, 2, 255, ACTOR_DOOR_SHUTTER, 2810, 0, -80, 0, 0x0000 }, 

}; 

RomFile old_testroom_sceneRoomList0x0000B4[] = {
	{ (u32)_old_testroom_room_00SegmentRomStart, (u32)_old_testroom_room_00SegmentRomEnd },
	{ (u32)_old_testroom_room_01SegmentRomStart, (u32)_old_testroom_room_01SegmentRomEnd },
	{ (u32)_old_testroom_room_02SegmentRomStart, (u32)_old_testroom_room_02SegmentRomEnd },
	{ (u32)_old_testroom_room_03SegmentRomStart, (u32)_old_testroom_room_03SegmentRomEnd },

}; 

EntranceEntry old_testroom_sceneEntranceList0x0000D4[2] = {
	{ 0x00, 0x00 }, //0x0000D4 
	{ 0x00, 0x00 }, //0x0000D6 

}; 

LightSettings old_testroom_sceneLightSettings0x0000D8[4] = {
	{ 0x37, 0x28, 0x28, 0x49, 0x49, 0x49, 0xC8, 0xC8, 0xAA, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x50, 0x00, 0x00, 0x00, 0x03D4, 0x3200 }, // 0x0000D8 
	{ 0x69, 0x5A, 0x5A, 0x49, 0x49, 0x49, 0xFF, 0xFF, 0xF0, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x5A, 0x64, 0x64, 0x78, 0x03E4, 0x3200 }, // 0x0000EE 
	{ 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00, 0x03E1, 0x3200 }, // 0x000104 
	{ 0x28, 0x28, 0x46, 0x49, 0x49, 0x49, 0x14, 0x14, 0x23, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E, 0x03E0, 0x3200 }, // 0x00011A 

}; 

Vec3s old_testroom_sceneCollisionHeader0x0016D8_camPosData_00000130[6] = {
	{    417,     54,   -801 }, // 0x00000130
	{      0, -16384,      0 }, // 0x00000136
	{     -1,      0,      0 }, // 0x0000013C
	{   1921,    107,   -430 }, // 0x00000142
	{   3641,  28944,      0 }, // 0x00000148
	{     -1,      0,      0 }, // 0x0000014E

}; 

CamData old_testroom_sceneCollisionHeader0x0016D8_camDataList_00000154[3] = {
	{ CAM_SET_RAIL3, 3, &old_testroom_sceneCollisionHeader0x0016D8_camPosData_00000130[0] },
	{ CAM_SET_DOORC, 3, &old_testroom_sceneCollisionHeader0x0016D8_camPosData_00000130[3] },
	{ 0x0000, 0, 0x00000000 },
}; 

u32 old_testroom_sceneCollisionHeader0x0016D8_polygonTypes_0000016C[] = {
   0x00000002, 0x00000000,
   0x00000002, 0x00000040,
}; 

CollisionPoly old_testroom_sceneCollisionHeader0x0016D8_polygons_0000017C[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x7FFF, 0x0000, 0x0000, 0x02A8 }, // 0x0000017C
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x7FFF, 0x0000, 0x0000, 0x02A8 }, // 0x0000018C
   { 0x0000, 0x0004, 0x0005, 0x0006, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x0000019C
   { 0x0000, 0x0004, 0x0006, 0x0007, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x000001AC
   { 0x0000, 0x0008, 0x0009, 0x000A, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x000001BC
   { 0x0000, 0x0008, 0x000A, 0x000B, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x000001CC
   { 0x0000, 0x0006, 0x0005, 0x0009, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x000001DC
   { 0x0000, 0x0006, 0x0009, 0x0008, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x000001EC
   { 0x0000, 0x000B, 0x000A, 0x0004, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000001FC
   { 0x0000, 0x000B, 0x0004, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000020C
   { 0x0000, 0x000C, 0x000D, 0x000E, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x0000021C
   { 0x0000, 0x000C, 0x000E, 0x000F, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x0000022C
   { 0x0000, 0x0010, 0x0011, 0x0012, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x0000023C
   { 0x0000, 0x0010, 0x0012, 0x0013, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x0000024C
   { 0x0000, 0x0012, 0x0011, 0x000E, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x0000025C
   { 0x0000, 0x0012, 0x000E, 0x000D, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x0000026C
   { 0x0000, 0x0000, 0x0003, 0x0014, 0x0000, 0x0000, 0x8001, 0xFD44 }, // 0x0000027C
   { 0x0000, 0x0000, 0x0014, 0x0015, 0x0000, 0x0000, 0x8001, 0xFD44 }, // 0x0000028C
   { 0x0000, 0x0016, 0x0017, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0384 }, // 0x0000029C
   { 0x0000, 0x0016, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0x0384 }, // 0x000002AC
   { 0x0000, 0x0003, 0x0002, 0x0017, 0x0000, 0x8001, 0x0000, 0x00C8 }, // 0x000002BC
   { 0x0000, 0x0003, 0x0017, 0x0014, 0x0000, 0x8001, 0x0000, 0x00C8 }, // 0x000002CC
   { 0x0000, 0x0015, 0x0016, 0x0001, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000002DC
   { 0x0000, 0x0015, 0x0001, 0x0000, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000002EC
   { 0x0000, 0x0018, 0x0014, 0x0017, 0x8001, 0x0000, 0x0000, 0xFE48 }, // 0x000002FC
   { 0x0000, 0x0018, 0x0017, 0x0019, 0x8001, 0x0000, 0x0000, 0xFE48 }, // 0x0000030C
   { 0x0000, 0x0016, 0x000F, 0x000E, 0x8001, 0x0000, 0x0000, 0xFE48 }, // 0x0000031C
   { 0x0000, 0x0016, 0x000E, 0x0019, 0x8001, 0x0000, 0x0000, 0xFE48 }, // 0x0000032C
   { 0x0000, 0x0011, 0x0010, 0x0015, 0x8001, 0x0000, 0x0000, 0xFE48 }, // 0x0000033C
   { 0x0000, 0x0011, 0x0015, 0x0018, 0x8001, 0x0000, 0x0000, 0xFE48 }, // 0x0000034C
   { 0x0000, 0x001A, 0x001B, 0x001C, 0x0000, 0x8001, 0x0000, 0x0190 }, // 0x0000035C
   { 0x0000, 0x001A, 0x001C, 0x001D, 0x0000, 0x8001, 0x0000, 0x0190 }, // 0x0000036C
   { 0x0000, 0x0005, 0x0004, 0x001E, 0x8001, 0x0000, 0x0000, 0x0190 }, // 0x0000037C
   { 0x0000, 0x0005, 0x001E, 0x001F, 0x8001, 0x0000, 0x0000, 0x0190 }, // 0x0000038C
   { 0x0000, 0x0020, 0x0021, 0x0013, 0x7FFF, 0x0000, 0x0000, 0x0190 }, // 0x0000039C
   { 0x0000, 0x0020, 0x0013, 0x0012, 0x7FFF, 0x0000, 0x0000, 0x0190 }, // 0x000003AC
   { 0x0000, 0x001B, 0x001A, 0x0020, 0x7FFF, 0x0000, 0x0000, 0x0190 }, // 0x000003BC
   { 0x0000, 0x001B, 0x0020, 0x0022, 0x7FFF, 0x0000, 0x0000, 0x0190 }, // 0x000003CC
   { 0x0000, 0x000D, 0x000C, 0x0023, 0x7FFF, 0x0000, 0x0000, 0x0190 }, // 0x000003DC
   { 0x0000, 0x000D, 0x0023, 0x0022, 0x7FFF, 0x0000, 0x0000, 0x0190 }, // 0x000003EC
   { 0x0000, 0x001F, 0x001D, 0x001C, 0x8001, 0x0000, 0x0000, 0x0190 }, // 0x000003FC
   { 0x0000, 0x001F, 0x001C, 0x0024, 0x8001, 0x0000, 0x0000, 0x0190 }, // 0x0000040C
   { 0x0000, 0x0025, 0x000A, 0x0009, 0x8001, 0x0000, 0x0000, 0x0190 }, // 0x0000041C
   { 0x0000, 0x0025, 0x0009, 0x0024, 0x8001, 0x0000, 0x0000, 0x0190 }, // 0x0000042C
   { 0x0000, 0x001C, 0x001B, 0x0023, 0x0000, 0x0000, 0x7FFF, 0x04B0 }, // 0x0000043C
   { 0x0000, 0x001C, 0x0023, 0x0025, 0x0000, 0x0000, 0x7FFF, 0x04B0 }, // 0x0000044C
   { 0x0000, 0x000C, 0x000F, 0x0010, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000045C
   { 0x0000, 0x000C, 0x0010, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000046C
   { 0x0000, 0x0026, 0x0027, 0x0028, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000047C
   { 0x0000, 0x0029, 0x002A, 0x0026, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000048C
   { 0x0000, 0x0029, 0x0026, 0x0028, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000049C
   { 0x0000, 0x002B, 0x002C, 0x0028, 0x8001, 0x0000, 0x0000, 0x0028 }, // 0x000004AC
   { 0x0000, 0x002B, 0x0028, 0x0027, 0x8001, 0x0000, 0x0000, 0x0028 }, // 0x000004BC
   { 0x0000, 0x0029, 0x002D, 0x002E, 0x7FFF, 0x0000, 0x0000, 0x0000 }, // 0x000004CC
   { 0x0000, 0x0029, 0x002E, 0x002A, 0x7FFF, 0x0000, 0x0000, 0x0000 }, // 0x000004DC
   { 0x0000, 0x002C, 0x002B, 0x002F, 0x0000, 0x8001, 0x0000, 0x0020 }, // 0x000004EC
   { 0x0000, 0x002F, 0x002E, 0x002D, 0x0000, 0x8001, 0x0000, 0x0020 }, // 0x000004FC
   { 0x0000, 0x002C, 0x002F, 0x002D, 0x0000, 0x8001, 0x0000, 0x0020 }, // 0x0000050C
   { 0x0000, 0x0029, 0x0021, 0x002D, 0x0000, 0x0000, 0x8001, 0xFE70 }, // 0x0000051C
   { 0x0000, 0x001A, 0x002D, 0x0021, 0x0000, 0x0000, 0x8001, 0xFE70 }, // 0x0000052C
   { 0x0000, 0x001D, 0x002C, 0x002D, 0x0000, 0x0000, 0x8001, 0xFE70 }, // 0x0000053C
   { 0x0000, 0x001D, 0x002D, 0x001A, 0x0000, 0x0000, 0x8001, 0xFE70 }, // 0x0000054C
   { 0x0000, 0x001E, 0x002C, 0x001D, 0x0000, 0x0000, 0x8001, 0xFE70 }, // 0x0000055C
   { 0x0000, 0x002C, 0x001E, 0x0028, 0x0000, 0x0000, 0x8001, 0xFE70 }, // 0x0000056C
   { 0x0000, 0x001E, 0x0030, 0x0031, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000057C
   { 0x0000, 0x001E, 0x0031, 0x0028, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000058C
   { 0x0000, 0x0031, 0x0032, 0x0029, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000059C
   { 0x0000, 0x0031, 0x0029, 0x0028, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000005AC
   { 0x0000, 0x0032, 0x0033, 0x0021, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000005BC
   { 0x0000, 0x0032, 0x0021, 0x0029, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000005CC
   { 0x0000, 0x0030, 0x0025, 0x0023, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000005DC
   { 0x0000, 0x0030, 0x0023, 0x0033, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000005EC
   { 0x0001, 0x0034, 0x000B, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000005FC
   { 0x0001, 0x0034, 0x0007, 0x0035, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000060C
   { 0x0001, 0x0006, 0x0036, 0x0035, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x0000061C
   { 0x0001, 0x0006, 0x0035, 0x0007, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x0000062C
   { 0x0001, 0x0034, 0x0037, 0x0008, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x0000063C
   { 0x0001, 0x0034, 0x0008, 0x000B, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x0000064C
   { 0x0001, 0x0036, 0x0006, 0x0008, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x0000065C
   { 0x0001, 0x0036, 0x0008, 0x0037, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x0000066C
   { 0x0001, 0x0038, 0x0039, 0x003A, 0x0000, 0x8001, 0x0000, 0x00C8 }, // 0x0000067C
   { 0x0001, 0x0038, 0x003A, 0x003B, 0x0000, 0x8001, 0x0000, 0x00C8 }, // 0x0000068C
   { 0x0001, 0x003C, 0x003A, 0x0039, 0x0000, 0x0000, 0x7FFF, 0x0384 }, // 0x0000069C
   { 0x0001, 0x003C, 0x0039, 0x003D, 0x0000, 0x0000, 0x7FFF, 0x0384 }, // 0x000006AC
   { 0x0001, 0x003E, 0x0038, 0x003B, 0x0000, 0x0000, 0x8001, 0xFD44 }, // 0x000006BC
   { 0x0001, 0x003E, 0x003B, 0x003F, 0x0000, 0x0000, 0x8001, 0xFD44 }, // 0x000006CC
   { 0x0001, 0x003F, 0x003C, 0x003D, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000006DC
   { 0x0001, 0x003F, 0x003D, 0x003E, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000006EC
   { 0x0001, 0x0040, 0x003E, 0x0035, 0x7FFF, 0x0000, 0x0000, 0xFE48 }, // 0x000006FC
   { 0x0001, 0x0040, 0x0035, 0x0036, 0x7FFF, 0x0000, 0x0000, 0xFE48 }, // 0x0000070C
   { 0x0001, 0x0039, 0x0038, 0x0040, 0x7FFF, 0x0000, 0x0000, 0xFE48 }, // 0x0000071C
   { 0x0001, 0x0039, 0x0040, 0x0041, 0x7FFF, 0x0000, 0x0000, 0xFE48 }, // 0x0000072C
   { 0x0001, 0x0037, 0x0034, 0x003D, 0x7FFF, 0x0000, 0x0000, 0xFE48 }, // 0x0000073C
   { 0x0001, 0x0037, 0x003D, 0x0041, 0x7FFF, 0x0000, 0x0000, 0xFE48 }, // 0x0000074C
   { 0x0001, 0x0042, 0x0043, 0x0044, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x0000075C
   { 0x0001, 0x0042, 0x0044, 0x0045, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x0000076C
   { 0x0001, 0x0046, 0x0047, 0x0048, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000077C
   { 0x0001, 0x0046, 0x0048, 0x0049, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000078C
   { 0x0001, 0x0048, 0x004A, 0x004B, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x0000079C
   { 0x0001, 0x0048, 0x004B, 0x0049, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x000007AC
   { 0x0001, 0x004C, 0x004D, 0x0047, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x000007BC
   { 0x0001, 0x004C, 0x0047, 0x0046, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x000007CC
   { 0x0001, 0x004B, 0x004A, 0x004D, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x000007DC
   { 0x0001, 0x004B, 0x004D, 0x004C, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x000007EC
   { 0x0001, 0x0043, 0x004E, 0x003F, 0x8001, 0x0000, 0x0000, 0x04D8 }, // 0x000007FC
   { 0x0001, 0x0043, 0x003F, 0x004F, 0x8001, 0x0000, 0x0000, 0x04D8 }, // 0x0000080C
   { 0x0001, 0x0050, 0x0051, 0x004E, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000081C
   { 0x0001, 0x0050, 0x004E, 0x0052, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000082C
   { 0x0001, 0x004F, 0x003B, 0x003A, 0x8001, 0x0000, 0x0000, 0x04D8 }, // 0x0000083C
   { 0x0001, 0x004F, 0x003A, 0x0053, 0x8001, 0x0000, 0x0000, 0x04D8 }, // 0x0000084C
   { 0x0001, 0x003C, 0x0051, 0x0044, 0x8001, 0x0000, 0x0000, 0x04D8 }, // 0x0000085C
   { 0x0001, 0x003C, 0x0044, 0x0053, 0x8001, 0x0000, 0x0000, 0x04D8 }, // 0x0000086C
   { 0x0001, 0x004E, 0x0043, 0x0042, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x0000087C
   { 0x0001, 0x004E, 0x0042, 0x0052, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x0000088C
   { 0x0001, 0x0050, 0x0045, 0x0044, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x0000089C
   { 0x0001, 0x0050, 0x0044, 0x0051, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x000008AC
   { 0x0001, 0x0054, 0x0055, 0x0056, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000008BC
   { 0x0001, 0x0054, 0x0056, 0x0057, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000008CC
   { 0x0001, 0x0058, 0x0059, 0x005A, 0x0000, 0x8001, 0x0000, 0x0190 }, // 0x000008DC
   { 0x0001, 0x0058, 0x005A, 0x005B, 0x0000, 0x8001, 0x0000, 0x0190 }, // 0x000008EC
   { 0x0001, 0x005C, 0x0057, 0x0052, 0x7FFF, 0x0000, 0x0000, 0xFB00 }, // 0x000008FC
   { 0x0001, 0x005C, 0x0052, 0x0042, 0x7FFF, 0x0000, 0x0000, 0xFB00 }, // 0x0000090C
   { 0x0001, 0x004A, 0x0048, 0x0054, 0x8001, 0x0000, 0x0000, 0x0820 }, // 0x0000091C
   { 0x0001, 0x004A, 0x0054, 0x005D, 0x8001, 0x0000, 0x0000, 0x0820 }, // 0x0000092C
   { 0x0001, 0x005D, 0x005B, 0x005A, 0x8001, 0x0000, 0x0000, 0x0820 }, // 0x0000093C
   { 0x0001, 0x005D, 0x005A, 0x005E, 0x8001, 0x0000, 0x0000, 0x0820 }, // 0x0000094C
   { 0x0001, 0x0055, 0x0047, 0x004D, 0x8001, 0x0000, 0x0000, 0x0820 }, // 0x0000095C
   { 0x0001, 0x0055, 0x004D, 0x005E, 0x8001, 0x0000, 0x0000, 0x0820 }, // 0x0000096C
   { 0x0001, 0x0059, 0x0058, 0x005C, 0x7FFF, 0x0000, 0x0000, 0xFB00 }, // 0x0000097C
   { 0x0001, 0x0059, 0x005C, 0x005F, 0x7FFF, 0x0000, 0x0000, 0xFB00 }, // 0x0000098C
   { 0x0001, 0x0045, 0x0050, 0x0056, 0x7FFF, 0x0000, 0x0000, 0xFB00 }, // 0x0000099C
   { 0x0001, 0x0045, 0x0056, 0x005F, 0x7FFF, 0x0000, 0x0000, 0xFB00 }, // 0x000009AC
   { 0x0001, 0x0056, 0x0055, 0x005A, 0x0000, 0x0000, 0x7FFF, 0x04B0 }, // 0x000009BC
   { 0x0001, 0x0056, 0x005A, 0x0059, 0x0000, 0x0000, 0x7FFF, 0x04B0 }, // 0x000009CC
   { 0x0001, 0x0054, 0x0057, 0x0058, 0x0000, 0x0000, 0x8001, 0xFE70 }, // 0x000009DC
   { 0x0001, 0x0054, 0x0058, 0x005B, 0x0000, 0x0000, 0x8001, 0xFE70 }, // 0x000009EC
   { 0x0001, 0x0060, 0x0046, 0x0049, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000009FC
   { 0x0001, 0x0060, 0x0049, 0x0061, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000A0C
   { 0x0001, 0x004B, 0x0062, 0x0061, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x00000A1C
   { 0x0001, 0x004B, 0x0061, 0x0049, 0x0000, 0x0000, 0x8001, 0xFCF4 }, // 0x00000A2C
   { 0x0001, 0x0060, 0x0063, 0x004C, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x00000A3C
   { 0x0001, 0x0060, 0x004C, 0x0046, 0x0000, 0x0000, 0x7FFF, 0x0348 }, // 0x00000A4C
   { 0x0001, 0x0062, 0x004B, 0x004C, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x00000A5C
   { 0x0001, 0x0062, 0x004C, 0x0063, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x00000A6C
   { 0x0001, 0x0064, 0x0065, 0x0066, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x00000A7C
   { 0x0001, 0x0064, 0x0066, 0x0067, 0x0000, 0x8001, 0x0000, 0x0064 }, // 0x00000A8C
   { 0x0001, 0x0068, 0x0067, 0x0066, 0x7FFF, 0x0000, 0x0000, 0xF524 }, // 0x00000A9C
   { 0x0001, 0x0068, 0x0066, 0x0069, 0x7FFF, 0x0000, 0x0000, 0xF524 }, // 0x00000AAC
   { 0x0001, 0x006A, 0x0065, 0x0064, 0x8001, 0x0000, 0x0000, 0x0B18 }, // 0x00000ABC
   { 0x0001, 0x006A, 0x0064, 0x006B, 0x8001, 0x0000, 0x0000, 0x0B18 }, // 0x00000ACC
   { 0x0001, 0x0068, 0x0069, 0x006A, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000ADC
   { 0x0001, 0x0068, 0x006A, 0x006B, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000AEC
   { 0x0001, 0x006C, 0x006D, 0x006E, 0x0000, 0x8001, 0x0000, 0x00C8 }, // 0x00000AFC
   { 0x0001, 0x006C, 0x006E, 0x006F, 0x0000, 0x8001, 0x0000, 0x00C8 }, // 0x00000B0C
   { 0x0001, 0x0070, 0x006E, 0x006D, 0x7FFF, 0x0000, 0x0000, 0xF560 }, // 0x00000B1C
   { 0x0001, 0x0070, 0x006D, 0x0071, 0x7FFF, 0x0000, 0x0000, 0xF560 }, // 0x00000B2C
   { 0x0001, 0x0072, 0x006C, 0x006F, 0x8001, 0x0000, 0x0000, 0x0B68 }, // 0x00000B3C
   { 0x0001, 0x0072, 0x006F, 0x0073, 0x8001, 0x0000, 0x0000, 0x0B68 }, // 0x00000B4C
   { 0x0001, 0x0073, 0x0070, 0x0071, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000B5C
   { 0x0001, 0x0073, 0x0071, 0x0072, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000B6C
   { 0x0001, 0x0074, 0x0075, 0x006F, 0x0000, 0x8001, 0x0000, 0x00C8 }, // 0x00000B7C
   { 0x0001, 0x0074, 0x006F, 0x006E, 0x0000, 0x8001, 0x0000, 0x00C8 }, // 0x00000B8C
   { 0x0001, 0x0073, 0x006F, 0x0075, 0x0000, 0x0000, 0x7FFF, 0x0384 }, // 0x00000B9C
   { 0x0001, 0x0073, 0x0075, 0x0076, 0x0000, 0x0000, 0x7FFF, 0x0384 }, // 0x00000BAC
   { 0x0001, 0x0077, 0x0074, 0x006E, 0x0000, 0x0000, 0x8001, 0xFD44 }, // 0x00000BBC
   { 0x0001, 0x0077, 0x006E, 0x0070, 0x0000, 0x0000, 0x8001, 0xFD44 }, // 0x00000BCC
   { 0x0001, 0x0070, 0x0073, 0x0076, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000BDC
   { 0x0001, 0x0070, 0x0076, 0x0077, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000BEC
   { 0x0001, 0x0067, 0x0068, 0x0071, 0x0000, 0x0000, 0x8001, 0xFF9C }, // 0x00000BFC
   { 0x0001, 0x0067, 0x0071, 0x0078, 0x0000, 0x0000, 0x8001, 0xFF9C }, // 0x00000C0C
   { 0x0001, 0x0063, 0x0060, 0x0076, 0x7FFF, 0x0000, 0x0000, 0xF7B8 }, // 0x00000C1C
   { 0x0001, 0x0063, 0x0076, 0x0079, 0x7FFF, 0x0000, 0x0000, 0xF7B8 }, // 0x00000C2C
   { 0x0001, 0x0079, 0x0075, 0x0074, 0x7FFF, 0x0000, 0x0000, 0xF7B8 }, // 0x00000C3C
   { 0x0001, 0x0079, 0x0074, 0x007A, 0x7FFF, 0x0000, 0x0000, 0xF7B8 }, // 0x00000C4C
   { 0x0001, 0x0077, 0x0061, 0x0062, 0x7FFF, 0x0000, 0x0000, 0xF7B8 }, // 0x00000C5C
   { 0x0001, 0x0077, 0x0062, 0x007A, 0x7FFF, 0x0000, 0x0000, 0xF7B8 }, // 0x00000C6C
   { 0x0001, 0x0078, 0x006D, 0x006C, 0x0000, 0x0000, 0x8001, 0xFF9C }, // 0x00000C7C
   { 0x0001, 0x0078, 0x006C, 0x007B, 0x0000, 0x0000, 0x8001, 0xFF9C }, // 0x00000C8C
   { 0x0001, 0x0072, 0x006B, 0x0064, 0x0000, 0x0000, 0x8001, 0xFF9C }, // 0x00000C9C
   { 0x0001, 0x0072, 0x0064, 0x007B, 0x0000, 0x0000, 0x8001, 0xFF9C }, // 0x00000CAC
   { 0x0001, 0x007C, 0x007D, 0x007E, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000CBC
   { 0x0001, 0x007C, 0x007F, 0x007D, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000CCC
   { 0x0001, 0x007F, 0x0080, 0x007D, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000CDC
   { 0x0001, 0x0081, 0x0082, 0x0083, 0x0000, 0x8001, 0x0000, 0x0190 }, // 0x00000CEC
   { 0x0001, 0x0082, 0x0084, 0x0083, 0x0000, 0x8001, 0x0000, 0x0190 }, // 0x00000CFC
   { 0x0001, 0x0081, 0x0085, 0x0082, 0x0000, 0x8001, 0x0000, 0x0190 }, // 0x00000D0C
   { 0x0001, 0x0085, 0x0084, 0x0082, 0x0000, 0x8001, 0x0000, 0x0190 }, // 0x00000D1C
   { 0x0001, 0x007E, 0x0069, 0x0066, 0x0000, 0x0000, 0x7FFF, 0x003C }, // 0x00000D2C
   { 0x0001, 0x0065, 0x006A, 0x0080, 0x0000, 0x0000, 0x7FFF, 0x003C }, // 0x00000D3C
   { 0x0001, 0x0084, 0x0086, 0x0083, 0x0000, 0x0000, 0x8001, 0x02E4 }, // 0x00000D4C
   { 0x0001, 0x0086, 0x007C, 0x0083, 0x0000, 0x0000, 0x8001, 0x02E4 }, // 0x00000D5C
   { 0x0001, 0x0084, 0x007F, 0x0086, 0x0000, 0x0000, 0x8001, 0x02E4 }, // 0x00000D6C
   { 0x0001, 0x007F, 0x007C, 0x0086, 0x0000, 0x0000, 0x8001, 0x02E4 }, // 0x00000D7C
   { 0x0001, 0x0084, 0x0087, 0x007F, 0x8001, 0x0000, 0x0000, 0x0C80 }, // 0x00000D8C
   { 0x0001, 0x0087, 0x0080, 0x007F, 0x8001, 0x0000, 0x0000, 0x0C80 }, // 0x00000D9C
   { 0x0001, 0x0084, 0x0085, 0x0087, 0x8001, 0x0000, 0x0000, 0x0C80 }, // 0x00000DAC
   { 0x0001, 0x0085, 0x0080, 0x0087, 0x8001, 0x0000, 0x0000, 0x0C80 }, // 0x00000DBC
   { 0x0001, 0x0081, 0x0088, 0x007E, 0x7FFF, 0x0000, 0x0000, 0xF6A0 }, // 0x00000DCC
   { 0x0001, 0x0081, 0x0083, 0x0088, 0x7FFF, 0x0000, 0x0000, 0xF6A0 }, // 0x00000DDC
   { 0x0001, 0x0083, 0x007C, 0x0088, 0x7FFF, 0x0000, 0x0000, 0xF6A0 }, // 0x00000DEC
   { 0x0001, 0x007C, 0x007E, 0x0088, 0x7FFF, 0x0000, 0x0000, 0xF6A0 }, // 0x00000DFC
   { 0x0001, 0x0085, 0x0081, 0x0066, 0x0000, 0x0000, 0x7FFF, 0x003C }, // 0x00000E0C
   { 0x0001, 0x0085, 0x0066, 0x0065, 0x0000, 0x0000, 0x7FFF, 0x003C }, // 0x00000E1C
   { 0x0001, 0x0085, 0x0065, 0x0080, 0x0000, 0x0000, 0x7FFF, 0x003C }, // 0x00000E2C
   { 0x0001, 0x0066, 0x0081, 0x007E, 0x0000, 0x0000, 0x7FFF, 0x003C }, // 0x00000E3C
   { 0x0001, 0x0069, 0x007E, 0x007D, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000E4C
   { 0x0001, 0x0080, 0x006A, 0x007D, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000E5C
   { 0x0001, 0x006A, 0x0069, 0x007D, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00000E6C
   { 0x0000, 0x0089, 0x008A, 0x008B, 0x0000, 0x0000, 0x7FFF, 0xFF38 }, // 0x00000E7C
   { 0x0000, 0x008C, 0x008D, 0x008E, 0x0000, 0x0000, 0x7FFF, 0xFF38 }, // 0x00000E8C
   { 0x0000, 0x008C, 0x008A, 0x0089, 0x0000, 0x0000, 0x7FFF, 0xFF38 }, // 0x00000E9C
   { 0x0000, 0x008C, 0x0089, 0x008D, 0x0000, 0x0000, 0x7FFF, 0xFF38 }, // 0x00000EAC
   { 0x0000, 0x008D, 0x008F, 0x008E, 0x0000, 0x0000, 0x7FFF, 0xFF38 }, // 0x00000EBC
   { 0x0000, 0x008B, 0x0090, 0x0089, 0x0000, 0x0000, 0x7FFF, 0xFF38 }, // 0x00000ECC
   { 0x0000, 0x0091, 0x008C, 0x008E, 0x8001, 0x0000, 0x0000, 0x0190 }, // 0x00000EDC
   { 0x0000, 0x0091, 0x008E, 0x0092, 0x8001, 0x0000, 0x0000, 0x0190 }, // 0x00000EEC
   { 0x0000, 0x0093, 0x0094, 0x0091, 0x0000, 0x0000, 0x8001, 0x03E8 }, // 0x00000EFC
   { 0x0000, 0x0093, 0x0091, 0x0092, 0x0000, 0x0000, 0x8001, 0x03E8 }, // 0x00000F0C
   { 0x0000, 0x008B, 0x008A, 0x0094, 0x7FFF, 0x0000, 0x0000, 0x0190 }, // 0x00000F1C
   { 0x0000, 0x008B, 0x0094, 0x0093, 0x7FFF, 0x0000, 0x0000, 0x0190 }, // 0x00000F2C
   { 0x0000, 0x008A, 0x008C, 0x0091, 0x0000, 0x8001, 0x0000, 0x0190 }, // 0x00000F3C
   { 0x0000, 0x008A, 0x0091, 0x0094, 0x0000, 0x8001, 0x0000, 0x0190 }, // 0x00000F4C
   { 0x0000, 0x0095, 0x0096, 0x0097, 0x0000, 0x0000, 0x8001, 0x0258 }, // 0x00000F5C
   { 0x0000, 0x0095, 0x0097, 0x0098, 0x0000, 0x0000, 0x8001, 0x0258 }, // 0x00000F6C
   { 0x0000, 0x0097, 0x0099, 0x009A, 0x0000, 0x0000, 0x8001, 0x0258 }, // 0x00000F7C
   { 0x0000, 0x0097, 0x009A, 0x0098, 0x0000, 0x0000, 0x8001, 0x0258 }, // 0x00000F8C
   { 0x0000, 0x009B, 0x009A, 0x0099, 0x0000, 0x0000, 0x8001, 0x0258 }, // 0x00000F9C
   { 0x0000, 0x0099, 0x009C, 0x009B, 0x0000, 0x0000, 0x8001, 0x0258 }, // 0x00000FAC
   { 0x0000, 0x009D, 0x009E, 0x009F, 0x0000, 0x0000, 0x7FFF, 0xFD58 }, // 0x00000FBC
   { 0x0000, 0x009F, 0x00A0, 0x009D, 0x0000, 0x0000, 0x7FFF, 0xFD58 }, // 0x00000FCC
   { 0x0000, 0x00A1, 0x00A0, 0x009F, 0x0000, 0x0000, 0x7FFF, 0xFD58 }, // 0x00000FDC
   { 0x0000, 0x00A1, 0x009F, 0x00A2, 0x0000, 0x0000, 0x7FFF, 0xFD58 }, // 0x00000FEC
   { 0x0000, 0x00A1, 0x00A2, 0x00A3, 0x0000, 0x0000, 0x7FFF, 0xFD58 }, // 0x00000FFC
   { 0x0000, 0x00A2, 0x00A4, 0x00A3, 0x0000, 0x0000, 0x7FFF, 0xFD58 }, // 0x0000100C
   { 0x0000, 0x0096, 0x00A4, 0x00A2, 0x8001, 0x0000, 0x0000, 0x0028 }, // 0x0000101C
   { 0x0000, 0x0096, 0x00A2, 0x0097, 0x8001, 0x0000, 0x0000, 0x0028 }, // 0x0000102C
   { 0x0000, 0x009E, 0x009C, 0x0099, 0x7FFF, 0x0000, 0x0000, 0x0000 }, // 0x0000103C
   { 0x0000, 0x009E, 0x0099, 0x009F, 0x7FFF, 0x0000, 0x0000, 0x0000 }, // 0x0000104C
   { 0x0000, 0x00A2, 0x009F, 0x0099, 0x0000, 0x8001, 0x0000, 0x0020 }, // 0x0000105C
   { 0x0000, 0x00A2, 0x0099, 0x0097, 0x0000, 0x8001, 0x0000, 0x0020 }, // 0x0000106C
   { 0x0000, 0x008F, 0x0090, 0x00A5, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000107C
   { 0x0000, 0x008F, 0x00A5, 0x00A6, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000108C
   { 0x0000, 0x00A5, 0x00A7, 0x00A8, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000109C
   { 0x0000, 0x00A5, 0x00A8, 0x00A6, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000010AC
   { 0x0000, 0x00A7, 0x009C, 0x0096, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000010BC
   { 0x0000, 0x00A7, 0x0096, 0x00A8, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000010CC
   { 0x0000, 0x009C, 0x009E, 0x00A4, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000010DC
   { 0x0000, 0x009C, 0x00A4, 0x0096, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000010EC
   { 0x0000, 0x00A9, 0x00AA, 0x00AB, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000010FC
   { 0x0000, 0x00A9, 0x00AB, 0x00AC, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000110C
   { 0x0000, 0x009E, 0x00A9, 0x00AC, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000111C
   { 0x0000, 0x009E, 0x00AC, 0x00A4, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000112C
   { 0x0000, 0x0090, 0x008B, 0x0093, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000113C
   { 0x0000, 0x0090, 0x0093, 0x00A9, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000114C
   { 0x0000, 0x0093, 0x00AA, 0x00A9, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000115C
   { 0x0000, 0x0092, 0x00AC, 0x00AB, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000116C
   { 0x0000, 0x0092, 0x008E, 0x008F, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000117C
   { 0x0000, 0x0092, 0x008F, 0x00AC, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000118C
   { 0x0000, 0x002B, 0x008D, 0x002F, 0x0000, 0x8001, 0x0000, 0x0020 }, // 0x0000119C
   { 0x0000, 0x008D, 0x0089, 0x002F, 0x0000, 0x8001, 0x0000, 0x0020 }, // 0x000011AC
   { 0x0000, 0x0089, 0x002E, 0x002F, 0x0000, 0x8001, 0x0000, 0x0020 }, // 0x000011BC
   { 0x0000, 0x002E, 0x0089, 0x0090, 0x7FFF, 0x0000, 0x0000, 0x0000 }, // 0x000011CC
   { 0x0000, 0x002E, 0x0090, 0x002A, 0x7FFF, 0x0000, 0x0000, 0x0000 }, // 0x000011DC
   { 0x0000, 0x008F, 0x008D, 0x002B, 0x8001, 0x0000, 0x0000, 0x0028 }, // 0x000011EC
   { 0x0000, 0x008F, 0x002B, 0x0027, 0x8001, 0x0000, 0x0000, 0x0028 }, // 0x000011FC
   { 0x0000, 0x002A, 0x0090, 0x0026, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000120C
   { 0x0000, 0x0090, 0x008F, 0x0026, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000121C
   { 0x0000, 0x008F, 0x0027, 0x0026, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000122C
   { 0x0000, 0x009A, 0x00A0, 0x00A1, 0x0000, 0x7FFF, 0x0000, 0xFF60 }, // 0x0000123C
   { 0x0000, 0x009A, 0x00A1, 0x0098, 0x0000, 0x7FFF, 0x0000, 0xFF60 }, // 0x0000124C

}; 

Vec3s old_testroom_sceneCollisionHeader0x0016D8_vtx_0000125C[] = {
   { -680, 0, -700 }, // 0x0000125C
   { -680, 0, -900 }, // 0x00001262
   { -680, 200, -900 }, // 0x00001268
   { -680, 200, -700 }, // 0x0000126E
   { 400, 0, -780 }, // 0x00001274
   { 400, 100, -780 }, // 0x0000127A
   { 420, 100, -780 }, // 0x00001280
   { 420, 0, -780 }, // 0x00001286
   { 420, 100, -840 }, // 0x0000128C
   { 400, 100, -840 }, // 0x00001292
   { 400, 0, -840 }, // 0x00001298
   { 420, 0, -840 }, // 0x0000129E
   { -400, 0, -840 }, // 0x000012A4
   { -400, 100, -840 }, // 0x000012AA
   { -440, 100, -840 }, // 0x000012B0
   { -440, 0, -840 }, // 0x000012B6
   { -440, 0, -780 }, // 0x000012BC
   { -440, 100, -780 }, // 0x000012C2
   { -400, 100, -780 }, // 0x000012C8
   { -400, 0, -780 }, // 0x000012CE
   { -440, 200, -700 }, // 0x000012D4
   { -440, 0, -700 }, // 0x000012DA
   { -440, 0, -900 }, // 0x000012E0
   { -440, 200, -900 }, // 0x000012E6
   { -440, 100, -700 }, // 0x000012EC
   { -440, 100, -900 }, // 0x000012F2
   { -400, 400, -400 }, // 0x000012F8
   { -400, 400, -1200 }, // 0x000012FE
   { 400, 400, -1200 }, // 0x00001304
   { 400, 400, -400 }, // 0x0000130A
   { 400, 0, -400 }, // 0x00001310
   { 400, 100, -400 }, // 0x00001316
   { -400, 100, -400 }, // 0x0000131C
   { -400, 0, -400 }, // 0x00001322
   { -400, 100, -1200 }, // 0x00001328
   { -400, 0, -1200 }, // 0x0000132E
   { 400, 100, -1200 }, // 0x00001334
   { 400, 0, -1200 }, // 0x0000133A
   { 20, 0, -120 }, // 0x00001340
   { 40, 0, -120 }, // 0x00001346
   { 40, 0, -400 }, // 0x0000134C
   { 0, 0, -400 }, // 0x00001352
   { 0, 0, -120 }, // 0x00001358
   { 40, 32, -120 }, // 0x0000135E
   { 40, 32, -400 }, // 0x00001364
   { 0, 32, -400 }, // 0x0000136A
   { 0, 32, -120 }, // 0x00001370
   { 20, 32, -120 }, // 0x00001376
   { 400, 0, -440 }, // 0x0000137C
   { 40, 0, -440 }, // 0x00001382
   { 0, 0, -440 }, // 0x00001388
   { -400, 0, -440 }, // 0x0000138E
   { 440, 0, -840 }, // 0x00001394
   { 440, 0, -780 }, // 0x0000139A
   { 440, 100, -780 }, // 0x000013A0
   { 440, 100, -840 }, // 0x000013A6
   { 440, 200, -700 }, // 0x000013AC
   { 440, 200, -900 }, // 0x000013B2
   { 1240, 200, -900 }, // 0x000013B8
   { 1240, 200, -700 }, // 0x000013BE
   { 1240, 0, -900 }, // 0x000013C4
   { 440, 0, -900 }, // 0x000013CA
   { 440, 0, -700 }, // 0x000013D0
   { 1240, 0, -700 }, // 0x000013D6
   { 440, 100, -700 }, // 0x000013DC
   { 440, 100, -900 }, // 0x000013E2
   { 1280, 100, -780 }, // 0x000013E8
   { 1240, 100, -780 }, // 0x000013EE
   { 1240, 100, -840 }, // 0x000013F4
   { 1280, 100, -840 }, // 0x000013FA
   { 2100, 0, -840 }, // 0x00001400
   { 2080, 0, -840 }, // 0x00001406
   { 2080, 0, -780 }, // 0x0000140C
   { 2100, 0, -780 }, // 0x00001412
   { 2080, 100, -780 }, // 0x00001418
   { 2100, 100, -780 }, // 0x0000141E
   { 2100, 100, -840 }, // 0x00001424
   { 2080, 100, -840 }, // 0x0000142A
   { 1240, 0, -780 }, // 0x00001430
   { 1240, 100, -700 }, // 0x00001436
   { 1280, 0, -840 }, // 0x0000143C
   { 1240, 0, -840 }, // 0x00001442
   { 1280, 0, -780 }, // 0x00001448
   { 1240, 100, -900 }, // 0x0000144E
   { 2080, 0, -400 }, // 0x00001454
   { 2080, 0, -1200 }, // 0x0000145A
   { 1280, 0, -1200 }, // 0x00001460
   { 1280, 0, -400 }, // 0x00001466
   { 1280, 400, -400 }, // 0x0000146C
   { 1280, 400, -1200 }, // 0x00001472
   { 2080, 400, -1200 }, // 0x00001478
   { 2080, 400, -400 }, // 0x0000147E
   { 1280, 100, -400 }, // 0x00001484
   { 2080, 100, -400 }, // 0x0000148A
   { 2080, 100, -1200 }, // 0x00001490
   { 1280, 100, -1200 }, // 0x00001496
   { 2120, 0, -840 }, // 0x0000149C
   { 2120, 0, -780 }, // 0x000014A2
   { 2120, 100, -780 }, // 0x000014A8
   { 2120, 100, -840 }, // 0x000014AE
   { 2840, 100, -100 }, // 0x000014B4
   { 2840, 100, -60 }, // 0x000014BA
   { 2780, 100, -60 }, // 0x000014C0
   { 2780, 100, -100 }, // 0x000014C6
   { 2780, 0, -100 }, // 0x000014CC
   { 2780, 0, -60 }, // 0x000014D2
   { 2840, 0, -60 }, // 0x000014D8
   { 2840, 0, -100 }, // 0x000014DE
   { 2920, 200, -100 }, // 0x000014E4
   { 2720, 200, -100 }, // 0x000014EA
   { 2720, 200, -700 }, // 0x000014F0
   { 2920, 200, -900 }, // 0x000014F6
   { 2720, 0, -700 }, // 0x000014FC
   { 2720, 0, -100 }, // 0x00001502
   { 2920, 0, -100 }, // 0x00001508
   { 2920, 0, -900 }, // 0x0000150E
   { 2120, 200, -700 }, // 0x00001514
   { 2120, 200, -900 }, // 0x0000151A
   { 2120, 0, -900 }, // 0x00001520
   { 2120, 0, -700 }, // 0x00001526
   { 2720, 100, -100 }, // 0x0000152C
   { 2120, 100, -900 }, // 0x00001532
   { 2120, 100, -700 }, // 0x00001538
   { 2920, 100, -100 }, // 0x0000153E
   { 2400, 0, 740 }, // 0x00001544
   { 2800, 0, 340 }, // 0x0000154A
   { 2400, 0, -60 }, // 0x00001550
   { 3200, 0, 740 }, // 0x00001556
   { 3200, 0, -60 }, // 0x0000155C
   { 2400, 400, -60 }, // 0x00001562
   { 2800, 400, 340 }, // 0x00001568
   { 2400, 400, 740 }, // 0x0000156E
   { 3200, 400, 740 }, // 0x00001574
   { 3200, 400, -60 }, // 0x0000157A
   { 2800, 200, 740 }, // 0x00001580
   { 3200, 200, 340 }, // 0x00001586
   { 2400, 200, 340 }, // 0x0000158C
   { 0, 32, 200 }, // 0x00001592
   { -400, 400, 200 }, // 0x00001598
   { -400, 0, 200 }, // 0x0000159E
   { 400, 400, 200 }, // 0x000015A4
   { 40, 32, 200 }, // 0x000015AA
   { 400, 0, 200 }, // 0x000015B0
   { 40, 0, 200 }, // 0x000015B6
   { 0, 0, 200 }, // 0x000015BC
   { 400, 400, 1000 }, // 0x000015C2
   { 400, 0, 1000 }, // 0x000015C8
   { -400, 0, 1000 }, // 0x000015CE
   { -400, 400, 1000 }, // 0x000015D4
   { 400, 0, 600 }, // 0x000015DA
   { 40, 0, 600 }, // 0x000015E0
   { 40, 32, 600 }, // 0x000015E6
   { 400, 160, 600 }, // 0x000015EC
   { 0, 32, 600 }, // 0x000015F2
   { -400, 160, 600 }, // 0x000015F8
   { -400, 0, 600 }, // 0x000015FE
   { 0, 0, 600 }, // 0x00001604
   { -400, 0, 680 }, // 0x0000160A
   { 0, 0, 680 }, // 0x00001610
   { 0, 32, 680 }, // 0x00001616
   { -400, 160, 680 }, // 0x0000161C
   { 400, 160, 680 }, // 0x00001622
   { 40, 32, 680 }, // 0x00001628
   { 400, 0, 680 }, // 0x0000162E
   { 40, 0, 680 }, // 0x00001634
   { 0, 0, 240 }, // 0x0000163A
   { 40, 0, 240 }, // 0x00001640
   { 0, 0, 560 }, // 0x00001646
   { 40, 0, 560 }, // 0x0000164C
   { 0, 0, 720 }, // 0x00001652
   { 0, 0, 1000 }, // 0x00001658
   { 40, 0, 1000 }, // 0x0000165E
   { 40, 0, 720 }, // 0x00001664
   { 420, 60, -770 }, // 0x0000166A
   { 420, 60, -850 }, // 0x00001670
   { 420, 0, -810 }, // 0x00001676
   { 2100, 40, -770 }, // 0x0000167C
   { 2100, 40, -850 }, // 0x00001682
   { 2100, 0, -810 }, // 0x00001688
   { 24, 2, -120 }, // 0x0000168E
   { 60, 81, -120 }, // 0x00001694
   { -21, 79, -120 }, // 0x0000169A
   { -420, 50, -770 }, // 0x000016A0
   { -420, 50, -860 }, // 0x000016A6
   { -420, 0, -810 }, // 0x000016AC
   { 1260, 40, -770 }, // 0x000016B2
   { 1260, 40, -850 }, // 0x000016B8
   { 1260, 0, -810 }, // 0x000016BE
   { 2850, 50, -80 }, // 0x000016C4
   { 2770, 50, -80 }, // 0x000016CA
   { 2810, 0, -80 }, // 0x000016D0
}; 

CollisionHeader old_testroom_sceneCollisionHeader0x0016D8 = { -680, 0, -1200, 3200, 400, 1000, 191, old_testroom_sceneCollisionHeader0x0016D8_vtx_0000125C, 270, old_testroom_sceneCollisionHeader0x0016D8_polygons_0000017C, old_testroom_sceneCollisionHeader0x0016D8_polygonTypes_0000016C, &old_testroom_sceneCollisionHeader0x0016D8_camDataList_00000154, 0, 0 }; 

static u32 pad1704 = 0;
static u32 pad1708 = 0;
static u32 pad170C = 0;

u64 old_testroom_sceneTex_001710[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_sceneTex_001710.rgb5a1.inc.c"
};

u64 old_testroom_sceneTex_001F10[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_sceneTex_001F10.rgb5a1.inc.c"
};

u64 old_testroom_sceneTex_002710[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_sceneTex_002710.rgb5a1.inc.c"
};


