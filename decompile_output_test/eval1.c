
undefined4 * eval1(byte param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  puVar4 = (undefined4 *)eval2((ulong)param_1);
  do {
    cVar1 = nextarg(&UNK_00115c76);
    while( true ) {
      if (cVar1 == '\0') {
        return puVar4;
      }
      uVar5 = 0;
      if (param_1 != 0) {
        bVar2 = null(puVar4);
        uVar5 = (ulong)(bVar2 ^ 1);
      }
      uVar3 = eval2(uVar5);
      cVar1 = null(puVar4);
      if ((cVar1 == '\0') && (cVar1 = null(uVar3), cVar1 == '\0')) break;
      freev(puVar4);
      freev(uVar3);
      puVar4 = (undefined4 *)xmalloc(0x10);
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      cVar1 = nextarg();
    }
    freev(uVar3);
  } while( true );
}

