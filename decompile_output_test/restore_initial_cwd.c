
ulong restore_initial_cwd(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x48) & 4;
  uVar3 = (ulong)uVar2;
  if (uVar2 == 0) {
    if ((*(uint *)(param_1 + 0x48) & 0x200) == 0) {
      iVar1 = func_0x00101ca0((ulong)*(uint *)(param_1 + 0x28));
      uVar3 = (ulong)(iVar1 != 0);
    }
    else {
      cwd_advance_fd(param_1,0xffffff9c,1);
    }
  }
  else {
    uVar3 = 0;
  }
  fd_ring_clear(param_1 + 0x60);
  return uVar3;
}

