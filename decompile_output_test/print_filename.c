
void print_filename(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == '\0') {
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fputs_unlocked_0030dee8)(param_1,stdout);
    return;
  }
  cVar1 = *param_1;
  do {
    while( true ) {
      if (cVar1 == '\0') {
        return;
      }
      if (cVar1 != '\n') break;
      func_0x001017d0(&UNK_0010a684,1,2);
code_r0x00102c6e:
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    if (cVar1 == '\\') {
      func_0x001017d0(&UNK_0010a687,1,2);
      goto code_r0x00102c6e;
    }
    pcVar2 = *(char **)(stdout + 0x28);
    if (*(char **)(stdout + 0x30) <= pcVar2) {
      func_0x001016d0(stdout);
      goto code_r0x00102c6e;
    }
    param_1 = param_1 + 1;
    *(char **)(stdout + 0x28) = pcVar2 + 1;
    *pcVar2 = cVar1;
    cVar1 = *param_1;
  } while( true );
}

