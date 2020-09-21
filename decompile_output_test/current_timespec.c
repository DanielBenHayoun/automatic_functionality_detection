
undefined  [16] current_timespec(void)

{
  long lVar1;
  long extraout_RDX;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 uStack40;
  undefined8 uStack32;
  long lStack24;
  long lStack16;
  
  lVar3 = 0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x001027a0(0,&uStack40);
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT88(uStack32,uStack40);
  }
  func_0x00102830();
  lVar1 = *(long *)(lVar3 + 0xa8);
  if (((lVar1 == 0) || (*(long *)(lVar3 + 0x30) != 0)) || (*(char *)(lVar3 + 0xa1) != '\0')) {
    if (4 < lStack16) {
      *(long *)(lVar3 + 0xa8) = lVar1 + 1;
      *(long *)(lVar3 + 0x30) = lStack16 + -4;
      *(long *)(lVar3 + 0x40) = lStack24 % 100;
      *(long *)(lVar3 + 0x38) = (lStack24 / 100) % 100;
      *(long *)(lVar3 + 0x28) = lStack24 / 10000;
      return CONCAT88(lStack24 / 10000,
                      lStack24 * SUB168(SEXT816(lStack24) * SEXT816(0x346dc5d63886594b) >> 0x40,0));
    }
    *(long *)(lVar3 + 200) = *(long *)(lVar3 + 200) + 1;
    if (2 < lStack16) {
      lVar2 = lStack24 / 100;
      *(long *)(lVar3 + 0x48) = lVar2;
      lVar1 = lVar2 * 100;
      *(long *)(lVar3 + 0x50) = lStack24 % 100;
      goto code_r0x001040e8;
    }
  }
  else {
    if ((*(long *)(lVar3 + 200) != 0) || (2 < lStack16)) {
      *(undefined *)(lVar3 + 0xd8) = 1;
      *(long *)(lVar3 + 0x30) = lStack16;
      *(undefined4 *)(lVar3 + 0x20) = (int)uStack32;
      *(undefined4 *)(lVar3 + 0x24) = (int)((ulong)uStack32 >> 0x20);
      *(undefined4 *)(lVar3 + 0x28) = (int)lStack24;
      *(undefined4 *)(lVar3 + 0x2c) = (int)((ulong)lStack24 >> 0x20);
      return CONCAT88(extraout_RDX,lStack16);
    }
    *(undefined8 *)(lVar3 + 200) = 1;
  }
  *(long *)(lVar3 + 0x48) = lStack24;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  lVar2 = extraout_RDX;
code_r0x001040e8:
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined4 *)(lVar3 + 0x1c) = 2;
  return CONCAT88(lVar2,lVar1);
}

