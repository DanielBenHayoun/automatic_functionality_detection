
undefined8 eval5(byte param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = eval6((ulong)param_1);
  while( true ) {
    cVar1 = nextarg(&UNK_00115c3a);
    if (cVar1 == '\0') break;
    uVar3 = eval6((ulong)param_1);
    uVar4 = uVar2;
    if (param_1 != 0) {
      uVar4 = docolon(uVar2,uVar3);
      freev(uVar2);
    }
    freev(uVar3);
    uVar2 = uVar4;
  }
  return uVar2;
}

