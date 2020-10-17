
/* WARNING: Possible PIC construction at 0x00104706: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010470b) */
/* WARNING: Removing unreachable block (ram,0x00104740) */
/* WARNING: Removing unreachable block (ram,0x00104710) */

void rpl_fclose(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = func_0x00101350();
  if (-1 < iVar2) {
    iVar2 = func_0x00101390(param_1);
    if (iVar2 != 0) {
      uVar3 = func_0x00101350(param_1);
      lVar1 = func_0x001012f0((ulong)uVar3,0,1);
      if (lVar1 == -1) goto code_r0x00101260;
    }
    iVar2 = rpl_fflush(param_1);
    if (iVar2 != 0) {
      func_0x00101200();
    }
  }
code_r0x00101260:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fclose_00306ec0)(param_1);
  return;
}

