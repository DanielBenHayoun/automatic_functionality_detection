
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong xnanosleep(void)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  code *in_RCX;
  double *extraout_RDX;
  long extraout_RDX_00;
  long lVar5;
  long **pplVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  long in_FS_OFFSET;
  double extraout_XMM0_Qa;
  long lStack224;
  ulong uStack216;
  long lStack200;
  long *plStack192;
  ulong uStack184;
  undefined *puStack176;
  undefined auStack164 [4];
  long lStack160;
  long **pplStack144;
  long *plStack136;
  int *piStack128;
  double *pdStack120;
  long *plStack112;
  long lStack104;
  uint *puStack96;
  undefined *puStack88;
  undefined auStack56 [24];
  long lStack32;
  
  puStack88 = auStack56;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  auStack56._0_16_ = dtotimespec();
  puStack96 = (uint *)func_0x001012c0();
  do {
    pplStack144 = (long **)0x0;
    *puStack96 = 0;
    plStack136 = (long *)auStack56;
    uVar2 = rpl_nanosleep();
    if ((int)uVar2 == 0) goto code_r0x00104664;
  } while ((*puStack96 & 0xfffffffb) == 0);
  uVar2 = 0xffffffff;
code_r0x00104664:
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  func_0x00101380();
  pplVar6 = &plStack112;
  lStack104 = *(long *)(in_FS_OFFSET + 0x28);
  pdStack120 = (double *)&UNK_001046bd;
  piStack128 = (int *)func_0x001012c0();
  *piStack128 = 0;
  pdStack120 = (double *)&UNK_001046cf;
  plStack192 = plStack136;
  (*in_RCX)();
  if (plStack112 == plStack136) {
    uVar3 = 0;
code_r0x001046f6:
    if (pplStack144 == (long **)0x0) goto code_r0x001046fe;
  }
  else {
    if (pplStack144 == (long **)0x0) {
      uVar3 = 0;
      if (*(char *)plStack112 != '\0') goto code_r0x001046fe;
      if (extraout_XMM0_Qa == _UNK_00105940) {
        uVar3 = 1;
        goto code_r0x001046fe;
      }
code_r0x001046ee:
      uVar3 = (ulong)(*piStack128 != 0x22);
      goto code_r0x001046f6;
    }
    uVar3 = 1;
    if (extraout_XMM0_Qa != _UNK_00105940) goto code_r0x001046ee;
  }
  *pplStack144 = plStack112;
code_r0x001046fe:
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  *extraout_RDX = extraout_XMM0_Qa;
  if (lStack104 == lVar5) {
    return uVar3;
  }
  pdStack120 = (double *)&UNK_00104751;
  func_0x00101380();
  lStack160 = *(long *)(in_FS_OFFSET + 0x28);
  if (plStack192 == (long *)0x0) {
    plStack192 = (long *)auStack164;
  }
  puStack176 = &UNK_00104797;
  pplVar7 = pplVar6;
  plVar8 = plStack192;
  pdStack120 = extraout_RDX;
  uStack184 = func_0x001013a0();
  if ((0xfffffffffffffffd < uStack184) && (extraout_RDX_00 != 0)) {
    plVar8 = (long *)0x0;
    puStack176 = &UNK_001047ac;
    cVar1 = hard_locale();
    if (cVar1 == '\0') {
      uStack184 = 1;
      *(uint *)plStack192 = (uint)*(byte *)pplVar6;
    }
  }
  if (lStack160 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uStack184;
  }
  puStack176 = &UNK_001047e3;
  func_0x00101380();
  plVar9 = &lStack224;
  lStack200 = *(long *)(in_FS_OFFSET + 0x28);
  puStack176 = (undefined *)extraout_RDX_00;
  if ((ulong)plVar8[1] < 1000000000) {
    lVar5 = *plVar8;
    uStack216 = plVar8[1];
    while (0x1fa400 < lVar5) {
      lStack224 = 0x1fa400;
      lVar5 = lVar5 + -0x1fa400;
      pplVar6 = pplVar7;
      plVar8 = &lStack224;
      uVar2 = func_0x001013c0();
      if ((int)uVar2 != 0) {
        if (pplVar7 != (long **)0x0) {
          *pplVar7 = (long *)((long)*pplVar7 + lVar5);
        }
        goto code_r0x00104887;
      }
      uStack216 = 0;
    }
    lStack224 = lVar5;
    uVar2 = func_0x001013c0();
    pplVar6 = pplVar7;
    plVar8 = plVar9;
  }
  else {
    puVar4 = (undefined4 *)func_0x001012c0();
    *puVar4 = 0x16;
    uVar2 = 0xffffffff;
    pplVar6 = pplVar7;
  }
code_r0x00104887:
  if (lStack200 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  func_0x00101380();
  if (c_locale_cache == 0) {
    c_locale_cache = func_0x001013b0(0x1fbf,&UNK_00105948,0);
  }
  if (c_locale_cache == 0) {
    if (pplVar6 != (long **)0x0) {
      *pplVar6 = plVar8;
    }
    return 0;
  }
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR_strtod_l_00306ec0)(plVar8,pplVar6);
  return uVar2;
}

