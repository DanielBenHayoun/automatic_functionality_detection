
undefined * str_cd_iconv(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 extraout_RDX;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ulong uVar13;
  undefined *puVar14;
  long in_FS_OFFSET;
  undefined8 uStack96;
  ulong uStack88;
  undefined *puStack80;
  ulong uStack72;
  ulong uStack64;
  
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar11 = param_2;
  uStack96 = param_1;
  uStack88 = func_0x001016e0();
  uVar13 = uStack88 << 4;
  if (0xfffffff < uStack88) {
    uVar13 = uStack88;
  }
  puVar9 = (undefined *)func_0x00101810((undefined8 *)(uVar13 + 1));
  if (puVar9 == (undefined *)0x0) {
    puVar7 = (undefined4 *)func_0x00101610();
    *puVar7 = 0xc;
  }
  else {
    func_0x00101650(param_2,0,0,0,0);
    puVar10 = (undefined8 *)(uVar13 + 1);
    puStack80 = puVar9;
    uStack72 = uVar13;
    while (puVar11 = &uStack96,
          lVar5 = func_0x00101650(param_2,&uStack96,&uStack88,&puStack80,&uStack72), lVar5 == -1) {
      piVar4 = (int *)func_0x00101610();
      if (*piVar4 == 0x16) break;
      if (*piVar4 != 7) goto code_r0x0010ae6e;
      puVar2 = (undefined8 *)((long)puVar10 * 2);
      puVar14 = puStack80 + -(long)puVar9;
      if ((puVar2 <= puVar10) ||
         (puVar11 = puVar2, puVar6 = (undefined *)func_0x00101850(puVar9),
         puVar6 == (undefined *)0x0)) {
        *piVar4 = 0xc;
        goto code_r0x0010ae6e;
      }
      puStack80 = puVar6 + (long)puVar14;
      uStack72 = (long)puVar2 + (-1 - (long)puVar14);
      puVar9 = puVar6;
      puVar10 = puVar2;
    }
code_r0x0010ae16:
    puVar11 = (undefined8 *)0x0;
    lVar5 = func_0x00101650(param_2,0,0,&puStack80,&uStack72);
    if (lVar5 != -1) goto code_r0x0010ae35;
    piVar4 = (int *)func_0x00101610();
    if (*piVar4 != 7) goto code_r0x0010ae6e;
    puVar2 = (undefined8 *)((long)puVar10 * 2);
    puVar14 = puStack80 + -(long)puVar9;
    if ((puVar10 < puVar2) &&
       (puVar11 = puVar2, puVar6 = (undefined *)func_0x00101850(puVar9), puVar6 != (undefined *)0x0)
       ) {
      puStack80 = puVar6 + (long)puVar14;
      uStack72 = (long)puVar2 + (-1 - (long)puVar14);
      puVar9 = puVar6;
      puVar10 = puVar2;
      goto code_r0x0010ae16;
    }
    *piVar4 = 0xc;
code_r0x0010ae6e:
    func_0x001015f0(puVar9);
    puVar9 = (undefined *)0x0;
  }
code_r0x0010ae78:
  pcVar12 = (char *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (pcVar12 == (char *)0x0) {
    return puVar9;
  }
  func_0x001016f0();
  if ((*pcVar12 == '\0') || (iVar3 = c_strcasecmp(puVar11,extraout_RDX), iVar3 == 0)) {
    lVar8 = func_0x00101910(pcVar12);
    if (lVar8 == 0) {
      puVar7 = (undefined4 *)func_0x00101610();
      *puVar7 = 0xc;
      return (undefined *)0;
    }
  }
  else {
    lVar5 = func_0x00101950(extraout_RDX,puVar11);
    if (lVar5 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = str_cd_iconv(pcVar12,lVar5);
      if (lVar8 == 0) {
        puVar7 = (undefined4 *)func_0x00101610();
        uVar1 = *puVar7;
        func_0x00101880(lVar5);
        *puVar7 = uVar1;
      }
      else {
        iVar3 = func_0x00101880(lVar5);
        if (iVar3 < 0) {
          puVar7 = (undefined4 *)func_0x00101610();
          uVar1 = *puVar7;
          func_0x001015f0(lVar8);
          lVar8 = 0;
          *puVar7 = uVar1;
        }
      }
    }
  }
  return (undefined *)lVar8;
code_r0x0010ae35:
  puVar14 = puStack80 + 1;
  *puStack80 = 0;
  puVar11 = (undefined8 *)(puVar14 + -(long)puVar9);
  puStack80 = puVar14;
  if ((puVar11 < puVar10) &&
     (puVar14 = (undefined *)func_0x00101850(puVar9), puVar14 != (undefined *)0x0)) {
    puVar9 = puVar14;
  }
  goto code_r0x0010ae78;
}

