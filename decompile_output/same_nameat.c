
ulong same_nameat(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong extraout_RDX;
  undefined *unaff_RBX;
  uint uVar8;
  ulong unaff_RBP;
  undefined *unaff_R12;
  ulong unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  long in_FS_OFFSET;
  
  while( true ) {
    puVar7 = param_4;
    *(undefined8 *)((undefined *)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = unaff_R14;
    param_3 = param_3 & 0xffffffff;
    *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R13;
    *(undefined **)((undefined *)register0x00000020 + -0x20) = unaff_R12;
    *(ulong *)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
    *(undefined **)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
    *(int *)((undefined *)register0x00000020 + -0x3c) = (int)param_1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x105f93;
    uVar3 = last_component(param_2);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x105f9e;
    uVar4 = last_component(puVar7);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x105fa9;
    lVar5 = base_len(uVar3);
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x105fb4;
    lVar6 = base_len(uVar4);
    if (lVar5 != lVar6) {
      return 0;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x50) = 0x105fde;
    iVar1 = func_0x00101630(uVar3,uVar4,lVar5);
    if (iVar1 != 0) break;
    unaff_R13 = (ulong)*(uint *)((undefined *)register0x00000020 + -0x3c);
    unaff_R14 = *(undefined8 *)((undefined *)register0x00000020 + -0x10);
    unaff_R15 = *(undefined8 *)((undefined *)register0x00000020 + -8);
    *(undefined8 *)((undefined *)register0x00000020 + -8) =
         *(undefined8 *)((undefined *)register0x00000020 + -0x18);
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) =
         *(undefined8 *)((undefined *)register0x00000020 + -0x20);
    *(undefined8 *)((undefined *)register0x00000020 + -0x18) =
         *(undefined8 *)((undefined *)register0x00000020 + -0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) =
         *(undefined8 *)((undefined *)register0x00000020 + -0x30);
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105e70;
    uVar3 = dir_name(param_2);
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105e8c;
    iVar1 = func_0x001015c0(1,unaff_R13,uVar3,(undefined *)register0x00000020 + -0x158,0x100);
    if (iVar1 != 0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105f45;
      puVar2 = (uint *)func_0x001014d0();
      uVar8 = *puVar2;
      *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105f5d;
      func_0x00101720(1,(ulong)uVar8,&UNK_0010750d,uVar3);
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105e9c;
    func_0x001014b0(uVar3);
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105ea4;
    unaff_RBX = (undefined *)dir_name(puVar7);
    param_4 = (undefined *)register0x00000020 + -200;
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105ec4;
    iVar1 = func_0x001015c0(1,param_3,unaff_RBX,param_4,0x100);
    param_2 = param_3;
    if (iVar1 != 0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105f1d;
      puVar2 = (uint *)func_0x001014d0();
      param_2 = (ulong)*puVar2;
      *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105f35;
      param_4 = unaff_RBX;
      func_0x00101720(1,param_2,&UNK_0010750d);
    }
    uVar8 = 0;
    if (*(long *)((undefined *)register0x00000020 + -0x150) ==
        *(long *)((undefined *)register0x00000020 + -0xc0)) {
      uVar8 = (uint)(*(long *)((undefined *)register0x00000020 + -0x158) ==
                    *(long *)((undefined *)register0x00000020 + -200));
    }
    unaff_RBP = (ulong)uVar8;
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105ef1;
    param_1 = unaff_RBX;
    func_0x001014b0();
    if (*(long *)((undefined *)register0x00000020 + -0x30) == *(long *)(in_FS_OFFSET + 0x28)) {
      return unaff_RBP;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105f67;
    func_0x00101590();
    param_3 = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x158);
    unaff_R12 = puVar7;
  }
  return 0;
}

