glabel func_80A98034
/* 01284 80A98034 27BDFFD8 */  addiu   $sp, $sp, 0xFFD8           ## $sp = FFFFFFD8
/* 01288 80A98038 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 0128C 80A9803C AFB00018 */  sw      $s0, 0x0018($sp)           
/* 01290 80A98040 AFA5002C */  sw      $a1, 0x002C($sp)           
/* 01294 80A98044 848E01E8 */  lh      $t6, 0x01E8($a0)           ## 000001E8
/* 01298 80A98048 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 0129C 80A9804C 51C0001B */  beql    $t6, $zero, .L80A980BC     
/* 012A0 80A98050 8E080154 */  lw      $t0, 0x0154($s0)           ## 00000154
/* 012A4 80A98054 8C8F0154 */  lw      $t7, 0x0154($a0)           ## 00000154
/* 012A8 80A98058 3C180601 */  lui     $t8, %hi(D_06008F6C)                ## $t8 = 06010000
/* 012AC 80A9805C 27188F6C */  addiu   $t8, $t8, %lo(D_06008F6C)           ## $t8 = 06008F6C
/* 012B0 80A98060 030FC826 */  xor     $t9, $t8, $t7              
/* 012B4 80A98064 2F390001 */  sltiu   $t9, $t9, 0x0001           
/* 012B8 80A98068 17200005 */  bne     $t9, $zero, .L80A98080     
/* 012BC 80A9806C 2484014C */  addiu   $a0, $a0, 0x014C           ## $a0 = 0000014C
/* 012C0 80A98070 3C0580AA */  lui     $a1, %hi(D_80A9A18C)       ## $a1 = 80AA0000
/* 012C4 80A98074 24A5A18C */  addiu   $a1, $a1, %lo(D_80A9A18C)  ## $a1 = 80A9A18C
/* 012C8 80A98078 0C00D3B0 */  jal     func_80034EC0              
/* 012CC 80A9807C 2406001D */  addiu   $a2, $zero, 0x001D         ## $a2 = 0000001D
.L80A98080:
/* 012D0 80A98080 8FA4002C */  lw      $a0, 0x002C($sp)           
/* 012D4 80A98084 260502E4 */  addiu   $a1, $s0, 0x02E4           ## $a1 = 000002E4
/* 012D8 80A98088 26060304 */  addiu   $a2, $s0, 0x0304           ## $a2 = 00000304
/* 012DC 80A9808C 0C00D3D5 */  jal     func_80034F54              
/* 012E0 80A98090 24070010 */  addiu   $a3, $zero, 0x0010         ## $a3 = 00000010
/* 012E4 80A98094 0C2A5F40 */  jal     func_80A97D00              
/* 012E8 80A98098 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 012EC 80A9809C 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 012F0 80A980A0 14410003 */  bne     $v0, $at, .L80A980B0       
/* 012F4 80A980A4 00401825 */  or      $v1, $v0, $zero            ## $v1 = 00000000
/* 012F8 80A980A8 10000014 */  beq     $zero, $zero, .L80A980FC   
/* 012FC 80A980AC 24070002 */  addiu   $a3, $zero, 0x0002         ## $a3 = 00000002
.L80A980B0:
/* 01300 80A980B0 10000012 */  beq     $zero, $zero, .L80A980FC   
/* 01304 80A980B4 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
/* 01308 80A980B8 8E080154 */  lw      $t0, 0x0154($s0)           ## 00000154
.L80A980BC:
/* 0130C 80A980BC 3C090601 */  lui     $t1, %hi(D_0600879C)                ## $t1 = 06010000
/* 01310 80A980C0 2529879C */  addiu   $t1, $t1, %lo(D_0600879C)           ## $t1 = 0600879C
/* 01314 80A980C4 01285026 */  xor     $t2, $t1, $t0              
/* 01318 80A980C8 2D4A0001 */  sltiu   $t2, $t2, 0x0001           
/* 0131C 80A980CC 15400005 */  bne     $t2, $zero, .L80A980E4     
/* 01320 80A980D0 2604014C */  addiu   $a0, $s0, 0x014C           ## $a0 = 0000014C
/* 01324 80A980D4 3C0580AA */  lui     $a1, %hi(D_80A9A18C)       ## $a1 = 80AA0000
/* 01328 80A980D8 24A5A18C */  addiu   $a1, $a1, %lo(D_80A9A18C)  ## $a1 = 80A9A18C
/* 0132C 80A980DC 0C00D3B0 */  jal     func_80034EC0              
/* 01330 80A980E0 2406001F */  addiu   $a2, $zero, 0x001F         ## $a2 = 0000001F
.L80A980E4:
/* 01334 80A980E4 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
/* 01338 80A980E8 A7A70026 */  sh      $a3, 0x0026($sp)           
/* 0133C 80A980EC 0C2A5F40 */  jal     func_80A97D00              
/* 01340 80A980F0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01344 80A980F4 87A70026 */  lh      $a3, 0x0026($sp)           
/* 01348 80A980F8 00401825 */  or      $v1, $v0, $zero            ## $v1 = 00000000
.L80A980FC:
/* 0134C 80A980FC 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 01350 80A98100 260501E8 */  addiu   $a1, $s0, 0x01E8           ## $a1 = 000001E8
/* 01354 80A98104 24060005 */  addiu   $a2, $zero, 0x0005         ## $a2 = 00000005
/* 01358 80A98108 0C00D285 */  jal     Npc_TurnTowardsFocus              
/* 0135C 80A9810C AFA30020 */  sw      $v1, 0x0020($sp)           
/* 01360 80A98110 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 01364 80A98114 8FA20020 */  lw      $v0, 0x0020($sp)           
/* 01368 80A98118 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 0136C 80A9811C 03E00008 */  jr      $ra                        
/* 01370 80A98120 27BD0028 */  addiu   $sp, $sp, 0x0028           ## $sp = 00000000
