
ulong base64_decode_alloc_ctx
                (long param_1,undefined8 param_2,ulong param_3,long *param_4,long *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long lStack56;
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = (param_3 >> 2) * 3 + 3;
  lStack56 = lVar4;
  lVar1 = func_0x00101780();
  *param_4 = lVar1;
  if (lVar1 != 0) {
    uVar2 = base64_decode_ctx(param_1,param_2,param_3,lVar1,&lStack56);
    if ((char)uVar2 == '\0') {
      param_1 = *param_4;
      func_0x00101590();
      *param_4 = 0;
      uVar2 = uVar2 & 0xff;
      goto code_r0x0010431d;
    }
    lVar4 = param_1;
    if (param_5 != (long *)0x0) {
      *param_5 = lStack56;
      goto code_r0x0010431d;
    }
  }
  param_1 = lVar4;
  uVar2 = 1;
code_r0x0010431d:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  uVar3 = func_0x00101660();
  file_name = param_1;
  return uVar3;
}

