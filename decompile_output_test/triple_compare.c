
undefined8 triple_compare(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1[1] == param_2[1]) && (param_1[2] == param_2[2])) {
    uVar1 = same_name(*param_1,*param_2);
    return uVar1;
  }
  return 0;
}

