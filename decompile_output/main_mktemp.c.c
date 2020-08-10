
ulong main(ulong param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  char *pcVar17;
  char *pcVar18;
  char cVar19;
  char *pcVar20;
  char *pcVar21;
  byte bVar22;
  undefined auVar23 [16];
  undefined8 uStack120;
  undefined *puStack112;
  undefined auStack104 [8];
  char *pcStack96;
  undefined uStack82;
  undefined uStack81;
  
  bVar22 = 0;
  bVar3 = false;
  bVar2 = false;
  param_1 = param_1 & 0xffffffff;
  cVar19 = 0;
  puVar13 = (undefined8 *)auStack104;
  puVar14 = auStack104;
  puStack112 = &UNK_00101b97;
  set_program_name(*param_2);
  puStack112 = &UNK_00101ba8;
  func_0x00101a50(6,&UNK_00107538);
  puStack112 = &UNK_00101bbb;
  func_0x00101880(&UNK_001066a5,&UNK_001066e2);
  puStack112 = &UNK_00101bc7;
  func_0x00101860(&UNK_001066a5);
  puStack112 = &UNK_00101bd3;
  atexit(maybe_close_stdout);
  uStack82 = 0;
  uStack81 = 0;
  pcStack96 = (char *)0x0;
  pcVar20 = (char *)0x0;
code_r0x00101bf0:
  do {
    pcVar21 = pcVar20;
    pcVar18 = (char *)0x0;
    puStack112 = &UNK_00101c0b;
    iVar4 = func_0x001018f0(param_1,param_2,&UNK_00106712,longopts,0);
    if (iVar4 == -1) {
code_r0x00101d04:
      uVar5 = (int)param_1 - optind;
      param_1 = (ulong)uVar5;
      if (uVar5 < 2) {
        if (uVar5 != 0) {
          pcVar20 = (char *)param_2[optind];
          if (pcVar21 == (char *)0x0) goto code_r0x0010213b;
          uVar11 = 0xffffffffffffffff;
          pcVar17 = pcVar20;
          goto code_r0x00101ed5;
        }
        cVar19 = '\x01';
        pcVar20 = "tmp.XXXXXXXXXX";
        if (pcVar21 == (char *)0x0) goto code_r0x0010213b;
        pcVar20 = "tmp.XXXXXXXXXX";
        *(undefined8 *)((undefined *)puVar13 + 0x18) = 0xe;
        cVar19 = '\x01';
        goto code_r0x00101d4a;
      }
      *(undefined8 *)((undefined *)puVar13 + -8) = 0x1020af;
      uVar9 = func_0x00101890(0,&UNK_0010671a,5);
      *(undefined8 *)((undefined *)puVar13 + -8) = 0x1020bd;
      func_0x00101a90(0,0,uVar9);
      puVar16 = (undefined *)puVar13;
      break;
    }
    pcVar20 = pcVar21;
    if (iVar4 == 0x70) {
      pcStack96 = optarg;
      cVar19 = 1;
      goto code_r0x00101bf0;
    }
    if (iVar4 < 0x71) {
      if (iVar4 == -0x82) {
        puStack112 = &UNK_00102193;
        usage(0);
        goto code_r0x00102193;
      }
      if (iVar4 < -0x81) {
        puVar16 = auStack104;
        if (iVar4 != -0x83) break;
      }
      else {
        if (iVar4 != 0x56) {
          puVar16 = auStack104;
          if (iVar4 != 100) break;
          bVar2 = true;
          goto code_r0x00101bf0;
        }
      }
      puVar13 = &uStack120;
      uStack120 = 0;
      pcVar18 = "Jim Meyering";
      version_etc(stdout,&UNK_00106624,&UNK_001066a1,Version,&UNK_00106705,&UNK_001066fa);
      func_0x00101b00(0);
      goto code_r0x00101d04;
    }
    if (iVar4 == 0x74) {
      uStack82 = 1;
      cVar19 = 1;
      goto code_r0x00101bf0;
    }
    if (iVar4 < 0x75) {
      puVar16 = auStack104;
      if (iVar4 != 0x71) break;
      uStack81 = 1;
      goto code_r0x00101bf0;
    }
    if (iVar4 == 0x75) {
      bVar3 = true;
      goto code_r0x00101bf0;
    }
    puVar16 = auStack104;
    pcVar20 = optarg;
  } while (iVar4 == 0x80);
  *(undefined8 *)(puVar16 + -8) = 0x1020c7;
  usage(1);
  puVar13 = (undefined8 *)puVar16;
  do {
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x1020d3;
    pcVar20 = (char *)func_0x00101780(&UNK_00106748);
    if ((pcVar20 == (char *)0x0) || (*pcVar20 == '\0')) {
      pcVar18 = *(char **)((undefined *)puVar13 + 8);
      pcVar20 = "/tmp";
      if ((pcVar18 != (char *)0x0) && (*pcVar18 != '\0')) {
        pcVar20 = pcVar18;
      }
    }
    cVar19 = (char)pcVar20;
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x102100;
    puVar8 = (undefined8 *)last_component(param_2);
    puVar12 = param_2;
    puVar14 = (undefined *)puVar13;
    if (puVar8 == param_2) goto code_r0x00101e48;
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x102111;
    quote(param_2);
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x102127;
    uVar9 = func_0x00101890(0,&UNK_00106e40,5);
    pcVar20 = (char *)0x0;
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x10213b;
    func_0x00101a90(1,0,uVar9);
code_r0x0010213b:
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x102143;
    param_2 = (undefined8 *)xstrdup(pcVar20);
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x102153;
    lVar10 = func_0x00101910(param_2,0x58);
    pcVar18 = (char *)(lVar10 + 1);
    if (lVar10 == 0) {
      uVar11 = 0xffffffffffffffff;
      puVar12 = param_2;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *(char *)puVar12;
        puVar12 = (undefined8 *)((long)puVar12 + (ulong)bVar22 * -2 + 1);
      } while (cVar1 != '\0');
      pcVar18 = (char *)((long)param_2 + (~uVar11 - 1));
    }
    uVar11 = 0xffffffffffffffff;
    pcVar20 = pcVar18;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar20 + (ulong)bVar22 * -2 + 1;
    } while (cVar1 != '\0');
    param_1 = ~uVar11 - 1;
