
void perform_basename(undefined8 param_1,char *param_2,char param_3)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar2 = (char *)base_name();
  strip_trailing_slashes(pcVar2);
  if ((param_2 != (char *)0x0) && (*pcVar2 != '/')) {
    lVar3 = func_0x00101320(pcVar2);
    pcVar5 = pcVar2 + lVar3;
    lVar3 = func_0x00101320(param_2);
    pcVar4 = param_2 + lVar3;
    do {
      if ((pcVar5 <= pcVar2) || (pcVar4 <= param_2)) {
        if (pcVar2 < pcVar5) {
          *pcVar5 = '\0';
        }
        break;
      }
      pcVar4 = pcVar4 + -1;
      pcVar5 = pcVar5 + -1;
    } while (*pcVar5 == *pcVar4);
  }
  func_0x001013c0(pcVar2);
  pbVar1 = *(byte **)(stdout + 0x28);
  if (pbVar1 < *(byte **)(stdout + 0x30)) {
    *(byte **)(stdout + 0x28) = pbVar1 + 1;
    *pbVar1 = -(param_3 == '\0') & 10;
  }
  else {
    func_0x00101360();
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00306e80)(pcVar2);
  return;
}

