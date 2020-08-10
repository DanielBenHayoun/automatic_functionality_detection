
undefined8 exit_failure_callback(uint param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar1 = func_0x001014f0(0,param_2,5);
    uVar2 = func_0x001014f0(0,&UNK_00109488,5);
    func_0x001016b0(1,0,uVar2,(ulong)param_1,uVar1);
    return 0xffffffffffffffff;
  }
  uVar1 = func_0x001014f0(0,&UNK_00109458,5);
  func_0x001016b0(1,0,uVar1,(ulong)param_1);
  return 0xffffffffffffffff;
}

