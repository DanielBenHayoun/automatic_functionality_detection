
ulong main(uint param_1,undefined8 *param_2)

{
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong unaff_R13;
  undefined auVar16 [16];
  undefined8 auStack64 [3];
  
  puVar12 = (undefined8 *)&stack0xffffffffffffffd8;
  puVar15 = longopts;
  set_program_name(*param_2);
  func_0x001018b0(6,&UNK_00106f29);
  func_0x001016b0(&UNK_0010683b,&UNK_00106864);
  func_0x00101680(&UNK_0010683b);
  atexit(close_stdout);
code_r0x001019f0:
  do {
    *(undefined8 *)((undefined *)puVar12 + -8) = 0x101a07;
    iVar6 = func_0x00101710((ulong)param_1,param_2,&UNK_0010689b,longopts,0);
    bVar5 = just_group_list;
    bVar4 = just_group;
    bVar3 = just_user;
    if (iVar6 == -1) goto code_r0x00101b04;
  } while (iVar6 == 0x61);
  if (iVar6 < 0x62) {
    if (iVar6 == -0x82) goto code_r0x00101e4a;
    if (-0x82 < iVar6) {
      if (iVar6 != 0x47) {
        if (iVar6 == 0x5a) {
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101e2f;
          uVar9 = func_0x001016c0(0,&UNK_001066c8,5);
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101e40;
          func_0x001018d0(1,0,uVar9);
        }
        goto code_r0x00101e40;
      }
      just_group_list = 1;
      goto code_r0x001019f0;
    }
    if (iVar6 == -0x83) {
      *(undefined8 *)((undefined *)puVar12 + -0x10) = 0;
      *(undefined8 *)((undefined *)puVar12 + -0x18) = 0x101a8f;
      version_etc(stdout,&UNK_001067be,&UNK_00106837,Version,&UNK_0010688c,&UNK_0010687c);
      *(undefined8 *)((undefined *)puVar12 + -0x18) = 0x101a96;
      iVar6 = func_0x00101920();
      puVar12 = (undefined8 *)((undefined *)puVar12 + -0x10);
      goto code_r0x00101aa0;
    }
  }
  else {
    if (iVar6 == 0x72) {
      use_real = '\x01';
      goto code_r0x001019f0;
    }
    if (iVar6 < 0x73) {
      if (iVar6 == 0x67) {
        just_group = 1;
        goto code_r0x001019f0;
      }
      if (iVar6 == 0x6e) {
        use_name = '\x01';
        goto code_r0x001019f0;
      }
    }
    else {
code_r0x00101aa0:
      if (iVar6 == 0x75) {
        just_user = 1;
        goto code_r0x001019f0;
      }
      if (iVar6 == 0x7a) {
        opt_zero = '\x01';
        goto code_r0x001019f0;
      }
    }
  }
code_r0x00101e40:
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101e4a;
  usage(1);
code_r0x00101e4a:
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101e51;
  usage(0);
code_r0x00101e51:
  if (use_real != '\0') {
    *(undefined8 *)((undefined *)puVar12 + -8) = 0x101e63;
    param_2 = (undefined8 *)func_0x00101640();
    *(uint *)param_2 = 0;
    *(undefined8 *)((undefined *)puVar12 + -8) = 0x101e71;
    ruid = func_0x00101700();
    if (ruid != 0xffffffff) goto code_r0x00101d95;
code_r0x00101d8c:
    while (*(uint *)param_2 == 0) {
code_r0x00101d95:
      if ((char)puVar15 != '\0') goto code_r0x00101cb4;
      do {
        do {
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101c78;
          param_2 = (undefined8 *)func_0x00101640();
          *(uint *)param_2 = 0;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101c86;
          egid = func_0x00101880();
          if ((egid == -1) && (*(uint *)param_2 != 0)) goto code_r0x00101f15;
          *(uint *)param_2 = 0;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101ca5;
          rgid = func_0x00101820();
          if ((rgid != -1) || (*(uint *)param_2 == 0)) goto code_r0x00101cb4;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101dbf;
          uVar9 = func_0x001016c0(0,&UNK_0010690b,5);
          uVar1 = *(uint *)param_2;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101dd0;
          puVar10 = (undefined8 *)func_0x001018d0(1,(ulong)uVar1,uVar9);
code_r0x00101dd0:
          *(uint *)puVar10 = 0;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101ddb;
          euid = func_0x001017a0();
          if ((euid == 0xffffffff) && (*(uint *)param_2 != 0)) goto code_r0x00101d3d;
code_r0x00101c62:
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101c67;
          param_2 = (undefined8 *)func_0x00101640();
        } while ((char)unaff_R13 != '\0');
        *(uint *)param_2 = 0;
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x101e03;
        ruid = func_0x00101700();
      } while (ruid != 0xffffffff);
    }
    goto code_r0x00101ef1;
  }
code_r0x00101cb4:
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101cbb;
  print_stuff(0);
  goto code_r0x00101cbb;
code_r0x00101b04:
  puVar15 = (undefined1 *)(ulong)(uint)just_user;
  unaff_R13 = (ulong)(uint)just_group;
  uVar14 = SEXT48((int)(param_1 - optind));
  if ((uint)just_user + (uint)just_group + (uint)just_group_list < 2) {
    if (((just_user | just_group) != 0) || (just_group_list != 0)) {
      if (uVar14 == 0) {
        if (just_user != 0) goto code_r0x00101d61;
code_r0x00101c4e:
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x101c56;
        puVar10 = (undefined8 *)func_0x00101640();
        param_2 = puVar10;
        if ((bVar5 | bVar4) == 0) goto code_r0x00101dd0;
        goto code_r0x00101c62;
      }
code_r0x00101b57:
      lVar11 = (long)optind;
      multiple_users = 1 < uVar14;
      do {
        if (uVar14 + lVar11 <= (ulong)(long)optind) {
code_r0x00101cbb:
          return (ulong)(ok ^ 1);
        }
        pcVar2 = (char *)param_2[(long)optind];
        if (*pcVar2 == '\0') {
code_r0x00101b78:
          uVar9 = param_2[optind];
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101b81;
          quote(uVar9);
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101b97;
          uVar9 = func_0x001016c0(0,&UNK_001068b4,5);
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101b9f;
          puVar7 = (uint *)func_0x00101640();
          uVar1 = *puVar7;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101bb0;
          func_0x001018d0(0,(ulong)uVar1,uVar9);
          ok = 0;
        }
        else {
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101be9;
          lVar8 = parse_user_spec(pcVar2,&euid,0,0,0);
          if (lVar8 != 0) goto code_r0x00101b78;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101bf9;
          puVar10 = (undefined8 *)func_0x001016a0((ulong)euid);
          if (puVar10 == (undefined8 *)0x0) goto code_r0x00101b78;
          uVar9 = *puVar10;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101c0d;
          uVar9 = xstrdup(uVar9);
          euid = *(uint *)(puVar10 + 2);
          egid = *(int *)((long)puVar10 + 0x14);
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101c38;
          rgid = egid;
          ruid = euid;
          print_stuff(uVar9);
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x101c40;
          func_0x00101620(uVar9);
        }
        optind = optind + 1;
      } while( true );
    }
    if ((use_real != '\0') || (use_name != '\0')) goto code_r0x00101ecd;
    if (opt_zero == '\0') {
      if (uVar14 == 0) {
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x101d0d;
        func_0x00101610(&UNK_001068a4);
        if (bVar3 != 0) goto code_r0x00101d16;
        goto code_r0x00101c4e;
      }
      goto code_r0x00101b57;
    }
  }
  else {
    *(undefined8 *)((undefined *)puVar12 + -8) = 0x101e98;
    uVar9 = func_0x001016c0(0,&UNK_00106700,5);
    *(undefined8 *)((undefined *)puVar12 + -8) = 0x101ea9;
    func_0x001018d0(1,0,uVar9);
  }
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101ebc;
  uVar9 = func_0x001016c0(0,&UNK_00106768,5);
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101ecd;
  func_0x001018d0(1,0,uVar9);
code_r0x00101ecd:
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101ee0;
  uVar9 = func_0x001016c0(0,&UNK_00106730,5);
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101ef1;
  func_0x001018d0(1,0,uVar9);
code_r0x00101ef1:
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101f04;
  uVar9 = func_0x001016c0(0,&UNK_001068de,5);
  uVar1 = *(uint *)param_2;
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101f15;
  func_0x001018d0(1,(ulong)uVar1,uVar9);
code_r0x00101f15:
  puVar12[-1] = 0x101f28;
  uVar9 = func_0x001016c0(0,&UNK_001068f2,5);
  uVar1 = *(uint *)param_2;
  puVar12[-1] = 0x101f39;
  auVar16 = func_0x001018d0(1,(ulong)uVar1,uVar9);
  uVar9 = *puVar12;
  uVar13 = (ulong)(puVar12 + 1) & 0xfffffffffffffff0;
  *(undefined8 *)(uVar13 - 8) = SUB168(auVar16,0);
  *(ulong *)(uVar13 - 0x10) = uVar13 - 8;
  *(undefined8 *)(uVar13 - 0x18) = 0x101f6a;
  (*(code *)PTR___libc_start_main_00308fc8)
            (main,uVar9,puVar12 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar16 >> 0x40,0));
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
code_r0x00101d3d:
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101d50;
  uVar9 = func_0x001016c0(0,&UNK_001068c5,5);
  uVar1 = *(uint *)param_2;
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101d61;
  func_0x001018d0(1,(ulong)uVar1,uVar9);
code_r0x00101d61:
  if (use_real != '\0') goto code_r0x00101d6a;
code_r0x00101d16:
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101d1b;
  param_2 = (undefined8 *)func_0x00101640();
  *(uint *)param_2 = 0;
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101d29;
  euid = func_0x001017a0();
  if (euid != 0xffffffff) goto code_r0x00101cb4;
  if (*(uint *)param_2 == 0) goto code_r0x00101e51;
  goto code_r0x00101d3d;
code_r0x00101d6a:
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101d6f;
  param_2 = (undefined8 *)func_0x00101640();
  *(uint *)param_2 = 0;
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x101d7d;
  ruid = func_0x00101700();
  if (ruid != 0xffffffff) goto code_r0x00101cb4;
  goto code_r0x00101d8c;
}

