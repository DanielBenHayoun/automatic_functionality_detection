
undefined8
blake2(undefined *param_1,undefined *param_2,long param_3,ulong param_4,long param_5,ulong param_6)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long extraout_RDX;
  long lVar4;
  undefined *unaff_RBX;
  ulong unaff_RBP;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_R12;
  undefined *unaff_R13;
  long unaff_R14;
  long in_FS_OFFSET;
  
  do {
    lVar4 = param_3;
    *(long *)((undefined *)register0x00000020 + -8) = unaff_R14;
    *(undefined **)((undefined *)register0x00000020 + -0x10) = unaff_R13;
    *(undefined **)((undefined *)register0x00000020 + -0x18) = unaff_R12;
    *(ulong *)((undefined *)register0x00000020 + -0x20) = unaff_RBP;
    *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBX;
    puVar6 = (undefined *)register0x00000020 + -0x128;
    puVar7 = (undefined *)register0x00000020 + -0x128;
    puVar8 = (undefined *)register0x00000020 + -0x128;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    puVar5 = param_2;
    puVar1 = param_1;
    if ((((lVar4 == 0 && param_4 != 0) || (unaff_R13 = param_1, param_1 == (undefined *)0x0)) ||
        ((unaff_RBX = param_2, unaff_RBP = param_4, param_5 == 0 && (param_6 != 0)))) ||
       (((undefined *)0x3f < param_2 + -1 || (0x40 < param_6)))) {
code_r0x001055e0:
      puVar7 = puVar1;
      uVar3 = 0xffffffff;
    }
    else {
      if (param_6 == 0) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x130) = 0x105588;
        iVar2 = blake2b_init();
      }
      else {
        *(undefined8 *)((undefined *)register0x00000020 + -0x130) = 0x1055d9;
        iVar2 = blake2b_init_key((undefined *)register0x00000020 + -0x128,param_2,param_5,param_6);
        puVar6 = puVar8;
      }
      unaff_R12 = (undefined *)register0x00000020 + -0x128;
      puVar1 = puVar6;
      if (iVar2 < 0) goto code_r0x001055e0;
      if (param_4 != 0) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x130) = 0x1055fe;
        blake2b_update_part_3((undefined *)register0x00000020 + -0x128,lVar4,param_4);
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x130) = 0x10559f;
      puVar5 = param_1;
      blake2b_final((undefined *)register0x00000020 + -0x128,param_1,param_2);
      uVar3 = 0;
      unaff_R12 = (undefined *)register0x00000020 + -0x128;
    }
    param_4 = *(ulong *)((undefined *)register0x00000020 + -0x30) ^ *(ulong *)(in_FS_OFFSET + 0x28);
    if (param_4 == 0) {
      return uVar3;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x130) = 0x105605;
    func_0x001018e0();
    param_3 = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x128);
    param_2 = puVar5;
    param_1 = puVar7;
    unaff_R14 = lVar4;
  } while( true );
}

