
ulong isbase64(byte param_1)

{
  return (ulong)(~(uint)(byte)b64[param_1] & 0xffffff00 | ~(uint)(byte)b64[param_1] >> 7 & 1);
}