code_r0x00101dac:
    if (param_1 != 0) {
      *(char **)((undefined *)puVar13 + 0x18) = pcVar18;
      *(undefined8 *)((undefined *)puVar13 + -8) = 0x101dbe;
      pcVar20 = (char *)last_component(pcVar18);
      pcVar18 = *(char **)((undefined *)puVar13 + 0x18);
      if (pcVar20 != pcVar18) goto code_r0x001021f7;
    }
    if ((pcVar18 + -(long)param_2 == (char *)0x0) || (pcVar18[-1] != 'X')) goto code_r0x001021c5;
    pcVar21 = (char *)0x0;
    pcVar20 = (char *)((long)param_2 + -2) + (long)(pcVar18 + -(long)param_2);
    do {
      pcVar21 = pcVar21 + 1;
      if ((char *)((long)param_2 + -1) == pcVar20) break;
      cVar1 = *pcVar20;
      pcVar20 = pcVar20 + -1;
    } while (cVar1 == 'X');
    if (pcVar21 < (char *)0x3) goto code_r0x001021c5;
    puVar14 = (undefined *)puVar13;
    if (cVar19 == '\0') goto code_r0x00101e63;
  } while (((undefined *)puVar13)[0x16] != '\0');
  pcVar20 = *(char **)((undefined *)puVar13 + 8);
  if ((pcVar20 == (char *)0x0) || (*pcVar20 == '\0')) goto code_r0x00101f28;
