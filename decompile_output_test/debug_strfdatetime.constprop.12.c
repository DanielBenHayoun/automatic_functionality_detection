
undefined * debug_strfdatetime_constprop_12(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  undefined auStack72 [40];
  long lStack32;
  
  puVar6 = (undefined *)0x64;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = param_3;
  iVar2 = nstrftime(param_3,100,&UNK_00110124,param_1,0,0);
  if (((param_2 != 0) && (iVar2 < 100)) && (*(long *)(param_2 + 0xd0) != 0)) {
    uVar4 = time_zone_str((ulong)*(uint *)(param_2 + 0x18),auStack72);
    lVar7 = iVar2 + param_3;
    puVar6 = (undefined *)(long)(100 - iVar2);
    func_0x00102700(lVar7,puVar6,1,0xffffffffffffffff,&UNK_0011013e,uVar4);
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)param_3;
  }
  func_0x00102830();
  if (*(char *)(lVar7 + 0xe0) == '\0') {
    *puVar6 = 0;
    uVar1 = *(uint *)(lVar7 + 0x10);
    if (uVar1 < 7) {
      uVar5 = 1;
      lVar7 = 100;
      puVar8 = puVar6;
      goto code_r0x001048f1;
    }
  }
  else {
    uVar5 = *(long *)(lVar7 + 8) + 1;
    if (uVar5 < 0xe) {
      uVar3 = func_0x00102880(puVar6,100,&UNK_00110090,ordinal_values_5108 + uVar5 * 0xb);
    }
    else {
      uVar3 = func_0x00102700(puVar6,100,1,0xffffffffffffffff,&UNK_001101b2);
    }
    uVar1 = *(uint *)(lVar7 + 0x10);
    if ((uVar1 < 7) && (uVar3 < 100)) {
      uVar5 = (ulong)(uVar3 == 0);
      lVar7 = (long)(int)(100 - uVar3);
      puVar8 = puVar6 + (int)uVar3;
code_r0x001048f1:
      func_0x00102700(puVar8,lVar7,1,0xffffffffffffffff,&UNK_0011008f + uVar5,
                      days_values_5109 + (long)(int)uVar1 * 4);
      return puVar6;
    }
  }
  return puVar6;
}

