
ulong randint_genmax(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte abStack72 [8];
  long lStack64;
  
  uVar1 = param_2 + 1;
  uVar8 = param_1[2];
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = (undefined8 *)*param_1;
  uVar9 = param_1[1];
  puVar10 = param_1;
  do {
    if (param_2 <= uVar8) {
      if (uVar8 != param_2) goto code_r0x00105379;
code_r0x001053ff:
      param_1[2] = 0;
      param_1[1] = 0;
      uVar5 = uVar9;
      goto code_r0x0010540f;
    }
    lVar7 = 0;
    uVar5 = uVar8;
    do {
      lVar7 = lVar7 + 1;
      uVar5 = uVar5 * 0x100 + 0xff;
    } while (uVar5 < param_2);
    puVar10 = puVar3;
    randread(puVar3,abStack72,lVar7);
    pbVar6 = abStack72;
    do {
      bVar2 = *pbVar6;
      uVar8 = uVar8 * 0x100 + 0xff;
      pbVar6 = pbVar6 + 1;
      uVar9 = uVar9 * 0x100 + (ulong)bVar2;
    } while (uVar8 < param_2);
    if (uVar8 == param_2) goto code_r0x001053ff;
code_r0x00105379:
    puVar10 = (undefined8 *)((uVar8 - param_2) % uVar1);
    uVar5 = uVar9 % uVar1;
    if (uVar9 <= uVar8 - (long)puVar10) {
      param_1[1] = uVar9 / uVar1;
      param_1[2] = (uVar8 - param_2) / uVar1;
code_r0x0010540f:
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar5;
      }
      func_0x00101ad0();
      func_0x00101d00();
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)PTR_free_0030cfc0)(puVar10);
      return uVar4;
    }
    uVar8 = (long)puVar10 - 1;
    uVar9 = uVar5;
  } while( true );
}

