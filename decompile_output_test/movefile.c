
ulong movefile(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  long unaff_RBP;
  undefined8 unaff_R12;
  long in_FS_OFFSET;
  
  do {
    cVar7 = (char)param_3;
    *(undefined8 *)((undefined *)register0x00000020 + -8) = unaff_R12;
    *(long *)((undefined *)register0x00000020 + -0x10) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x18) = unaff_RBX;
    if (remove_trailing_slashes != '\0') {
      *(int *)((undefined *)register0x00000020 + -0x1c) = (int)param_3;
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x103779;
      strip_trailing_slashes();
      cVar7 = (char)*(undefined4 *)((undefined *)register0x00000020 + -0x1c);
    }
    if (cVar7 != '\0') {
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x103730;
      uVar6 = last_component(param_1);
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x10373d;
      uVar6 = file_name_concat(param_2,uVar6,0);
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x103748;
      strip_trailing_slashes(uVar6);
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x103756;
      uVar2 = do_move(param_1,uVar6,param_4);
      *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x103760;
      func_0x00102c80(uVar6);
      return (ulong)uVar2;
    }
    unaff_R12 = *(undefined8 *)((undefined *)register0x00000020 + -8);
    *(undefined8 *)((undefined *)register0x00000020 + -8) =
         *(undefined8 *)((undefined *)register0x00000020 + -0x10);
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) =
         *(undefined8 *)((undefined *)register0x00000020 + -0x18);
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1035c0;
    uVar3 = copy(param_1,param_2,0,param_4,(undefined *)register0x00000020 + -0x5a,
                 (undefined *)register0x00000020 + -0x59);
    if ((char)uVar3 == '\0') {
code_r0x00103660:
      if (*(long *)((undefined *)register0x00000020 + -0x20) == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar3;
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x103689;
      func_0x00102780();
code_r0x00103689:
      *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1036a8;
      func_0x00102820(&UNK_00114f0d,&UNK_00114f04,0xef,&__PRETTY_FUNCTION___7189);
    }
    else {
      if (((undefined *)register0x00000020)[-0x5a] != '\0') {
        uVar3 = 0;
        goto code_r0x00103660;
      }
      if ((((undefined *)register0x00000020)[-0x59] == '\x01') || (param_1 == 0))
      goto code_r0x00103660;
      ((undefined *)register0x00000020)[-0x58] = 0;
      ((undefined *)register0x00000020)[-0x4e] = 1;
      ((undefined *)register0x00000020)[-0x4f] = 1;
      ((undefined *)register0x00000020)[-0x50] = 0;
      *(undefined4 *)((undefined *)register0x00000020 + -0x54) = 5;
      ((undefined *)register0x00000020)[-0x3f] = 0;
      ((undefined *)register0x00000020)[-0x3e] = 0;
      ((undefined *)register0x00000020)[-0x3d] = 1;
      *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x10361a;
      lVar4 = get_root_dev_ino(dev_ino_buf_7162);
      *(long *)((undefined *)register0x00000020 + -0x48) = lVar4;
      if (lVar4 != 0) {
        uVar1 = *(undefined *)(param_4 + 0x2e);
        ((undefined *)register0x00000020)[-0x40] = 0;
        *(long *)((undefined *)register0x00000020 + -0x38) = param_1;
        *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0;
        ((undefined *)register0x00000020)[-0x3e] = uVar1;
        *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x103652;
        uVar3 = rm((undefined *)register0x00000020 + -0x38,(undefined *)register0x00000020 + -0x58);
        if ((int)uVar3 - 2U < 3) {
          uVar3 = uVar3 & 0xffffffffffffff00 | (ulong)((int)uVar3 != 4);
          goto code_r0x00103660;
        }
        goto code_r0x00103689;
      }
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1036b9;
    unaff_RBP = quotearg_style(4,&UNK_00116a4e);
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1036cf;
    unaff_RBX = func_0x00102730(0,&UNK_00115108,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1036d7;
    puVar5 = (uint *)func_0x001025a0();
    param_2 = (ulong)*puVar5;
    param_1 = 1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1036eb;
    param_4 = unaff_RBP;
    func_0x00102b10(1,param_2,unaff_RBX);
    param_3 = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x68);
  } while( true );
}

