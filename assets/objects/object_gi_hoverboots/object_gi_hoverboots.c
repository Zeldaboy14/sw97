#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_hoverboots.h"

static Vtx object_gi_hoverbootsVtx_000400[32];
static Vtx object_gi_hoverbootsVtx_000600[11];
static Vtx object_gi_hoverbootsVtx_0006B0[32];
static Vtx object_gi_hoverbootsVtx_0008B0[7];
static Vtx object_gi_hoverbootsVtx_000920[3];
static Vtx object_gi_hoverbootsVtx_000950[124];
static Vtx object_gi_hoverbootsVtx_001110[80];
static Vtx object_gi_hoverbootsVtx_001610[24];
static Vtx object_gi_hoverbootsVtx_001790[12];

u64 object_gi_hoverbootsTex_000000[] = {
#include "assets/objects/object_gi_hoverboots//object_gi_hoverbootsTex_000000.ia16.inc.c"
};

u64 object_gi_hoverbootsTex_000300[] = {
#include "assets/objects/object_gi_hoverboots//object_gi_hoverbootsTex_000300.i8.inc.c"
};

static Vtx object_gi_hoverbootsVtx_000400[32] = {
    VTX(-1, 31, -1, 509, -910, 17, 43, 146, 255),
    VTX(12, 31, -7, 1275, -910, 152, 46, 220, 255),
    VTX(2, 5, -11, 782, 1024, 207, 33, 152, 255),
    VTX(6, 31, -20, 1027, -910, 200, 43, 96, 255),
    VTX(2, 5, -11, 782, 1024, 48, 87, 66, 255),
    VTX(-6, 31, -20, 846, -910, 65, 49, 88, 255),
    VTX(-10, 31, -9, 690, -910, 106, 49, 230, 255),
    VTX(6, 14, -21, 3, 349, 80, 2, 168, 255),
    VTX(6, 31, -20, 3, -910, 36, 2, 142, 255),
    VTX(12, 31, -7, 251, -910, 119, 2, 0, 255),
    VTX(-6, 14, -20, 846, 349, 207, 2, 147, 255),
    VTX(-6, 31, -20, 846, -910, 166, 3, 178, 255),
    VTX(6, 31, -20, 1027, -910, 36, 2, 142, 255),
    VTX(-10, 14, -9, 690, 349, 137, 3, 2, 255),
    VTX(-10, 31, -9, 690, -910, 148, 2, 52, 255),
    VTX(-1, 14, -1, 509, 349, 211, 2, 111, 255),
    VTX(-1, 31, -1, 509, -910, 8, 2, 119, 255),
    VTX(13, 14, -7, 251, 349, 94, 2, 73, 255),
    VTX(6, 14, -21, 1027, 349, 80, 2, 168, 255),
    VTX(8, 4, 13, 782, 1024, 190, 33, 94, 255),
    VTX(19, 30, 12, 1275, -910, 147, 46, 17, 255),
    VTX(7, 30, 3, 509, -910, 253, 43, 111, 255),
    VTX(8, 4, 13, 782, 1024, 58, 87, 199, 255),
    VTX(10, 30, 23, 1027, -910, 217, 43, 152, 255),
    VTX(-1, 30, 20, 846, -910, 79, 49, 181, 255),
    VTX(-3, 30, 9, 690, -910, 100, 49, 44, 255),
    VTX(19, 30, 12, 251, -910, 118, 2, 20, 255),
    VTX(10, 30, 23, 3, -910, 16, 2, 118, 255),
    VTX(10, 13, 24, 3, 349, 64, 2, 101, 255),
    VTX(10, 30, 23, 1027, -910, 16, 2, 118, 255),
    VTX(-1, 30, 20, 846, -910, 154, 3, 61, 255),
    VTX(-2, 13, 21, 846, 349, 189, 2, 99, 255),
}; 

static Vtx object_gi_hoverbootsVtx_000600[11] = {
    VTX(-1, 30, 20, 846, -910, 154, 3, 61, 255),
    VTX(-3, 30, 9, 690, -910, 159, 2, 186, 255),
    VTX(-4, 13, 9, 690, 349, 139, 3, 233, 255),
    VTX(7, 30, 3, 509, -910, 28, 2, 140, 255),
    VTX(6, 13, 3, 509, 349, 231, 2, 139, 255),
    VTX(19, 30, 12, 251, -910, 118, 2, 20, 255),
    VTX(19, 13, 12, 251, 349, 106, 2, 200, 255),
    VTX(10, 13, 24, 3, 349, 64, 2, 101, 255),
    VTX(-2, 13, 21, 846, 349, 189, 2, 99, 255),
    VTX(10, 13, 24, 1027, 349, 64, 2, 101, 255),
    VTX(10, 30, 23, 1027, -910, 16, 2, 118, 255),
}; 

