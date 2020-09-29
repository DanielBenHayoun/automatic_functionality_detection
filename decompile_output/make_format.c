
void make_format(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  ulong uVar9;
  
  pbVar1 = (byte *)(param_1 + param_2);
  pbVar6 = (byte *)(param_1 + 1);
  pbVar7 = pbVar6;
  do {
    if (pbVar1 <= pbVar6) {
code_r0x00101d80:
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_strcpy_00312d70)(pbVar7,param_4);
      return;
    }
    bVar2 = *pbVar6;
    uVar8 = SEXT14((char)bVar2);
    uVar9 = (ulong)uVar8;
    lVar3 = func_0x00101eb0(&printf_flags,(ulong)uVar8);
    if (lVar3 == 0) {
      if (pbVar6 < pbVar1) {
        pbVar4 = pbVar7;
        pbVar5 = pbVar6;
        while( true ) {
          pbVar5 = pbVar5 + 1;
          *pbVar4 = (byte)uVar9;
          if (pbVar4 + 1 == pbVar1 + -(long)pbVar6 + (long)pbVar7) break;
          uVar9 = (ulong)*pbVar5;
          pbVar4 = pbVar4 + 1;
        }
        pbVar7 = pbVar7 + (long)(pbVar1 + -(long)pbVar6);
      }
      goto code_r0x00101d80;
    }
    lVar3 = func_0x00101eb0(param_3,(ulong)uVar8);
    if (lVar3 != 0) {
      *pbVar7 = bVar2;
      pbVar7 = pbVar7 + 1;
    }
    pbVar6 = pbVar6 + 1;
  } while( true );
}

