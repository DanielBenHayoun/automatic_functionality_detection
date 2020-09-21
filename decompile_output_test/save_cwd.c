
ulong save_cwd(int *param_1)

{
  int iVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = open_safer(&UNK_0010f2b4,0x80000);
  *param_1 = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  lVar2 = func_0x00101f30(0,0);
  *(long *)(param_1 + 2) = lVar2;
  return (ulong)-(uint)(lVar2 == 0);
}

