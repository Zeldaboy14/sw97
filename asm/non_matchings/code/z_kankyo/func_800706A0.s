glabel func_800706A0
/* AE7840 800706A0 3C0E0001 */  lui   $t6, 1
/* AE7844 800706A4 01C47021 */  addu  $t6, $t6, $a0
/* AE7848 800706A8 91CE0A42 */  lbu   $t6, 0xa42($t6)
/* AE784C 800706AC 3C028012 */  lui   $v0, %hi(D_8011FB34) # $v0, 0x8012
/* AE7850 800706B0 2442FB34 */  addiu $v0, %lo(D_8011FB34) # addiu $v0, $v0, -0x4cc
/* AE7854 800706B4 55C0000B */  bnezl $t6, .L800706E4
/* AE7858 800706B8 3C010001 */   lui   $at, 1
/* AE785C 800706BC 904F0000 */  lbu   $t7, ($v0)
/* AE7860 800706C0 3C010001 */  lui   $at, 1
/* AE7864 800706C4 00240821 */  addu  $at, $at, $a0
/* AE7868 800706C8 A02F0A43 */  sb    $t7, 0xa43($at)
/* AE786C 800706CC 90580000 */  lbu   $t8, ($v0)
/* AE7870 800706D0 3C010001 */  lui   $at, 1
/* AE7874 800706D4 00240821 */  addu  $at, $at, $a0
/* AE7878 800706D8 03E00008 */  jr    $ra
/* AE787C 800706DC A0380A44 */   sb    $t8, 0xa44($at)

/* AE7880 800706E0 3C010001 */  lui   $at, 1
.L800706E4:
/* AE7884 800706E4 00240821 */  addu  $at, $at, $a0
/* AE7888 800706E8 A0200AE0 */  sb    $zero, 0xae0($at)
/* AE788C 800706EC 3C010001 */  lui   $at, 1
/* AE7890 800706F0 00240821 */  addu  $at, $at, $a0
/* AE7894 800706F4 241900FF */  li    $t9, 255
/* AE7898 800706F8 A0390AE3 */  sb    $t9, 0xae3($at)
/* AE789C 800706FC 3C013F80 */  li    $at, 0x3F800000 # 0.000000
/* AE78A0 80070700 44812000 */  mtc1  $at, $f4
/* AE78A4 80070704 3C010001 */  lui   $at, 1
/* AE78A8 80070708 00240821 */  addu  $at, $at, $a0
/* AE78AC 8007070C E4240AFC */  swc1  $f4, 0xafc($at)
/* AE78B0 80070710 03E00008 */  jr    $ra
/* AE78B4 80070714 00000000 */   nop   

