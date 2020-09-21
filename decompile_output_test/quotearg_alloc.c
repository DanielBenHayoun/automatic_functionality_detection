
/* WARNING: Removing unreachable block (ram,0x00109fd6) */

undefined8 quotearg_alloc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  if ((uint *)param_3 == (uint *)0x0) {
    param_3 = default_quoting_options;
  }
  puVar6 = &UNK_00109f3f;
  puVar3 = (undefined4 *)func_0x001020b0();
  uVar1 = *puVar3;
  uVar2 = ((uint *)param_3)[1];
  lVar4 = quotearg_buffer_restyled
                    (0,0,param_1,param_2,(ulong)*(uint *)param_3,(ulong)(uVar2 | 1),
                     (uint *)param_3 + 2,*(undefined8 *)((uint *)param_3 + 10),
                     *(undefined8 *)((uint *)param_3 + 0xc),puVar6);
  puVar6 = &UNK_00109f96;
  uVar5 = xmalloc(lVar4 + 1);
  quotearg_buffer_restyled
            (uVar5,lVar4 + 1,param_1,param_2,(ulong)*(uint *)param_3,(ulong)(uVar2 | 1),
             (uint *)param_3 + 2,*(undefined8 *)((uint *)param_3 + 10),
             *(undefined8 *)((uint *)param_3 + 0xc),puVar6);
  *puVar3 = uVar1;
  return uVar5;
}

