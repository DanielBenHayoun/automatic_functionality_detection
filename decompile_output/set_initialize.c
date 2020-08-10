
void set_initialize(long param_1,char param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x10) = 0xfffffffffffffffe;
  while( true ) {
    iVar2 = get_next(param_1,0);
    if (iVar2 == -1) break;
    param_3[iVar2] = 1;
  }
  if (param_2 != '\0') {
    pbVar1 = param_3 + 0x100;
    do {
      *param_3 = *param_3 ^ 1;
      param_3 = param_3 + 1;
    } while (param_3 != pbVar1);
  }
  return;
}

