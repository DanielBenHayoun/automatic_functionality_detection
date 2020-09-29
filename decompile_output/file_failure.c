
void file_failure(char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint *puVar2;
  
  uVar1 = quotearg_style(4,param_3);
  puVar2 = (uint *)func_0x001032a0();
  func_0x00103760(0,(ulong)*puVar2,param_2,uVar1);
  if (param_1 == '\0') {
    if (exit_status == 0) {
      exit_status = 1;
      return;
    }
  }
  else {
    exit_status = 2;
  }
  return;
}

