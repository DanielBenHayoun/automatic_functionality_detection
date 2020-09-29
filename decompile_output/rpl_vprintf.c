
ulong rpl_vprintf(uint *param_1,undefined *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  ulong unaff_RBX;
  uint *puVar4;
  uint *unaff_RBP;
  undefined *puVar5;
  uint *unaff_R12;
  uint *puVar6;
  uint *unaff_R13;
  long in_FS_OFFSET;
  
  do {
    puVar6 = stdout;
    *(uint **)((undefined *)register0x00000020 + -8) = unaff_R13;
    *(uint **)((undefined *)register0x00000020 + -0x10) = unaff_R12;
    *(uint **)((undefined *)register0x00000020 + -0x18) = unaff_RBP;
    *(ulong *)((undefined *)register0x00000020 + -0x20) = unaff_RBX;
    unaff_R12 = (uint *)((undefined *)register0x00000020 + -0x808);
    puVar5 = (undefined *)register0x00000020 + -0x810;
    *(undefined8 *)((undefined *)register0x00000020 + -0x810) = 2000;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x820) = 0x105f17;
    puVar4 = (uint *)vasnprintf(unaff_R12,puVar5,param_1,param_2);
    unaff_RBX = *(ulong *)((undefined *)register0x00000020 + -0x810);
    if (puVar4 == (uint *)0x0) {
code_r0x00105fae:
      puVar4 = unaff_RBP;
      unaff_RBX = 0xffffffff;
      *(undefined8 *)((undefined *)register0x00000020 + -0x820) = 0x105fbb;
      param_1 = puVar6;
      fseterr();
    }
    else {
      puVar5 = (undefined *)0x1;
      *(undefined8 *)((undefined *)register0x00000020 + -0x820) = 0x105f3b;
      param_1 = puVar4;
      uVar2 = func_0x001016f0(puVar4,1,unaff_RBX,puVar6);
      if (uVar2 < unaff_RBX) {
        unaff_RBX = 0xffffffff;
        if (puVar4 != unaff_R12) {
          *(undefined8 *)((undefined *)register0x00000020 + -0x820) = 0x105f8f;
          unaff_R12 = (uint *)func_0x00101450();
          uVar1 = *unaff_R12;
          puVar6 = (uint *)(ulong)uVar1;
          *(undefined8 *)((undefined *)register0x00000020 + -0x820) = 0x105f9d;
          param_1 = puVar4;
          func_0x00101430();
          *unaff_R12 = uVar1;
        }
      }
      else {
        if (puVar4 != unaff_R12) {
          *(undefined8 *)((undefined *)register0x00000020 + -0x820) = 0x105f4d;
          param_1 = puVar4;
          func_0x00101430();
        }
        if (0x7fffffff < unaff_RBX) {
          *(undefined8 *)((undefined *)register0x00000020 + -0x820) = 0x105fa8;
          puVar3 = (undefined4 *)func_0x00101450();
          *puVar3 = 0x4b;
          unaff_RBP = puVar4;
          goto code_r0x00105fae;
        }
      }
    }
    if (*(long *)((undefined *)register0x00000020 + -0x30) == *(long *)(in_FS_OFFSET + 0x28)) {
      return unaff_RBX & 0xffffffff;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x820) = 0x105fc2;
    func_0x00101520();
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x818);
    unaff_RBP = puVar4;
    param_2 = puVar5;
    unaff_R13 = puVar6;
  } while( true );
}

