
ulong mktime_ok_part_6(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 ^ *param_2 | param_1[1] ^ param_2[1] | param_1[2] ^ param_2[2] |
          param_1[3] ^ param_2[3] | param_1[4] ^ param_2[4] | param_1[5] ^ param_2[5];
  return (ulong)(uVar1 & 0xffffff00 | (uint)(uVar1 == 0));
}

