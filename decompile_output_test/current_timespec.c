
undefined  [16] current_timespec(void)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 uStack40;
  undefined8 uStack32;
  long lStack16;
  
  puVar4 = &uStack40;
  uVar5 = 0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x001027d0();
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT88(uStack32,uStack40);
  }
  func_0x00102850();
  pcVar1 = (undefined *)puVar4 + 0x14;
  ((undefined *)puVar4)[0x14] = 0;
  if ((long)uVar5 < 0) {
    do {
      pcVar2 = pcVar1;
      uVar3 = (long)uVar5 / 10;
      pcVar2[-1] = ((char)uVar3 * '\n' + '0') - (char)uVar5;
      pcVar1 = pcVar2 + -1;
      uVar5 = uVar3;
    } while (uVar3 != 0);
    pcVar2[-2] = '-';
    return ZEXT816(pcVar2 + -2);
  }
  do {
    pcVar1 = pcVar1 + -1;
    uVar3 = uVar5 / 10;
    *pcVar1 = (char)uVar5 + (char)uVar3 * -10 + '0';
    uVar5 = uVar3;
  } while (uVar3 != 0);
  return ZEXT816(pcVar1);
}

