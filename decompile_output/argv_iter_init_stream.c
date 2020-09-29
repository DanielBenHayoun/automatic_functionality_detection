
void argv_iter_init_stream(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)func_0x00101dc8(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
  }
  return;
}

