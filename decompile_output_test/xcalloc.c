
void xcalloc(ulong param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((-1 < SUB168(ZEXT816(param_1) * ZEXT816(param_2),0)) &&
     (SUB168(ZEXT816(param_1) * ZEXT816(param_2) >> 0x40,0) == 0)) {
    lVar1 = func_0x00102930();
    if (lVar1 != 0) {
      return;
    }
  }
  xalloc_die();
  uVar2 = xmalloc(param_2);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcpy_00317ec8)(uVar2,param_1,param_2);
  return;
}

