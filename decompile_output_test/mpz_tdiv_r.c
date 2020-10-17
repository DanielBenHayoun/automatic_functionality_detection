
long mpz_tdiv_r(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  lVar2 = *param_3;
  if ((lVar1 == -0x8000000000000000) && (lVar2 == -1)) {
    *param_1 = 0;
    return lVar1;
  }
  *param_1 = lVar1 % lVar2;
  return lVar1 / lVar2;
}

