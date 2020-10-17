
void set_file_list(undefined1 *param_1)

{
  if (param_1 == (undefined1 *)0x0) {
    param_1 = stdin_argv;
  }
  have_read_stdin = 0;
  file_list = param_1;
  return;
}