static Vtx object_gi_hoverbootsVtx_0006B0[32] = {
    VTX(-7, 19, -9, 613, -1514, 138, 7, 19, 255),
    VTX(-4, 19, -18, 926, -1514, 178, 6, 166, 255),
    VTX(-8, -8, -14, 768, 179, 178, 86, 227, 255),
    VTX(-1, -21, -21, 993, 1024, 239, 24, 140, 255),
    VTX(-7, -21, -5, 543, 1024, 170, 25, 79, 255),
    VTX(-4, -14, -3, 490, 541, 202, 4, 106, 255),
    VTX(-1, 19, -2, 433, -1514, 216, 11, 112, 255),
    VTX(-13, -14, -24, 846, 565, 24, 93, 184, 255),
    VTX(-17, -11, -17, 768, 384, 220, 113, 243, 255),
    VTX(5, 19, -19, 1101, -1514, 39, 10, 144, 255),
    VTX(-18, -14, -10, 690, 565, 228, 93, 70, 255),
    VTX(10, -10, -1, 321, 309, 58, 11, 104, 255),
    VTX(14, -10, -13, 191, 309, 111, 10, 212, 255),
    VTX(11, 19, -8, 251, -1514, 111, 21, 39, 255),
    VTX(2, -14, -21, 1046, 541, 25, 3, 139, 255),
    VTX(5, 19, -19, 77, -1514, 39, 10, 144, 255),
    VTX(2, -14, -21, 22, 541, 25, 3, 139, 255),
    VTX(-2, -10, 15, 768, 179, 174, 86, 15, 255),
    VTX(1, 17, 19, 926, -1514, 163, 6, 75, 255),
    VTX(-1, 17, 10, 613, -1514, 143, 7, 217, 255),
    VTX(3, -23, 22, 993, 1024, 219, 24, 111, 255),
    VTX(0, -23, 6, 543, 1024, 184, 25, 164, 255),
    VTX(6, 17, 4, 433, -1514, 236, 11, 139, 255),
    VTX(3, -15, 4, 490, 541, 221, 4, 142, 255),
    VTX(-9, -16, 23, 846, 565, 11, 93, 75, 255),
    VTX(-12, -13, 16, 768, 384, 219, 113, 7, 255),
    VTX(10, 17, 22, 1101, -1514, 19, 10, 117, 255),
    VTX(-12, -16, 9, 690, 565, 240, 93, 183, 255),
    VTX(17, 17, 12, 251, -1514, 116, 21, 237, 255),
    VTX(19, -12, 18, 191, 309, 101, 10, 63, 255),
    VTX(17, -12, 5, 321, 309, 75, 11, 163, 255),
    VTX(6, -15, 23, 1046, 541, 4, 3, 119, 255),
}; 

static Vtx object_gi_hoverbootsVtx_0008B0[7] = {
    VTX(6, -15, 23, 22, 541, 4, 3, 119, 255),
    VTX(19, -12, 18, 191, 309, 101, 10, 63, 255),
    VTX(10, 17, 22, 77, -1514, 19, 10, 117, 255),
    VTX(17, 17, 12, 251, -1514, 116, 21, 237, 255),
    VTX(17, -12, 5, 321, 309, 75, 11, 163, 255),
    VTX(3, -15, 4, 490, 541, 221, 4, 142, 255),
    VTX(6, 17, 4, 433, -1514, 236, 11, 139, 255),
}; 

static Vtx object_gi_hoverbootsVtx_000920[3] = {
    VTX(-25, -14, -14, -52, 1471, 167, 78, 15, 255),
    VTX(-23, -14, -24, 40, 1474, 184, 76, 199, 255),
    VTX(-29, -28, -24, 14, 1660, 149, 48, 233, 255),
}; 

