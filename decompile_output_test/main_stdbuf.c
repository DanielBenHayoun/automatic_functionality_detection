
/* WARNING: Could not reconcile some variable overlaps */

ulong main(ulong param_1,undefined1 *param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  char **ppcVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  uint *puVar15;
  long lVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  undefined auVar20 [16];
  undefined auVar21 [12];
  uint *puStack296;
  undefined8 auStack288 [2];
  undefined8 uStack272;
  undefined8 uStack264;
  uint *puStack256;
  char *apcStack248 [4];
  undefined auStack216 [152];
  long lStack64;
  
  bVar19 = 0;
  puVar10 = (undefined8 *)(param_1 & 0xffffffff);
  iVar3 = (int)puVar10;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  func_0x001017a0(6,&UNK_001087c1);
  func_0x00101610(&UNK_00107a42,&UNK_00107a6b);
  func_0x001015f0(&UNK_00107a42);
  exit_failure = 0x7d;
  atexit();
code_r0x0010192f:
  do {
    puVar15 = (uint *)0x0;
    puVar13 = puVar10;
    uVar2 = func_0x00101660(puVar10,param_2,&UNK_00107ab9);
    if (uVar2 == 0xffffffff) goto code_r0x00101aaf;
    if (uVar2 != 0x65) {
      if ((int)uVar2 < 0x66) {
        if (uVar2 != 0xffffff7d) {
          if (uVar2 != 0xffffff7e) goto code_r0x00101aa5;
          usage(0);
          goto code_r0x00101e5f;
        }
        puVar15 = (uint *)&UNK_00107aab;
        version_etc(stdout,&UNK_001079a4,&UNK_00107a3e,Version,&UNK_00107aab,0);
        puVar13 = (undefined8 *)0x0;
        uVar2 = func_0x00101830();
      }
      if ((uVar2 != 0x69) && (uVar2 != 0x6f)) goto code_r0x00101aa5;
    }
    pbVar8 = optarg;
    lVar16 = (long)(int)*(uint *)(CSWTCH_55 + (ulong)(uVar2 - 0x65) * 4);
    if (2 < *(uint *)(CSWTCH_55 + (ulong)(uVar2 - 0x65) * 4)) goto code_r0x00101e64;
    *(uint *)(stdbuf + lVar16 * 0x18 + 8) = uVar2;
    if ((uint)(int)(char)*pbVar8 < 0x21) {
      uVar1 = (ulong)puVar13 >> ((ulong)(uint)(int)(char)*pbVar8 & 0x1f) & 1;
      while (uVar1 != 0) {
        pbVar8 = pbVar8 + 1;
        optarg = pbVar8;
        if (0x20 < *pbVar8) break;
        uVar1 = 1 << (*pbVar8 & 0x3f) & 0x100003e00;
      }
    }
    bVar17 = uVar2 < 0x69;
    bVar18 = uVar2 == 0x69;
    *(byte **)(stdbuf + lVar16 * 0x18 + 0x10) = pbVar8;
    if (bVar18) {
      bVar17 = *pbVar8 < 0x4c;
      bVar18 = *pbVar8 == 0x4c;
      if (bVar18) {
        puVar12 = &UNK_00108170;
        goto code_r0x00101a90;
      }
    }
    lVar7 = 2;
    pbVar11 = pbVar8;
    pbVar14 = &UNK_00107adf;
    do {
      if (lVar7 == 0) break;
      lVar7 = lVar7 + -1;
      bVar17 = *pbVar11 < *pbVar14;
      bVar18 = *pbVar11 == *pbVar14;
      pbVar11 = pbVar11 + (ulong)bVar19 * -2 + 1;
      pbVar14 = pbVar14 + (ulong)bVar19 * -2 + 1;
    } while (bVar18);
  } while ((!bVar17 && !bVar18) == bVar17);
  uVar2 = xstrtoumax(pbVar8,0,10,&puStack256,&UNK_00107a90);
  puStack296 = (uint *)((ulong)puStack296 & 0xffffffff00000000 | (ulong)uVar2);
  puVar15 = (uint *)func_0x001015a0();
  auVar21 = CONCAT48((int)puStack296,puVar15);
  if ((int)puStack296 == 0) {
    *puVar15 = 0;
    *(uint **)(stdbuf + lVar16 * 0x18) = puStack256;
    goto code_r0x0010192f;
  }
code_r0x00101e83:
  puStack296 = puVar15;
  if (SUB124(auVar21 >> 0x40,0) == 1) goto code_r0x00101ecc;
  uVar2 = *SUB128(auVar21,0);
  do {
    pbVar8 = optarg;
    *puStack296 = uVar2;
    uVar5 = quote(pbVar8);
    uVar6 = func_0x00101620(0,&UNK_00107a9b,5);
    func_0x001017d0(0x7d,(ulong)*puStack296,uVar6,uVar5);
code_r0x00101ecc:
    uVar2 = 0x4b;
  } while( true );
code_r0x00101a90:
  while( true ) {
    iVar3 = (int)puVar10;
    uVar5 = func_0x00101620(0,puVar12,5);
    func_0x001017d0(0,0,uVar5);
code_r0x00101aa5:
    usage();
code_r0x00101aaf:
    puVar10 = (undefined8 *)(ulong)(uint)(iVar3 - optind);
    puVar13 = (undefined8 *)param_2 + optind;
    if (0 < iVar3 - optind) break;
    puVar12 = &UNK_00107ac1;
  }
  param_2 = stdbuf;
  bVar17 = false;
  puVar10 = &program_path;
  do {
    if ((char *)((undefined8 *)param_2)[2] != (char *)0x0) {
      uVar2 = *(uint *)((undefined8 *)param_2 + 1);
      if (*(char *)((undefined8 *)param_2)[2] == 'L') {
        if (uVar2 + 0x80 < 0x180) {
          puStack296 = (uint *)((ulong)puStack296 & 0xffffffff00000000 | (ulong)uVar2);
          func_0x00101550();
        }
        iVar3 = rpl_asprintf(&uStack272,&UNK_00107ada,&UNK_00107ad1);
      }
      else {
        uVar5 = *(undefined8 *)param_2;
        if (uVar2 + 0x80 < 0x180) {
          puStack296 = (uint *)((ulong)puStack296 & 0xffffffff00000000 | (ulong)uVar2);
          auStack288[0] = *(undefined8 *)param_2;
          plVar4 = (long *)func_0x00101550();
          uVar2 = *(uint *)(*plVar4 + (long)(int)puStack296 * 4);
          uVar5 = auStack288[0];
        }
        iVar3 = rpl_asprintf(&uStack272,&UNK_00107ae1,&UNK_00107ad1,(ulong)uVar2,uVar5);
      }
      if (iVar3 < 0) goto code_r0x00101f9c;
      iVar3 = func_0x00101710();
      if (iVar3 != 0) goto code_r0x00101f60;
      bVar17 = true;
    }
    uVar5 = program_name;
    param_2 = (undefined1 *)((undefined8 *)param_2 + 3);
  } while ((undefined8 *)param_2 != &program_path);
  if (bVar17) {
    lVar16 = func_0x00101680(program_name,0x2f);
    if (lVar16 == 0) {
      lVar16 = xreadlink(&UNK_00107aea);
      if (lVar16 == 0) {
        lVar16 = func_0x00101560(&UNK_00107af9);
        if (lVar16 != 0) {
          lVar16 = xstrdup(lVar16);
          lVar7 = func_0x00101800(lVar16,&UNK_00107abf);
          while (lVar7 != 0) {
            uVar6 = file_name_concat(lVar7,uVar5,0);
            iVar3 = func_0x001017e0(uVar6,1);
            if (iVar3 == 0) {
              program_path = (char *)dir_name();
              func_0x00101580(uVar6);
              break;
            }
            func_0x00101580(uVar6);
            lVar7 = func_0x00101800(0,&UNK_00107abf);
          }
        }
      }
      else {
        program_path = (char *)dir_name(lVar16);
      }
      func_0x00101580(lVar16);
    }
    else {
      program_path = (char *)dir_name(uVar5);
    }
    if (program_path == (char *)0x0) {
      program_path = (char *)xstrdup(&UNK_00107afe);
    }
    ppcVar9 = apcStack248;
    puStack296 = (uint *)func_0x00101560(&UNK_00107b17);
    apcStack248[2] = 0;
    apcStack248[0] = program_path;
    apcStack248[1] = &UNK_00107b22;
    while (**ppcVar9 != '\0') {
      iVar3 = rpl_asprintf(&puStack256,&UNK_00107b4c,*ppcVar9,&UNK_00107b3f);
      if (iVar3 < 0) goto code_r0x00101f9c;
      iVar3 = func_0x00101740(1,puStack256,auStack216);
      if (iVar3 == 0) goto code_r0x00101c4d;
      ppcVar9 = ppcVar9 + 1;
      func_0x00101580(puStack256);
      if (*ppcVar9 == (char *)0x0) {
        uVar5 = quote(&UNK_00107b3f);
        uVar6 = func_0x00101620(0,&UNK_00107b52,5);
        func_0x001017d0(0x7d,0,uVar6,uVar5);
code_r0x00101f60:
        uVar5 = quote(uStack272);
        uVar6 = func_0x00101620(0,&UNK_00108198,5);
        puVar15 = (uint *)func_0x001015a0();
        func_0x001017d0(0x7d,(ulong)*puVar15,uVar6,uVar5);
        goto code_r0x00101f9c;
      }
    }
    puStack256 = (uint *)xstrdup(&UNK_00107b3f);
code_r0x00101c4d:
    puVar15 = puStack256;
    if (puStack296 == (uint *)0x0) {
      iVar3 = rpl_asprintf(&uStack264,&UNK_00107b6d,&UNK_00107b17,puStack256);
    }
    else {
      iVar3 = rpl_asprintf(&uStack264,&UNK_00107b64,&UNK_00107b17);
    }
    if (iVar3 < 0) {
code_r0x00101f9c:
      auVar20 = xalloc_die();
      puVar15 = puStack296;
      puStack296 = SUB168(auVar20,0);
      (*(code *)PTR___libc_start_main_0030afd0)
                (main,puVar15,auStack288,__libc_csu_init,__libc_csu_fini,SUB168(auVar20 >> 0x40,0),
                 &puStack296);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    func_0x00101580(puStack256);
    iVar3 = func_0x00101710(uStack264);
    puVar10 = (undefined8 *)func_0x001015a0();
    if (iVar3 == 0) goto code_r0x00101ca7;
    param_2 = (undefined1 *)quote(uStack264);
    uVar5 = func_0x00101620(0,&UNK_00108198,5);
    func_0x001017d0(0x7d,(ulong)*(uint *)puVar10,uVar5);
  }
  puVar12 = &UNK_001081c8;
  goto code_r0x00101a90;
code_r0x00101ca7:
  func_0x00101580(program_path);
  func_0x00101810(*puVar13,puVar13);
  iVar3 = *(int *)puVar10;
  uVar5 = quote(*puVar13);
  uVar6 = func_0x00101620(0,&UNK_00107b73,5);
  func_0x001017d0(0,(ulong)*(uint *)puVar10,uVar6,uVar5);
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)((uint)(iVar3 == 2) + 0x7e);
  }
code_r0x00101e5f:
  func_0x00101650();
code_r0x00101e64:
  auVar21 = func_0x001016b0(&UNK_00108130,&UNK_00107a83,0x150,&__PRETTY_FUNCTION___7688);
  goto code_r0x00101e83;
}