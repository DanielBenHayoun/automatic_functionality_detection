
ulong atomic_link(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  
  if (symbolic_link == '\0') {
    if (beware_hard_dir_link != '\0') {
      return 0xffffffff;
    }
    iVar1 = func_0x00102150(0xffffff9c,param_1,param_2 & 0xffffffff,param_3,
                            (ulong)(logical != '\0') << 10);
  }
  else {
    if (relative != '\0') {
      return 0xffffffff;
    }
    iVar1 = func_0x00102280();
  }
  if (iVar1 < 0) {
    puVar2 = (uint *)func_0x00101dd0();
    return (ulong)*puVar2;
  }
  return 0;
}

