
void prep_non_filename_text(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (color_indicator._40_8_ == 0) {
    put_indicator(color_indicator);
    put_indicator(0x320090);
    puVar2 = (undefined8 *)(color_indicator + 0x10);
  }
  else {
    puVar2 = (undefined8 *)(color_indicator + 0x20);
  }
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
  (*(code *)PTR_fwrite_unlocked_0031fee8)(puVar2[1],*puVar2,1,stdout);
  return;
}

