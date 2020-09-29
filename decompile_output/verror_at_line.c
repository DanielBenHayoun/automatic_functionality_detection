
void verror_at_line(ulong param_1,ulong param_2,long param_3,ulong param_4,undefined8 param_5,
                   ulong param_6)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  long unaff_RBP;
  ulong unaff_R12;
  ulong unaff_R13;
  ulong unaff_R14;
  
  while( true ) {
    lVar4 = param_3;
    uVar3 = param_4;
    *(ulong *)((undefined *)register0x00000020 + -8) = unaff_R14;
    *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_R13;
    unaff_R13 = param_2 & 0xffffffff;
    *(ulong *)((undefined *)register0x00000020 + -0x18) = unaff_R12;
    *(long *)((undefined *)register0x00000020 + -0x20) = unaff_RBP;
    unaff_R12 = param_1 & 0xffffffff;
    *(undefined8 *)((undefined *)register0x00000020 + -0x28) = unaff_RBX;
    unaff_R14 = uVar3 & 0xffffffff;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x1053ff;
    lVar1 = xvasprintf(param_5,param_6);
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
    param_4 = 0;
    param_3 = 0;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x28);
    unaff_RBP = lVar4;
    param_5 = extraout_RDX;
    param_6 = uVar3;
  }
  if (lVar4 == 0) {
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x105457;
    func_0x00101560(unaff_R12,unaff_R13,&UNK_00108d93,lVar1);
  }
  else {
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = 0x105429;
    func_0x00101340(unaff_R12,unaff_R13,lVar4,unaff_R14,&UNK_00108d93,lVar1);
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_0030ae48)(lVar1);
  return;
}