static Vtx object_gi_hoverbootsVtx_000950[124] = {
    VTX(-25, -14, -14, -52, 1471, 167, 78, 15, 255),
    VTX(-18, -8, -18, 9, 1312, 204, 103, 226, 255),
    VTX(-23, -14, -24, 40, 1474, 184, 76, 199, 255),
    VTX(-18, -14, -27, 89, 1467, 248, 74, 162, 255),
    VTX(-13, -13, -26, 133, 1427, 12, 57, 152, 255),
    VTX(0, -21, -23, 305, 1629, 27, 6, 140, 255),
    VTX(-13, -28, -30, 148, 1700, 29, 16, 141, 255),
    VTX(-29, -28, -24, 14, 1660, 149, 48, 233, 255),
    VTX(-31, -28, -18, -27, 1663, 141, 33, 255, 255),
    VTX(-23, -15, -9, 922, 1479, 201, 64, 85, 255),
    VTX(-20, -28, -3, 858, 1712, 200, 251, 105, 255),
    VTX(-16, -21, -2, 820, 1609, 229, 30, 112, 255),
    VTX(7, -28, 5, 605, 1667, 240, 251, 118, 255),
    VTX(14, -28, -1, 539, 1660, 104, 249, 59, 255),
    VTX(13, -9, 3, 566, 1428, 68, 0, 98, 255),
    VTX(-5, -13, 1, 684, 1426, 216, 255, 113, 255),
    VTX(0, -28, -23, 308, 1752, 35, 244, 142, 255),
    VTX(-19, -13, -8, 902, 1424, 214, 84, 73, 255),
    VTX(-25, -14, -14, 972, 1471, 167, 78, 15, 255),
    VTX(17, -28, -10, 476, 1659, 119, 246, 11, 255),
    VTX(19, -9, -14, 450, 1430, 114, 12, 224, 255),
    VTX(-7, -22, -2, 710, 1642, 228, 16, 115, 255),
    VTX(-19, -13, -8, -122, 1424, 214, 84, 73, 255),
    VTX(11, -15, -21, 389, 1489, 64, 43, 165, 255),
    VTX(16, -28, -19, 411, 1664, 92, 244, 181, 255),
    VTX(4, -13, -23, 335, 1429, 31, 29, 144, 255),
    VTX(6, -15, -23, 349, 1480, 11, 34, 142, 255),
    VTX(-7, -28, -2, 710, 1770, 236, 249, 118, 255),
    VTX(-13, -13, -26, 133, 1427, 80, 82, 34, 255),
    VTX(-13, -14, -24, 118, 1434, 77, 82, 40, 255),
    VTX(-1, -21, -21, 311, 1644, 221, 113, 238, 255),
    VTX(-7, -22, -2, 710, 1642, 214, 112, 1, 255),
    VTX(-7, -21, -5, 705, 1657, 212, 110, 14, 255),
    VTX(-18, -14, -10, 922, 1427, 82, 83, 28, 255),
    VTX(-1, -21, -21, 311, 1644, 221, 113, 238, 255),
    VTX(0, -21, -23, 305, 1629, 227, 112, 226, 255),
    VTX(-13, -13, -26, 133, 1427, 80, 82, 34, 255),
    VTX(2, -14, -21, 345, 1425, 196, 101, 236, 255),
    VTX(14, -10, -13, 457, 1421, 231, 116, 245, 255),
    VTX(19, -9, -14, 450, 1430, 227, 116, 253, 255),
    VTX(10, -10, -1, 557, 1419, 231, 116, 240, 255),
    VTX(13, -9, 3, 566, 1428, 231, 117, 247, 255),
    VTX(-17, -11, -17, 11, 1348, 99, 57, 35, 255),
    VTX(-13, -14, -24, 118, 1434, 77, 82, 40, 255),
    VTX(-19, -13, -8, 902, 1424, 83, 82, 25, 255),
    VTX(0, -28, -23, 308, 1752, 0, 136, 0, 255),
    VTX(7, -28, 5, 605, 1667, 0, 136, 0, 255),
    VTX(-7, -28, -2, 710, 1770, 0, 136, 0, 255),
    VTX(-4, -14, -3, 669, 1415, 162, 71, 236, 255),
    VTX(-5, -13, 1, 684, 1426, 195, 100, 234, 255),
    VTX(16, -28, -19, 411, 1664, 0, 136, 0, 255),
    VTX(17, -28, -10, 476, 1659, 0, 136, 0, 255),
    VTX(-7, -28, -2, -314, 1770, 0, 136, 0, 255),
    VTX(-13, -28, -30, 148, 1700, 0, 136, 0, 255),
    VTX(-18, -8, -18, 9, 1312, 98, 57, 38, 255),
    VTX(14, -28, -1, 539, 1660, 0, 136, 0, 255),
    VTX(4, -13, -23, 335, 1429, 168, 73, 219, 255),
    VTX(-19, -13, -8, -122, 1424, 83, 82, 25, 255),
    VTX(-18, -14, -10, -102, 1427, 82, 83, 28, 255),
    VTX(-31, -28, -18, -27, 1663, 0, 136, 0, 255),
    VTX(-29, -28, -24, 14, 1660, 0, 136, 0, 255),
    VTX(-20, -28, -3, -166, 1712, 0, 136, 0, 255),
    VTX(-25, -29, 20, 14, 1660, 147, 48, 4, 255),
    VTX(-19, -16, 22, 40, 1474, 175, 76, 44, 255),
    VTX(-20, -16, 11, -52, 1471, 171, 78, 225, 255),
    VTX(-13, -10, 17, 9, 1312, 200, 103, 21, 255),
    VTX(-15, -16, 25, 89, 1467, 232, 74, 91, 255),
    VTX(-9, -15, 26, 133, 1427, 250, 57, 105, 255),
    VTX(-10, -29, 30, 148, 1700, 8, 16, 118, 255),
    VTX(4, -23, 25, 305, 1629, 6, 6, 119, 255),
    VTX(-25, -29, 14, -27, 1663, 143, 33, 237, 255),
    VTX(-9, -23, 1, 820, 1609, 249, 30, 141, 255),
    VTX(-12, -29, 2, 858, 1712, 219, 251, 143, 255),
    VTX(-16, -17, 7, 922, 1479, 217, 64, 163, 255),
    VTX(21, -11, 1, 566, 1428, 84, 0, 171, 255),
    VTX(21, -29, 6, 539, 1660, 112, 249, 216, 255),
    VTX(15, -29, -1, 605, 1667, 5, 251, 137, 255),
    VTX(3, -14, 0, 684, 1426, 236, 255, 138, 255),
    VTX(4, -29, 25, 308, 1752, 15, 244, 118, 255),
    VTX(-13, -15, 7, 902, 1424, 227, 84, 177, 255),
    VTX(-20, -16, 11, 972, 1471, 171, 78, 225, 255),
    VTX(24, -11, 19, 450, 1430, 107, 12, 52, 255),
    VTX(23, -29, 15, 476, 1659, 119, 246, 10, 255),
    VTX(0, -23, 3, 710, 1642, 249, 16, 138, 255),
    VTX(-13, -15, 7, -122, 1424, 227, 84, 177, 255),
    VTX(20, -29, 24, 411, 1664, 78, 244, 90, 255),
    VTX(15, -17, 25, 389, 1489, 47, 43, 101, 255),
    VTX(10, -17, 26, 349, 1480, 247, 34, 114, 255),
    VTX(8, -14, 26, 335, 1429, 11, 29, 115, 255),
    VTX(0, -29, 3, 710, 1770, 1, 249, 137, 255),
    VTX(3, -23, 22, 311, 1644, 218, 113, 12, 255),
    VTX(-9, -16, 23, 118, 1434, 83, 82, 230, 255),
    VTX(-9, -15, 26, 133, 1427, 85, 82, 236, 255),
    VTX(-12, -16, 9, 922, 1427, 85, 83, 242, 255),
    VTX(0, -23, 6, 705, 1657, 215, 110, 235, 255),
    VTX(0, -23, 3, 710, 1642, 215, 112, 247, 255),
    VTX(-9, -15, 26, 133, 1427, 85, 82, 236, 255),
    VTX(4, -23, 25, 305, 1629, 222, 112, 24, 255),
    VTX(3, -23, 22, 311, 1644, 218, 113, 12, 255),
    VTX(24, -11, 19, 450, 1430, 227, 116, 254, 255),
    VTX(19, -12, 18, 457, 1421, 229, 116, 6, 255),
    VTX(6, -15, 23, 345, 1425, 193, 101, 9, 255),
    VTX(21, -11, 1, 566, 1428, 230, 117, 5, 255),
    VTX(17, -12, 5, 557, 1419, 229, 116, 11, 255),
    VTX(-9, -16, 23, 118, 1434, 83, 82, 230, 255),
    VTX(-12, -13, 16, 11, 1348, 104, 57, 239, 255),
    VTX(-13, -15, 7, 902, 1424, 86, 82, 246, 255),
    VTX(0, -29, 3, 710, 1770, 0, 136, 0, 255),
    VTX(15, -29, -1, 605, 1667, 0, 136, 0, 255),
    VTX(4, -29, 25, 308, 1752, 0, 136, 0, 255),
    VTX(3, -15, 4, 669, 1415, 160, 71, 3, 255),
    VTX(3, -14, 0, 684, 1426, 192, 100, 11, 255),
    VTX(20, -29, 24, 411, 1664, 0, 136, 0, 255),
    VTX(23, -29, 15, 476, 1659, 0, 136, 0, 255),
    VTX(-10, -29, 30, 148, 1700, 0, 136, 0, 255),
    VTX(0, -29, 3, -314, 1770, 0, 136, 0, 255),
    VTX(-13, -10, 17, 9, 1312, 103, 57, 236, 255),
    VTX(21, -29, 6, 539, 1660, 0, 136, 0, 255),
    VTX(8, -14, 26, 335, 1429, 163, 73, 21, 255),
    VTX(-12, -16, 9, -102, 1427, 85, 83, 242, 255),
    VTX(-13, -15, 7, -122, 1424, 86, 82, 246, 255),
    VTX(-25, -29, 20, 14, 1660, 0, 136, 0, 255),
    VTX(-25, -29, 14, -27, 1663, 0, 136, 0, 255),
    VTX(-12, -29, 2, -166, 1712, 0, 136, 0, 255),
}; 

