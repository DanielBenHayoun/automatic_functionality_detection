
long leave_dir_isra_12(ulong param_1,long **param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  uint uVar15;
  ulong extraout_RDX;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  long *plVar19;
  long *plVar20;
  long unaff_R13;
  long in_FS_OFFSET;
  bool bVar21;
  long lStack200;
  long lStack192;
  ulong uStack184;
  long lStack176;
  ulong uStack168;
  long lStack160;
  ulong uStack152;
  undefined *puStack144;
  long lStack136;
  char cStack115;
  char cStack114;
  char cStack113;
  uint uStack108;
  ulong uStack104;
  undefined8 uStack40;
  undefined8 uStack32;
  long lStack16;
  
  iVar17 = (int)param_2;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  plVar19 = (long *)(ulong)((uint)param_1 & 0x102);
  if ((param_1 & 0x102) == 0) {
    lVar12 = *(long *)(param_3 + 8);
    if ((lVar12 != 0) && (-1 < *(long *)(lVar12 + 0x58))) {
      plVar20 = *param_2;
      if (plVar20[2] == 0) goto code_r0x001075b3;
      iVar17 = (int)*(long *)(param_3 + 0x80);
      if ((*plVar20 == *(long *)(param_3 + 0x80)) &&
         (iVar17 = (int)*(long *)(param_3 + 0x78), plVar20[1] == *(long *)(param_3 + 0x78))) {
        lVar1 = *(long *)(lVar12 + 0x80);
        plVar20[1] = *(long *)(lVar12 + 0x78);
        *plVar20 = lVar1;
      }
    }
code_r0x00107545:
    if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
    func_0x00101ab0();
  }
  else {
    uStack40 = *(undefined8 *)(param_3 + 0x78);
    plVar19 = *param_2;
    uStack32 = *(undefined8 *)(param_3 + 0x80);
    iVar17 = (int)register0x00000020 + -0x28;
    plVar20 = (long *)hash_delete();
    if (plVar20 != (long *)0x0) {
      func_0x00101da0();
      plVar19 = plVar20;
      goto code_r0x00107545;
    }
  }
code_r0x001075b3:
  func_0x00101990();
  lVar12 = *plVar19;
  uStack104 = *(ulong *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(lVar12 + 0x18);
  if (lVar1 == 0) {
    uVar18 = *(uint *)(plVar19 + 9);
    uVar16 = (ulong)(uVar18 & 0x10);
    if (((uVar18 & 0x10) != 0) && (uVar16 = 0x20000, (uVar18 & 1) != 0)) {
      uVar16 = (ulong)(*(long *)(lVar12 + 0x58) != 0) << 0x11;
    }
    uVar11 = 0xffffff9c;
    if ((uVar18 & 0x204) == 0x200) {
      uVar11 = (ulong)*(uint *)((long)plVar19 + 0x2c);
    }
    lVar13 = opendirat(uVar11,*(undefined8 *)(lVar12 + 0x30),uVar16,&uStack108);
    *(long *)(lVar12 + 0x18) = lVar13;
    if (lVar13 == 0) goto joined_r0x00107d95;
    if (*(short *)(lVar12 + 0x70) == 0xb) {
      uVar6 = fts_stat(plVar19,lVar12,0);
      *(undefined2 *)(lVar12 + 0x70) = uVar6;
    }
    else {
      if ((*(uint *)(plVar19 + 9) & 0x100) != 0) {
        leave_dir_isra_12((ulong)*(uint *)(plVar19 + 9),plVar19 + 0xb,lVar12);
        fts_stat(plVar19,lVar12,0);
        cVar5 = enter_dir_isra_10((ulong)*(uint *)(plVar19 + 9),plVar19 + 0xb,lVar12);
        if (cVar5 == '\0') {
          puVar14 = (undefined4 *)func_0x001019a0();
          lStack192 = 0;
          *puVar14 = 0xc;
          goto code_r0x00107b85;
        }
      }
    }
    uStack152 = (ulong)(-(uint)(plVar19[8] == 0) & 0x186a1) - 1;
    if (iVar17 == 2) {
code_r0x00107e00:
      cStack113 = 0;
      uVar18 = *(uint *)(plVar19 + 9);
      goto code_r0x0010762b;
    }
    if ((((*(uint *)(plVar19 + 9) & 0x38) == 0x18) && (*(long *)(lVar12 + 0x88) == 2)) &&
       (iVar7 = leaf_optimization(lVar12,(ulong)uStack108), iVar7 != 0)) {
      if (iVar17 != 3) goto code_r0x00107e00;
      bVar2 = false;
      bVar21 = true;
    }
    else {
      bVar21 = iVar17 == 3;
      bVar2 = true;
    }
    if ((*(byte *)((long)plVar19 + 0x49) & 2) != 0) {
      uStack108 = rpl_fcntl((ulong)uStack108,0x406,3);
    }
    if (((int)uStack108 < 0) ||
       (iVar7 = fts_safe_changedir(plVar19,lVar12,(ulong)uStack108,0), iVar7 != 0)) {
      if ((bVar21) && (bVar2)) {
        puVar14 = (undefined4 *)func_0x001019a0();
        *(undefined4 *)(lVar12 + 0x40) = *puVar14;
      }
      *(ushort *)(lVar12 + 0x72) = *(ushort *)(lVar12 + 0x72) | 1;
      func_0x00101b60();
      uVar18 = *(uint *)(plVar19 + 9);
      *(undefined8 *)(lVar12 + 0x18) = 0;
      if (((uVar18 & 0x200) != 0) && (-1 < (int)uStack108)) {
        func_0x00101b50();
        uVar18 = *(uint *)(plVar19 + 9);
      }
      *(undefined8 *)(lVar12 + 0x18) = 0;
      cStack113 = 0;
      goto code_r0x0010762b;
    }
  }
  else {
    uStack108 = func_0x00101bc0();
    if ((int)uStack108 < 0) {
      func_0x00101b60(*(undefined8 *)(lVar12 + 0x18));
      *(undefined8 *)(lVar12 + 0x18) = 0;
joined_r0x00107d95:
      if (iVar17 == 3) {
        *(undefined2 *)(lVar12 + 0x70) = 4;
        puVar14 = (undefined4 *)func_0x001019a0();
        *(undefined4 *)(lVar12 + 0x40) = *puVar14;
      }
      lStack192 = 0;
      goto code_r0x00107b85;
    }
    if (plVar19[8] == 0) {
      uStack152 = 100000;
      cStack113 = 1;
      uVar18 = *(uint *)(plVar19 + 9);
      goto code_r0x0010762b;
    }
    uStack152 = -1;
  }
  uVar18 = *(uint *)(plVar19 + 9);
  cStack113 = 1;
code_r0x0010762b:
  lVar13 = *(long *)(lVar12 + 0x48);
  puStack144 = (undefined *)0x0;
  lStack136 = lVar13 + -1;
  if (*(char *)(*(long *)(lVar12 + 0x38) + -1 + lVar13) != '/') {
    lStack136 = lVar13;
  }
  if ((uVar18 & 4) != 0) {
    puStack144 = (undefined *)(lStack136 + plVar19[4]) + 1;
    *(undefined *)(lStack136 + plVar19[4]) = 0x2f;
  }
  cStack114 = 0;
  cStack115 = 0;
  lStack200 = 0;
  lStack192 = 0;
  uStack184 = lStack136 + 1;
  uStack168 = plVar19[6] - uStack184;
  uVar16 = 0;
  lStack160 = *(long *)(lVar12 + 0x58) + 1;
  lVar13 = lStack200;
  lStack176 = lVar12;
code_r0x0010778f:
  do {
    lStack200 = lVar13;
    unaff_R13 = *(long *)(lStack176 + 0x18);
    if (unaff_R13 == 0) goto joined_r0x00107c70;
    piVar9 = (int *)func_0x001019a0();
    *piVar9 = 0;
    puVar10 = (undefined8 *)func_0x00101c10(unaff_R13);
    if (puVar10 == (undefined8 *)0x0) {
      if (*piVar9 != 0) {
        *(int *)(lStack176 + 0x40) = *piVar9;
        if ((uVar16 != 0) || (uVar6 = 4, lVar1 != 0)) {
          uVar6 = 7;
        }
        *(undefined2 *)(lStack176 + 0x70) = uVar6;
      }
      if (*(long *)(lStack176 + 0x18) == 0) goto joined_r0x00107c70;
      func_0x00101b60();
      *(undefined8 *)(lStack176 + 0x18) = 0;
      goto joined_r0x00107c70;
    }
  } while ((((*(byte *)(plVar19 + 9) & 0x20) == 0) && (*(char *)((long)puVar10 + 0x13) == '.')) &&
          ((lVar13 = lStack200, *(char *)((long)puVar10 + 0x14) == '\0' ||
           (*(short *)((long)puVar10 + 0x14) == 0x2e))));
  uVar11 = func_0x00101a80((long)puVar10 + 0x13);
  unaff_R13 = fts_alloc(plVar19,(long)puVar10 + 0x13,uVar11);
  if (unaff_R13 == 0) {
code_r0x00107c10:
    iVar7 = *piVar9;
    func_0x00101da0(unaff_R13);
    fts_lfree(lStack192);
    func_0x00101b60(*(undefined8 *)(lStack176 + 0x18));
    *(undefined8 *)(lStack176 + 0x18) = 0;
    lStack192 = 0;
    *(undefined2 *)(lStack176 + 0x70) = 7;
    *(uint *)(plVar19 + 9) = *(uint *)(plVar19 + 9) | 0x2000;
    *piVar9 = iVar7;
  }
  else {
    if (uStack168 <= uVar11) {
      uStack168 = plVar19[4];
      cVar5 = fts_palloc_isra_2(plVar19 + 4,plVar19 + 6,lStack136 + 2 + uVar11);
      if (cVar5 == '\0') goto code_r0x00107c10;
      puVar4 = puStack144;
      if ((plVar19[4] != uStack168) &&
         (cStack115 = cVar5, puVar4 = (undefined *)(plVar19[4] + uStack184),
         (*(byte *)(plVar19 + 9) & 4) == 0)) {
        puVar4 = puStack144;
      }
      puStack144 = puVar4;
      uStack168 = plVar19[6] - uStack184;
    }
    if (!CARRY8(uVar11,uStack184)) {
      *(long *)(unaff_R13 + 0x58) = lStack160;
      lVar12 = *plVar19;
      *(long *)(unaff_R13 + 0x48) = uVar11 + uStack184;
      *(long *)(unaff_R13 + 8) = lVar12;
      *(undefined8 *)(unaff_R13 + 0x80) = *puVar10;
      uVar18 = *(uint *)(plVar19 + 9);
      if ((uVar18 & 4) == 0) {
        *(long *)(unaff_R13 + 0x30) = unaff_R13 + 0x108;
      }
      else {
        *(undefined8 *)(unaff_R13 + 0x30) = *(undefined8 *)(unaff_R13 + 0x38);
        func_0x00101cc0(puStack144,unaff_R13 + 0x108,*(long *)(unaff_R13 + 0x60) + 1);
        uVar18 = *(uint *)(plVar19 + 9);
      }
      if ((plVar19[8] != 0) && ((uVar18 & 0x400) == 0)) {
        uVar6 = fts_stat(plVar19,unaff_R13,0);
        *(undefined2 *)(unaff_R13 + 0x70) = uVar6;
        uVar11 = uVar16;
        goto code_r0x00107751;
      }
      uVar15 = (uint)*(byte *)((long)puVar10 + 0x12) - 1;
      uVar11 = (ulong)uVar15;
      if (((uVar18 & 0x18) == 0x18) && ((*(byte *)((long)puVar10 + 0x12) & 0xfb) != 0)) {
        *(undefined2 *)(unaff_R13 + 0x70) = 0xb;
        if (uVar15 < 0xc) goto code_r0x00107f76;
        *(undefined4 *)(unaff_R13 + 0x90) = 0;
        uVar8 = 1;
        goto code_r0x0010774a;
      }
      *(undefined2 *)(unaff_R13 + 0x70) = 0xb;
      if (0xb < uVar15) {
        *(undefined4 *)(unaff_R13 + 0x90) = 0;
        uVar8 = 2;
        goto code_r0x0010774a;
      }
      *(undefined4 *)(unaff_R13 + 0x90) = *(undefined4 *)(CSWTCH_53 + uVar11 * 4);
      uVar8 = 2;
      goto code_r0x0010774a;
    }
    func_0x00101da0(unaff_R13);
    fts_lfree(lStack192);
    func_0x00101b60(*(undefined8 *)(lStack176 + 0x18));
    *(undefined8 *)(lStack176 + 0x18) = 0;
    lStack192 = 0;
    *(undefined2 *)(lStack176 + 0x70) = 7;
    *(uint *)(plVar19 + 9) = *(uint *)(plVar19 + 9) | 0x2000;
    *piVar9 = 0x24;
  }
code_r0x00107b85:
  uVar16 = uStack104 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar16 == 0) {
    return lStack192;
  }
  func_0x00101ab0();
  uVar11 = extraout_RDX;
code_r0x00107f76:
  *(undefined4 *)(unaff_R13 + 0x90) = *(undefined4 *)(CSWTCH_53 + uVar11 * 4);
  uVar8 = 1;
code_r0x0010774a:
  *(undefined8 *)(unaff_R13 + 0xa8) = uVar8;
  uVar11 = uVar16;
code_r0x00107751:
  *(undefined8 *)(unaff_R13 + 0x10) = 0;
  lVar12 = unaff_R13;
  if (lStack192 != 0) {
    *(long *)(lStack200 + 0x10) = unaff_R13;
    lVar12 = lStack192;
  }
  lStack192 = lVar12;
  if ((uVar11 == 10000) && (plVar19[8] == 0)) {
    lVar12 = filesystem_type(lStack176,(ulong)uStack108);
    if ((lVar12 == 0x1021994) || ((lVar12 == 0xff534d42 || (lVar12 == 0x6969)))) {
      cStack114 = '\0';
      goto code_r0x0010777b;
    }
    uVar16 = 0x2711;
    cStack114 = '\x01';
    lVar13 = unaff_R13;
    if (0x2711 < uStack152) goto code_r0x0010778f;
  }
  else {
code_r0x0010777b:
    uVar16 = uVar11 + 1;
    lVar13 = unaff_R13;
    if (uVar16 < uStack152) goto code_r0x0010778f;
  }
  uVar16 = uVar11 + 1;
joined_r0x00107c70:
  if (cStack115 != '\0') {
    lVar12 = plVar19[1];
    lVar13 = plVar19[4];
    while (lVar3 = lStack192, lVar12 != 0) {
      if (*(long *)(lVar12 + 0x30) != lVar12 + 0x108) {
        *(long *)(lVar12 + 0x30) = (*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x38)) + lVar13;
      }
      *(long *)(lVar12 + 0x38) = lVar13;
      lVar12 = *(long *)(lVar12 + 0x10);
    }
    while (lVar12 = lVar3, -1 < *(long *)(lVar12 + 0x58)) {
      if (*(long *)(lVar12 + 0x30) != lVar12 + 0x108) {
        *(long *)(lVar12 + 0x30) = (*(long *)(lVar12 + 0x30) - *(long *)(lVar12 + 0x38)) + lVar13;
      }
      *(long *)(lVar12 + 0x38) = lVar13;
      lVar3 = *(long *)(lVar12 + 0x10);
      if (*(long *)(lVar12 + 0x10) == 0) {
        lVar3 = *(long *)(lVar12 + 8);
      }
    }
  }
  if ((*(byte *)(plVar19 + 9) & 4) != 0) {
    if ((plVar19[6] == uStack184) || (uVar16 == 0)) {
      puStack144 = puStack144 + -1;
    }
    *puStack144 = 0;
  }
  if ((lVar1 == 0) && (cStack113 != '\0')) {
    if ((iVar17 == 1) || (uVar16 == 0)) {
      if (*(long *)(lStack176 + 0x58) == 0) {
        iVar7 = restore_initial_cwd(plVar19);
      }
      else {
        iVar7 = fts_safe_changedir(plVar19,*(undefined8 *)(lStack176 + 8),0xffffffff,&UNK_0010b4ae);
      }
      if (iVar7 == 0) goto code_r0x00107d10;
      *(undefined2 *)(lStack176 + 0x70) = 7;
      *(uint *)(plVar19 + 9) = *(uint *)(plVar19 + 9) | 0x2000;
      fts_lfree(lStack192);
      lStack192 = 0;
    }
    else {
code_r0x00107cb6:
      if (cStack114 == '\0') {
        if ((plVar19[8] != 0) && (uVar16 != 1)) {
          lStack192 = fts_sort(plVar19,lStack192,uVar16);
        }
      }
      else {
        plVar19[8] = 0x106a10;
        lStack192 = fts_sort(plVar19,lStack192,uVar16);
        plVar19[8] = 0;
      }
    }
  }
  else {
code_r0x00107d10:
    if (uVar16 != 0) goto code_r0x00107cb6;
    if (((iVar17 == 3) && (*(short *)(lStack176 + 0x70) != 7)) &&
       (*(short *)(lStack176 + 0x70) != 4)) {
      *(undefined2 *)(lStack176 + 0x70) = 6;
    }
    fts_lfree(lStack192);
    lStack192 = 0;
  }
  goto code_r0x00107b85;
}

