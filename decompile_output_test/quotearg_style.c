
void quotearg_style(ulong param_1,ulong param_2)

{
  ulong extraout_RDX;
  ulong uVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  do {
    iVar2 = (int)param_1;
    uVar1 = param_1 & 0xffffffff;
    param_1 = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if (iVar2 == 10) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x103889;
      func_0x001011f0(0,uVar1,0);
      param_2 = uVar1;
    }
    else {
      *(int *)((undefined *)register0x00000020 + -0x48) = iVar2;
      *(undefined8 *)((undefined *)register0x00000020 + -0x44) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x3c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x34) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x2c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x24) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x1c) = 0;
      *(undefined4 *)((undefined *)register0x00000020 + -0x14) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x10386f;
      quotearg_n_options(0,param_2,0xffffffffffffffff,(undefined *)register0x00000020 + -0x48);
      if (*(long *)((undefined *)register0x00000020 + -0x10) == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x10388e;
    func_0x001012b0();
    *(undefined8 *)((undefined *)register0x00000020 + -0x58) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if ((int)param_2 == 10) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x103915;
      func_0x001011f0();
    }
    else {
      *(int *)((undefined *)register0x00000020 + -0x90) = (int)param_2;
      *(undefined8 *)((undefined *)register0x00000020 + -0x8c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x84) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x7c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x74) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x6c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -100) = 0;
      *(undefined4 *)((undefined *)register0x00000020 + -0x5c) = 0;
      *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x1038fb;
      param_2 = extraout_RDX;
      quotearg_n_options();
      if (*(long *)((undefined *)register0x00000020 + -0x58) == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x10391a;
    func_0x001012b0();
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x90);
  } while( true );
}

