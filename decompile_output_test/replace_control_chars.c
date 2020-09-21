
void replace_control_chars(char *param_1)

{
  char cVar1;
  
  while (cVar1 = *param_1, cVar1 != '\0') {
    if (('\0' < cVar1) && ((cVar1 < ' ' || (cVar1 == '\x7f')))) {
      *param_1 = '?';
    }
    param_1 = param_1 + 1;
  }
  return;
}

