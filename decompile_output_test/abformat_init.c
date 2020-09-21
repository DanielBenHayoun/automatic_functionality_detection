
void abformat_init(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined extraout_DL;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  char **ppcVar14;
  char **ppcVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  char **ppcVar19;
  long in_FS_OFFSET;
  bool bVar20;
  undefined *puVar21;
  ulong uStack1632;
  char *pcStack1624;
  long lStack1616;
  undefined auStack1608 [1536];
  undefined auStack72 [8];
  long lStack64;
  
  puVar13 = (undefined *)0x0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    pcVar5 = *(char **)(puVar13 + 0x320040);
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      bVar20 = cVar1 == '%';
      cVar1 = pcVar5[1];
      if (bVar20) {
        if (cVar1 == '%') {
          cVar1 = pcVar5[2];
          pcVar5 = pcVar5 + 1;
        }
        else {
          if (cVar1 == 'b') goto code_r0x001057be;
        }
      }
      pcVar5 = pcVar5 + 1;
    }
    pcVar5 = (char *)0x0;
code_r0x001057be:
    *(char **)((long)&pcStack1624 + (long)puVar13) = pcVar5;
    puVar13 = puVar13 + 8;
  } while (puVar13 != (undefined *)0x10);
  if ((pcStack1624 != (char *)0x0) || (ppcVar14 = &pcStack1624, lStack1616 != 0)) {
    uVar17 = 0xc;
    do {
      uVar16 = 0x2000e;
      uVar12 = 0;
      puVar18 = auStack1608;
      do {
        uStack1632 = uVar17;
        ppcVar15 = (char **)func_0x00103680(uVar16);
        puVar13 = (undefined *)0x25;
        ppcVar14 = ppcVar15;
        lVar6 = func_0x00103450();
        if (lVar6 != 0) goto code_r0x001058b8;
        plVar7 = (long *)func_0x00103860();
        puVar21 = &UNK_0010585e;
        puVar13 = puVar18;
        uVar8 = mbsalign(ppcVar15,puVar18,0x80,&uStack1632,
                         (ulong)((uint)(*(ushort *)(*plVar7 + (ulong)*(byte *)ppcVar15 * 2) >> 0xb)
                                & 1),0);
        ppcVar14 = ppcVar15;
        if (0x7f < uVar8) goto code_r0x001058b8;
        if (uVar12 < uStack1632) {
          uVar12 = uStack1632;
        }
        puVar18 = puVar18 + 0x80;
        uVar16 = (ulong)((int)uVar16 + 1);
      } while (puVar18 != auStack72);
      bVar20 = uVar12 < uVar17;
      uVar17 = uVar12;
    } while (bVar20);
    lVar6 = 0;
    do {
      lVar2 = *(long *)(long_time_format + lVar6);
      lVar3 = *(long *)((long)&pcStack1624 + lVar6);
      ppcVar19 = (char **)(abformat + lVar6 * 0xc0);
      puVar11 = auStack1608;
      do {
        if (lVar3 == 0) {
          puVar13 = (undefined *)0x80;
          puVar21 = &UNK_001059ba;
          ppcVar15 = ppcVar19;
          uVar4 = func_0x00103480(ppcVar19,0x80,&UNK_00119f74,lVar2);
        }
        else {
          ppcVar14 = ppcVar15;
          if (0x80 < lVar3 - lVar2) goto code_r0x001058b8;
          puVar13 = (undefined *)0x80;
          ppcVar15 = ppcVar19;
          uVar4 = func_0x00103270(ppcVar19,0x80,1,0xffffffffffffffff,&UNK_00117847,
                                  lVar3 - lVar2 & 0xffffffff,lVar2,puVar11,lVar3 + 2,puVar21);
        }
        ppcVar14 = ppcVar15;
        if (0x7f < uVar4) goto code_r0x001058b8;
        puVar11 = puVar11 + 0x80;
        ppcVar19 = ppcVar19 + 0x10;
      } while (puVar11 != puVar18);
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x10);
    use_abformat = 1;
  }
code_r0x001058b8:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00103420();
  puVar9 = (undefined8 *)xmalloc(0x20);
  uVar10 = 0;
  if (puVar13 != (undefined *)0x0) {
    uVar10 = xstrdup(puVar13);
  }
  puVar9[1] = uVar10;
  uVar10 = 0;
  if (ppcVar14 != (char **)0x0) {
    uVar10 = xstrdup(ppcVar14);
  }
  *puVar9 = uVar10;
  *(undefined *)(puVar9 + 2) = extraout_DL;
  *(undefined8 **)(puVar9 + 3) = pending_dirs;
  pending_dirs = puVar9;
  return;
}

