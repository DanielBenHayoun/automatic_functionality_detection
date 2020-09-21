
undefined1 * visible_part_0(byte param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0x20) {
    puVar1 = buf_7417 + 2;
    buf_7417._0_2_ = CONCAT11(param_1 + 0x40,0x5e);
  }
  else {
    if (param_1 < 0x7f) {
      buf_7417._0_2_ = (ushort)param_1;
      return buf_7417;
    }
    if (param_1 == 0x7f) {
      puVar1 = buf_7417 + 2;
      buf_7417._0_2_ = 0x3f5e;
    }
    else {
      buf_7417._0_2_ = 0x2d4d;
      if (param_1 < 0xa0) {
        puVar1 = buf_7417 + 4;
        buf_7417._2_2_ = CONCAT11(param_1 - 0x40,0x5e);
      }
      else {
        if (param_1 == 0xff) {
          buf_7417._2_2_ = 0x3f5e;
          puVar1 = buf_7417 + 4;
        }
        else {
          puVar1 = buf_7417 + 3;
          buf_7417._2_2_ = buf_7417._2_2_ & 0xff00 | (ushort)(byte)(param_1 + 0x80);
        }
      }
    }
  }
  *puVar1 = 0;
  return buf_7417;
}

