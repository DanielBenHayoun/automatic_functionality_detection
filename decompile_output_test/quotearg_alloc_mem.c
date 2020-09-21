
undefined8
quotearg_alloc_mem(undefined8 param_1,undefined8 param_2,long *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if ((uint *)param_4 == (uint *)0x0) {
    param_4 = default_quoting_options;
  }
  puVar6 = &UNK_00109f3f;
  puVar2 = (undefined4 *)func_0x001020b0();
  uVar1 = *puVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | ((uint *)param_4)[1];
  lVar3 = quotearg_buffer_restyled
                    (0,0,param_1,param_2,(ulong)*(uint *)param_4,(ulong)uVar5,(uint *)param_4 + 2,
                     *(undefined8 *)((uint *)param_4 + 10),*(undefined8 *)((uint *)param_4 + 0xc),
                     puVar6);
  puVar6 = &UNK_00109f96;
  uVar4 = xmalloc(lVar3 + 1);
  quotearg_buffer_restyled
            (uVar4,lVar3 + 1,param_1,param_2,(ulong)*(uint *)param_4,(ulong)uVar5,
             (uint *)param_4 + 2,*(undefined8 *)((uint *)param_4 + 10),
             *(undefined8 *)((uint *)param_4 + 0xc),puVar6);
  *puVar2 = uVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}

