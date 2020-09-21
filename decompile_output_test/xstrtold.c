
uint * xstrtold(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               long *param_9,long **param_10,float10 *param_11,code *param_12,undefined8 param_13,
               undefined8 param_14)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long *plVar11;
  long **pplVar12;
  byte *pbVar13;
  ulong *puVar14;
  long *plVar15;
  long in_FS_OFFSET;
  float10 in_ST0;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  ulong uStack352;
  long lStack344;
  long *plStack336;
  undefined auStack324 [4];
  long lStack320;
  long **pplStack304;
  long *plStack296;
  int *piStack288;
  float10 *pfStack280;
  undefined4 uStack272;
  undefined4 uStack268;
  long *plStack264;
  undefined *puStack256;
  long lStack248;
  undefined auStack240 [16];
  undefined8 uStack224;
  undefined8 uStack208;
  undefined8 uStack200;
  undefined4 uStack192;
  undefined4 uStack188;
  undefined4 uStack176;
  undefined4 uStack160;
  undefined4 uStack144;
  undefined4 uStack128;
  undefined4 uStack112;
  undefined4 uStack96;
  undefined4 uStack80;
  undefined *puStack64;
  long *plStack56;
  long lStack48;
  
  pplVar12 = &plStack56;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  puStack64 = &UNK_0010596d;
  piStack288 = (int *)func_0x001015b0();
  *piStack288 = 0;
  puStack64 = &UNK_0010597f;
  plVar11 = param_9;
  (*param_12)();
  if (plStack56 == param_9) {
    uVar4 = 0;
code_r0x001059a6:
    if (param_10 == (long **)0x0) goto code_r0x001059ae;
  }
  else {
    if (param_10 == (long **)0x0) {
      uVar4 = 0;
      if (*(char *)plStack56 != '\0') goto code_r0x001059ae;
      if (in_ST0 == (float10)0) {
        uVar4 = 1;
        goto code_r0x001059ae;
      }
code_r0x0010599e:
      uVar4 = (ulong)(*piStack288 != 0x22);
      goto code_r0x001059a6;
    }
    uVar4 = 1;
    if (in_ST0 != (float10)0) goto code_r0x0010599e;
  }
  *param_10 = plStack56;
code_r0x001059ae:
  lVar8 = *(long *)(in_FS_OFFSET + 0x28);
  *param_11 = in_ST0;
  if (lStack48 == lVar8) {
    return (uint *)uVar4;
  }
  puStack64 = &UNK_001059f9;
  cVar3 = func_0x00101670();
  if (cVar3 != '\0') {
    uStack192 = extraout_XMM0_Da;
    uStack188 = extraout_XMM0_Db;
    uStack176 = param_2;
    uStack160 = param_3;
    uStack144 = param_4;
    uStack128 = param_5;
    uStack112 = param_6;
    uStack96 = param_7;
    uStack80 = param_8;
  }
  lStack248 = *(long *)(in_FS_OFFSET + 0x28);
  plStack264 = &lStack48;
  puStack256 = auStack240;
  uStack272 = 0x10;
  uStack268 = 0x30;
  pfStack280 = (float10 *)&UNK_00105a94;
  uStack224 = extraout_RDX;
  uStack208 = param_13;
  uStack200 = param_14;
  uVar5 = rpl_vasprintf();
  if (lStack248 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uint *)uVar5;
  }
  pfStack280 = (float10 *)&UNK_00105ab1;
  func_0x00101670();
  lStack320 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)auStack324;
  }
  plStack336 = (long *)&UNK_00105af7;
  pbVar13 = (byte *)pplVar12;
  plVar15 = plVar11;
  pplStack304 = param_10;
  plStack296 = param_9;
  pfStack280 = param_11;
  uVar4 = func_0x00101690();
  if ((0xfffffffffffffffd < uVar4) && (extraout_RDX_00 != 0)) {
    plVar15 = (long *)0x0;
    plStack336 = (long *)&UNK_00105b0c;
    cVar3 = hard_locale();
    if (cVar3 == '\0') {
      uVar4 = 1;
      *(uint *)plVar11 = (uint)*(byte *)pplVar12;
    }
  }
  if (lStack320 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uint *)uVar4;
  }
  plStack336 = (long *)&UNK_00105b43;
  func_0x00101670();
  lVar8 = 0;
  puVar14 = &uStack352;
  lStack344 = *(long *)(in_FS_OFFSET + 0x28);
  plStack336 = plVar11;
  lVar6 = vasnprintf(0,&uStack352,pbVar13,extraout_RDX_01);
  if (lVar6 == 0) {
    uStack352 = 0xffffffff;
  }
  else {
    if (uStack352 < 0x80000000) {
      *plVar15 = lVar6;
      uStack352 = uStack352 & 0xffffffff;
    }
    else {
      func_0x00101590();
      puVar7 = (undefined4 *)func_0x001015b0();
      *puVar7 = 0x4b;
      uStack352 = 0xffffffff;
      lVar8 = lVar6;
    }
  }
  if (lStack344 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101670();
    if (c_locale_cache == (uint *)0x0) {
      c_locale_cache = (uint *)func_0x001016b0(0x1fbf,&UNK_00108120,0);
    }
    puVar9 = c_locale_cache;
    if ((c_locale_cache == (uint *)0x0) ||
       (puVar9 = (uint *)func_0x00101780(), puVar9 == (uint *)0x0)) {
      if (puVar14 != (ulong *)0x0) {
        *puVar14 = lVar8;
        return puVar9;
      }
      return puVar9;
    }
    func_0x00101830(lVar8,puVar14);
    puVar7 = (undefined4 *)func_0x001015b0();
    uVar1 = *puVar7;
    lVar8 = func_0x00101780();
    if (lVar8 != 0) {
      *puVar7 = uVar1;
      return (uint *)lVar8;
    }
    func_0x001015a0();
    lVar8 = func_0x001015f0();
    uVar2 = *puVar9;
    uVar5 = rpl_fclose(puVar9);
    if ((uVar2 & 0x20) != 0) {
      if ((int)uVar5 != 0) {
        return (uint *)0xffffffff;
      }
      puVar7 = (undefined4 *)func_0x001015b0();
      *puVar7 = 0;
      return (uint *)0xffffffff;
    }
    if (((int)uVar5 != 0) && (uVar5 = 0xffffffff, lVar8 == 0)) {
      piVar10 = (int *)func_0x001015b0();
      return (uint *)(ulong)-(uint)(*piVar10 != 9);
    }
    return (uint *)uVar5;
  }
  return (uint *)uStack352;
}

