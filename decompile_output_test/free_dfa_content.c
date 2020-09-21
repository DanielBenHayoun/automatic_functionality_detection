
/* WARNING: Possible PIC construction at 0x00109443: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010947b: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001094a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001094bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00109513: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010953d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x001094c1) */
/* WARNING: Removing unreachable block (ram,0x001094d4) */
/* WARNING: Removing unreachable block (ram,0x001094ad) */
/* WARNING: Removing unreachable block (ram,0x00109448) */
/* WARNING: Removing unreachable block (ram,0x00109450) */
/* WARNING: Removing unreachable block (ram,0x00109458) */
/* WARNING: Removing unreachable block (ram,0x00109462) */
/* WARNING: Removing unreachable block (ram,0x0010946c) */
/* WARNING: Removing unreachable block (ram,0x00109480) */
/* WARNING: Removing unreachable block (ram,0x0010948a) */
/* WARNING: Removing unreachable block (ram,0x00109494) */
/* WARNING: Removing unreachable block (ram,0x001094a3) */
/* WARNING: Removing unreachable block (ram,0x00109476) */
/* WARNING: Removing unreachable block (ram,0x00109518) */
/* WARNING: Removing unreachable block (ram,0x001094e0) */
/* WARNING: Removing unreachable block (ram,0x001094eb) */
/* WARNING: Removing unreachable block (ram,0x001094f0) */
/* WARNING: Removing unreachable block (ram,0x00109507) */
/* WARNING: Removing unreachable block (ram,0x00109527) */
/* WARNING: Removing unreachable block (ram,0x00109542) */
/* WARNING: Removing unreachable block (ram,0x0010953d) */

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
  (*(code *)PTR_free_0031ada0)(param_1[3]);
  return;
}

