
undefined * gettext_quote_part_1(char *param_1,int param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  
  pbVar1 = (byte *)locale_charset();
  if ((*pbVar1 & 0xdf) == 0x55) {
    if (((((pbVar1[1] & 0xdf) == 0x54) && ((pbVar1[2] & 0xdf) == 0x46)) && (pbVar1[3] == 0x2d)) &&
       ((pbVar1[4] == 0x38 && (pbVar1[5] == 0)))) {
      puVar2 = &UNK_001100c4;
      if (*param_1 != '`') {
        puVar2 = &UNK_001100c8;
      }
      return puVar2;
    }
  }
  else {
    if ((((*pbVar1 & 0xdf) == 0x47) && ((pbVar1[1] & 0xdf) == 0x42)) &&
       ((pbVar1[2] == 0x31 &&
        ((((pbVar1[3] == 0x38 && (pbVar1[4] == 0x30)) && (pbVar1[5] == 0x33)) &&
         ((pbVar1[6] == 0x30 && (pbVar1[7] == 0)))))))) {
      puVar2 = &UNK_001100cc;
      if (*param_1 != '`') {
        puVar2 = &UNK_001100d0;
      }
      return puVar2;
    }
  }
  puVar2 = &UNK_0010f006;
  if (param_2 != 9) {
    puVar2 = &UNK_00110adf;
  }
  return puVar2;
}

