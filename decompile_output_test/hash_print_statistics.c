
/* WARNING: Possible PIC construction at 0x001065f6: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00106653: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x001065fb) */
/* WARNING: Removing unreachable block (ram,0x00106680) */
/* WARNING: Removing unreachable block (ram,0x00106619) */
/* WARNING: Removing unreachable block (ram,0x001066a9) */
/* WARNING: Removing unreachable block (ram,0x0010662f) */
/* WARNING: Removing unreachable block (ram,0x00106638) */
/* WARNING: Removing unreachable block (ram,0x00106658) */

void hash_print_statistics(long **param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = 0;
  plVar4 = *param_1;
  while (plVar4 < param_1[1]) {
    if (*plVar4 != 0) {
      lVar1 = plVar4[1];
      uVar2 = 1;
      while (lVar1 != 0) {
        lVar1 = *(long *)(lVar1 + 8);
        uVar2 = uVar2 + 1;
      }
      if (uVar3 < uVar2) {
        uVar3 = uVar2;
      }
    }
    plVar4 = plVar4 + 2;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___fprintf_chk_00313f90)(param_2,1,&UNK_0010ff7e,param_1[4]);
  return;
}

