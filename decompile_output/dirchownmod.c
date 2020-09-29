
ulong dirchownmod(uint param_1,ulong param_2,int param_3,ulong param_4,uint param_5,uint param_6,
                 uint param_7)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  long in_FS_OFFSET;
  undefined auStack216 [24];
  uint uStack192;
  int iStack188;
  uint uStack184;
  long lStack64;
  
  uVar3 = (ulong)param_1;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_1 < 0) {
    uVar4 = 1;
    uVar1 = func_0x00101920(1,param_2,auStack216);
    uVar2 = (ulong)uVar1;
    if (uVar1 != 0) goto code_r0x00106144;
    if ((uStack192 & 0xf000) != 0x4000) {
      puVar5 = (undefined4 *)func_0x00101750();
      uVar2 = 0xffffffff;
      *puVar5 = 0x14;
      goto code_r0x00106144;
    }
code_r0x001060d1:
    iVar6 = (int)(param_4 & 0xffffffff);
    if (((iVar6 == -1) || (iStack188 == iVar6)) &&
       ((param_5 == 0xffffffff || (uStack184 == param_5)))) {
code_r0x001061c1:
      uVar2 = 0;
    }
    else {
      if ((int)param_1 < 0) {
        uVar4 = param_2;
        if (param_3 == -1) {
          uVar1 = func_0x001019b0();
        }
        else {
          uVar1 = func_0x00101970();
        }
        uVar2 = (ulong)uVar1;
        if (uVar1 != 0) goto code_r0x00106144;
      }
      else {
        uVar4 = uVar3;
        uVar1 = func_0x00101a50(uVar3,param_4 & 0xffffffff,(ulong)param_5);
        uVar2 = (ulong)uVar1;
        if (uVar1 != 0) goto code_r0x00106260;
      }
      if ((uStack192 & 0x49) == 0) goto code_r0x001061c1;
      uVar2 = (ulong)(uStack192 & 0xc00);
    }
    if ((param_7 & (uStack192 ^ param_6 | (uint)uVar2)) == 0) {
      uVar2 = 0;
      if ((int)param_1 < 0) goto code_r0x00106144;
    }
    else {
      if ((int)param_1 < 0) {
        uVar1 = func_0x00101a00();
        uVar2 = (ulong)uVar1;
        uVar4 = param_2;
        goto code_r0x00106144;
      }
      uVar1 = func_0x001019f0(uVar3,(ulong)(~param_7 & uStack192 & 0xfff | param_6),uVar2,
                              (ulong)(uStack192 & 0xfff));
      uVar2 = (ulong)uVar1;
      if (uVar1 != 0) goto code_r0x00106260;
    }
    uVar1 = func_0x001018b0();
    uVar2 = (ulong)uVar1;
    uVar4 = uVar3;
  }
  else {
    uVar4 = 1;
    uVar1 = func_0x00101960(1,(ulong)param_1);
    uVar2 = (ulong)uVar1;
    if (uVar1 == 0) {
      if ((uStack192 & 0xf000) == 0x4000) goto code_r0x001060d1;
      puVar5 = (undefined4 *)func_0x00101750();
      uVar7 = 0x14;
      *puVar5 = 0x14;
      uVar2 = 0xffffffff;
    }
    else {
code_r0x00106260:
      puVar5 = (undefined4 *)func_0x00101750();
      uVar7 = *puVar5;
    }
    func_0x001018b0();
    *puVar5 = uVar7;
    uVar4 = uVar3;
  }
code_r0x00106144:
  if (lStack64 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101830();
    uVar3 = uVar4 & 0xffffffff;
    if ((uint)uVar4 < 3) {
      uVar1 = dup_safer();
      uVar3 = (ulong)uVar1;
      puVar5 = (undefined4 *)func_0x00101750();
      uVar7 = *puVar5;
      func_0x001018b0(uVar4 & 0xffffffff);
      *puVar5 = uVar7;
    }
    return uVar3;
  }
  return uVar2;
}

