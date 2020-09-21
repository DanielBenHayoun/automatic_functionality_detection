
/* WARNING: Possible PIC construction at 0x00105f66: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00105f6b) */
/* WARNING: Removing unreachable block (ram,0x00105fa0) */
/* WARNING: Removing unreachable block (ram,0x00105f70) */

void xstrndup(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = func_0x00101830();
  if (lVar1 != 0) {
    return;
  }
  xalloc_die();
  iVar2 = func_0x00101880();
  if (-1 < iVar2) {
    iVar2 = func_0x001018d0(param_1);
    if (iVar2 != 0) {
      uVar3 = func_0x00101880(param_1);
      lVar1 = func_0x001017c0((ulong)uVar3,0,1);
      if (lVar1 == -1) goto code_r0x00101720;
    }
    iVar2 = rpl_fflush(param_1);
    if (iVar2 != 0) {
      func_0x001016a0();
    }
  }
code_r0x00101720:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fclose_00308e78)(param_1);
  return;
}

