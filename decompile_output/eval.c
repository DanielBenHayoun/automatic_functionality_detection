
undefined4 * eval(byte param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  puVar4 = (undefined4 *)eval1((ulong)param_1);
code_r0x00103bc8:
  do {
    cVar1 = nextarg(&UNK_00115c78);
    while( true ) {
      if (cVar1 == '\0') {
        return puVar4;
      }
      uVar5 = 0;
      if (param_1 != 0) {
        bVar2 = null(puVar4);
        uVar5 = (ulong)bVar2;
      }
      puVar3 = (undefined4 *)eval1(uVar5);
      cVar1 = null(puVar4);
      if (cVar1 == '\0') break;
      freev(puVar4);
      cVar1 = null(puVar3);
      puVar4 = puVar3;
      if (cVar1 == '\0') goto code_r0x00103bc8;
      freev(puVar3);
      puVar4 = (undefined4 *)xmalloc(0x10);
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      cVar1 = nextarg();
    }
    freev(puVar3);
  } while( true );
}

