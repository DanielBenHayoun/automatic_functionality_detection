
ulong do_move(long param_1,ulong param_2,long param_3)

{
  undefined uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  char cVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  long in_FS_OFFSET;
  
  do {
    *(undefined8 *)((undefined *)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1035c0;
    uVar3 = copy(param_1,param_2,0,param_3,(undefined *)register0x00000020 + -0x5a,
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
        uVar1 = *(undefined *)(param_3 + 0x2e);
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
    lVar4 = quotearg_style(4,&UNK_00116a4e);
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1036cf;
    uVar5 = func_0x00102730(0,&UNK_00115108,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1036d7;
    puVar6 = (uint *)func_0x001025a0();
    param_2 = (ulong)*puVar6;
    param_1 = 1;
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1036eb;
    param_3 = lVar4;
    func_0x00102b10(1,param_2,uVar5);
    cVar7 = (char)_cVar7;
    *(undefined8 *)((undefined *)register0x00000020 + -0x70) = unaff_R12;
    *(long *)((undefined *)register0x00000020 + -0x78) = lVar4;
    *(undefined8 *)((undefined *)register0x00000020 + -0x80) = uVar5;
    if (remove_trailing_slashes != '\0') {
      *(undefined4 *)((undefined *)register0x00000020 + -0x84) = _cVar7;
      *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x103779;
      strip_trailing_slashes();
      cVar7 = (char)*(undefined4 *)((undefined *)register0x00000020 + -0x84);
    }
    if (cVar7 != '\0') {
      *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x103730;
      uVar5 = last_component(param_1);
      *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x10373d;
      uVar5 = file_name_concat(param_2,uVar5,0);
      *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x103748;
      strip_trailing_slashes(uVar5);
      *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x103756;
      uVar2 = do_move(param_1,uVar5,param_3);
      *(undefined8 *)((undefined *)register0x00000020 + -0x98) = 0x103760;
      func_0x00102c80(uVar5);
      return (ulong)uVar2;
    }
    unaff_RBX = *(undefined8 *)((undefined *)register0x00000020 + -0x80);
    unaff_RBP = *(undefined8 *)((undefined *)register0x00000020 + -0x78);
    unaff_R12 = *(undefined8 *)((undefined *)register0x00000020 + -0x70);
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x68);
  } while( true );
}

