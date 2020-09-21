
void base64url_encode(undefined8 param_1,undefined8 param_2,char *param_3,long param_4)

{
  char *pcVar1;
  
  base64_encode();
  if (param_4 != 0) {
    pcVar1 = param_3 + param_4;
    do {
      while (*param_3 == '+') {
        *param_3 = '-';
        param_3 = param_3 + 1;
        if (param_3 == pcVar1) {
          return;
        }
      }
      if (*param_3 == '/') {
        *param_3 = '_';
      }
      param_3 = param_3 + 1;
    } while (param_3 != pcVar1);
  }
  return;
}

