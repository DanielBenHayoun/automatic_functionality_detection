
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 check_tuning_isra_0(float **param_1)

{
  float fVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  
  pfVar2 = *param_1;
  uVar3 = 1;
  if (pfVar2 != (float *)default_tuning) {
    fVar1 = pfVar2[2];
    if ((((_UNK_0011a014 < fVar1) && (fVar1 < _UNK_0011a018)) && (_UNK_0011a01c < pfVar2[3])) &&
       (_UNK_0011a020 <= *pfVar2)) {
      fVar4 = *pfVar2 + _UNK_0011a014;
      if (((fVar4 < pfVar2[1]) && (pfVar2[1] <= _UNK_0011a024)) && (fVar4 < fVar1)) {
        return 1;
      }
    }
    *(undefined1 **)param_1 = default_tuning;
    uVar3 = 0;
  }
  return uVar3;
}

