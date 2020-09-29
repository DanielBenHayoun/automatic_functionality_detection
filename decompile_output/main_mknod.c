
undefined8 mknod(uint param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined auVar15 [16];
  ulong uStack88;
  ulong uStack80;
  ulong uStack72;
  long lStack64;
  
  puVar13 = longopts;
  lVar11 = (long)(int)param_1;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x001015f0(6,&UNK_001064a1);
  func_0x00101440(&UNK_00105704,&UNK_0010572d);
  func_0x00101420(&UNK_00105704);
  atexit(close_stdout);
  lVar3 = 0;
code_r0x00101732:
  do {
    lVar14 = lVar3;
    puVar9 = longopts;
    iVar2 = func_0x00101490((ulong)param_1,param_2,&UNK_00105755,longopts,0);
    if (iVar2 == -1) {
      if (lVar14 == 0) goto code_r0x00101b0b;
      lVar3 = mode_compile(lVar14);
      if (lVar3 != 0) {
        uVar10 = func_0x00101550(0);
        func_0x00101550((ulong)uVar10);
        uVar10 = mode_adjust(0x1b6,0,(ulong)uVar10,lVar3,0);
        puVar13 = (undefined1 *)(ulong)uVar10;
        func_0x001013c0(lVar3);
        if ((uVar10 & 0xfffffe00) == 0) goto code_r0x0010184f;
code_r0x00101cf6:
        uVar4 = func_0x00101450(0,&UNK_00105da8,5);
        func_0x00101620(1,0,uVar4);
      }
      uVar4 = func_0x00101450(0,&UNK_00105759,5);
      auVar15 = func_0x00101620(1,0,uVar4);
      uVar5 = uStack88;
      uStack88 = SUB168(auVar15,0);
      (*(code *)PTR___libc_start_main_00307fe0)
                (main,uVar5,&uStack80,__libc_csu_init,__libc_csu_fini,SUB168(auVar15 >> 0x40,0),
                 &uStack88);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar2 == -0x82) {
      usage(0);
      goto code_r0x00101b43;
    }
    if (iVar2 < -0x81) {
      if (iVar2 != -0x83) break;
      version_etc(stdout,&UNK_00105684,&UNK_00105700,Version,&UNK_00105745,0);
      func_0x00101650();
code_r0x001017c0:
      lVar3 = lVar14;
      if (optarg != 0) {
        uVar4 = func_0x00101450(0,&UNK_00105d58,5);
        func_0x00101620(0,0,uVar4);
      }
      goto code_r0x00101732;
    }
    if (iVar2 == 0x5a) goto code_r0x001017c0;
    lVar3 = optarg;
  } while (iVar2 == 0x6d);
code_r0x001019e9:
  do {
    auVar15 = usage(1);
code_r0x001019f3:
    lVar3 = SUB168(auVar15 >> 0x40,0);
    if (SUB161(auVar15,0) == 'u') {
code_r0x001019fb:
      lVar11 = 0x2000;
      do {
        uVar4 = *(undefined8 *)((long)param_2 + lVar3 + 8);
        uVar8 = *(undefined8 *)((long)param_2 + lVar3 + 0x10);
        iVar2 = xstrtoumax(uVar4,0,0,&uStack88,0);
        if ((iVar2 != 0) || (uStack88 != (uStack88 & 0xffffffff))) {
code_r0x00101ba5:
          param_2 = (undefined8 *)quote(uVar4);
          uVar8 = func_0x00101450(0,&UNK_00105e48,5);
          func_0x00101620(1,0,uVar8,param_2);
code_r0x00101bd7:
          uVar8 = func_0x00101450(0,&UNK_00105776,5);
          func_0x00101620(1,0,uVar8,uVar4);
code_r0x00101c01:
          param_2 = (undefined8 *)quote(param_2[lVar11 + -1]);
          puVar12 = &UNK_001057d0;
          goto code_r0x001019d1;
        }
        iVar2 = xstrtoumax(uVar8,0,0,&uStack80,0);
        if ((iVar2 != 0) || (uStack80 != (uStack80 & 0xffffffff))) {
          uVar8 = quote(uVar8);
          uVar7 = func_0x00101450(0,&UNK_00105e68,5);
          func_0x00101620(1,0,uVar7,uVar8);
          goto code_r0x00101ba5;
        }
        uVar5 = uStack80 & 0xff |
                (ulong)((uint)(uStack88 << 8) & 0xfff00) | (uStack88 & 0xfffff000) << 0x20 |
                (uStack80 & 0xffffff00) << 0xc;
        if (uVar5 == 0xffffffffffffffff) goto code_r0x00101bd7;
        uStack72 = uVar5;
        iVar2 = func_0x00101570(0,param_2[optind],(ulong)((uint)lVar11 | (uint)puVar13),&uStack72);
        if (iVar2 == 0) {
code_r0x0010195f:
          if ((lVar14 == 0) || (iVar2 = func_0x00101610(param_2[optind],puVar13), iVar2 == 0)) {
            if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
              return 0;
            }
            func_0x00101480();
            goto code_r0x00101cf6;
          }
code_r0x00101c56:
          uVar4 = quotearg_style(4,param_2[optind]);
          param_1 = (uint)uVar4;
          param_2 = (undefined8 *)func_0x00101450(0,&UNK_001057a2,5);
          puVar6 = (uint *)func_0x001013e0();
          func_0x00101620(1,(ulong)*puVar6,param_2,uVar4);
code_r0x00101c9d:
          param_2 = (undefined8 *)quote(param_2[(long)(int)param_1 + -1]);
          uVar4 = func_0x00101450(0,&UNK_001057d0,5);
          func_0x00101620(0,0,uVar4,param_2);
          if (param_1 - optind != 2) goto code_r0x001019e9;
          puVar12 = &UNK_00105dd8;
          goto code_r0x001018e1;
        }
        param_2 = (undefined8 *)quotearg_n_style_colon(0,3,param_2[optind]);
        puVar6 = (uint *)func_0x001013e0();
        func_0x00101620(1,(ulong)*puVar6,&UNK_00105e9c,param_2);
code_r0x00101b0b:
        puVar13 = (undefined1 *)0x1b6;
code_r0x0010184f:
        puVar9 = (undefined1 *)(long)optind;
        param_1 = (uint)lVar11;
        uVar10 = param_1 - optind;
        if (optind < (int)param_1) {
          if ((optind + 1 < (int)param_1) && (*(char *)param_2[(long)optind + 1] == 'p')) {
            if (uVar10 < 2) goto code_r0x00101c01;
            if (uVar10 < 3) goto code_r0x00101921;
            uVar4 = param_2[(long)optind + 2];
            goto code_r0x0010189a;
          }
          if (uVar10 < 4) goto code_r0x00101c9d;
          if (uVar10 < 5) goto code_r0x00101921;
          param_2 = (undefined8 *)quote(param_2[(long)(puVar9 + 4)]);
          puVar12 = &UNK_001057bf;
          goto code_r0x001019d1;
        }
        if (uVar10 < 2) {
          uVar4 = func_0x00101450(0,&UNK_00105766,5);
          func_0x00101620(0,0,uVar4);
          goto code_r0x001019e9;
        }
        if (uVar10 != 2) goto code_r0x00101b43;
code_r0x00101921:
        lVar11 = (long)optind + 1;
        lVar3 = lVar11 * 8;
        bVar1 = *(byte *)param_2[lVar11];
        auVar15 = CONCAT88(lVar3,(ulong)bVar1);
        if (bVar1 == 99) goto code_r0x001019fb;
        if ('c' < (char)bVar1) {
          if (bVar1 == 0x70) {
            iVar2 = func_0x00101540(param_2[(long)optind],puVar13);
            if (iVar2 == 0) goto code_r0x0010195f;
            param_2 = (undefined8 *)quotearg_n_style_colon(0,3,param_2[optind]);
            puVar6 = (uint *)func_0x001013e0();
            func_0x00101620(1,(ulong)*puVar6,&UNK_00105e9c,param_2);
            goto code_r0x00101c56;
          }
          goto code_r0x001019f3;
        }
        lVar11 = 0x6000;
        if (bVar1 != 0x62) break;
      } while( true );
    }
    param_2 = (undefined8 *)quote();
    puVar12 = &UNK_0010578b;
code_r0x001019d1:
    uVar4 = func_0x00101450(0,puVar12,5);
    func_0x00101620(0,0,uVar4,param_2);
  } while( true );
code_r0x00101b43:
  uVar4 = param_2[(long)(puVar9 + 2)];
code_r0x0010189a:
  param_2 = (undefined8 *)quote(uVar4);
  uVar4 = func_0x00101450(0,&UNK_001057bf,5);
  func_0x00101620(0,0,uVar4,param_2);
  puVar12 = &UNK_00105e10;
  if (param_1 - optind == 4) {
code_r0x001018e1:
    uVar4 = func_0x00101450(0,puVar12,5);
    func_0x00101670(stderr,1,&UNK_00106450,uVar4);
  }
  goto code_r0x001019e9;
}