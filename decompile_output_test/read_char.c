
ulong read_char(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  
  *param_1 = -1;
  uVar5 = 1;
  while (in_stream != 0) {
    iVar3 = func_0x00101990();
    *param_1 = iVar3;
    if (iVar3 != -1) break;
    puVar4 = (uint *)func_0x001017f0();
    uVar1 = check_and_close((ulong)*puVar4);
    uVar2 = open_next_file();
    uVar5 = uVar5 & uVar1 & uVar2;
  }
  return (ulong)uVar5;
}

