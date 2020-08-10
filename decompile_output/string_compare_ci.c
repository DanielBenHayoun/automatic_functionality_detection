
uint string_compare_ci(void)

{
  uint uVar1;
  
  uVar1 = mbscasecmp();
  return uVar1 & 0xffffff00 | (uint)(uVar1 == 0);
}

