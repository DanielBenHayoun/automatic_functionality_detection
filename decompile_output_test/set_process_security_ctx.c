
ulong set_process_security_ctx
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5
                )

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  
  if (*(char *)(param_5 + 0x25) != '\0') {
    puVar1 = (uint *)func_0x00102770();
    if ((*(char *)(param_5 + 0x23) == '\0') || (bVar5 = *(byte *)(param_5 + 0x26), bVar5 != 0)) {
      *puVar1 = 0x5f;
      uVar2 = quotearg_style(4,param_1);
      uVar3 = func_0x001028e0(0,&UNK_00114810,5);
      func_0x00102cb0(0,(ulong)*puVar1,uVar3,uVar2);
      bVar5 = *(byte *)(param_5 + 0x26);
    }
    else {
      *puVar1 = 0x5f;
    }
    return (ulong)((uint)bVar5 ^ 1);
  }
  bVar5 = (byte)param_4 & *(byte *)(param_5 + 0x21);
  if (bVar5 == 0) {
    return 1;
  }
  puVar4 = (undefined4 *)func_0x00102770();
  *puVar4 = 0x5f;
  return param_4 & 0xffffff00 | (ulong)bVar5;
}

