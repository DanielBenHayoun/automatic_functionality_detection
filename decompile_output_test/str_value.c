
undefined4 * str_value(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined4 *)xmalloc(0x10);
  *puVar1 = 1;
  uVar2 = xstrdup(param_1);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  return puVar1;
}

