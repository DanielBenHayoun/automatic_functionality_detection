
ulong hextobin(byte param_1)

{
  switch(param_1) {
  case 0x41:
  case 0x61:
    return 10;
  case 0x42:
  case 0x62:
    return 0xb;
  case 0x43:
  case 99:
    return 0xc;
  case 0x44:
  case 100:
    return 0xd;
  case 0x45:
  case 0x65:
    return 0xe;
  case 0x46:
  case 0x66:
    return 0xf;
  default:
    return (ulong)((uint)param_1 - 0x30);
  }
}

