
undefined8 cache_fstatat_constprop_3(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = *(long *)(param_3 + 0x30);
  if (lVar2 == -1) {
    iVar1 = func_0x00101ae0(1,param_1 & 0xffffffff,param_2,param_3,0x100);
    if (iVar1 != 0) {
      *(undefined8 *)(param_3 + 0x30) = 0xfffffffffffffffe;
      piVar3 = (int *)func_0x001019a0();
      iVar1 = *piVar3;
      *(long *)(param_3 + 8) = (long)iVar1;
      goto code_r0x00102b90;
    }
    lVar2 = *(long *)(param_3 + 0x30);
  }
  if (-1 < lVar2) {
    return 0;
  }
  piVar3 = (int *)func_0x001019a0();
  iVar1 = (int)*(undefined8 *)(param_3 + 8);
code_r0x00102b90:
  *piVar3 = iVar1;
  return 0xffffffff;
}

