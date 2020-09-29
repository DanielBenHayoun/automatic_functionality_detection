
/* WARNING: Possible PIC construction at 0x0010d576: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010d57b) */
/* WARNING: Removing unreachable block (ram,0x0010d5b0) */
/* WARNING: Removing unreachable block (ram,0x0010d580) */

void nstrftime(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  __strftime_internal();
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00102830();
  iVar1 = func_0x001029a0();
  if (-1 < iVar1) {
    iVar1 = func_0x00102a10(param_1);
    if (iVar1 != 0) {
      uVar2 = func_0x001029a0(param_1);
      lVar3 = func_0x001028c0((ulong)uVar2,0,1);
      if (lVar3 == -1) goto code_r0x001027d0;
    }
    iVar1 = rpl_fflush(param_1);
    if (iVar1 != 0) {
      func_0x00102750();
    }
  }
code_r0x001027d0:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fclose_00314e18)(param_1);
  return;
}

