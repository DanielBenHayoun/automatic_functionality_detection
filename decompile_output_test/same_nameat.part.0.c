
ulong same_nameat_part_0(uint param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ulong extraout_RDX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  long in_FS_OFFSET;
  
  while( true ) {
    *(undefined8 *)((undefined *)register0x00000020 + -8) = unaff_R13;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = unaff_R12;
    *(undefined8 *)((undefined *)register0x00000020 + -0x18) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = unaff_RBX;
    param_3 = param_3 & 0xffffffff;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105e70;
    uVar3 = dir_name(param_2,param_2);
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105e8c;
    iVar2 = func_0x001015c0(1,(ulong)param_1,uVar3,(undefined *)register0x00000020 + -0x158,0x100);
    if (iVar2 != 0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105f45;
      puVar5 = (uint *)func_0x001014d0();
      uVar1 = *puVar5;
      *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105f5d;
      func_0x00101720(1,(ulong)uVar1,&UNK_0010750d,uVar3);
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105e9c;
    func_0x001014b0(uVar3);
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105ea4;
    puVar4 = (undefined *)dir_name(param_4);
    uVar11 = SUB84(puVar4,0);
    puVar9 = (undefined *)register0x00000020 + -200;
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105ec4;
    iVar2 = func_0x001015c0(1,param_3,puVar4,puVar9,0x100);
    param_2 = param_3;
    if (iVar2 != 0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105f1d;
      puVar5 = (uint *)func_0x001014d0();
      param_2 = (ulong)*puVar5;
      *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105f35;
      puVar9 = puVar4;
      func_0x00101720(1,param_2,&UNK_0010750d);
    }
    uVar10 = 0;
    if (*(long *)((undefined *)register0x00000020 + -0x150) ==
        *(long *)((undefined *)register0x00000020 + -0xc0)) {
      uVar10 = (ulong)(*(long *)((undefined *)register0x00000020 + -0x158) ==
                      *(long *)((undefined *)register0x00000020 + -200));
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105ef1;
    func_0x001014b0();
    if (*(long *)((undefined *)register0x00000020 + -0x30) == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar10;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = 0x105f67;
    func_0x00101590();
    *(undefined8 *)((undefined *)register0x00000020 + -0x160) = unaff_R15;
    *(undefined8 *)((undefined *)register0x00000020 + -0x168) = unaff_R14;
    param_3 = extraout_RDX & 0xffffffff;
    *(ulong *)((undefined *)register0x00000020 + -0x170) = (ulong)param_1;
    *(undefined **)((undefined *)register0x00000020 + -0x178) = param_4;
    *(ulong *)((undefined *)register0x00000020 + -0x180) = uVar10;
    *(undefined **)((undefined *)register0x00000020 + -0x188) = puVar4;
    *(undefined4 *)((undefined *)register0x00000020 + -0x194) = uVar11;
    *(undefined8 *)((undefined *)register0x00000020 + -0x1a8) = 0x105f93;
    uVar3 = last_component(param_2);
    *(undefined8 *)((undefined *)register0x00000020 + -0x1a8) = 0x105f9e;
    uVar6 = last_component(puVar9);
    *(undefined8 *)((undefined *)register0x00000020 + -0x1a8) = 0x105fa9;
    lVar7 = base_len(uVar3);
    *(undefined8 *)((undefined *)register0x00000020 + -0x1a8) = 0x105fb4;
    lVar8 = base_len(uVar6);
    if (lVar7 != lVar8) {
      return 0;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x1a8) = 0x105fde;
    iVar2 = func_0x00101630(uVar3,uVar6,lVar7);
    if (iVar2 != 0) break;
    param_1 = *(uint *)((undefined *)register0x00000020 + -0x194);
    unaff_RBX = *(undefined8 *)((undefined *)register0x00000020 + -0x188);
    unaff_RBP = *(undefined8 *)((undefined *)register0x00000020 + -0x180);
    unaff_R12 = *(undefined8 *)((undefined *)register0x00000020 + -0x178);
    unaff_R13 = *(undefined8 *)((undefined *)register0x00000020 + -0x170);
    unaff_R14 = *(undefined8 *)((undefined *)register0x00000020 + -0x168);
    unaff_R15 = *(undefined8 *)((undefined *)register0x00000020 + -0x160);
    param_4 = puVar9;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x158);
  }
  return 0;
}

