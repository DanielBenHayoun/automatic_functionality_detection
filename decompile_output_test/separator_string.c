
void separator_string(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1;
  uVar2 = func_0x00101ca0();
  if (uVar2 < 0x80000000) {
    col_sep_string = param_1;
    col_sep_length = (int)uVar2;
    return;
  }
  integer_overflow();
  uVar1 = func_0x00101c80(0,&UNK_0010be75,5);
  columns = xdectoimax(uVar3,1,0x7fffffff,&UNK_0010bee5,uVar1,0,param_1);
  explicit_columns = 1;
  return;
}

