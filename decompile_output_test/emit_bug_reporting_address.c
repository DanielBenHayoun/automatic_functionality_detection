
void emit_bug_reporting_address(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = func_0x00102820(0,&UNK_001149a2,5);
  func_0x00102a60(1,uVar1,&UNK_001149b7);
  uVar1 = func_0x00102820(0,&UNK_001149cd,5);
  func_0x00102a60(1,uVar1,&UNK_001116f2,&UNK_00112a50);
  uVar1 = stdout;
  uVar2 = func_0x00102820(0,&UNK_00114c00,5);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fputs_unlocked_00317ea0)(uVar2,uVar1);
  return;
}

