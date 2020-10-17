
long proper_name(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = func_0x001016c0(0,param_1,5);
  if (param_1 != lVar2) {
    cVar1 = mbsstr_trimmed_wordbounded(lVar2,param_1);
    if (cVar1 == '\0') {
      lVar3 = func_0x001016e0(lVar2);
      lVar4 = func_0x001016e0(param_1);
      uVar5 = xmalloc(lVar3 + 4 + lVar4);
      func_0x00101960(uVar5,1,0xffffffffffffffff,&UNK_0010e9e2,lVar2,param_1);
      return uVar5;
    }
  }
  return lVar2;
}

