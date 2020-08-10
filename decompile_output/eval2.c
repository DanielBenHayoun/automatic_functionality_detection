
undefined4 * eval2(byte param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  
  puVar9 = (undefined4 *)eval3((ulong)param_1);
code_r0x0010391c:
  cVar2 = nextarg(&UNK_00115c66);
  if (cVar2 == '\0') {
    uVar10 = 1;
    cVar2 = nextarg(&UNK_00115c68);
    if (cVar2 == '\0') {
      cVar2 = nextarg(&UNK_00115c6f);
      if ((cVar2 == '\0') && (cVar2 = nextarg(&UNK_00115c6b), cVar2 == '\0')) {
        uVar10 = 3;
        cVar2 = nextarg(&UNK_00115c6e);
        if (cVar2 == '\0') {
          uVar10 = 4;
          cVar2 = nextarg(&UNK_00115c71);
          if (cVar2 == '\0') {
            cVar2 = nextarg(&UNK_00115c74);
            if (cVar2 == '\0') {
              return puVar9;
            }
            uVar10 = 5;
          }
        }
      }
      else {
        uVar10 = 2;
      }
    }
  }
  else {
    uVar10 = 0;
  }
  uVar7 = 0;
  lVar4 = eval3((ulong)param_1);
  if (param_1 != 0) {
    tostring(puVar9);
    tostring(lVar4);
    pcVar1 = *(char **)(puVar9 + 2);
    pcVar6 = pcVar1 + (*pcVar1 == '-');
    cVar2 = *pcVar6;
    do {
      if (9 < (int)cVar2 - 0x30U) {
        pcVar6 = *(char **)(lVar4 + 8);
        goto code_r0x0010397b;
      }
      pcVar6 = pcVar6 + 1;
      cVar2 = *pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = *(char **)(lVar4 + 8);
    pcVar8 = pcVar6 + (*pcVar6 == '-');
    cVar2 = *pcVar8;
    do {
      if (9 < (int)cVar2 - 0x30U) goto code_r0x0010397b;
      pcVar8 = pcVar8 + 1;
      cVar2 = *pcVar8;
    } while (cVar2 != '\0');
    iVar3 = strintcmp();
    goto code_r0x0010399d;
  }
  goto code_r0x001038f5;
code_r0x0010397b:
  puVar5 = (undefined4 *)func_0x001016e0();
  *puVar5 = 0;
  iVar3 = func_0x00101940(pcVar1,pcVar6);
code_r0x0010399d:
  switch(uVar10) {
  default:
    uVar7 = (ulong)(long)iVar3 >> 0x3f;
    break;
  case 1:
    uVar7 = (ulong)(iVar3 < 1);
    break;
  case 2:
    uVar7 = (ulong)(iVar3 == 0);
    break;
  case 3:
    uVar7 = (ulong)(iVar3 != 0);
    break;
  case 4:
    uVar7 = (ulong)~(long)iVar3 >> 0x3f;
    break;
  case 5:
    uVar7 = (ulong)(0 < iVar3);
  }
code_r0x001038f5:
  freev(puVar9);
  freev(lVar4);
  puVar9 = (undefined4 *)xmalloc(0x10);
  *puVar9 = 0;
  *(ulong *)(puVar9 + 2) = uVar7;
  goto code_r0x0010391c;
}

