
void quotearg_n_style(ulong param_1,ulong param_2,ulong param_3)

{
  ulong extraout_RDX;
  long in_FS_OFFSET;
  
  do {
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if ((int)param_2 == 10) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x10a1a9;
      func_0x001020a0(param_1,param_2,0);
      param_3 = param_2;
    }
    else {
      *(int *)((undefined *)register0x00000020 + -0x48) = (int)param_2;
      *(undefined8 *)((undefined *)register0x00000020 + -0x44) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x3c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x34) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x2c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x24) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x1c) = 0;
      *(undefined4 *)((undefined *)register0x00000020 + -0x14) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x10a18f;
      quotearg_n_options(param_1,param_3,0xffffffffffffffff,(undefined *)register0x00000020 + -0x48)
      ;
      if (*(long *)((undefined *)register0x00000020 + -0x10) == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x10a1ae;
    func_0x001021f0();
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if ((int)param_3 == 10) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x10a235;
      func_0x001020a0();
    }
    else {
      *(int *)((undefined *)register0x00000020 + -0x90) = (int)param_3;
      *(undefined8 *)((undefined *)register0x00000020 + -0x8c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x84) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x7c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x74) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x6c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -100) = 0;
      *(undefined4 *)((undefined *)register0x00000020 + -0x5c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x10a21b;
      param_3 = extraout_RDX;
      quotearg_n_options();
      if (*(long *)((undefined *)register0x00000020 + -0x58) == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x10a23a;
    func_0x001021f0();
    param_2 = param_1 & 0xffffffff;
    param_1 = 0;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x90);
  } while( true );
}

