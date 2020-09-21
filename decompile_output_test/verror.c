
/* WARNING: Removing unreachable block (ram,0x0010540c) */

void verror(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  ulong unaff_R12;
  ulong unaff_R13;
  undefined8 unaff_R14;
  
  while( true ) {
    *(undefined8 *)((undefined *)register0x00000020 + -8) = unaff_R14;
    *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_R13;
    unaff_R13 = param_2 & 0xffffffff;
    *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R12;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = unaff_RBP;
    unaff_R12 = param_1 & 0xffffffff;
    *(undefined8 *)((undefined *)register0x00000020 + -0x28) = unaff_RBX;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x1053ff;
    uVar3 = 0;
    lVar1 = xvasprintf(param_3,param_4);
    if (lVar1 != 0) break;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x10547a;
    unaff_RBX = func_0x001013c0(0,&UNK_001092a8,5);
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x105482;
    puVar2 = (uint *)func_0x00101330();
    param_2 = (ulong)*puVar2;
    param_1 = 0;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x105490;
    func_0x00101560(0,param_2,unaff_RBX);
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x105495;
    func_0x00101320();
    param_4 = uVar3;
    param_3 = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x28);
    unaff_RBP = 0;
    unaff_R14 = 0;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x105457;
  func_0x00101560(unaff_R12,unaff_R13,&UNK_00108d93,lVar1);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_0030ae48)(lVar1);
  return;
}

