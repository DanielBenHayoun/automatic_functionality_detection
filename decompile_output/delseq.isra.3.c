
/* WARNING: Possible PIC construction at 0x00102d22: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00102d27) */

void delseq_isra_3(long *param_1,long **param_2)

{
  long *plVar1;
  
  if (*param_1 == 0) {
    plVar1 = *param_2;
  }
  else {
    plVar1 = (long *)**param_2;
    if (plVar1 != (long *)0x0) {
      freeline_part_2();
      plVar1 = (long *)**param_2;
    }
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_0030ae30)(plVar1);
  return;
}