static Vtx object_gi_hoverbootsVtx_001110[80] = {
    VTX(-31, -28, -18, 983, 1635, 149, 47, 233, 255),
    VTX(-28, -19, -10, 926, 1501, 160, 69, 17, 255),
    VTX(-25, -14, -14, 951, 1409, 167, 74, 31, 255),
    VTX(-23, -15, -9, 893, 1415, 221, 71, 89, 255),
    VTX(-25, -19, -7, 888, 1499, 208, 76, 79, 255),
    VTX(-20, -28, -3, 829, 1663, 7, 51, 108, 255),
    VTX(-25, -19, -7, 888, 1499, 11, 152, 198, 255),
    VTX(-28, -19, -10, 926, 1501, 74, 162, 7, 255),
    VTX(-24, -16, -15, 962, 1438, 60, 153, 248, 255),
    VTX(-31, -28, -18, 983, 1635, 94, 196, 44, 255),
    VTX(-20, -28, -3, 829, 1663, 218, 193, 162, 255),
    VTX(-22, -17, -9, 895, 1449, 250, 160, 186, 255),
    VTX(16, -28, -19, 428, 1622, 106, 33, 213, 255),
    VTX(11, -19, -24, 388, 1513, 64, 60, 174, 255),
    VTX(11, -15, -21, 410, 1447, 78, 54, 183, 255),
    VTX(6, -15, -23, 378, 1427, 6, 57, 151, 255),
    VTX(8, -19, -25, 371, 1510, 246, 49, 147, 255),
    VTX(0, -28, -23, 346, 1699, 202, 22, 152, 255),
    VTX(5, -17, -21, 397, 1450, 15, 157, 65, 255),
    VTX(11, -19, -24, 388, 1513, 204, 155, 36, 255),
    VTX(10, -17, -19, 425, 1468, 186, 163, 29, 255),
    VTX(0, -28, -23, 346, 1699, 75, 208, 79, 255),
    VTX(8, -19, -25, 371, 1510, 33, 166, 72, 255),
    VTX(16, -28, -19, 428, 1622, 150, 201, 3, 255),
    VTX(-19, -19, -30, 100, 1497, 246, 157, 65, 255),
    VTX(-23, -16, -22, 20, 1433, 55, 159, 44, 255),
    VTX(-24, -19, -28, 62, 1501, 67, 164, 37, 255),
    VTX(-13, -28, -30, 161, 1672, 58, 47, 163, 255),
    VTX(-19, -19, -30, 100, 1497, 250, 71, 160, 255),
    VTX(-18, -14, -27, 91, 1393, 6, 65, 156, 255),
    VTX(-23, -14, -24, 33, 1409, 193, 70, 182, 255),
    VTX(-23, -14, -24, 33, 1409, 193, 70, 182, 255),
    VTX(-24, -19, -28, 62, 1501, 185, 69, 190, 255),
    VTX(-29, -28, -24, 6, 1633, 153, 47, 218, 255),
    VTX(-19, -19, -30, 100, 1497, 250, 71, 160, 255),
    VTX(-29, -28, -24, 6, 1633, 103, 197, 16, 255),
    VTX(-24, -19, -28, 62, 1501, 67, 164, 37, 255),
    VTX(-23, -16, -22, 20, 1433, 55, 159, 44, 255),
    VTX(-17, -16, -25, 87, 1416, 230, 164, 72, 255),
    VTX(-19, -19, -30, 100, 1497, 246, 157, 65, 255),
    VTX(-13, -28, -30, 161, 1672, 180, 197, 71, 255),
    VTX(-20, -16, 11, 951, 1409, 174, 74, 210, 255),
    VTX(-22, -20, 8, 926, 1501, 165, 69, 222, 255),
    VTX(-25, -29, 14, 983, 1635, 146, 47, 4, 255),
    VTX(-12, -29, 2, 829, 1663, 26, 51, 151, 255),
    VTX(-18, -20, 5, 888, 1499, 222, 76, 170, 255),
    VTX(-16, -17, 7, 893, 1415, 237, 71, 162, 255),
    VTX(-19, -18, 13, 962, 1438, 57, 153, 18, 255),
    VTX(-22, -20, 8, 926, 1501, 74, 162, 6, 255),
    VTX(-18, -20, 5, 888, 1499, 0, 152, 59, 255),
    VTX(-25, -29, 14, 983, 1635, 100, 196, 229, 255),
    VTX(-15, -19, 8, 895, 1449, 238, 160, 68, 255),
    VTX(-12, -29, 2, 829, 1663, 202, 193, 86, 255),
    VTX(15, -17, 25, 410, 1447, 64, 54, 85, 255),
    VTX(14, -21, 28, 388, 1513, 49, 60, 91, 255),
    VTX(20, -29, 24, 428, 1622, 97, 33, 61, 255),
    VTX(4, -29, 25, 346, 1699, 184, 22, 93, 255),
    VTX(12, -21, 29, 371, 1510, 227, 49, 105, 255),
    VTX(10, -17, 26, 378, 1427, 244, 57, 104, 255),
    VTX(14, -18, 23, 425, 1468, 192, 163, 215, 255),
    VTX(14, -21, 28, 388, 1513, 211, 155, 211, 255),
    VTX(9, -18, 24, 397, 1450, 26, 157, 195, 255),
    VTX(9, -18, 24, 397, 1450, 26, 157, 195, 255),
    VTX(12, -21, 29, 371, 1510, 45, 166, 191, 255),
    VTX(4, -29, 25, 346, 1699, 88, 208, 191, 255),
    VTX(20, -29, 24, 428, 1622, 152, 201, 234, 255),
    VTX(14, -21, 28, 388, 1513, 211, 155, 211, 255),
    VTX(14, -18, 23, 425, 1468, 192, 163, 215, 255),
    VTX(-20, -20, 26, 62, 1501, 72, 164, 231, 255),
    VTX(-19, -17, 20, 20, 1433, 61, 159, 222, 255),
    VTX(-16, -20, 28, 100, 1497, 1, 157, 190, 255),
    VTX(-15, -16, 25, 91, 1393, 245, 65, 100, 255),
    VTX(-16, -20, 28, 100, 1497, 233, 71, 93, 255),
    VTX(-10, -29, 30, 161, 1672, 41, 47, 102, 255),
    VTX(-19, -16, 22, 33, 1409, 181, 70, 62, 255),
    VTX(-25, -29, 20, 6, 1633, 148, 47, 20, 255),
    VTX(-20, -20, 26, 62, 1501, 174, 69, 53, 255),
    VTX(-25, -29, 20, 6, 1633, 104, 197, 2, 255),
    VTX(-10, -29, 30, 161, 1672, 193, 197, 173, 255),
    VTX(-14, -17, 24, 87, 1416, 243, 164, 181, 255),
}; 

