
undefined4 * eval3(byte param_1)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  undefined4 *puVar13;
  uint uVar14;
  
  lVar5 = eval4((ulong)param_1);
  do {
    cVar3 = nextarg(&UNK_00115bff);
    if (cVar3 == '\0') {
      cVar3 = nextarg(&UNK_00115cbf);
      if (cVar3 == '\0') {
        return (undefined4 *)lVar5;
      }
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    lVar6 = eval4((ulong)param_1);
    if (param_1 != 0) {
      cVar3 = toarith(lVar5);
      if ((cVar3 == '\0') || (cVar3 = toarith(lVar6), cVar3 == '\0')) {
        uVar8 = func_0x00101790(0,&UNK_00115c40,5);
        uVar14 = 2;
        func_0x001019c0(2,0,uVar8);
        puVar13 = (undefined4 *)eval3((ulong)(uVar14 & 0xff));
        break;
      }
      pcVar7 = mpz_sub;
      if (!bVar2) {
        pcVar7 = mpz_add;
      }
      (*pcVar7)(lVar5 + 8,lVar5 + 8,lVar6 + 8);
    }
    freev(lVar6);
  } while( true );
code_r0x0010391c:
  cVar3 = nextarg(&UNK_00115c66);
  if (cVar3 == '\0') {
    uVar8 = 1;
    cVar3 = nextarg(&UNK_00115c68);
    if (cVar3 == '\0') {
      cVar3 = nextarg(&UNK_00115c6f);
      if ((cVar3 == '\0') && (cVar3 = nextarg(&UNK_00115c6b), cVar3 == '\0')) {
        uVar8 = 3;
        cVar3 = nextarg(&UNK_00115c6e);
        if (cVar3 == '\0') {
          uVar8 = 4;
          cVar3 = nextarg(&UNK_00115c71);
          if (cVar3 == '\0') {
            cVar3 = nextarg(&UNK_00115c74);
            if (cVar3 == '\0') {
              return puVar13;
            }
            uVar8 = 5;
          }
        }
      }
      else {
        uVar8 = 2;
      }
    }
  }
  else {
    uVar8 = 0;
  }
  uVar11 = 0;
  lVar5 = eval3((ulong)(uVar14 & 0xff));
  if ((char)uVar14 != '\0') {
    tostring(puVar13);
    tostring(lVar5);
    pcVar1 = *(char **)(puVar13 + 2);
    pcVar10 = pcVar1 + (*pcVar1 == '-');
    cVar3 = *pcVar10;
    do {
      if (9 < (int)cVar3 - 0x30U) {
        pcVar10 = *(char **)(lVar5 + 8);
        goto code_r0x0010397b;
      }
      pcVar10 = pcVar10 + 1;
      cVar3 = *pcVar10;
    } while (cVar3 != '\0');
    pcVar10 = *(char **)(lVar5 + 8);
    pcVar12 = pcVar10 + (*pcVar10 == '-');
    cVar3 = *pcVar12;
    do {
      if (9 < (int)cVar3 - 0x30U) goto code_r0x0010397b;
      pcVar12 = pcVar12 + 1;
      cVar3 = *pcVar12;
    } while (cVar3 != '\0');
    iVar4 = strintcmp();
    goto code_r0x0010399d;
  }
  goto code_r0x001038f5;
code_r0x0010397b:
  puVar9 = (undefined4 *)func_0x001016e0();
  *puVar9 = 0;
  iVar4 = func_0x00101940(pcVar1,pcVar10);
code_r0x0010399d:
  switch(uVar8) {
  default:
    uVar11 = (ulong)(long)iVar4 >> 0x3f;
    break;
  case 1:
    uVar11 = (ulong)(iVar4 < 1);
    break;
  case 2:
    uVar11 = (ulong)(iVar4 == 0);
    break;
  case 3:
    uVar11 = (ulong)(iVar4 != 0);
    break;
  case 4:
    uVar11 = (ulong)~(long)iVar4 >> 0x3f;
    break;
  case 5:
    uVar11 = (ulong)(0 < iVar4);
  }
code_r0x001038f5:
  freev(puVar13);
  freev(lVar5);
  puVar13 = (undefined4 *)xmalloc(0x10);
  *puVar13 = 0;
  *(ulong *)(puVar13 + 2) = uVar11;
  goto code_r0x0010391c;
}

