
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16] getlimits(uint param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined auVar3 [16];
  ulong uVar4;
  undefined8 uStack56;
  undefined auStack48 [16];
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101500(6,&UNK_00106241);
  func_0x001013b0(&UNK_001057d3,&UNK_001057fc);
  func_0x00101390(&UNK_001057d3);
  atexit(close_stdout);
  parse_long_options((ulong)param_1,param_2,&UNK_00105744,&UNK_001057cf,&UNK_00105814,usage,
                     &UNK_00105819,0);
  lVar1 = (long)&uStack56 + 1;
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0x7f);
  func_0x00101510(1,&UNK_00105830,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_0010583e,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_0010582b,0xffffffffffffff80);
  func_0x00101510(1,&UNK_0010584e,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_0010585c,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0x7f);
  func_0x00101510(1,&UNK_0010582f,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_0010583d,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_0010582b,0xffffffffffffff80);
  func_0x00101510(1,&UNK_0010584d,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_0010585b,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0xff);
  func_0x00101510(1,&UNK_0010586b,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105879,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0x7fff);
  func_0x00101510(1,&UNK_00105889,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105896,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_0010582b,0xffffffffffff8000);
  func_0x00101510(1,&UNK_001058a5,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_001058b2,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0x7fffffff);
  func_0x00101510(1,&UNK_001058dc,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_001058e9,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_0010582b,0xffffffff80000000);
  func_0x00101510(1,&UNK_001058c1,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_001058cd,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0xffffffff);
  func_0x00101510(1,&UNK_001058db,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_001058e8,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0x7fffffffffffffff);
  func_0x00101510(1,&UNK_00105914,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105922,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_0010582b,0x8000000000000000);
  func_0x00101510(1,&UNK_001058f7,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105904,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0xffffffffffffffff);
  func_0x00101510(1,&UNK_00105913,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105921,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0xffffffffffffffff);
  func_0x00101510(1,&UNK_00105932,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105940,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0x7fffffffffffffff);
  func_0x00101510(1,&UNK_00105931,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_0010593f,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_0010582b,0x8000000000000000);
  func_0x00101510(1,&UNK_0010594f,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_0010595d,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0x7fffffffffffffff);
  func_0x00101510(1,&UNK_0010596d,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_0010597c,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_0010582b,0x8000000000000000);
  func_0x00101510(1,&UNK_0010598d,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_0010599c,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0xffffffff);
  func_0x00101510(1,&UNK_001059ad,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_001059bb,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0xffffffff);
  func_0x00101510(1,&UNK_001059cb,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_001059d9,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0x7fffffff);
  func_0x00101510(1,&UNK_001059e9,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_001059f7,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_0010582b,0xffffffff80000000);
  func_0x00101510(1,&UNK_00105a07,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105a15,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0x7fffffffffffffff);
  func_0x00101510(1,&UNK_00105a25,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105a33,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_0010582b,0x8000000000000000);
  func_0x00101510(1,&UNK_00105a43,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105a51,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0x7fffffffffffffff);
  func_0x00101510(1,&UNK_00105a82,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105a92,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_0010582b,0x8000000000000000);
  func_0x00101510(1,&UNK_00105a61,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105a70,uVar2);
  func_0x001015c0(lVar1,1,0x15,&UNK_00105827,0xffffffffffffffff);
  func_0x00101510(1,&UNK_00105a81,lVar1);
  uVar2 = decimal_absval_add_one(&uStack56);
  func_0x00101510(1,&UNK_00105a91,uVar2);
  func_0x00101510(1,&UNK_00105aa3);
  print_FLT((ulong)_UNK_00105c54);
  func_0x00101510(1,&UNK_00105aac);
  print_FLT((ulong)_UNK_00105c58);
  func_0x00101510(1,&UNK_00105ab6);
  print_DBL(_UNK_00105c60);
  func_0x00101510(1,&UNK_00105ac0);
  print_DBL(_UNK_00105c68);
  func_0x00101510(1,&UNK_00105ab5);
  print_LDBL();
  func_0x00101510(1,&UNK_00105abf);
  uVar4 = 0xffffffffffffffff;
  print_LDBL();
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ZEXT816(uVar4) << 0x40;
  }
  auVar3 = func_0x001013f0();
  uVar2 = uStack56;
  uStack56 = SUB168(auVar3,0);
  (*(code *)PTR___libc_start_main_00307fd0)
            (main,uVar2,auStack48,__libc_csu_init,__libc_csu_fini,SUB168(auVar3 >> 0x40,0),&uStack56
            );
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}