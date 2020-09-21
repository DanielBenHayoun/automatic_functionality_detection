
char * locale_charset(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)func_0x00102a00(0xe);
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 == '\0') {
      pcVar1 = "ASCII";
    }
    return pcVar1;
  }
  return &UNK_00114cc6;
}

