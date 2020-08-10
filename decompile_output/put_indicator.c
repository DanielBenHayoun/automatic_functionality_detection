
void put_indicator(undefined8 *param_1)

{
  int iVar1;
  
  if (used_color == '\0') {
    used_color = '\x01';
    iVar1 = func_0x00103630(1);
    if (iVar1 < 0) {
      prep_non_filename_text();
    }
    else {
      signal_setup(1);
      prep_non_filename_text();
    }
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fwrite_unlocked_0031fee8)(param_1[1],*param_1,1,stdout);
  return;
}

