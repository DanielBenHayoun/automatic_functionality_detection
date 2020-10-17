
undefined *
rpl_asprintf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            uint *param_9,byte *param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13
            ,undefined8 param_14)

{
  char in_AL;
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_RDX;
  uint *puVar7;
  long in_FS_OFFSET;
  uint uStack268;
  long lStack264;
  undefined4 uStack216;
  undefined4 uStack212;
  undefined *puStack208;
  undefined *puStack200;
  long lStack192;
  undefined auStack184 [16];
  undefined8 uStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined8 uStack144;
  undefined4 uStack136;
  undefined4 uStack120;
  undefined4 uStack104;
  undefined4 uStack88;
  undefined4 uStack72;
  undefined4 uStack56;
  undefined4 uStack40;
  undefined4 uStack24;
  
  if (in_AL != '\0') {
    uStack136 = param_1;
    uStack120 = param_2;
    uStack104 = param_3;
    uStack88 = param_4;
    uStack72 = param_5;
    uStack56 = param_6;
    uStack40 = param_7;
    uStack24 = param_8;
  }
  lStack192 = *(long *)(in_FS_OFFSET + 0x28);
  puStack208 = &stack0x00000008;
  puStack200 = auStack184;
  uStack216 = 0x10;
  uStack212 = 0x30;
  uStack168 = param_11;
  uStack160 = param_12;
  uStack152 = param_13;
  uStack144 = param_14;
  uVar2 = rpl_vasprintf(param_9,param_10,&uStack216);
  if (lStack192 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar2;
  }
  func_0x00101920();
  lStack264 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == (uint *)0x0) {
    param_9 = &uStack268;
  }
  puVar7 = param_9;
  uVar3 = func_0x00101940(param_9);
  if ((0xfffffffffffffffd < uVar3) && (extraout_RDX != 0)) {
    puVar7 = (uint *)0x0;
    cVar1 = hard_locale(0);
    if (cVar1 == '\0') {
      uVar3 = 1;
      *param_9 = (uint)*param_10;
    }
  }
  if (lStack264 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101920();
    puVar4 = (undefined *)xmalloc(0x21);
    func_0x00101850(puVar4,puVar7 + 0xb,0x20);
    puVar4[0x20] = 0;
    lVar5 = func_0x00101910(puVar4);
    puVar6 = puVar4 + lVar5;
    if (puVar4 < puVar6) {
      do {
        if (puVar6[-1] != ' ') {
          return puVar4;
        }
        puVar6 = puVar6 + -1;
        *puVar6 = 0;
      } while (puVar4 != puVar6);
    }
    return puVar4;
  }
  return (undefined *)uVar3;
}

