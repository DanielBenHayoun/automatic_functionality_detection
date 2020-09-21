
/* WARNING: Possible PIC construction at 0x0010d0c6: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010d0cb) */
/* WARNING: Removing unreachable block (ram,0x0010d100) */
/* WARNING: Removing unreachable block (ram,0x0010d0d0) */

void rpl_fclose(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = func_0x001029a0();
  if (-1 < iVar2) {
    iVar2 = func_0x00102a30(param_1);
    if (iVar2 != 0) {
      uVar3 = func_0x001029a0(param_1);
      lVar1 = func_0x001028d0((ulong)uVar3,0,1);
      if (lVar1 == -1) goto code_r0x00102800;
    }
    iVar2 = rpl_fflush(param_1);
    if (iVar2 != 0) {
      func_0x00102780();
    }
  }
code_r0x00102800:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fclose_00317e10)(param_1);
  return;
}

