
void randint_new(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)xmalloc(0x18);
  *puVar1 = param_1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return;
}

