
ulong rpl_vasprintf(uint **param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  uint *puVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  ulong uStack24;
  long lStack16;
  
  puVar6 = (uint *)0x0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = (uint *)vasnprintf(0,&uStack24,param_2,param_3);
  if (puVar7 == (uint *)0x0) {
    uStack24 = 0xffffffff;
  }
  else {
    if (uStack24 < 0x80000000) {
      *param_1 = puVar7;
      uStack24 = uStack24 & 0xffffffff;
    }
    else {
      func_0x00101810();
      puVar2 = (undefined4 *)func_0x00101840();
      *puVar2 = 0x4b;
      uStack24 = 0xffffffff;
      puVar6 = puVar7;
    }
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uStack24;
  }
  func_0x00101920();
  lVar3 = func_0x00101890();
  uVar1 = *puVar6;
  uVar4 = rpl_fclose(puVar6);
  if ((uVar1 & 0x20) != 0) {
    if ((int)uVar4 == 0) {
      puVar2 = (undefined4 *)func_0x00101840();
      *puVar2 = 0;
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  if (((int)uVar4 != 0) && (uVar4 = 0xffffffff, lVar3 == 0)) {
    piVar5 = (int *)func_0x00101840();
    return (ulong)-(uint)(*piVar5 != 9);
  }
  return uVar4;
}

