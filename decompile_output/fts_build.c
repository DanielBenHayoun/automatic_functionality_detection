
long fts_build(long *param_1,int param_2)

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
  uint uVar17;
  long unaff_R13;
  long in_FS_OFFSET;
  bool bVar18;
  long lStack160;
  long lStack152;
  ulong uStack144;
  long lStack136;
  ulong uStack128;
  long lStack120;
  ulong uStack112;
  undefined *puStack104;
  long lStack96;
  char cStack75;
  char cStack74;
  char cStack73;
  uint uStack68;
  ulong uStack64;
  
  lVar12 = *param_1;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(lVar12 + 0x18);
  if (lVar1 == 0) {
    uVar17 = *(uint *)(param_1 + 9);
    uVar16 = (ulong)(uVar17 & 0x10);
    if (((uVar17 & 0x10) != 0) && (uVar16 = 0x20000, (uVar17 & 1) != 0)) {
      uVar16 = (ulong)(*(long *)(lVar12 + 0x58) != 0) << 0x11;
    }
    uVar11 = 0xffffff9c;
    if ((uVar17 & 0x204) == 0x200) {
      uVar11 = (ulong)*(uint *)((long)param_1 + 0x2c);
    }
    lVar13 = opendirat(uVar11,*(undefined8 *)(lVar12 + 0x30),uVar16,&uStack68);
    *(long *)(lVar12 + 0x18) = lVar13;
    if (lVar13 == 0) goto joined_r0x00107d95;
    if (*(short *)(lVar12 + 0x70) == 0xb) {
      uVar6 = fts_stat(param_1,lVar12,0);
      *(undefined2 *)(lVar12 + 0x70) = uVar6;
    }
    else {
      if ((*(uint *)(param_1 + 9) & 0x100) != 0) {
        leave_dir_isra_12((ulong)*(uint *)(param_1 + 9),param_1 + 0xb,lVar12);
        fts_stat(param_1,lVar12,0);
        cVar5 = enter_dir_isra_10((ulong)*(uint *)(param_1 + 9),param_1 + 0xb,lVar12);
        if (cVar5 == '\0') {
          puVar14 = (undefined4 *)func_0x001019a0();
          lStack152 = 0;
          *puVar14 = 0xc;
          goto code_r0x00107b85;
        }
      }
    }
    uStack112 = (ulong)(-(uint)(param_1[8] == 0) & 0x186a1) - 1;
    if (param_2 == 2) {
code_r0x00107e00:
      cStack73 = 0;
      uVar17 = *(uint *)(param_1 + 9);
      goto code_r0x0010762b;
    }
    if ((((*(uint *)(param_1 + 9) & 0x38) == 0x18) && (*(long *)(lVar12 + 0x88) == 2)) &&
       (iVar7 = leaf_optimization(lVar12,(ulong)uStack68), iVar7 != 0)) {
      if (param_2 != 3) goto code_r0x00107e00;
      bVar2 = false;
      bVar18 = true;
    }
    else {
      bVar18 = param_2 == 3;
      bVar2 = true;
    }
    if ((*(byte *)((long)param_1 + 0x49) & 2) != 0) {
      uStack68 = rpl_fcntl((ulong)uStack68,0x406,3);
    }
    if (((int)uStack68 < 0) ||
       (iVar7 = fts_safe_changedir(param_1,lVar12,(ulong)uStack68,0), iVar7 != 0)) {
      if ((bVar18) && (bVar2)) {
        puVar14 = (undefined4 *)func_0x001019a0();
        *(undefined4 *)(lVar12 + 0x40) = *puVar14;
      }
      *(ushort *)(lVar12 + 0x72) = *(ushort *)(lVar12 + 0x72) | 1;
      func_0x00101b60();
      uVar17 = *(uint *)(param_1 + 9);
      *(undefined8 *)(lVar12 + 0x18) = 0;
      if (((uVar17 & 0x200) != 0) && (-1 < (int)uStack68)) {
        func_0x00101b50();
        uVar17 = *(uint *)(param_1 + 9);
      }
      *(undefined8 *)(lVar12 + 0x18) = 0;
      cStack73 = 0;
      goto code_r0x0010762b;
    }
  }
  else {
    uStack68 = func_0x00101bc0();
    if ((int)uStack68 < 0) {
      func_0x00101b60(*(undefined8 *)(lVar12 + 0x18));
      *(undefined8 *)(lVar12 + 0x18) = 0;
joined_r0x00107d95:
      if (param_2 == 3) {
        *(undefined2 *)(lVar12 + 0x70) = 4;
        puVar14 = (undefined4 *)func_0x001019a0();
        *(undefined4 *)(lVar12 + 0x40) = *puVar14;
      }
      lStack152 = 0;
      goto code_r0x00107b85;
    }
    if (param_1[8] == 0) {
      uStack112 = 100000;
      cStack73 = 1;
      uVar17 = *(uint *)(param_1 + 9);
      goto code_r0x0010762b;
    }
    uStack112 = -1;
  }
  uVar17 = *(uint *)(param_1 + 9);
  cStack73 = 1;
