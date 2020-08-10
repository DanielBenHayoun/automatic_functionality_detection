
ulong format_address_std(ulong param_1,undefined param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  char acStack34 [18];
  long lStack16;
  
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = acStack34 + 1;
  acStack34[2] = 0;
  pcVar5 = pcVar1 + -(long)address_pad_len;
  if (address_base == 10) {
    do {
      pcVar1 = pcVar1 + -1;
      uVar3 = param_1 / 10;
      *pcVar1 = (char)param_1 + (char)uVar3 * -10 + '0';
      param_1 = uVar3;
    } while (uVar3 != 0);
  }
  else {
    if (address_base == 0x10) {
      do {
        uVar3 = param_1 >> 4;
        pcVar1 = pcVar1 + -1;
        *pcVar1 = (&UNK_0010acc4)[(uint)param_1 & 0xf];
        param_1 = uVar3;
      } while (uVar3 != 0);
    }
    else {
      if (address_base == 8) {
        do {
          uVar3 = param_1 >> 3;
          pcVar1 = pcVar1 + -1;
          *pcVar1 = ((byte)param_1 & 7) + 0x30;
          param_1 = uVar3;
        } while (uVar3 != 0);
      }
    }
  }
  pcVar4 = pcVar1;
  if (pcVar5 < pcVar1) {
    do {
      pcVar1 = pcVar1 + -1;
      *pcVar1 = '0';
      pcVar4 = pcVar5;
    } while (pcVar5 != pcVar1);
  }
  uVar6 = stdout;
  acStack34[1] = param_2;
  func_0x001019b0(pcVar4,stdout);
  if (lStack16 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x001018e0();
    if (*pcVar4 == '\0') {
      return 0;
    }
    if (*pcVar4 == '+') {
      pcVar4 = pcVar4 + 1;
    }
    lVar2 = func_0x00101910(pcVar4,0x2e);
    uVar3 = 10;
    if ((lVar2 == 0) && (uVar3 = 8, *pcVar4 == '0')) {
      uVar3 = (ulong)((uint)((pcVar4[1] & 0xdfU) == 0x58) * 8 + 8);
    }
    uVar3 = xstrtoumax(pcVar4,0,uVar3,uVar6,&UNK_0010acd5);
    return uVar3 & 0xffffffffffffff00 | (ulong)((int)uVar3 == 0);
  }
  return 0;
}

