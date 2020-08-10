
ulong all_digits_p(char *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = func_0x00101660();
  if ((int)*param_1 - 0x30U < 10) {
    uVar2 = func_0x001016f0(param_1,&UNK_00107f84);
    uVar1 = uVar2 & 0xffffffffffffff00 | (ulong)(uVar2 == uVar1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

