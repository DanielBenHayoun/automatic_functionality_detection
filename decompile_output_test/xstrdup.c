
void xstrdup(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = func_0x00102840();
  lVar2 = lVar2 + 1;
  uVar1 = xmalloc(lVar2,lVar2);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memcpy_00317ec8)(uVar1,param_1,lVar2);
  return;
}

