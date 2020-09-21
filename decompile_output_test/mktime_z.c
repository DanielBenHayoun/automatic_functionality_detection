
ulong mktime_z(long *param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long in_FS_OFFSET;
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
  if (param_1 == (long *)0x0) {
    lVar3 = func_0x00101b50();
    goto code_r0x0010761e;
  }
  plVar7 = param_1;
  plVar8 = (long *)set_tz();
  if (plVar8 != (long *)0x0) {
    lStack96 = func_0x00101b00(param_2);
    if (lStack96 == -1) {
      plVar7 = &lStack96;
      lVar3 = func_0x001018b0();
      if (lVar3 != 0) {
        uVar1 = *(uint *)(param_2 + 4);
        plVar7 = (long *)((ulong)plVar7 & 0xffffffffffffff00 | (ulong)(uVar1 == 0));
        if (((((uVar1 == 0) == (iStack56 == 0)) || ((int)uVar1 < 0)) || (iStack56 < 0)) &&
           ((*(uint *)param_2 ^ uStack88 | *(uint *)((long)param_2 + 4) ^ uStack84 |
             *(uint *)(param_2 + 1) ^ uStack80 | *(uint *)((long)param_2 + 0xc) ^ uStack76 |
             *(uint *)(param_2 + 2) ^ uStack72 | *(uint *)((long)param_2 + 0x14) ^ uStack68) == 0))
        goto code_r0x001075eb;
      }
    }
    else {
code_r0x001075eb:
      cVar2 = save_abbr(param_1,param_2);
      plVar7 = param_1;
      if (cVar2 == '\0') {
        lStack96 = -1;
      }
    }
    lVar3 = lStack96;
    param_2 = plVar7;
    if ((plVar8 == (long *)0x1) ||
       (cVar2 = revert_tz_part_1(), lVar3 = lStack96, plVar7 = plVar8, param_2 = plVar8,
       cVar2 != '\0')) goto code_r0x0010761e;
  }
  lVar3 = -1;
  param_2 = plVar7;
code_r0x0010761e:
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
  func_0x00101980();
  lVar3 = func_0x001018d0();
  uVar1 = *(uint *)param_2;
  uVar4 = rpl_fclose(param_2);
  if ((uVar1 & 0x20) != 0) {
    if ((int)uVar4 != 0) {
      return 0xffffffff;
    }
    puVar5 = (undefined4 *)func_0x00101880();
    *puVar5 = 0;
    return 0xffffffff;
  }
  if (((int)uVar4 != 0) && (uVar4 = 0xffffffff, lVar3 == 0)) {
    piVar6 = (int *)func_0x00101880();
    return (ulong)-(uint)(*piVar6 != 9);
  }
  return uVar4;
}

