
ulong mktime_z(long *param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 extraout_RDX;
  ulong uVar9;
  long *unaff_RBP;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *unaff_R12;
  long in_FS_OFFSET;
  ulong uStack2168;
  long alStack2160 [251];
  long lStack152;
  long *plStack136;
  long *plStack128;
  long *plStack120;
  long lStack96;
  uint uStack88;
  uint uStack84;
  uint uStack80;
  uint uStack76;
  uint uStack72;
  uint uStack68;
  int iStack56;
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  plVar10 = param_2;
  if (param_1 == (long *)0x0) {
    plVar11 = param_2;
    lVar6 = func_0x00102a70();
    param_1 = unaff_RBP;
  }
  else {
    plVar11 = param_1;
    unaff_R12 = (long *)set_tz();
    if (unaff_R12 != (long *)0x0) {
      lStack96 = func_0x00102a20(param_2);
      if (lStack96 == -1) {
        plVar10 = (long *)&uStack88;
        plVar11 = &lStack96;
        lVar6 = func_0x001027a0();
        if (lVar6 != 0) {
          uVar2 = *(uint *)(param_2 + 4);
          plVar11 = (long *)((ulong)plVar11 & 0xffffffffffffff00 | (ulong)(uVar2 == 0));
          plVar10 = (long *)((ulong)plVar10 & 0xffffffffffffff00 | (ulong)(iStack56 == 0));
          if (((((uVar2 == 0) == (iStack56 == 0)) || ((int)uVar2 < 0)) || (iStack56 < 0)) &&
             ((*(uint *)param_2 ^ uStack88 | *(uint *)((long)param_2 + 4) ^ uStack84 |
               *(uint *)(param_2 + 1) ^ uStack80 | *(uint *)((long)param_2 + 0xc) ^ uStack76 |
               *(uint *)(param_2 + 2) ^ uStack72 | *(uint *)((long)param_2 + 0x14) ^ uStack68) == 0)
             ) goto code_r0x0010d6bb;
        }
      }
      else {
code_r0x0010d6bb:
        plVar10 = param_2;
        plVar11 = param_1;
        cVar3 = save_abbr(param_1,param_2);
        if (cVar3 == '\0') {
          lStack96 = -1;
        }
      }
      lVar6 = lStack96;
      if ((unaff_R12 == (long *)0x1) ||
         (plVar11 = unaff_R12, cVar3 = revert_tz_part_1(), lVar6 = lStack96, cVar3 != '\0'))
      goto code_r0x0010d6ee;
    }
    lVar6 = -1;
  }
code_r0x0010d6ee:
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
  func_0x00102850();
  uStack2168 = 2000;
  lStack152 = *(long *)(in_FS_OFFSET + 0x28);
  plStack136 = param_2;
  plStack128 = param_1;
  plStack120 = unaff_R12;
  plVar10 = (long *)vasnprintf(alStack2160,&uStack2168,plVar10,extraout_RDX);
  uVar9 = uStack2168;
  if (plVar10 != (long *)0x0) {
    plVar12 = plVar10;
    uVar4 = func_0x00102af0(plVar10,1,uStack2168,plVar11);
    if (uVar4 < uVar9) {
      uVar9 = 0xffffffff;
      if (plVar10 != alStack2160) {
        puVar5 = (undefined4 *)func_0x00102780();
        uVar1 = *puVar5;
        func_0x00102750();
        *puVar5 = uVar1;
        plVar12 = plVar10;
      }
      goto code_r0x0010d846;
    }
    if (plVar10 != alStack2160) {
      func_0x00102750();
      plVar12 = plVar10;
    }
    if (uVar9 < 0x80000000) goto code_r0x0010d846;
    puVar5 = (undefined4 *)func_0x00102780();
    *puVar5 = 0x4b;
  }
  uVar9 = 0xffffffff;
  fseterr();
  plVar12 = plVar11;
code_r0x0010d846:
  if (lStack152 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9 & 0xffffffff;
  }
  func_0x00102850();
  lVar6 = func_0x001027c0();
  uVar2 = *(uint *)plVar12;
  uVar7 = rpl_fclose(plVar12);
  if ((uVar2 & 0x20) != 0) {
    if ((int)uVar7 != 0) {
      return 0xffffffff;
    }
    puVar5 = (undefined4 *)func_0x00102780();
    *puVar5 = 0;
    return 0xffffffff;
  }
  if (((int)uVar7 != 0) && (uVar7 = 0xffffffff, lVar6 == 0)) {
    piVar8 = (int *)func_0x00102780();
    return (ulong)-(uint)(*piVar8 != 9);
  }
  return uVar7;
}

