
/* WARNING: Possible PIC construction at 0x001052b6: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x001052bb) */
/* WARNING: Removing unreachable block (ram,0x001052f0) */
/* WARNING: Removing unreachable block (ram,0x001052c0) */

void xstrndup(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = func_0x001015f0();
  if (lVar1 != 0) {
    return;
  }
  xalloc_die();
  iVar2 = func_0x00101640();
  if (-1 < iVar2) {
    iVar2 = func_0x00101680(param_1);
    if (iVar2 != 0) {
      uVar3 = func_0x00101640(param_1);
      lVar1 = func_0x001015a0((ulong)uVar3,0,1);
      if (lVar1 == -1) goto code_r0x00101500;
    }
    iVar2 = rpl_fflush(param_1);
    if (iVar2 != 0) {
      func_0x001014a0();
    }
  }
code_r0x00101500:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fclose_00307e88)(param_1);
  return;
}

