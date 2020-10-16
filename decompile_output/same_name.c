
ulong same_name(ulong param_1,undefined *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong extraout_RDX;
  ulong uVar8;
  undefined *unaff_RBX;
  undefined *puVar9;
  uint uVar10;
  ulong unaff_RBP;
  undefined *puVar11;
  undefined *unaff_R12;
  ulong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  long in_FS_OFFSET;
  
  uVar8 = 0xffffff9c;
  puVar11 = (undefined *)0xffffff9c;
  puVar9 = (undefined *)register0x00000020;
  while( true ) {
    puVar7 = param_2;
    *(undefined8 *)(puVar9 + -8) = unaff_R15;
    *(undefined8 *)(puVar9 + -0x10) = unaff_R14;
    uVar8 = uVar8 & 0xffffffff;
    *(ulong *)(puVar9 + -0x18) = unaff_R13;
    *(undefined **)(puVar9 + -0x20) = unaff_R12;
    *(ulong *)(puVar9 + -0x28) = unaff_RBP;
    *(undefined **)(puVar9 + -0x30) = unaff_RBX;
    *(int *)(puVar9 + -0x3c) = (int)puVar11;
    *(undefined8 *)(puVar9 + -0x50) = 0x113ed3;
    uVar3 = last_component(param_1);
    *(undefined8 *)(puVar9 + -0x50) = 0x113ede;
    uVar4 = last_component(puVar7);
    *(undefined8 *)(puVar9 + -0x50) = 0x113ee9;
    lVar5 = base_len(uVar3);
    *(undefined8 *)(puVar9 + -0x50) = 0x113ef4;
    lVar6 = base_len(uVar4);
    if (lVar5 != lVar6) {
      return 0;
    }
    *(undefined8 *)(puVar9 + -0x50) = 0x113f1e;
    iVar1 = func_0x00103550(uVar3,uVar4,lVar5);
    if (iVar1 != 0) break;
    unaff_R13 = (ulong)*(uint *)(puVar9 + -0x3c);
    unaff_R14 = *(undefined8 *)(puVar9 + -0x10);
    unaff_R15 = *(undefined8 *)(puVar9 + -8);
    *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -0x18);
    *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x20);
    *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x28);
    *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x30);
    *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)(puVar9 + -0x160) = 0x113db0;
    uVar3 = dir_name(param_1);
    *(undefined8 *)(puVar9 + -0x160) = 0x113dcc;
    iVar1 = func_0x00103470(1,unaff_R13,uVar3,puVar9 + -0x158,0x100);
    if (iVar1 != 0) {
      *(undefined8 *)(puVar9 + -0x160) = 0x113e85;
      puVar2 = (uint *)func_0x001032a0();
      uVar10 = *puVar2;
      *(undefined8 *)(puVar9 + -0x160) = 0x113e9d;
      func_0x00103760(1,(ulong)uVar10,&UNK_00119f74,uVar3);
    }
    *(undefined8 *)(puVar9 + -0x160) = 0x113ddc;
    func_0x00103880(uVar3);
    *(undefined8 *)(puVar9 + -0x160) = 0x113de4;
    unaff_RBX = (undefined *)dir_name(puVar7);
    param_2 = puVar9 + -200;
    *(undefined8 *)(puVar9 + -0x160) = 0x113e04;
    iVar1 = func_0x00103470(1,uVar8,unaff_RBX,param_2,0x100);
    param_1 = uVar8;
    if (iVar1 != 0) {
      *(undefined8 *)(puVar9 + -0x160) = 0x113e5d;
      puVar2 = (uint *)func_0x001032a0();
      param_1 = (ulong)*puVar2;
      *(undefined8 *)(puVar9 + -0x160) = 0x113e75;
      param_2 = unaff_RBX;
      func_0x00103760(1,param_1,&UNK_00119f74);
    }
    uVar10 = 0;
    if (*(long *)(puVar9 + -0x150) == *(long *)(puVar9 + -0xc0)) {
      uVar10 = (uint)(*(long *)(puVar9 + -0x158) == *(long *)(puVar9 + -200));
    }
    unaff_RBP = (ulong)uVar10;
    *(undefined8 *)(puVar9 + -0x160) = 0x113e31;
    puVar11 = unaff_RBX;
    func_0x00103880();
    if (*(long *)(puVar9 + -0x30) == *(long *)(in_FS_OFFSET + 0x28)) {
      return unaff_RBP;
    }
    *(undefined8 *)(puVar9 + -0x160) = 0x113ea7;
    func_0x00103420();
    uVar8 = extraout_RDX;
    puVar9 = puVar9 + -0x158;
    unaff_R12 = puVar7;
  }
  return 0;
}

