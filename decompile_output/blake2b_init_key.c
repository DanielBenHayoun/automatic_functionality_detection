
undefined8 blake2b_init_key(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_RDX;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined8 auStack168 [17];
  long lStack32;
  
  bVar5 = 0;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 - 1U < 0x40) && (param_4 - 1U < 0x40)) && (param_3 != 0)) {
    iVar1 = blake2b_init_param(0);
    if (-1 < iVar1) {
      lVar3 = 0x10;
      puVar4 = auStack168;
      while (lVar3 != 0) {
        lVar3 = lVar3 + -1;
        *puVar4 = 0;
        puVar4 = puVar4 + (ulong)bVar5 * 0x1ffffffffffffffe + 1;
      }
      func_0x001019f0(auStack168,param_3,param_4,0x80);
      blake2b_update_part_3(param_1,auStack168,0x80);
      (*memset_v_3512)(auStack168,0,0x80);
      uVar2 = 0;
      goto code_r0x0010533e;
    }
  }
  uVar2 = 0xffffffff;
code_r0x0010533e:
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  func_0x001018e0();
  if (extraout_RDX != 0) {
    blake2b_update_part_3();
    return 0;
  }
  return 0;
}

