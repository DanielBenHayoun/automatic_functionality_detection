
void emit_bug_reporting_address(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = func_0x00101280(0,&UNK_001050c2,5);
  func_0x001013c0(1,uVar1,&UNK_001050d7);
  uVar1 = func_0x00101280(0,&UNK_001050ed,5);
  func_0x001013c0(1,uVar1,&UNK_0010491e,&UNK_00104a88);
  uVar1 = stdout;
  uVar2 = func_0x00101280(0,&UNK_00105320,5);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fputs_unlocked_00306f20)(uVar2,uVar1);
  return;
}

