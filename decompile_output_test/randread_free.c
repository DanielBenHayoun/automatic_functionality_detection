
/* WARNING: Possible PIC construction at 0x001077b6: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x001077bb) */
/* WARNING: Removing unreachable block (ram,0x001077f0) */
/* WARNING: Removing unreachable block (ram,0x001077c0) */

undefined8 randread_free(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = *param_1;
  func_0x00101d00(param_1,0x1038,0xffffffffffffffff);
  func_0x00101dd0(param_1);
  if (lVar1 == 0) {
    return 0;
  }
  iVar2 = func_0x00101c20(lVar1);
  if (-1 < iVar2) {
    iVar2 = func_0x00101c80(lVar1);
    if (iVar2 != 0) {
      uVar3 = func_0x00101c20(lVar1);
      lVar5 = func_0x00101b40((ulong)uVar3,0,1);
      if (lVar5 == -1) goto code_r0x00101a70;
    }
    iVar2 = rpl_fflush(lVar1);
    if (iVar2 != 0) {
      func_0x001019b0();
    }
  }
code_r0x00101a70:
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)PTR_fclose_0030ce10)(lVar1);
  return uVar4;
}

