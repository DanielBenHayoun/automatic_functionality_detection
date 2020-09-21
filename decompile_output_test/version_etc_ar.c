
/* WARNING: Possible PIC construction at 0x00103ca7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00103cd9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00103d8d: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00103fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00103f3e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00103fdd) */
/* WARNING: Removing unreachable block (ram,0x00103d92) */
/* WARNING: Removing unreachable block (ram,0x00103cde) */
/* WARNING: Removing unreachable block (ram,0x00104040) */
/* WARNING: Removing unreachable block (ram,0x00103d06) */
/* WARNING: Removing unreachable block (ram,0x00103dd0) */
/* WARNING: Removing unreachable block (ram,0x00103e12) */
/* WARNING: Removing unreachable block (ram,0x00103d20) */
/* WARNING: Removing unreachable block (ram,0x00103d64) */
/* WARNING: Removing unreachable block (ram,0x00103ff0) */
/* WARNING: Removing unreachable block (ram,0x00103f88) */
/* WARNING: Removing unreachable block (ram,0x00103fc3) */
/* WARNING: Removing unreachable block (ram,0x00103f58) */
/* WARNING: Removing unreachable block (ram,0x00103f00) */
/* WARNING: Removing unreachable block (ram,0x00103f26) */
/* WARNING: Removing unreachable block (ram,0x00103eb0) */
/* WARNING: Removing unreachable block (ram,0x00103e68) */
/* WARNING: Removing unreachable block (ram,0x00103e28) */
/* WARNING: Removing unreachable block (ram,0x00103d96) */
/* WARNING: Removing unreachable block (ram,0x00103f43) */
/* WARNING: Recovered jumptable eliminated as dead code */

void version_etc_ar(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   long *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = 0;
  lVar1 = *param_5;
  while (lVar1 != 0) {
    lVar3 = lVar3 + 1;
    lVar1 = param_5[lVar3];
  }
  if (param_2 == 0) {
    func_0x00101420(param_1,1,&UNK_00105074,param_3,param_4);
    param_2 = func_0x00101280(0,&UNK_0010507b,5);
    puVar2 = version_etc_copyright;
    param_3 = 0x7e3;
  }
  else {
    puVar2 = &UNK_00105068;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___fprintf_chk_00306fa0)(param_1,1,puVar2,param_2,param_3);
  return;
}

