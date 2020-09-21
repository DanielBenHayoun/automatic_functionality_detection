
ulong close_stream(uint *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  lVar2 = func_0x00101230();
  uVar1 = *param_1;
  uVar3 = rpl_fclose(param_1);
  if ((uVar1 & 0x20) != 0) {
    if ((int)uVar3 == 0) {
      puVar4 = (undefined4 *)func_0x00101200();
      *puVar4 = 0;
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  if (((int)uVar3 != 0) && (uVar3 = 0xffffffff, lVar2 == 0)) {
    piVar5 = (int *)func_0x00101200();
    return (ulong)-(uint)(*piVar5 != 9);
  }
  return uVar3;
}