code_r0x00101e3f:
  puVar12 = param_2;
  if (*(char *)param_2 == '/') {
code_r0x00102193:
    *(undefined8 *)(puVar14 + -8) = 0x10219b;
    param_2 = (undefined8 *)quote(param_2);
    *(undefined8 *)(puVar14 + -8) = 0x1021b1;
    uVar9 = func_0x00101890(0,&UNK_00106e78,5);
    *(undefined8 *)(puVar14 + -8) = 0x1021c5;
    func_0x00101a90(1,0,uVar9,param_2);
    puVar13 = (undefined8 *)puVar14;
code_r0x001021c5:
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x1021cd;
    uVar9 = quote(param_2);
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x1021e3;
    uVar7 = func_0x00101890(0,&UNK_0010672d,5);
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x1021f7;
    func_0x00101a90(1,0,uVar7,uVar9);
code_r0x001021f7:
    puVar13[-1] = 0x1021ff;
    uVar9 = quote(pcVar18);
    puVar13[-1] = 0x102215;
    uVar7 = func_0x00101890(0,&UNK_00106e10,5);
    puVar13[-1] = 0x102229;
    auVar23 = func_0x00101a90(1,0,uVar7,uVar9);
    uVar9 = *puVar13;
    uVar15 = (ulong)(puVar13 + 1) & 0xfffffffffffffff0;
    *(undefined8 *)(uVar15 - 8) = SUB168(auVar23,0);
    *(ulong *)(uVar15 - 0x10) = uVar15 - 8;
    *(undefined8 *)(uVar15 - 0x18) = 0x10225a;
    (*(code *)PTR___libc_start_main_00309fd8)
              (main,uVar9,puVar13 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar23 >> 0x40,0));
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
code_r0x00101e48:
  *(undefined8 *)(puVar14 + -8) = 0x101e55;
  param_2 = (undefined8 *)file_name_concat(pcVar20,puVar12,0);
  *(undefined8 *)(puVar14 + -8) = 0x101e63;
  func_0x00101790(puVar12);
