
undefined8 fts_palloc_isra_2(long *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = *param_1;
  uVar1 = *param_2 + 0x100 + param_3;
  if (uVar1 < *param_2) {
    func_0x00101da0(lVar2);
    *param_1 = 0;
    puVar3 = (undefined4 *)func_0x001019a0();
    *puVar3 = 0x24;
    return 0;
  }
  *param_2 = uVar1;
  lVar2 = func_0x00101c80(lVar2,uVar1);
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return 1;
  }
  func_0x00101da0(*param_1);
  *param_1 = 0;
  return 0;
}

