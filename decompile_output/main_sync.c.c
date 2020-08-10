
ulong main(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  undefined auVar15 [16];
  undefined8 auStack96 [4];
  uint auStack60 [3];
  
  bVar1 = false;
  bVar12 = 0;
  set_program_name(*param_2);
  func_0x00101530(6,&UNK_00104b26);
  func_0x001013c0(&UNK_00104ba1,&UNK_00104bca);
  func_0x001013a0(&UNK_00104ba1);
  atexit(close_stdout);
  puVar9 = auStack96 + 3;
  while( true ) {
    puVar9[-1] = 0x101688;
    iVar2 = func_0x00101420((ulong)param_1,param_2,&UNK_00104c01,long_options,0);
    if (iVar2 == -1) break;
    if (iVar2 == -0x82) {
      puVar9[-1] = 0x10196a;
      usage(0);
code_r0x0010196a:
      puVar9[-1] = 0x101974;
      usage(1);
      goto code_r0x00101974;
    }
    if (iVar2 < -0x81) {
      if (iVar2 == -0x83) {
        puVar10 = puVar9 + -2;
        puVar9[-2] = 0;
        puVar9[-3] = 0x1016f2;
        version_etc(stdout,&UNK_00104b04,&UNK_00104b9d,Version,&UNK_00104bf4,&UNK_00104be2);
        puVar9[-3] = 0x1016f9;
        func_0x001015a0();
        goto code_r0x00101700;
      }
      goto code_r0x0010196a;
    }
    puVar10 = puVar9;
    if (iVar2 == 100) {
code_r0x00101700:
      bVar12 = 1;
      puVar9 = puVar10;
    }
    else {
      if (iVar2 != 0x66) goto code_r0x0010196a;
      bVar1 = true;
    }
  }
  if ((bVar12 == 0) || (!bVar1)) {
    if (((int)param_1 <= optind & bVar12) == 0) {
      if (optind < (int)param_1) {
        *(undefined4 *)((long)puVar9 + 0xc) = 2;
        if (!bVar1) {
          *(uint *)((long)puVar9 + 0xc) = (uint)bVar12;
        }
        uVar13 = 1;
        while (optind < (int)param_1) {
          uVar8 = param_2[optind];
          puVar9[-1] = 0x1017ee;
          uVar4 = func_0x00101570(uVar8,0x800);
          if ((int)uVar4 < 0) {
            puVar9[-1] = 0x1017fe;
            puVar6 = (uint *)func_0x00101340();
            uVar3 = *puVar6;
            puVar9[-1] = 0x101810;
            uVar4 = func_0x00101570(uVar8,0x801);
            if (-1 < (int)uVar4) goto code_r0x00101752;
            puVar9[-1] = 0x101828;
            uVar8 = quotearg_style(4,uVar8);
            puVar9[-1] = 0x10183e;
            uVar5 = func_0x001013d0(0,&UNK_00104c04,5);
            uVar14 = 0;
            puVar9[-1] = 0x101853;
            func_0x00101550(0,(ulong)uVar3,uVar5,uVar8);
          }
          else {
code_r0x00101752:
            puVar9[-1] = 0x101761;
            uVar3 = rpl_fcntl((ulong)uVar4,3);
            if (uVar3 == 0xffffffff) {
code_r0x00101858:
              puVar9[-1] = 0x101865;
              uVar5 = quotearg_style(4,uVar8);
              *puVar9 = uVar5;
              puVar9[-1] = 0x10187c;
              uVar7 = func_0x001013d0(0,&UNK_00104f08,5);
              puVar9[-1] = 0x101884;
              puVar6 = (uint *)func_0x00101340();
              uVar5 = *puVar9;
code_r0x0010188b:
              uVar3 = *puVar6;
              uVar14 = 0;
              puVar9[-1] = 0x101899;
              func_0x00101550(0,(ulong)uVar3,uVar7,uVar5);
            }
            else {
              puVar9[-1] = 0x10177e;
              iVar2 = rpl_fcntl((ulong)uVar4,4,(ulong)(uVar3 & 0xfffff7ff));
              if (iVar2 < 0) goto code_r0x00101858;
              if (*(int *)((long)puVar9 + 0xc) == 1) {
                puVar9[-1] = 0x101951;
                iVar2 = func_0x00101350((ulong)uVar4);
              }
              else {
                if (*(int *)((long)puVar9 + 0xc) == 2) {
                  puVar9[-1] = 0x1017a4;
                  iVar2 = func_0x00101400((ulong)uVar4);
                }
                else {
                  puVar9[-1] = 0x10195e;
                  iVar2 = func_0x00101560((ulong)uVar4);
                }
              }
              uVar14 = 1;
              if (iVar2 < 0) {
                puVar9[-1] = 0x101911;
                uVar5 = quotearg_style(4,uVar8);
                puVar9[-1] = 0x101927;
                uVar7 = func_0x001013d0(0,&UNK_00104c15,5);
                *puVar9 = uVar7;
                puVar9[-1] = 0x101930;
                puVar6 = (uint *)func_0x00101340();
                uVar7 = *puVar9;
                goto code_r0x0010188b;
              }
            }
            puVar9[-1] = 0x1017ba;
            iVar2 = func_0x00101470((ulong)uVar4);
            if (iVar2 < 0) {
              uVar14 = 0;
              puVar9[-1] = 0x1018d0;
              uVar8 = quotearg_style(4,uVar8);
              puVar9[-1] = 0x1018e6;
              uVar5 = func_0x001013d0(0,&UNK_00104c26,5);
              puVar9[-1] = 0x1018ee;
              puVar6 = (uint *)func_0x00101340();
              uVar4 = *puVar6;
              puVar9[-1] = 0x1018ff;
              func_0x00101550(0,(ulong)uVar4,uVar5,uVar8);
            }
          }
          optind = optind + 1;
          uVar13 = uVar13 & uVar14;
        }
      }
      else {
        uVar13 = 1;
        puVar9[-1] = 0x1018a9;
        func_0x001014d0();
      }
      return (ulong)(uVar13 ^ 1);
    }
code_r0x00101974:
    puVar9[-1] = 0x101987;
    uVar8 = func_0x001013d0(0,&UNK_00104ee0,5);
    puVar9[-1] = 0x101998;
    func_0x00101550(1,0,uVar8);
  }
  puVar9[-1] = 0x1019ab;
  uVar8 = func_0x001013d0(0,&UNK_00104eb0,5);
  puVar9[-1] = 0x1019bc;
  auVar15 = func_0x00101550(1,0,uVar8);
  uVar8 = *puVar9;
  uVar11 = (ulong)(puVar9 + 1) & 0xfffffffffffffff0;
  *(undefined8 *)(uVar11 - 8) = SUB168(auVar15,0);
  *(ulong *)(uVar11 - 0x10) = uVar11 - 8;
  *(undefined8 *)(uVar11 - 0x18) = 0x1019ea;
  (*(code *)PTR___libc_start_main_00306fd8)
            (main,uVar8,puVar9 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar15 >> 0x40,0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

