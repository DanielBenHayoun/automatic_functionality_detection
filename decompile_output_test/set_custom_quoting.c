
void set_custom_quoting(undefined1 *param_1,long param_2,long param_3,undefined8 param_4,
                       undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 extraout_RDX;
  undefined *puVar3;
  
  if ((undefined4 *)param_1 == (undefined4 *)0x0) {
    param_1 = default_quoting_options;
  }
  *(undefined4 *)param_1 = 10;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(long *)((undefined4 *)param_1 + 10) = param_2;
    *(long *)((undefined4 *)param_1 + 0xc) = param_3;
    return;
  }
  func_0x001011f0();
  if ((uint *)param_5 == (uint *)0x0) {
    param_5 = default_quoting_options;
  }
  puVar3 = &UNK_001035a2;
  puVar2 = (undefined4 *)func_0x00101200();
  uVar1 = *puVar2;
  quotearg_buffer_restyled
            (param_1,param_2,extraout_RDX,param_4,(ulong)*(uint *)param_5,
             (ulong)((uint *)param_5)[1],(uint *)param_5 + 2,*(undefined8 *)((uint *)param_5 + 10),
             *(undefined8 *)((uint *)param_5 + 0xc),puVar3);
  *puVar2 = uVar1;
  return;
}

