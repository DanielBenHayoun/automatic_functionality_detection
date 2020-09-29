
ulong is_basic(uint param_1)

{
  return (ulong)(*(uint *)(is_basic_table + (ulong)(param_1 >> 5 & 7) * 4) >> ((byte)param_1 & 0x1f)
                & 1);
}

