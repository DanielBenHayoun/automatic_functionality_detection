
ulong print_group_list(long param_1,ulong param_2,ulong param_3,ulong param_4,byte param_5,
                      byte param_6)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long in_FS_OFFSET;
  uint uStack80;
  long lStack72;
  long lStack64;
  
  param_4 = param_4 & 0xffffffff;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    lVar5 = 0;
    uStack80 = 1;
  }
  else {
    lVar5 = func_0x001016a0(param_2 & 0xffffffff);
    uStack80 = (uint)(lVar5 != 0);
  }
  iVar10 = (int)(param_3 & 0xffffffff);
  uVar3 = print_group(param_3 & 0xffffffff,(ulong)param_5);
  if ((char)uVar3 == '\0') {
    uStack80 = uVar3;
  }
  iVar11 = (int)param_4;
  uVar9 = (ulong)uStack80;
  if (iVar10 != iVar11) {
    pbVar1 = *(byte **)(stdout + 0x28);
    if (pbVar1 < *(byte **)(stdout + 0x30)) {
      *(byte **)(stdout + 0x28) = pbVar1 + 1;
      *pbVar1 = param_6;
    }
    else {
      func_0x00101750(stdout,(ulong)param_6);
    }
    cVar2 = print_group(param_4,(ulong)param_5);
    if (cVar2 == '\0') {
      uVar9 = 0;
    }
  }
  if (lVar5 != 0) {
    param_4 = (ulong)*(uint *)(lVar5 + 0x14);
  }
  iVar4 = xgetgroups(param_1,param_4,&lStack72);
  if (iVar4 < 0) {
    puVar6 = (uint *)func_0x00101640();
    if (param_1 == 0) {
      uVar8 = func_0x001016c0(0,&UNK_00106270,5);
      lVar5 = 0;
      uVar9 = 0;
      func_0x001018d0(0,(ulong)*puVar6,uVar8);
    }
    else {
      uVar8 = quote();
      uVar7 = func_0x001016c0(0,&UNK_00106248,5);
      lVar5 = 0;
      uVar9 = 0;
      func_0x001018d0(0,(ulong)*puVar6,uVar7,uVar8);
    }
  }
  else {
    lVar5 = lStack72;
    if (iVar4 != 0) {
      lVar12 = 0;
      do {
        if ((*(int *)(lVar5 + lVar12) != iVar10) && (*(int *)(lVar5 + lVar12) != iVar11)) {
          pbVar1 = *(byte **)(stdout + 0x28);
          if (pbVar1 < *(byte **)(stdout + 0x30)) {
            *(byte **)(stdout + 0x28) = pbVar1 + 1;
            *pbVar1 = param_6;
          }
          else {
            func_0x00101750(stdout,(ulong)param_6);
          }
          cVar2 = print_group((ulong)*(uint *)(lStack72 + lVar12));
          lVar5 = lStack72;
          if (cVar2 == '\0') {
            uVar9 = 0;
          }
        }
        lVar12 = lVar12 + 4;
      } while ((ulong)(iVar4 - 1) * 4 + 4 != lVar12);
    }
    func_0x00101620();
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
  uVar8 = func_0x001016f0();
  file_name = lVar5;
  return uVar8;
}

