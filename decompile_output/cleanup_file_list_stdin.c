
/* WARNING: Possible PIC construction at 0x00102b41: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00102b46) */

void cleanup_file_list_stdin(void)

{
  undefined8 uVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  if (have_read_stdin == '\0') {
    return;
  }
  iVar2 = rpl_fclose(stdin);
  if (iVar2 == 0) {
    return;
  }
  puVar3 = (uint *)func_0x001014a0();
  func_0x001016d0(1,(ulong)*puVar3,&UNK_00105df2);
  uVar1 = stdout;
  uVar4 = func_0x00101520(0,&UNK_00105b78,5);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fputs_unlocked_00307f10)(uVar4,uVar1);
  return;
}

