
void print_filename(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 == '\0') {
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fputs_unlocked_0030cee0)(param_1,stdout);
    return;
  }
  cVar1 = *param_1;
  do {
    while( true ) {
      if (cVar1 == '\0') {
        return;
      }
      if (cVar1 != '\n') break;
      func_0x00101a70(&UNK_001091e4,1,2);
code_r0x0010322e:
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
    if (cVar1 == '\\') {
      func_0x00101a70(&UNK_001091e7,1,2);
      goto code_r0x0010322e;
    }
    pcVar2 = *(char **)(stdout + 0x28);
    if (*(char **)(stdout + 0x30) <= pcVar2) {
      func_0x00101920(stdout);
      goto code_r0x0010322e;
    }
    param_1 = param_1 + 1;
    *(char **)(stdout + 0x28) = pcVar2 + 1;
    *pcVar2 = cVar1;
    cVar1 = *param_1;
  } while( true );
}

