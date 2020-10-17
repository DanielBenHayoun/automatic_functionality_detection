
void xstrdup(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = func_0x001012a0();
  lVar2 = lVar2 + 1;
  uVar1 = xmalloc(lVar2,lVar2);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcpy_00306f30)(uVar1,param_1,lVar2);
  return;
}

