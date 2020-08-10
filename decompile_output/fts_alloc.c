
long fts_alloc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = func_0x00101c20(param_3 + 0x110U & 0xfffffffffffffff8);
  if (lVar2 != 0) {
    func_0x00101be0(lVar2 + 0x108,param_2,param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined *)(lVar2 + 0x108 + param_3) = 0;
    *(long *)(lVar2 + 0x60) = param_3;
    *(long *)(lVar2 + 0x50) = param_1;
    *(undefined4 *)(lVar2 + 0x40) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x38) = uVar1;
    *(undefined4 *)(lVar2 + 0x72) = 0x30000;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
  }
  return lVar2;
}

