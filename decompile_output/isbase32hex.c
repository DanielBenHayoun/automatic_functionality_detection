
ulong isbase32hex(int param_1,undefined8 param_2,uint param_3)

{
  return (ulong)(param_1 - 0x30U & 0xffffff00 | (uint)((byte)(param_1 - 0x30U) < 10) |
                param_3 & 0xffffff00 | (uint)((byte)((char)param_1 + 0xbfU) < 0x16));
}

