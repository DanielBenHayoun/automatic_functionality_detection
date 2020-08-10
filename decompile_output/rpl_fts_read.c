
long rpl_fts_read(long *param_1)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong extraout_RDX;
  long lVar12;
  uint uVar13;
  
  lVar9 = *param_1;
  if (lVar9 == 0) {
    return 0;
  }
  uVar13 = *(uint *)(param_1 + 9);
  uVar11 = (ulong)uVar13;
  if ((uVar13 & 0x2000) != 0) {
    return 0;
  }
  sVar5 = *(short *)(lVar9 + 0x74);
  *(undefined2 *)(lVar9 + 0x74) = 3;
  if (sVar5 == 1) {
    uVar4 = fts_stat(param_1,lVar9,0);
    *(undefined2 *)(lVar9 + 0x70) = uVar4;
    return lVar9;
  }
  sVar1 = *(short *)(lVar9 + 0x70);
  lVar12 = lVar9;
  if (sVar5 == 2) {
    if ((ushort)(sVar1 - 0xcU) < 2) {
      sVar5 = fts_stat(param_1,lVar9,1);
      *(short *)(lVar9 + 0x70) = sVar5;
      if (sVar5 != 1) {
        *param_1 = lVar9;
        if (sVar5 == 0xb) goto code_r0x001086b8;
        return lVar9;
      }
      if ((*(uint *)(param_1 + 9) & 4) == 0) {
        iVar6 = diropen_isra_6((ulong)*(uint *)((long)param_1 + 0x2c),(ulong)*(uint *)(param_1 + 9),
                               &UNK_0010b4af);
        *(int *)(lVar9 + 0x44) = iVar6;
        if (iVar6 < 0) {
          puVar10 = (undefined4 *)func_0x001019a0();
          uVar2 = *puVar10;
          *(undefined2 *)(lVar9 + 0x70) = 7;
          *(undefined4 *)(lVar9 + 0x40) = uVar2;
          *param_1 = lVar9;
          return lVar9;
        }
        *(ushort *)(lVar9 + 0x72) = *(ushort *)(lVar9 + 0x72) | 2;
        sVar5 = *(short *)(lVar9 + 0x70);
        goto code_r0x0010882e;
      }
      *param_1 = lVar9;
code_r0x00108846:
      lVar12 = lVar9;
      if (*(long *)(lVar9 + 0x58) == 0) {
code_r0x0010884d:
        param_1[3] = *(long *)(lVar12 + 0x78);
      }
code_r0x00108856:
      cVar3 = enter_dir_isra_10((ulong)*(uint *)(param_1 + 9),param_1 + 0xb,lVar12);
      if (cVar3 != '\0') {
        return lVar12;
      }
      puVar10 = (undefined4 *)func_0x001019a0();
      *puVar10 = 0xc;
      return 0;
    }
    if (sVar1 == 1) goto code_r0x00108623;
  }
  else {
    if (sVar1 == 1) {
      if (sVar5 == 4) goto code_r0x0010863b;
code_r0x00108623:
      if ((uVar13 & 0x40) == 0) goto code_r0x001086d8;
      if (*(long *)(lVar9 + 0x78) == param_1[3]) goto code_r0x001086d8;
code_r0x0010863b:
      if ((*(byte *)(lVar9 + 0x72) & 2) != 0) {
        func_0x00101b50((ulong)*(uint *)(lVar9 + 0x44));
      }
      if (param_1[1] != 0) {
        fts_lfree();
        param_1[1] = 0;
      }
      uVar13 = *(uint *)(param_1 + 9);
      *(undefined2 *)(lVar9 + 0x70) = 6;
      leave_dir_isra_12((ulong)uVar13,param_1 + 0xb,lVar9);
      return lVar9;
    }
  }
  while (lVar9 = *(long *)(lVar12 + 0x10), lVar9 != 0) {
    *param_1 = lVar9;
    func_0x00101da0(lVar12);
    if (*(long *)(lVar9 + 0x58) == 0) {
      iVar6 = restore_initial_cwd(param_1);
      if (iVar6 != 0) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
        return 0;
      }
      if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
        func_0x00101da0();
      }
      else {
        if (param_1[0xb] != 0) {
          hash_free();
        }
      }
      lVar12 = lVar9 + 0x108;
      lVar7 = param_1[4];
      *(long *)(lVar9 + 0x48) = *(long *)(lVar9 + 0x60);
      func_0x00101cc0(lVar7,lVar12,*(long *)(lVar9 + 0x60) + 1);
      lVar7 = func_0x00101b00(lVar12,0x2f);
      if ((lVar7 != 0) && ((lVar12 != lVar7 || (*(char *)(lVar9 + 0x109) != '\0')))) {
        lVar8 = func_0x00101a80(lVar7 + 1);
        func_0x00101cc0(lVar12,lVar7 + 1,lVar8 + 1);
        *(long *)(lVar9 + 0x60) = lVar8;
      }
      lVar12 = param_1[4];
      uVar13 = *(uint *)(param_1 + 9);
      *(long *)(lVar9 + 0x38) = lVar12;
      *(long *)(lVar9 + 0x30) = lVar12;
      setup_dir_isra_4((ulong)uVar13,param_1 + 0xb);
      sVar5 = *(short *)(lVar9 + 0x70);
      goto code_r0x0010882e;
    }
    lVar12 = lVar9;
    if (*(short *)(lVar9 + 0x74) != 4) {
      if (*(short *)(lVar9 + 0x74) != 2) goto code_r0x00108892;
      sVar5 = fts_stat(param_1,lVar9,1);
      *(short *)(lVar9 + 0x70) = sVar5;
      if ((sVar5 == 1) && ((*(uint *)(param_1 + 9) & 4) == 0)) {
        iVar6 = diropen_isra_6((ulong)*(uint *)((long)param_1 + 0x2c),(ulong)*(uint *)(param_1 + 9),
                               &UNK_0010b4af);
        *(int *)(lVar9 + 0x44) = iVar6;
        if (iVar6 < 0) {
          puVar10 = (undefined4 *)func_0x001019a0();
          uVar2 = *puVar10;
          *(undefined2 *)(lVar9 + 0x70) = 7;
          *(undefined4 *)(lVar9 + 0x40) = uVar2;
        }
        else {
          *(ushort *)(lVar9 + 0x72) = *(ushort *)(lVar9 + 0x72) | 2;
        }
      }
      *(undefined2 *)(lVar9 + 0x74) = 3;
      goto code_r0x00108892;
    }
  }
  lVar9 = *(long *)(lVar12 + 8);
  if (*(long *)(lVar9 + 0x18) != 0) {
    lVar7 = *(long *)(lVar9 + 0x48);
    *param_1 = lVar9;
    *(undefined *)(param_1[4] + lVar7) = 0;
    lVar9 = fts_build(param_1,3);
    if (lVar9 != 0) {
      func_0x00101da0(lVar12);
      goto code_r0x00108892;
    }
    if ((*(byte *)((long)param_1 + 0x49) & 0x20) != 0) {
      return 0;
    }
    lVar9 = *(long *)(lVar12 + 8);
  }
  *param_1 = lVar9;
  func_0x00101da0();
  if (*(long *)(lVar9 + 0x58) == -1) {
    func_0x00101da0(lVar9);
    puVar10 = (undefined4 *)func_0x001019a0();
    *puVar10 = 0;
    *param_1 = 0;
    return 0;
  }
  if (*(short *)(lVar9 + 0x70) == 0xb) {
code_r0x001086cf:
    func_0x00101990();
    uVar11 = extraout_RDX;
code_r0x001086d8:
    if (param_1[1] == 0) {
code_r0x001088f8:
      lVar9 = fts_build(param_1,3);
      param_1[1] = lVar9;
      if (lVar9 == 0) {
        uVar13 = *(uint *)(param_1 + 9);
        if ((uVar13 & 0x2000) == 0) {
          if ((*(int *)(lVar12 + 0x40) != 0) && (*(short *)(lVar12 + 0x70) != 4)) {
            *(undefined2 *)(lVar12 + 0x70) = 7;
          }
          leave_dir_isra_12((ulong)uVar13,param_1 + 0xb,lVar12);
          return lVar12;
        }
        return 0;
      }
    }
    else {
      if ((uVar11 & 0x1000) != 0) {
        *(uint *)(param_1 + 9) = (uint)uVar11 & 0xffffefff;
        fts_lfree();
        param_1[1] = 0;
        goto code_r0x001088f8;
      }
      iVar6 = fts_safe_changedir(param_1,lVar12,0xffffffff,*(undefined8 *)(lVar12 + 0x30));
      if (iVar6 == 0) {
        lVar9 = param_1[1];
      }
      else {
        puVar10 = (undefined4 *)func_0x001019a0();
        uVar2 = *puVar10;
        *(ushort *)(lVar12 + 0x72) = *(ushort *)(lVar12 + 0x72) | 1;
        *(undefined4 *)(lVar12 + 0x40) = uVar2;
        lVar9 = param_1[1];
        lVar12 = lVar9;
        while (lVar12 != 0) {
          *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(*(long *)(lVar12 + 8) + 0x30);
          lVar12 = *(long *)(lVar12 + 0x10);
        }
      }
    }
    param_1[1] = 0;
code_r0x00108892:
    lVar12 = *(long *)(*(long *)(lVar9 + 8) + 0x48);
    if (*(char *)(*(long *)(*(long *)(lVar9 + 8) + 0x38) + -1 + lVar12) == '/') {
      lVar12 = lVar12 + -1;
    }
    lVar7 = param_1[4];
    *(undefined *)(lVar12 + lVar7) = 0x2f;
    func_0x00101cc0((undefined *)(lVar12 + lVar7) + 1,lVar9 + 0x108,*(long *)(lVar9 + 0x60) + 1);
    sVar5 = *(short *)(lVar9 + 0x70);
code_r0x0010882e:
    *param_1 = lVar9;
    lVar12 = lVar9;
    if (sVar5 == 0xb) {
code_r0x001086b8:
      if (*(long *)(lVar12 + 0xa8) != 2) {
        if (*(long *)(lVar12 + 0xa8) == 1) {
          return lVar12;
        }
        goto code_r0x001086cf;
      }
      lVar9 = *(long *)(lVar12 + 8);
      if (((*(long *)(lVar9 + 0x68) == 0) && ((*(uint *)(param_1 + 9) & 0x18) == 0x18)) &&
         (iVar6 = leaf_optimization(lVar9,(ulong)*(uint *)((long)param_1 + 0x2c)), iVar6 == 2)) {
        sVar5 = *(short *)(lVar12 + 0x70);
        goto code_r0x0010883c;
      }
      sVar5 = fts_stat(param_1,lVar12,0);
      *(short *)(lVar12 + 0x70) = sVar5;
      if ((*(uint *)(lVar12 + 0x90) & 0xf000) == 0x4000) {
        if (*(long *)(lVar12 + 0x58) == 0) {
          if (sVar5 != 1) {
            return lVar12;
          }
          goto code_r0x0010884d;
        }
        uVar11 = *(long *)(lVar9 + 0x68) - 1;
        if (uVar11 < 0xfffffffffffffffe) {
          *(ulong *)(lVar9 + 0x68) = uVar11;
        }
        if (sVar5 != 1) {
          return lVar12;
        }
        goto code_r0x00108856;
      }
    }
code_r0x0010883c:
    lVar9 = lVar12;
    if (sVar5 != 1) {
      return lVar12;
    }
    goto code_r0x00108846;
  }
  *(undefined *)(param_1[4] + *(long *)(lVar9 + 0x48)) = 0;
  if (*(long *)(lVar9 + 0x58) == 0) {
    iVar6 = restore_initial_cwd();
joined_r0x0010897a:
    if (iVar6 != 0) {
      puVar10 = (undefined4 *)func_0x001019a0();
      uVar13 = *(uint *)(param_1 + 9) | 0x2000;
      *(undefined4 *)(lVar9 + 0x40) = *puVar10;
      *(uint *)(param_1 + 9) = uVar13;
      goto code_r0x001085d8;
    }
  }
  else {
    if ((*(ushort *)(lVar9 + 0x72) & 2) == 0) {
      if ((*(ushort *)(lVar9 + 0x72) & 1) == 0) {
        iVar6 = fts_safe_changedir(param_1,*(undefined8 *)(lVar9 + 8),0xffffffff);
        goto joined_r0x0010897a;
      }
    }
    else {
      if ((*(uint *)(param_1 + 9) & 4) == 0) {
        if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
          iVar6 = func_0x00101c70();
          if (iVar6 != 0) {
            puVar10 = (undefined4 *)func_0x001019a0();
            *(undefined4 *)(lVar9 + 0x40) = *puVar10;
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x2000;
          }
        }
        else {
          cwd_advance_fd(param_1,(ulong)*(uint *)(lVar9 + 0x44),1);
        }
      }
      func_0x00101b50();
    }
  }
  uVar13 = *(uint *)(param_1 + 9);
code_r0x001085d8:
  if (*(short *)(lVar9 + 0x70) != 2) {
    if (*(int *)(lVar9 + 0x40) == 0) {
      *(undefined2 *)(lVar9 + 0x70) = 6;
      leave_dir_isra_12((ulong)uVar13,param_1 + 0xb,lVar9);
      uVar13 = *(uint *)(param_1 + 9);
    }
    else {
      *(undefined2 *)(lVar9 + 0x70) = 7;
    }
  }
  if ((uVar13 & 0x2000) != 0) {
    return 0;
  }
  return lVar9;
}

