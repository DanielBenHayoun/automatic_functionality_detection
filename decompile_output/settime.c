
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

ulong settime(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 uStack56;
  long lStack48;
  ulong uStack32;
  
  uStack32 = *(ulong *)(in_FS_OFFSET + 0x28);
  uVar1 = func_0x00102a10(0,param_1);
  uVar4 = (ulong)uVar1;
  if ((uVar1 != 0) && (piVar3 = (int *)func_0x00102780(), *piVar3 != 1)) {
    uStack56 = *param_1;
    lStack48 = (long)param_1[1] / 1000;
    uVar1 = func_0x001029c0(&uStack56,0);
    uVar4 = (ulong)uVar1;
  }
  uVar5 = uStack32 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar5 != 0) {
    func_0x00102850();
    if (uVar5 == 0) {
      func_0x00102b00();
      func_0x00102820(0,&UNK_0011495b,5);
    }
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)PTR___fprintf_chk_00317f90)();
    return uVar2;
  }
  return uVar4;
}

