
void set_quoting_style(undefined1 *param_1,undefined4 param_2)

{
  if ((undefined4 *)param_1 == (undefined4 *)0x0) {
    param_1 = default_quoting_options;
  }
  *(undefined4 *)param_1 = param_2;
  return;
}

