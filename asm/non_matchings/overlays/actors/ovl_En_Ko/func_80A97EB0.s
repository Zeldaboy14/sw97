glabel func_80A97EB0
/* 01100 80A97EB0 27BDFFD8 */  addiu   $sp, $sp, 0xFFD8           ## $sp = FFFFFFD8
/* 01104 80A97EB4 AFB00018 */  sw      $s0, 0x0018($sp)           
/* 01108 80A97EB8 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 0110C 80A97EBC AFBF001C */  sw      $ra, 0x001C($sp)           
/* 01110 80A97EC0 AFA5002C */  sw      $a1, 0x002C($sp)           
/* 01114 80A97EC4 00A02025 */  or      $a0, $a1, $zero            ## $a0 = 00000000
/* 01118 80A97EC8 260502E4 */  addiu   $a1, $s0, 0x02E4           ## $a1 = 000002E4
/* 0111C 80A97ECC 26060304 */  addiu   $a2, $s0, 0x0304           ## $a2 = 00000304
/* 01120 80A97ED0 0C00D3D5 */  jal     func_80034F54              
/* 01124 80A97ED4 24070010 */  addiu   $a3, $zero, 0x0010         ## $a3 = 00000010
/* 01128 80A97ED8 0C2A5F40 */  jal     func_80A97D00              
/* 0112C 80A97EDC 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01130 80A97EE0 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 01134 80A97EE4 14410003 */  bne     $v0, $at, .L80A97EF4       
/* 01138 80A97EE8 00401825 */  or      $v1, $v0, $zero            ## $v1 = 00000000
/* 0113C 80A97EEC 10000002 */  beq     $zero, $zero, .L80A97EF8   
/* 01140 80A97EF0 24070002 */  addiu   $a3, $zero, 0x0002         ## $a3 = 00000002
.L80A97EF4:
/* 01144 80A97EF4 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
.L80A97EF8:
/* 01148 80A97EF8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0114C 80A97EFC 260501E8 */  addiu   $a1, $s0, 0x01E8           ## $a1 = 000001E8
/* 01150 80A97F00 24060002 */  addiu   $a2, $zero, 0x0002         ## $a2 = 00000002
/* 01154 80A97F04 0C00D285 */  jal     Npc_TurnTowardsFocus              
/* 01158 80A97F08 AFA30020 */  sw      $v1, 0x0020($sp)           
/* 0115C 80A97F0C 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 01160 80A97F10 8FA20020 */  lw      $v0, 0x0020($sp)           
/* 01164 80A97F14 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 01168 80A97F18 03E00008 */  jr      $ra                        
/* 0116C 80A97F1C 27BD0028 */  addiu   $sp, $sp, 0x0028           ## $sp = 00000000
