
long __xargmatch_internal
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,code *param_6)

{
  long lVar1;
  
  lVar1 = argmatch(param_2,param_3,param_4,param_5);
  if (lVar1 < 0) {
    argmatch_invalid(param_1,param_2,lVar1);
    argmatch_valid(param_3,param_4,param_5);
    (*param_6)();
    lVar1 = -1;
  }
  return lVar1;
}

