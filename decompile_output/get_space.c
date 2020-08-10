
void get_space(long param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_2;
  do {
    while ((int)uVar3 != 0x20) {
      if ((int)uVar3 != 9) {
        return;
      }
      tabs = 1;
      iVar1 = in_column + 7;
      if (-1 < in_column) {
        iVar1 = in_column;
      }
      in_column = (iVar1 >> 3) * 8 + 8;
      pbVar2 = *(byte **)(param_1 + 8);
      if (pbVar2 < *(byte **)(param_1 + 0x10)) goto code_r0x00102004;
code_r0x00102025:
      uVar3 = func_0x001014c0(param_1);
    }
    in_column = in_column + 1;
    pbVar2 = *(byte **)(param_1 + 8);
    if (*(byte **)(param_1 + 0x10) <= pbVar2) goto code_r0x00102025;
code_r0x00102004:
    *(byte **)(param_1 + 8) = pbVar2 + 1;
    uVar3 = (ulong)*pbVar2;
  } while( true );
}

