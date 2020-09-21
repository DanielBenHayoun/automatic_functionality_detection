
ulong isbase32(byte param_1)

{
  return (ulong)(~(uint)(byte)b32[param_1] & 0xffffff00 | ~(uint)(byte)b32[param_1] >> 7 & 1);
}

