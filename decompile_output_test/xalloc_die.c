
/* WARNING: Possible PIC construction at 0x0010d0c6: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010d0cb) */
/* WARNING: Removing unreachable block (ram,0x0010d100) */
/* WARNING: Removing unreachable block (ram,0x0010d0d0) */

void xalloc_die(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = func_0x00102820(0,&UNK_00114caf,5);
  uVar5 = (ulong)exit_failure;
  func_0x00102a90(uVar5,0,&UNK_00112de0,uVar3);
  func_0x00102770();
  iVar1 = func_0x001029a0();
  if (-1 < iVar1) {
    iVar1 = func_0x00102a30(uVar5);
    if (iVar1 != 0) {
      uVar2 = func_0x001029a0(uVar5);
      lVar4 = func_0x001028d0((ulong)uVar2,0,1);
      if (lVar4 == -1) goto code_r0x00102800;
    }
    iVar1 = rpl_fflush(uVar5);
    if (iVar1 != 0) {
      func_0x00102780();
    }
  }
code_r0x00102800:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fclose_00317e10)(uVar5);
  return;
}

