glabel func_80AC6384
/* 036E4 80AC6384 90820252 */  lbu     $v0, 0x0252($a0)           ## 00000252
/* 036E8 80AC6388 848E001C */  lh      $t6, 0x001C($a0)           ## 0000001C
/* 036EC 80AC638C 3C0880AD */  lui     $t0, %hi(D_80AC89DC)       ## $t0 = 80AD0000
/* 036F0 80AC6390 0002C0C0 */  sll     $t8, $v0,  3               
/* 036F4 80AC6394 000E7980 */  sll     $t7, $t6,  6               
/* 036F8 80AC6398 01F8C821 */  addu    $t9, $t7, $t8              
/* 036FC 80AC639C 250889DC */  addiu   $t0, $t0, %lo(D_80AC89DC)  ## $t0 = 80AC89DC
/* 03700 80AC63A0 03281821 */  addu    $v1, $t9, $t0              
/* 03704 80AC63A4 846F0002 */  lh      $t7, 0x0002($v1)           ## 00000002
/* 03708 80AC63A8 00025883 */  sra     $t3, $v0,  2               
/* 0370C 80AC63AC 316C00FF */  andi    $t4, $t3, 0x00FF           ## $t4 = 00000000
/* 03710 80AC63B0 448F2000 */  mtc1    $t7, $f4                   ## $f4 = 0.00
/* 03714 80AC63B4 000C6880 */  sll     $t5, $t4,  2               
/* 03718 80AC63B8 01AC6823 */  subu    $t5, $t5, $t4              
/* 0371C 80AC63BC 468020A0 */  cvt.s.w $f2, $f4                   
/* 03720 80AC63C0 3C0E80AD */  lui     $t6, %hi(D_80AC8D6C)       ## $t6 = 80AD0000
/* 03724 80AC63C4 25CE8D6C */  addiu   $t6, $t6, %lo(D_80AC8D6C)  ## $t6 = 80AC8D6C
/* 03728 80AC63C8 000D6880 */  sll     $t5, $t5,  2               
/* 0372C 80AC63CC 84780004 */  lh      $t8, 0x0004($v1)           ## 00000004
/* 03730 80AC63D0 01AE3021 */  addu    $a2, $t5, $t6              
/* 03734 80AC63D4 C4C60000 */  lwc1    $f6, 0x0000($a2)           ## 00000000
/* 03738 80AC63D8 44982000 */  mtc1    $t8, $f4                   ## $f4 = 0.00
/* 0373C 80AC63DC C48C02D0 */  lwc1    $f12, 0x02D0($a0)          ## 000002D0
/* 03740 80AC63E0 46023201 */  sub.s   $f8, $f6, $f2              
/* 03744 80AC63E4 C4C60004 */  lwc1    $f6, 0x0004($a2)           ## 00000004
/* 03748 80AC63E8 84790006 */  lh      $t9, 0x0006($v1)           ## 00000006
/* 0374C 80AC63EC 46802420 */  cvt.s.w $f16, $f4                  
/* 03750 80AC63F0 460C4282 */  mul.s   $f10, $f8, $f12            
/* 03754 80AC63F4 44992000 */  mtc1    $t9, $f4                   ## $f4 = 0.00
/* 03758 80AC63F8 00024880 */  sll     $t1, $v0,  2               
/* 0375C 80AC63FC 00895021 */  addu    $t2, $a0, $t1              
/* 03760 80AC6400 8D450200 */  lw      $a1, 0x0200($t2)           ## 00000200
/* 03764 80AC6404 46103201 */  sub.s   $f8, $f6, $f16             
/* 03768 80AC6408 27BDFFE0 */  addiu   $sp, $sp, 0xFFE0           ## $sp = FFFFFFE0
/* 0376C 80AC640C 46025000 */  add.s   $f0, $f10, $f2             
/* 03770 80AC6410 460C4282 */  mul.s   $f10, $f8, $f12            
/* 03774 80AC6414 C4C80008 */  lwc1    $f8, 0x0008($a2)           ## 00000008
/* 03778 80AC6418 468021A0 */  cvt.s.w $f6, $f4                   
/* 0377C 80AC641C 46105380 */  add.s   $f14, $f10, $f16           
/* 03780 80AC6420 E7A60000 */  swc1    $f6, 0x0000($sp)           
/* 03784 80AC6424 C7AA0000 */  lwc1    $f10, 0x0000($sp)          
/* 03788 80AC6428 8C880220 */  lw      $t0, 0x0220($a0)           ## 00000220
/* 0378C 80AC642C 460A4101 */  sub.s   $f4, $f8, $f10             
/* 03790 80AC6430 C5080024 */  lwc1    $f8, 0x0024($t0)           ## 80AC8A00
/* 03794 80AC6434 460C2182 */  mul.s   $f6, $f4, $f12             
/* 03798 80AC6438 46004100 */  add.s   $f4, $f8, $f0              
/* 0379C 80AC643C E4A40024 */  swc1    $f4, 0x0024($a1)           ## 00000024
/* 037A0 80AC6440 8C890220 */  lw      $t1, 0x0220($a0)           ## 00000220
/* 037A4 80AC6444 460A3480 */  add.s   $f18, $f6, $f10            
/* 037A8 80AC6448 C5260028 */  lwc1    $f6, 0x0028($t1)           ## 00000028
/* 037AC 80AC644C 460E3280 */  add.s   $f10, $f6, $f14            
/* 037B0 80AC6450 E4AA0028 */  swc1    $f10, 0x0028($a1)          ## 00000028
/* 037B4 80AC6454 8C8A0220 */  lw      $t2, 0x0220($a0)           ## 00000220
/* 037B8 80AC6458 C548002C */  lwc1    $f8, 0x002C($t2)           ## 0000002C
/* 037BC 80AC645C 27BD0020 */  addiu   $sp, $sp, 0x0020           ## $sp = 00000000
/* 037C0 80AC6460 46124100 */  add.s   $f4, $f8, $f18             
/* 037C4 80AC6464 03E00008 */  jr      $ra                        
/* 037C8 80AC6468 E4A4002C */  swc1    $f4, 0x002C($a1)           ## 0000002C
