
undefined8 blake2b_init(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_RDX;
  long extraout_RDX_00;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_FS_OFFSET;
  byte bVar7;
  undefined8 auStack256 [17];
  long lStack120;
  undefined uStack88;
  undefined8 uStack87;
  undefined8 uStack79;
  undefined uStack71;
  undefined8 uStack70;
  undefined4 uStack62;
  undefined2 uStack58;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined4 uStack40;
  undefined4 uStack36;
  undefined4 uStack32;
  undefined4 uStack28;
  long lStack16;
  
  bVar7 = 0;
  puVar4 = &uStack88;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 + -1 < (undefined *)0x40) {
    uStack88 = SUB81(param_2,0);
    uStack70 = 0;
    uStack87 = 0x10100;
    uStack62 = 0;
    uStack58 = 0;
    uStack79 = 0;
    uStack71 = 0;
    uStack56 = 0;
    uStack52 = 0;
    uStack48 = 0;
    uStack44 = 0;
    uStack40 = 0;
    uStack36 = 0;
    uStack32 = 0;
    uStack28 = 0;
    uVar2 = blake2b_init_param(0);
    param_2 = puVar4;
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  func_0x001018e0();
  lStack120 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 + -1 < (undefined *)0x40) && (param_4 - 1U < 0x40)) && (extraout_RDX != 0)) {
    lVar6 = extraout_RDX;
    iVar1 = blake2b_init_param(0);
    if (-1 < iVar1) {
      lVar3 = 0x10;
      puVar5 = auStack256;
      while (lVar3 != 0) {
        lVar3 = lVar3 + -1;
        *puVar5 = 0;
        puVar5 = puVar5 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
      }
      func_0x001019f0(auStack256,lVar6,param_4,0x80);
      blake2b_update_part_3(param_1,auStack256,0x80);
      (*memset_v_3512)(auStack256,0,0x80);
      uVar2 = 0;
      goto code_r0x0010533e;
    }
  }
  uVar2 = 0xffffffff;
code_r0x0010533e:
  if (lStack120 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  func_0x001018e0();
  if (extraout_RDX_00 != 0) {
    blake2b_update_part_3();
    return 0;
  }
  return 0;
}

