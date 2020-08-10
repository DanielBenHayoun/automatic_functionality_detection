
void prfield_isra_5(ulong param_1,ulong param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 < param_2) {
    puVar2 = (undefined8 *)(param_1 * 0x10 + *param_3);
    lVar1 = puVar2[1];
    if (lVar1 != 0) {
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_fwrite_unlocked_0030af58)(*puVar2,1,lVar1,stdout);
      return;
    }
  }
  if (empty_filler != 0) {
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fputs_unlocked_0030af00)(empty_filler,stdout);
    return;
  }
  return;
}

