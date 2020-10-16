
void argmatch_invalid(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 == -1) {
    uVar1 = func_0x001033e0(0,&UNK_00119f1d,5);
  }
  else {
    uVar1 = func_0x001033e0(0,&UNK_00119f38,5);
  }
  uVar2 = quote_n(1,param_1);
  uVar3 = quotearg_n_style(0,8,param_2);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_error_0031ff30)(0,0,uVar1,uVar3,uVar2);
  return;
}

