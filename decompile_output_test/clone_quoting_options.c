
void clone_quoting_options(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_0x00101200();
  uVar1 = *puVar2;
  if (param_1 == (undefined1 *)0x0) {
    param_1 = default_quoting_options;
  }
  xmemdup(param_1,0x38);
  *puVar2 = uVar1;
  return;
}

