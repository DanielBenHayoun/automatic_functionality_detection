
/* WARNING: Removing unreachable block (ram,0x0010bf91) */
/* WARNING: Removing unreachable block (ram,0x0010bf96) */
/* WARNING: Removing unreachable block (ram,0x0010bfc1) */
/* WARNING: Removing unreachable block (ram,0x0010bfc5) */

undefined1 * quote(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  
  puVar9 = &UNK_0010be11;
  puVar5 = (undefined4 *)func_0x00102780(0,param_1,0xffffffffffffffff);
  uVar1 = *puVar5;
  puVar7 = slotvec;
  if (nslots < 1) {
    if (slotvec == (ulong *)slotvec0) {
      puVar7 = (ulong *)xrealloc(0,0x10);
      auVar3 = slotvec0;
      slotvec = puVar7;
      *(int *)puVar7 = SUB164(slotvec0,0);
      *(undefined4 *)((long)puVar7 + 4) = SUB164(auVar3 >> 0x20,0);
      *(int *)(puVar7 + 1) = SUB164(auVar3 >> 0x40,0);
      *(undefined4 *)((long)puVar7 + 0xc) = SUB164(auVar3 >> 0x60,0);
    }
    else {
      puVar7 = (ulong *)xrealloc(slotvec,0x10);
      slotvec = puVar7;
    }
    puVar9 = &UNK_0010be8e;
    func_0x001028f0(puVar7 + (long)nslots * 2,0,(long)(1 - nslots) << 4);
    nslots = 1;
  }
  uVar2 = *puVar7;
  puVar8 = (undefined1 *)puVar7[1];
  uVar4 = quote_quoting_options._4_4_ | 1;
  uVar6 = quotearg_buffer_restyled
                    (puVar8,uVar2,param_1,0xffffffffffffffff,(ulong)quote_quoting_options._0_4_,
                     (ulong)uVar4,0x318048,quote_quoting_options._40_8_,quote_quoting_options._48_8_
                     ,puVar9);
  if (uVar2 <= uVar6) {
    uVar6 = uVar6 + 1;
    *puVar7 = uVar6;
    if (puVar8 != slot0) {
      func_0x00102750(puVar8);
    }
    puVar9 = &UNK_0010bf1c;
    puVar8 = (undefined1 *)xmalloc(uVar6);
    *(undefined1 **)(puVar7 + 1) = puVar8;
    quotearg_buffer_restyled
              (puVar8,uVar6,param_1,0xffffffffffffffff,(ulong)quote_quoting_options._0_4_,
               (ulong)uVar4,0x318048,quote_quoting_options._40_8_,quote_quoting_options._48_8_,
               puVar9);
  }
  *puVar5 = uVar1;
  return puVar8;
}

