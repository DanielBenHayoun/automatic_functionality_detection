
ulong isbase64url(byte param_1)

{
  ulong in_RAX;
  
  if ((param_1 != 0x2d && param_1 != 0x5f) && ((param_1 & 0xfb) != 0x2b)) {
    return (ulong)(~(uint)(byte)b64[param_1] & 0xffffff00 | ~(uint)(byte)b64[param_1] >> 7 & 1);
  }
  return in_RAX & 0xffffffffffffff00 | (ulong)(param_1 == 0x2d || param_1 == 0x5f);
}

