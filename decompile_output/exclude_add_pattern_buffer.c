
void exclude_add_pattern_buffer(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)xmalloc(0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puVar2[1] = param_2;
  *(undefined8 **)(param_1 + 8) = puVar2;
  *puVar2 = uVar1;
  return;
}

