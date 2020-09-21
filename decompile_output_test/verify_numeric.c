
void verify_numeric(char *param_1,char *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = (uint *)func_0x00101450();
  if (*puVar1 == 0) {
    if (*param_2 != '\0') {
      if (param_2 == param_1) {
        uVar2 = quote(param_2);
        puVar4 = &UNK_00108b91;
      }
      else {
        uVar2 = quote(param_1);
        puVar4 = &UNK_00108420;
      }
      uVar3 = func_0x001014f0(0,puVar4,5);
      func_0x001016b0(0,0,uVar3,uVar2);
      exit_status = 1;
    }
    return;
  }
  uVar2 = quote(param_1);
  func_0x001016b0(0,(ulong)*puVar1,&UNK_00108cce,uVar2);
  exit_status = 1;
  return;
}

