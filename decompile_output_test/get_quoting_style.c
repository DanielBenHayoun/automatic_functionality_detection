
ulong get_quoting_style(undefined1 *param_1)

{
  if ((uint *)param_1 == (uint *)0x0) {
    param_1 = default_quoting_options;
  }
  return (ulong)*(uint *)param_1;
}

