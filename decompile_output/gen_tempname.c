
void gen_tempname(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined4 auStack12 [3];
  
  auStack12[0] = param_3;
  if (param_4 == 1) {
    try_tempname_len(param_1,param_2,auStack12,try_dir,6);
    return;
  }
  if (param_4 != 2) {
    if (param_4 == 0) {
      try_tempname_len(param_1,param_2,auStack12,try_file,6);
      return;
    }
    func_0x00101940(&UNK_00107458,&UNK_00107448,0x147,__PRETTY_FUNCTION___5642);
  }
  try_tempname_len();
  return;
}

