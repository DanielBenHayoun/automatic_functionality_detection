
undefined8 fallback_failure_callback(uint param_1,undefined8 param_2,undefined8 param_3)

{
  if (0xffff < param_1) {
    func_0x00101700(param_3,1,&UNK_0010940f);
    return 0xffffffffffffffff;
  }
  func_0x00101700(param_3,1,&UNK_00109408);
  return 0xffffffffffffffff;
}