code_r0x0010762b:
  lVar13 = *(long *)(lVar12 + 0x48);
  puStack104 = (undefined *)0x0;
  lStack96 = lVar13 + -1;
  if (*(char *)(*(long *)(lVar12 + 0x38) + -1 + lVar13) != '/') {
    lStack96 = lVar13;
  }
  if ((uVar17 & 4) != 0) {
    puStack104 = (undefined *)(lStack96 + param_1[4]) + 1;
    *(undefined *)(lStack96 + param_1[4]) = 0x2f;
  }
  cStack74 = 0;
  cStack75 = 0;
  lStack160 = 0;
  lStack152 = 0;
  uStack144 = lStack96 + 1;
  uStack128 = param_1[6] - uStack144;
  uVar16 = 0;
  lStack120 = *(long *)(lVar12 + 0x58) + 1;
  lVar13 = lStack160;
  lStack136 = lVar12;
code_r0x0010778f:
  do {
    lStack160 = lVar13;
    unaff_R13 = *(long *)(lStack136 + 0x18);
    if (unaff_R13 == 0) goto joined_r0x00107c70;
    piVar9 = (int *)func_0x001019a0();
    *piVar9 = 0;
    puVar10 = (undefined8 *)func_0x00101c10(unaff_R13);
    if (puVar10 == (undefined8 *)0x0) {
      if (*piVar9 != 0) {
        *(int *)(lStack136 + 0x40) = *piVar9;
        if ((uVar16 != 0) || (uVar6 = 4, lVar1 != 0)) {
          uVar6 = 7;
        }
        *(undefined2 *)(lStack136 + 0x70) = uVar6;
      }
      if (*(long *)(lStack136 + 0x18) == 0) goto joined_r0x00107c70;
      func_0x00101b60();
      *(undefined8 *)(lStack136 + 0x18) = 0;
      goto joined_r0x00107c70;
    }
  } while ((((*(byte *)(param_1 + 9) & 0x20) == 0) && (*(char *)((long)puVar10 + 0x13) == '.')) &&
          ((lVar13 = lStack160, *(char *)((long)puVar10 + 0x14) == '\0' ||
           (*(short *)((long)puVar10 + 0x14) == 0x2e))));
  uVar11 = func_0x00101a80((long)puVar10 + 0x13);
  unaff_R13 = fts_alloc(param_1,(long)puVar10 + 0x13,uVar11);
  if (unaff_R13 == 0) {
code_r0x00107c10:
    iVar7 = *piVar9;
    func_0x00101da0(unaff_R13);
    fts_lfree(lStack152);
    func_0x00101b60(*(undefined8 *)(lStack136 + 0x18));
    *(undefined8 *)(lStack136 + 0x18) = 0;
    lStack152 = 0;
    *(undefined2 *)(lStack136 + 0x70) = 7;
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
    *piVar9 = iVar7;
  }
  else {
    if (uStack128 <= uVar11) {
      uStack128 = param_1[4];
      cVar5 = fts_palloc_isra_2(param_1 + 4,param_1 + 6,lStack96 + 2 + uVar11);
      if (cVar5 == '\0') goto code_r0x00107c10;
      puVar4 = puStack104;
      if ((param_1[4] != uStack128) &&
         (cStack75 = cVar5, puVar4 = (undefined *)(param_1[4] + uStack144),
         (*(byte *)(param_1 + 9) & 4) == 0)) {
        puVar4 = puStack104;
      }
      puStack104 = puVar4;
      uStack128 = param_1[6] - uStack144;
    }
    if (!CARRY8(uVar11,uStack144)) {
      *(long *)(unaff_R13 + 0x58) = lStack120;
      lVar12 = *param_1;
      *(long *)(unaff_R13 + 0x48) = uVar11 + uStack144;
      *(long *)(unaff_R13 + 8) = lVar12;
      *(undefined8 *)(unaff_R13 + 0x80) = *puVar10;
      uVar17 = *(uint *)(param_1 + 9);
      if ((uVar17 & 4) == 0) {
        *(long *)(unaff_R13 + 0x30) = unaff_R13 + 0x108;
      }
      else {
        *(undefined8 *)(unaff_R13 + 0x30) = *(undefined8 *)(unaff_R13 + 0x38);
        func_0x00101cc0(puStack104,unaff_R13 + 0x108,*(long *)(unaff_R13 + 0x60) + 1);
        uVar17 = *(uint *)(param_1 + 9);
      }
      if ((param_1[8] != 0) && ((uVar17 & 0x400) == 0)) {
        uVar6 = fts_stat(param_1,unaff_R13,0);
        *(undefined2 *)(unaff_R13 + 0x70) = uVar6;
        uVar11 = uVar16;
        goto code_r0x00107751;
      }
      uVar15 = (uint)*(byte *)((long)puVar10 + 0x12) - 1;
      uVar11 = (ulong)uVar15;
      if (((uVar17 & 0x18) == 0x18) && ((*(byte *)((long)puVar10 + 0x12) & 0xfb) != 0)) {
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
    fts_lfree(lStack152);
    func_0x00101b60(*(undefined8 *)(lStack136 + 0x18));
    *(undefined8 *)(lStack136 + 0x18) = 0;
    lStack152 = 0;
    *(undefined2 *)(lStack136 + 0x70) = 7;
    *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
    *piVar9 = 0x24;
  }
code_r0x00107b85:
  uVar16 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar16 == 0) {
    return lStack152;
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
  if (lStack152 != 0) {
    *(long *)(lStack160 + 0x10) = unaff_R13;
    lVar12 = lStack152;
  }
  lStack152 = lVar12;
  if ((uVar11 == 10000) && (param_1[8] == 0)) {
    lVar12 = filesystem_type(lStack136,(ulong)uStack68);
    if ((lVar12 == 0x1021994) || ((lVar12 == 0xff534d42 || (lVar12 == 0x6969)))) {
      cStack74 = '\0';
      goto code_r0x0010777b;
    }
    uVar16 = 0x2711;
    cStack74 = '\x01';
    lVar13 = unaff_R13;
    if (0x2711 < uStack112) goto code_r0x0010778f;
  }
  else {
code_r0x0010777b:
    uVar16 = uVar11 + 1;
    lVar13 = unaff_R13;
    if (uVar16 < uStack112) goto code_r0x0010778f;
  }
  uVar16 = uVar11 + 1;
joined_r0x00107c70:
  if (cStack75 != '\0') {
    lVar12 = param_1[1];
    lVar13 = param_1[4];
    while (lVar3 = lStack152, lVar12 != 0) {
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
  if ((*(byte *)(param_1 + 9) & 4) != 0) {
    if ((param_1[6] == uStack144) || (uVar16 == 0)) {
      puStack104 = puStack104 + -1;
    }
    *puStack104 = 0;
  }
  if ((lVar1 == 0) && (cStack73 != '\0')) {
    if ((param_2 == 1) || (uVar16 == 0)) {
      if (*(long *)(lStack136 + 0x58) == 0) {
        iVar7 = restore_initial_cwd(param_1);
      }
      else {
        iVar7 = fts_safe_changedir(param_1,*(undefined8 *)(lStack136 + 8),0xffffffff,&UNK_0010b4ae);
      }
      if (iVar7 == 0) goto code_r0x00107d10;
      *(undefined2 *)(lStack136 + 0x70) = 7;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
      fts_lfree(lStack152);
      lStack152 = 0;
    }
    else {
code_r0x00107cb6:
      if (cStack74 == '\0') {
        if ((param_1[8] != 0) && (uVar16 != 1)) {
          lStack152 = fts_sort(param_1,lStack152,uVar16);
        }
      }
      else {
        param_1[8] = 0x106a10;
        lStack152 = fts_sort(param_1,lStack152,uVar16);
        param_1[8] = 0;
      }
    }
  }
  else {
code_r0x00107d10:
    if (uVar16 != 0) goto code_r0x00107cb6;
    if (((param_2 == 3) && (*(short *)(lStack136 + 0x70) != 7)) &&
       (*(short *)(lStack136 + 0x70) != 4)) {
      *(undefined2 *)(lStack136 + 0x70) = 6;
    }
    fts_lfree(lStack152);
    lStack152 = 0;
  }
  goto code_r0x00107b85;
}