code_r0x00101e63:
  *(undefined8 *)(puVar14 + -8) = 0x101e6b;
  uVar9 = xstrdup(param_2);
  if (bVar2) {
    if (bVar3) {
      *(undefined8 *)(puVar14 + -8) = 0x101e94;
      uVar5 = gen_tempname_len(uVar9,param_1 & 0xffffffff,0,2,pcVar21);
      if (uVar5 == 0) {
        *(undefined8 *)(puVar14 + -8) = 0x102097;
        func_0x00101820(uVar9);
        return (ulong)uVar5;
      }
    }
    else {
      *(undefined8 *)(puVar14 + -8) = 0x101fd1;
      iVar4 = gen_tempname_len(uVar9,param_1 & 0xffffffff,0,1,pcVar21);
      if (iVar4 == 0) {
code_r0x00101fd9:
        *(undefined8 *)(puVar14 + -8) = 0x101fe1;
        func_0x00101820(uVar9);
        stdout_closed = 1;
        *(undefined8 *)(puVar14 + -8) = 0x101ff4;
        uVar5 = close_stream(stdout);
        if (uVar5 == 0) {
          return (ulong)uVar5;
        }
        *(undefined8 *)(puVar14 + -8) = 0x102003;
        puVar6 = (uint *)func_0x001017b0();
        uVar5 = *puVar6;
        *(undefined8 *)(puVar14 + -8) = 0x10200d;
        func_0x001017c0(uVar9);
        if (puVar14[0x17] != '\0') {
          return 1;
        }
        *(undefined8 *)(puVar14 + -8) = 0x102030;
        uVar9 = func_0x00101890(0,&UNK_0010674f,5);
        *(undefined8 *)(puVar14 + -8) = 0x10203e;
        func_0x00101a90(0,(ulong)uVar5,uVar9);
        return 1;
      }
    }
    if (puVar14[0x17] != '\0') {
      return 1;
    }
    *(undefined8 *)(puVar14 + -8) = 0x10205b;
    uVar9 = quote(param_2);
    puVar16 = &UNK_00106eb8;
  }
  else {
    if (bVar3) {
      *(undefined8 *)(puVar14 + -8) = 0x101f6a;
      iVar4 = gen_tempname_len(uVar9,param_1 & 0xffffffff,0,2,pcVar21);
      if (-1 < iVar4) {
        *(undefined8 *)(puVar14 + -8) = 0x101f78;
        func_0x00101820(uVar9);
        return 0;
      }
    }
    else {
      *(undefined8 *)(puVar14 + -8) = 0x101f8e;
      uVar5 = gen_tempname_len(uVar9,param_1 & 0xffffffff,0,0,pcVar21);
      if (-1 < (int)uVar5) {
        *(undefined8 *)(puVar14 + -8) = 0x10204a;
        iVar4 = func_0x00101960((ulong)uVar5);
        if (iVar4 == 0) goto code_r0x00101fd9;
      }
    }
    if (puVar14[0x17] != '\0') {
      return 1;
    }
    *(undefined8 *)(puVar14 + -8) = 0x101fa9;
    uVar9 = quote(param_2);
    puVar16 = &UNK_00106ee8;
  }
  *(undefined8 *)(puVar14 + -8) = 0x102071;
  uVar7 = func_0x00101890(0,puVar16,5);
  *(undefined8 *)(puVar14 + -8) = 0x102079;
  puVar6 = (uint *)func_0x001017b0();
  uVar5 = *puVar6;
  *(undefined8 *)(puVar14 + -8) = 0x10208a;
  func_0x00101a90(0,(ulong)uVar5,uVar7,uVar9);
  return 1;
  while( true ) {
    uVar11 = uVar11 - 1;
    cVar1 = *pcVar17;
    pcVar17 = pcVar17 + (ulong)bVar22 * -2 + 1;
    if (cVar1 == '\0') break;
code_r0x00101ed5:
    if (uVar11 == 0) break;
  }
  lVar10 = ~uVar11 - 1;
  *(long *)((undefined *)puVar13 + 0x18) = lVar10;
  if ((lVar10 != 0) && (pcVar20[~uVar11 - 2] == 'X')) {
code_r0x00101d4a:
    *(char **)((undefined *)puVar13 + 0x28) = pcVar20;
    uVar11 = 0xffffffffffffffff;
    pcVar20 = pcVar21;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar20 + (ulong)bVar22 * -2 + 1;
    } while (cVar1 != '\0');
    param_1 = ~uVar11 - 1;
    *(ulong *)((undefined *)puVar13 + 0x20) = ~uVar11;
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x101d78;
    param_2 = (undefined8 *)xmalloc(*(long *)((undefined *)puVar13 + 0x18) + 1 + param_1);
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x101d8d;
    func_0x001019c0(param_2,*(undefined8 *)((undefined *)puVar13 + 0x28),
                    *(undefined8 *)((undefined *)puVar13 + 0x18));
    *(undefined8 *)((undefined *)puVar13 + -8) = 0x101da9;
    pcVar18 = (char *)func_0x001019c0((long)param_2 + *(long *)((undefined *)puVar13 + 0x18),pcVar21
                                      ,*(undefined8 *)((undefined *)puVar13 + 0x20),
                                      *(undefined8 *)((undefined *)puVar13 + 0x20));
    goto code_r0x00101dac;
  }
  *(undefined8 *)((undefined *)puVar13 + -8) = 0x101efe;
  param_2 = (undefined8 *)quote(pcVar20);
  *(undefined8 *)((undefined *)puVar13 + -8) = 0x101f14;
  uVar9 = func_0x00101890(0,&UNK_00106de0,5);
  *(undefined8 *)((undefined *)puVar13 + -8) = 0x101f28;
  func_0x00101a90(1,0,uVar9,param_2);
code_r0x00101f28:
  *(undefined8 *)((undefined *)puVar13 + -8) = 0x101f34;
  pcVar20 = (char *)func_0x00101780(&UNK_00106748);
  puVar14 = (undefined *)puVar13;
  if ((pcVar20 == (char *)0x0) || (*pcVar20 == '\0')) {
    pcVar20 = "/tmp";
  }
  goto code_r0x00101e3f;
}

