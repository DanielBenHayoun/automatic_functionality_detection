
void unescape_tab(char *param_1)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = func_0x00101e40();
  pcVar2 = param_1;
  uVar4 = 0;
  do {
    uVar3 = uVar4 + 1;
    if ((((param_1[uVar4] == '\\') && (uVar4 + 4 < lVar1 + 1U)) &&
        ((byte)(param_1[uVar3] - 0x30U) < 4)) &&
       (((byte)(param_1[uVar4 + 2] - 0x30U) < 8 && ((byte)(param_1[uVar4 + 3] - 0x30U) < 8)))) {
      *pcVar2 = param_1[uVar4 + 3] + 'P' + (param_1[uVar4 + 2] + param_1[uVar3] * '\b') * '\b';
      uVar3 = uVar4 + 4;
    }
    else {
      *pcVar2 = param_1[uVar4];
    }
    pcVar2 = pcVar2 + 1;
    uVar4 = uVar3;
  } while (uVar3 < lVar1 + 1U);
  return;
}

