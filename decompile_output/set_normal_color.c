
void set_normal_color(void)

{
  char cVar1;
  int iVar2;
  
  if (print_with_color == '\0') {
    return;
  }
  cVar1 = is_colored(4);
  if (cVar1 == '\0') {
    return;
  }
  put_indicator(color_indicator);
  put_indicator(0x3200a0);
  if (used_color == '\0') {
    used_color = '\x01';
    iVar2 = func_0x00103630(1);
    if (iVar2 < 0) {
      prep_non_filename_text();
    }
    else {
      signal_setup(1);
      prep_non_filename_text();
    }
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fwrite_unlocked_0031fee8)(color_indicator._24_8_,color_indicator._16_8_,1,stdout);
  return;
}

