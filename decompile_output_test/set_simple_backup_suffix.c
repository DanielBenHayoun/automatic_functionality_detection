
void set_simple_backup_suffix(char *param_1)

{
  char *pcVar1;
  
  if ((((param_1 == (char *)0x0) &&
       (param_1 = (char *)func_0x00101da0(&UNK_0010bf76), param_1 == (char *)0x0)) ||
      (*param_1 == '\0')) || (pcVar1 = (char *)last_component(param_1), pcVar1 != param_1)) {
    param_1 = "~";
  }
  simple_backup_suffix = param_1;
  return;
}

