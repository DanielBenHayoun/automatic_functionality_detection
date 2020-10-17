
void dired_dump_obstack(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar1 = *(undefined8 **)(param_2 + 0x18);
  puVar5 = *(undefined8 **)(param_2 + 0x10);
  if ((ulong)(undefined8 *)((long)puVar1 - (long)puVar5) >> 3 != 0) {
    if (puVar1 == puVar5) {
      *(byte *)(param_2 + 0x50) = *(byte *)(param_2 + 0x50) | 2;
    }
    uVar4 = (long)puVar1 + *(ulong *)(param_2 + 0x30) & ~*(ulong *)(param_2 + 0x30);
    *(ulong *)(param_2 + 0x18) = uVar4;
    if ((ulong)(*(long *)(param_2 + 0x20) - *(long *)(param_2 + 8)) < uVar4 - *(long *)(param_2 + 8)
       ) {
      *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x20);
    }
    puVar1 = (undefined8 *)
             ((long)puVar5 +
             ((ulong)(undefined8 *)((long)puVar1 - (long)puVar5) & 0xfffffffffffffff8));
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 0x18);
    func_0x00103570(param_1,stdout);
    do {
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      func_0x00103710(1,&UNK_0011787a,uVar2);
    } while (puVar5 != puVar1);
    puVar3 = *(undefined **)(stdout + 0x28);
    if (*(undefined **)(stdout + 0x30) <= puVar3) {
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___overflow_0031fdc8)(stdout,10);
      return;
    }
    *(undefined **)(stdout + 0x28) = puVar3 + 1;
    *puVar3 = 10;
  }
  return;
}

