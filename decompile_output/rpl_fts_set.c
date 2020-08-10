
undefined8 rpl_fts_set(undefined8 param_1,long param_2,uint param_3)

{
  undefined4 *puVar1;
  
  if (param_3 < 5) {
    *(undefined2 *)(param_2 + 0x74) = (short)param_3;
    return 0;
  }
  puVar1 = (undefined4 *)func_0x001019a0();
  *puVar1 = 0x16;
  return 1;
}

