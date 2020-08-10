
/* WARNING: Removing unreachable block (ram,0x00106d8d) */
/* WARNING: Removing unreachable block (ram,0x00106dc0) */
/* WARNING: Removing unreachable block (ram,0x00106dd5) */
/* WARNING: Removing unreachable block (ram,0x00106deb) */
/* WARNING: Removing unreachable block (ram,0x00106df0) */
/* WARNING: Removing unreachable block (ram,0x00106e02) */
/* WARNING: Removing unreachable block (ram,0x00106e08) */

undefined8 readtokens0_free(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _obstack_free(param_1 + 0x18);
  uVar2 = _obstack_free(param_1 + 0x70);
  lVar1 = *(long *)(param_1 + 0xd0);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
    uVar2 = call_freefun();
    *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 2;
  }
  return uVar2;
}

