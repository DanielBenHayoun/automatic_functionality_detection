
/* WARNING: Possible PIC construction at 0x0010c817: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010c849: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010c8fd: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010cb48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010caae: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010cb4d) */
/* WARNING: Removing unreachable block (ram,0x0010c902) */
/* WARNING: Removing unreachable block (ram,0x0010c84e) */
/* WARNING: Removing unreachable block (ram,0x0010cbb0) */
/* WARNING: Removing unreachable block (ram,0x0010c876) */
/* WARNING: Removing unreachable block (ram,0x0010c940) */
/* WARNING: Removing unreachable block (ram,0x0010c982) */
/* WARNING: Removing unreachable block (ram,0x0010c890) */
/* WARNING: Removing unreachable block (ram,0x0010c8d4) */
/* WARNING: Removing unreachable block (ram,0x0010cb60) */
/* WARNING: Removing unreachable block (ram,0x0010caf8) */
/* WARNING: Removing unreachable block (ram,0x0010cb33) */
/* WARNING: Removing unreachable block (ram,0x0010cac8) */
/* WARNING: Removing unreachable block (ram,0x0010ca70) */
/* WARNING: Removing unreachable block (ram,0x0010ca96) */
/* WARNING: Removing unreachable block (ram,0x0010ca20) */
/* WARNING: Removing unreachable block (ram,0x0010c9d8) */
/* WARNING: Removing unreachable block (ram,0x0010c998) */
/* WARNING: Removing unreachable block (ram,0x0010c906) */
/* WARNING: Removing unreachable block (ram,0x0010cab3) */
/* WARNING: Recovered jumptable eliminated as dead code */

void version_etc_arn(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    func_0x00102b00(param_1,1,&UNK_00114954,param_3,param_4);
    param_2 = func_0x00102820(0,&UNK_0011495b,5);
    puVar1 = version_etc_copyright;
    param_3 = 0x7e3;
  }
  else {
    puVar1 = &UNK_00114948;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___fprintf_chk_00317f90)(param_1,1,puVar1,param_2,param_3);
  return;
}

