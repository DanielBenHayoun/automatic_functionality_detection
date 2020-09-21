
undefined * mdir_name(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = dir_len();
  puVar2 = (undefined *)func_0x001023c0(lVar1 + 1 + (ulong)(lVar1 == 0));
  if (puVar2 != (undefined *)0x0) {
    puVar2 = (undefined *)func_0x00102360(puVar2,param_1,lVar1);
    if (lVar1 == 0) {
      *puVar2 = 0x2e;
      lVar1 = 1;
    }
    puVar2[lVar1] = 0;
  }
  return puVar2;
}

