
ulong cwd_advance_fd(long param_1,uint param_2,char param_3)

{
  int iVar1;
  ulong in_RAX;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x2c);
  if ((uVar3 == param_2) && (uVar3 != 0xffffff9c)) {
    func_0x00101990();
    uVar3 = *(uint *)(param_1 + 0x48) & 4;
    uVar4 = (ulong)uVar3;
    if (uVar3 == 0) {
      if ((*(uint *)(param_1 + 0x48) & 0x200) == 0) {
        iVar1 = func_0x00101c70((ulong)*(uint *)(param_1 + 0x28));
        uVar4 = (ulong)(iVar1 != 0);
      }
      else {
        cwd_advance_fd();
      }
    }
    else {
      uVar4 = 0;
    }
    fd_ring_clear(param_1 + 0x60);
    return uVar4;
  }
  if (param_3 == '\0') {
    if (((*(byte *)(param_1 + 0x48) & 4) == 0) && (-1 < (int)uVar3)) {
      uVar2 = func_0x00101b50((ulong)uVar3);
      *(uint *)(param_1 + 0x2c) = param_2;
      return uVar2;
    }
  }
  else {
    in_RAX = i_ring_push(param_1 + 0x60);
    if (-1 < (int)in_RAX) {
      uVar2 = func_0x00101b50(in_RAX & 0xffffffff);
      *(uint *)(param_1 + 0x2c) = param_2;
      return uVar2;
    }
  }
  *(uint *)(param_1 + 0x2c) = param_2;
  return in_RAX;
}