static Vtx object_gi_hoverbootsVtx_001610[24] = {
    VTX(-22, -17, -9, 324, 104, 160, 33, 63, 255),
    VTX(-24, -16, -15, 512, 0, 158, 40, 56, 255),
    VTX(-31, -28, -18, 512, 1024, 160, 33, 63, 255),
    VTX(-20, -28, -3, 0, 1024, 162, 27, 69, 255),
    VTX(0, -28, -23, 0, 1024, 34, 13, 142, 255),
    VTX(5, -17, -21, 341, 10, 41, 6, 144, 255),
    VTX(10, -17, -19, 512, 0, 34, 13, 142, 255),
    VTX(16, -28, -19, 512, 1024, 27, 20, 141, 255),
    VTX(-23, -16, -22, 338, -16, 206, 27, 151, 255),
    VTX(-17, -16, -25, 512, 0, 198, 18, 153, 255),
    VTX(-13, -28, -30, 512, 1024, 206, 27, 151, 255),
    VTX(-29, -28, -24, 0, 1024, 214, 35, 149, 255),
    VTX(-25, -29, 14, 512, 1024, 172, 33, 178, 255),
    VTX(-19, -18, 13, 512, 0, 169, 40, 184, 255),
    VTX(-15, -19, 8, 324, 104, 172, 33, 178, 255),
    VTX(-12, -29, 2, 0, 1024, 175, 27, 172, 255),
    VTX(14, -18, 23, 512, 0, 14, 13, 118, 255),
    VTX(9, -18, 24, 341, 10, 21, 6, 118, 255),
    VTX(4, -29, 25, 0, 1024, 14, 13, 118, 255),
    VTX(20, -29, 24, 512, 1024, 6, 20, 118, 255),
    VTX(-10, -29, 30, 512, 1024, 189, 27, 95, 255),
    VTX(-14, -17, 24, 512, 0, 181, 18, 91, 255),
    VTX(-19, -17, 20, 338, -16, 189, 27, 95, 255),
    VTX(-25, -29, 20, 0, 1024, 196, 35, 98, 255),
}; 

