
long canon_host_r(long param_1,int *param_2)

{
  int iVar1;
  int *unaff_RBX;
  long unaff_RBP;
  long lVar2;
  long unaff_R12;
  long in_FS_OFFSET;
  
  while( true ) {
    *(long *)((undefined *)register0x00000020 + -8) = unaff_R12;
    *(long *)((undefined *)register0x00000020 + -0x10) = unaff_RBP;
    *(int **)((undefined *)register0x00000020 + -0x18) = unaff_RBX;
    hints_3317._0_4_ = 2;
    *(undefined8 *)((undefined *)register0x00000020 + -0x28) = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x1035c1;
    lVar2 = param_1;
    iVar1 = func_0x00101b50();
    if (iVar1 == 0) {
      unaff_R12 = *(long *)((undefined *)register0x00000020 + -0x28);
      lVar2 = *(long *)(unaff_R12 + 0x20);
      if (*(long *)(unaff_R12 + 0x20) == 0) {
        lVar2 = param_1;
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x1035da;
      unaff_RBP = func_0x00101b60(lVar2);
      if ((unaff_RBP == 0) && (param_2 != (int *)0x0)) {
        *param_2 = -10;
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x1035f5;
      lVar2 = unaff_R12;
      func_0x00101ba0();
    }
    else {
      unaff_RBP = 0;
      if (param_2 != (int *)0x0) {
        *param_2 = iVar1;
      }
    }
    if (*(long *)((undefined *)register0x00000020 + -0x20) == *(long *)(in_FS_OFFSET + 0x28)) break;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x103628;
    func_0x00101920();
    unaff_RBX = param_2;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x28);
    param_2 = &last_cherror;
    param_1 = lVar2;
  }
  return unaff_RBP;
}

