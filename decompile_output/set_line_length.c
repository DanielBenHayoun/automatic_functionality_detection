
undefined8 set_line_length(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined extraout_DL;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  char **ppcVar15;
  char **ppcVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  char **ppcVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined *puVar22;
  ulong uStack1656;
  char *pcStack1648;
  long lStack1640;
  undefined auStack1632 [1536];
  undefined auStack96 [8];
  long lStack88;
  undefined8 uStack24;
  long lStack16;
  
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = xstrtoumax(param_1,0,0,&uStack24,&UNK_001178a1);
  if (iVar4 == 0) {
    line_length = uStack24;
    uVar11 = 1;
  }
  else {
    if (iVar4 == 1) {
      line_length = 0xffffffffffffffff;
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
  func_0x00103420();
  puVar14 = (undefined *)0x0;
  lStack88 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    pcVar6 = *(char **)(puVar14 + 0x320040);
    cVar1 = *pcVar6;
    while (cVar1 != '\0') {
      bVar21 = cVar1 == '%';
      cVar1 = pcVar6[1];
      if (bVar21) {
        if (cVar1 == '%') {
          cVar1 = pcVar6[2];
          pcVar6 = pcVar6 + 1;
        }
        else {
          if (cVar1 == 'b') goto code_r0x001057be;
        }
      }
      pcVar6 = pcVar6 + 1;
    }
    pcVar6 = (char *)0x0;
code_r0x001057be:
    *(char **)((long)&pcStack1648 + (long)puVar14) = pcVar6;
    puVar14 = puVar14 + 8;
  } while (puVar14 != (undefined *)0x10);
  if ((pcStack1648 != (char *)0x0) || (ppcVar15 = &pcStack1648, lStack1640 != 0)) {
    uVar18 = 0xc;
    do {
      uVar17 = 0x2000e;
      uVar13 = 0;
      puVar19 = auStack1632;
      do {
        uStack1656 = uVar18;
        ppcVar16 = (char **)func_0x00103680(uVar17);
        puVar14 = (undefined *)0x25;
        ppcVar15 = ppcVar16;
        lVar7 = func_0x00103450();
        if (lVar7 != 0) goto code_r0x001058b8;
        plVar8 = (long *)func_0x00103860();
        puVar22 = &UNK_0010585e;
        puVar14 = puVar19;
        uVar9 = mbsalign(ppcVar16,puVar19,0x80,&uStack1656,
                         (ulong)((uint)(*(ushort *)(*plVar8 + (ulong)*(byte *)ppcVar16 * 2) >> 0xb)
                                & 1),0);
        ppcVar15 = ppcVar16;
        if (0x7f < uVar9) goto code_r0x001058b8;
        if (uVar13 < uStack1656) {
          uVar13 = uStack1656;
        }
        puVar19 = puVar19 + 0x80;
        uVar17 = (ulong)((int)uVar17 + 1);
      } while (puVar19 != auStack96);
      bVar21 = uVar13 < uVar18;
      uVar18 = uVar13;
    } while (bVar21);
    lVar7 = 0;
    do {
      lVar2 = *(long *)(long_time_format + lVar7);
      lVar3 = *(long *)((long)&pcStack1648 + lVar7);
      ppcVar20 = (char **)(abformat + lVar7 * 0xc0);
      puVar12 = auStack1632;
      do {
        if (lVar3 == 0) {
          puVar14 = (undefined *)0x80;
          puVar22 = &UNK_001059ba;
          ppcVar16 = ppcVar20;
          uVar5 = func_0x00103480(ppcVar20,0x80,&UNK_00119f74,lVar2);
        }
        else {
          ppcVar15 = ppcVar16;
          if (0x80 < lVar3 - lVar2) goto code_r0x001058b8;
          puVar14 = (undefined *)0x80;
          ppcVar16 = ppcVar20;
          uVar5 = func_0x00103270(ppcVar20,0x80,1,0xffffffffffffffff,&UNK_00117847,
                                  lVar3 - lVar2 & 0xffffffff,lVar2,puVar12,lVar3 + 2,puVar22);
        }
        ppcVar15 = ppcVar16;
        if (0x7f < uVar5) goto code_r0x001058b8;
        puVar12 = puVar12 + 0x80;
        ppcVar20 = ppcVar20 + 0x10;
      } while (puVar12 != puVar19);
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x10);
    use_abformat = 1;
  }
code_r0x001058b8:
  if (lStack88 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x00103420();
  puVar10 = (undefined8 *)xmalloc(0x20);
  uVar11 = 0;
  if (puVar14 != (undefined *)0x0) {
    uVar11 = xstrdup(puVar14);
  }
  puVar10[1] = uVar11;
  uVar11 = 0;
  if (ppcVar15 != (char **)0x0) {
    uVar11 = xstrdup(ppcVar15);
  }
  *puVar10 = uVar11;
  uVar11 = pending_dirs;
  *(undefined *)(puVar10 + 2) = extraout_DL;
  *(undefined8 **)(puVar10 + 3) = pending_dirs;
  pending_dirs = puVar10;
  return uVar11;
}