static Vtx object_gi_hoverbootsVtx_001790[12] = {
    VTX(13, -19, -21, 0, 1024, 55, 4, 150, 255),
    VTX(9, -7, -22, 0, 0, 55, 4, 150, 255),
    VTX(30, 1, -11, 1536, 0, 55, 4, 150, 255),
    VTX(34, -11, -9, 1536, 1024, 55, 4, 150, 255),
    VTX(35, 0, 18, 1536, 0, 36, 4, 114, 255),
    VTX(13, -9, 26, 0, 0, 36, 4, 114, 255),
    VTX(17, -21, 25, 0, 1024, 36, 4, 114, 255),
    VTX(40, -12, 17, 1536, 1024, 36, 4, 114, 255),
    VTX(13, -21, -1, 0, 1024, 250, 4, 137, 255),
    VTX(8, -9, 0, 0, 0, 250, 4, 137, 255),
    VTX(32, 0, -1, 1536, 0, 250, 4, 137, 255),
    VTX(36, -12, -1, 1536, 1024, 250, 4, 137, 255),
}; 

Gfx gGiHoverBootsDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 150, 100, 0, 255),
    gsDPSetEnvColor(90, 50, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_hoverbootsVtx_000400[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 4, 0, 5, 6, 4, 0),
    gsSP2Triangles(0, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 11, 0),
    gsSP2Triangles(15, 16, 14, 0, 17, 9, 16, 0),
    gsSP2Triangles(9, 17, 7, 0, 12, 18, 10, 0),
    gsSP2Triangles(11, 10, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 15, 17, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 20, 0, 22, 24, 23, 0),
    gsSP2Triangles(22, 25, 24, 0, 25, 22, 21, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_gi_hoverbootsVtx_000600[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 2, 8, 0, 0),
    gsSP2Triangles(4, 2, 1, 0, 6, 4, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 80, 40, 0, 255),
    gsDPSetEnvColor(40, 20, 0, 255),
    gsSPVertex(&object_gi_hoverbootsVtx_0006B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 2, 4, 0, 5, 6, 4, 0),
    gsSP2Triangles(3, 7, 2, 0, 8, 2, 7, 0),
    gsSP2Triangles(6, 0, 4, 0, 3, 1, 9, 0),
    gsSP2Triangles(8, 10, 2, 0, 4, 2, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 9, 14, 3, 0),
    gsSP2Triangles(15, 12, 16, 0, 15, 13, 12, 0),
    gsSP2Triangles(6, 5, 11, 0, 13, 6, 11, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 20, 18, 0),
    gsSP2Triangles(21, 17, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(17, 24, 20, 0, 24, 17, 25, 0),
    gsSP2Triangles(21, 19, 22, 0, 26, 18, 20, 0),
    gsSP2Triangles(17, 27, 25, 0, 27, 17, 21, 0),
    gsSP2Triangles(28, 29, 30, 0, 20, 31, 26, 0),
    gsSPVertex(&object_gi_hoverbootsVtx_0008B0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 200, 255),
    gsDPSetEnvColor(120, 100, 70, 255),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_hoverbootsVtx_000920[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_hoverbootsVtx_000950[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 3, 1, 0, 5, 6, 4, 0),
    gsSP2Triangles(6, 3, 4, 0, 0, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 12, 14, 0, 6, 5, 16, 0),
    gsSP2Triangles(9, 11, 17, 0, 18, 9, 17, 0),
    gsSP2Triangles(13, 19, 20, 0, 21, 12, 15, 0),
    gsSP2Triangles(22, 1, 0, 0, 23, 20, 24, 0),
    gsSP2Triangles(5, 25, 26, 0, 25, 23, 26, 0),
    gsSP2Triangles(5, 26, 16, 0, 23, 25, 20, 0),
    gsSP2Triangles(20, 14, 13, 0, 11, 27, 21, 0),
    gsSP2Triangles(20, 19, 24, 0, 12, 21, 27, 0),
    gsSP2Triangles(11, 10, 27, 0, 17, 11, 21, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_gi_hoverbootsVtx_000950[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 5, 0, 2, 13, 0, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 1, 0, 0),
    gsSP2Triangles(0, 18, 17, 0, 10, 8, 7, 0),
    gsSP2Triangles(19, 15, 14, 0, 20, 15, 19, 0),
    gsSP2Triangles(14, 21, 22, 0, 5, 23, 11, 0),
    gsSP2Triangles(20, 24, 15, 0, 25, 4, 3, 0),
    gsSP2Triangles(3, 6, 25, 0, 23, 26, 27, 0),
    gsSP2Triangles(27, 11, 23, 0, 9, 17, 18, 0),
    gsSP2Triangles(18, 10, 9, 0, 22, 28, 29, 0),
    gsSP2Triangles(8, 25, 6, 0, 30, 22, 21, 0),
    gsSP1Triangle(28, 22, 30, 0),
    gsSPVertex(&object_gi_hoverbootsVtx_000950[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 1, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 4, 6, 0),
    gsSP2Triangles(8, 0, 2, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 7, 6, 0, 17, 9, 11, 0),
    gsSP2Triangles(17, 11, 18, 0, 19, 20, 13, 0),
    gsSP2Triangles(15, 14, 21, 0, 2, 3, 22, 0),
    gsSP2Triangles(23, 19, 24, 0, 25, 26, 7, 0),
    gsSP2Triangles(25, 24, 26, 0, 16, 25, 7, 0),
    gsSP2Triangles(19, 26, 24, 0, 13, 12, 19, 0),
    gsSP2Triangles(21, 27, 9, 0, 23, 20, 19, 0),
    gsSP2Triangles(27, 21, 14, 0, 27, 10, 9, 0),
    gsSP2Triangles(21, 9, 17, 0, 28, 29, 30, 0),
    gsSPVertex(&object_gi_hoverbootsVtx_000950[93], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 7, 0),
    gsSP2Triangles(3, 11, 12, 0, 2, 13, 0, 0),
    gsSP2Triangles(14, 15, 16, 0, 2, 1, 17, 0),
    gsSP2Triangles(17, 18, 2, 0, 7, 6, 9, 0),
    gsSP2Triangles(16, 15, 19, 0, 19, 15, 20, 0),
    gsSP2Triangles(21, 22, 16, 0, 12, 23, 3, 0),
    gsSP2Triangles(15, 24, 20, 0, 5, 4, 25, 0),
    gsSP2Triangles(25, 8, 5, 0, 26, 27, 23, 0),
    gsSP2Triangles(23, 12, 26, 0, 18, 17, 10, 0),
    gsSP2Triangles(10, 9, 18, 0, 28, 29, 21, 0),
    gsSP2Triangles(8, 25, 6, 0, 22, 21, 30, 0),
    gsSP1Triangle(30, 21, 29, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 210, 210, 130, 255),
    gsDPSetEnvColor(100, 80, 30, 255),
    gsSPVertex(&object_gi_hoverbootsVtx_001110[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 2, 0, 2, 1, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 6, 11, 0, 8, 11, 6, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 14, 13, 0, 13, 16, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 18, 0),
    gsSP2Triangles(20, 19, 23, 0, 19, 18, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 29, 28, 0),
    gsSPVertex(&object_gi_hoverbootsVtx_001110[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(6, 8, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 10, 15, 14, 0),
    gsSP2Triangles(14, 11, 10, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 17, 16, 0, 20, 18, 21, 0),
    gsSP2Triangles(18, 20, 16, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 23, 22, 27, 0),
    gsSP2Triangles(27, 26, 23, 0, 28, 29, 30, 0),
    gsSPVertex(&object_gi_hoverbootsVtx_001110[62], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 0, 4, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 9, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 12, 14, 10, 0),
    gsSP2Triangles(7, 6, 15, 0, 16, 8, 17, 0),
    gsSP1Triangle(17, 8, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsDPSetEnvColor(140, 130, 90, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_hoverbootsTex_000300),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 1, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, 2, 5, 0, 1, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_hoverbootsVtx_001610[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 230, 230, 160, 255),
    gsDPSetEnvColor(90, 60, 80, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_gi_hoverbootsTex_000000),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 383, 683),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_4b, 3, 0, 0, 0, 2, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 188, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPVertex(&object_gi_hoverbootsVtx_001790[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSPEndDisplayList(),
}; 


