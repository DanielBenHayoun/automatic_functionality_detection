
undefined8 * tzalloc(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    puVar3 = (undefined8 *)func_0x00101ad0(0x80);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      return puVar3;
    }
  }
  else {
    lVar2 = func_0x00101970();
    uVar1 = lVar2 + 1;
    uVar4 = 0x76;
    if (0x75 < uVar1) {
      uVar4 = uVar1;
    }
    puVar3 = (undefined8 *)func_0x00101ad0(uVar4 + 0x11 & 0xfffffffffffffff8);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 1;
      func_0x00101a70((long)puVar3 + 9,param_1,uVar1);
      *(undefined *)((long)puVar3 + lVar2 + 10) = 0;
    }
  }
  return puVar3;
}

