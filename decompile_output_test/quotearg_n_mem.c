
undefined1 * quotearg_n_mem(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong *puVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  
  iVar10 = (int)param_1;
  puVar13 = &UNK_001032d1;
  puVar5 = (undefined4 *)func_0x00101200();
  uVar1 = *puVar5;
  if (-1 < iVar10) {
    puVar8 = slotvec;
    if (nslots <= iVar10) {
      if (iVar10 == 0x7fffffff) goto code_r0x00103456;
      iVar11 = iVar10 + 1;
      if (slotvec == (undefined4 *)slotvec0) {
        puVar8 = (undefined4 *)xrealloc(0,(long)iVar11 << 4);
        auVar3 = slotvec0;
        slotvec = puVar8;
        *puVar8 = SUB164(slotvec0,0);
        puVar8[1] = SUB164(auVar3 >> 0x20,0);
        puVar8[2] = SUB164(auVar3 >> 0x40,0);
        puVar8[3] = SUB164(auVar3 >> 0x60,0);
      }
      else {
        puVar8 = (undefined4 *)xrealloc(slotvec,(long)iVar11 << 4);
        slotvec = puVar8;
      }
      puVar13 = &UNK_0010334e;
      func_0x00101300(puVar8 + (long)nslots * 4,0,(long)(iVar11 - nslots) << 4);
      nslots = iVar11;
    }
    puVar9 = (ulong *)(puVar8 + (long)iVar10 * 4);
    uVar2 = *puVar9;
    puVar12 = (undefined1 *)puVar9[1];
    uVar4 = default_quoting_options._4_4_ | 1;
    uVar6 = quotearg_buffer_restyled
                      (puVar12,uVar2,param_2,param_3,(ulong)default_quoting_options._0_4_,
                       (ulong)uVar4,0x307208,default_quoting_options._40_8_,
                       default_quoting_options._48_8_,puVar13);
    if (uVar2 <= uVar6) {
      uVar6 = uVar6 + 1;
      *puVar9 = uVar6;
      if (puVar12 != slot0) {
        func_0x001011e0(puVar12);
      }
      puVar13 = &UNK_001033dc;
      puVar12 = (undefined1 *)xmalloc(uVar6);
      *(undefined1 **)(puVar9 + 1) = puVar12;
      quotearg_buffer_restyled
                (puVar12,uVar6,param_2,param_3,(ulong)default_quoting_options._0_4_,(ulong)uVar4,
                 0x307208,default_quoting_options._40_8_,default_quoting_options._48_8_,puVar13);
    }
    *puVar5 = uVar1;
    return puVar12;
  }
  func_0x001011f0();
code_r0x00103456:
  xalloc_die();
  puVar5 = (undefined4 *)func_0x00101200();
  uVar1 = *puVar5;
  if (param_1 == (undefined1 *)0x0) {
    param_1 = default_quoting_options;
  }
  uVar7 = xmemdup(param_1,0x38);
  *puVar5 = uVar1;
  return (undefined1 *)uVar7;
}

