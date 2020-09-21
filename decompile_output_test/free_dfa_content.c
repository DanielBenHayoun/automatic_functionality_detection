
/* WARNING: Possible PIC construction at 0x00107193: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001071cb: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001071f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010720c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00107263: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010728d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00107211) */
/* WARNING: Removing unreachable block (ram,0x00107224) */
/* WARNING: Removing unreachable block (ram,0x001071fd) */
/* WARNING: Removing unreachable block (ram,0x00107198) */
/* WARNING: Removing unreachable block (ram,0x001071a0) */
/* WARNING: Removing unreachable block (ram,0x001071a8) */
/* WARNING: Removing unreachable block (ram,0x001071b2) */
/* WARNING: Removing unreachable block (ram,0x001071bc) */
/* WARNING: Removing unreachable block (ram,0x001071d0) */
/* WARNING: Removing unreachable block (ram,0x001071da) */
/* WARNING: Removing unreachable block (ram,0x001071e4) */
/* WARNING: Removing unreachable block (ram,0x001071f3) */
/* WARNING: Removing unreachable block (ram,0x001071c6) */
/* WARNING: Removing unreachable block (ram,0x00107268) */
/* WARNING: Removing unreachable block (ram,0x00107230) */
/* WARNING: Removing unreachable block (ram,0x0010723b) */
/* WARNING: Removing unreachable block (ram,0x00107240) */
/* WARNING: Removing unreachable block (ram,0x00107257) */
/* WARNING: Removing unreachable block (ram,0x00107277) */
/* WARNING: Removing unreachable block (ram,0x00107292) */
/* WARNING: Removing unreachable block (ram,0x0010728d) */

void free_dfa_content(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && (param_1[2] != 0)) {
    uVar1 = 0;
    while( true ) {
      uVar2 = uVar1 + 1;
      free_token(lVar3 + uVar1 * 0x10);
      if ((ulong)param_1[2] < uVar2 || param_1[2] == uVar2) break;
      lVar3 = *param_1;
      uVar1 = uVar2;
    }
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00318dd0)(param_1[3]);
  return;
}

