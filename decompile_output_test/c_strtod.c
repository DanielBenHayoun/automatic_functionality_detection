
void c_strtod(undefined8 param_1,undefined8 *param_2)

{
  if (c_locale_cache == 0) {
    c_locale_cache = func_0x001019b0(0x1fbf,&UNK_00107d5d,0);
  }
  if (c_locale_cache != 0) {
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_strtod_l_00309e38)(param_1,param_2);
    return;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1;
  }
  return;
}

