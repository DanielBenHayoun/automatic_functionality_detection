
void display_window_size(char param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_RDX;
  byte **ppbVar5;
  undefined *puVar6;
  byte *pbVar7;
  ulong uVar8;
  uint *unaff_R12;
  byte *pbVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  byte *pbStack208;
  undefined *puStack200;
  byte *apbStack192 [5];
  undefined *puStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined *puStack128;
  undefined *puStack120;
  undefined8 uStack112;
  undefined8 uStack104;
  undefined8 uStack88;
  undefined8 uStack72;
  undefined8 uStack64;
  uint *puStack56;
  ushort uStack40;
  ushort uStack38;
  long lStack32;
  
  bVar12 = 0;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = func_0x001025d0(0,0x5413,&uStack40);
  if (iVar1 == 0) {
    if (param_1 == '\0') {
      wrapf(&UNK_0010b321,(ulong)uStack40,(ulong)uStack38);
      current_col = 0;
    }
    else {
      wrapf(&UNK_0010b328,(ulong)uStack40,(ulong)uStack38);
    }
code_r0x00103b65:
    if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    unaff_R12 = (uint *)func_0x00102450();
    if (*unaff_R12 == 0x16) {
      if (param_1 == '\0') goto code_r0x00103be8;
      goto code_r0x00103b65;
    }
    uVar2 = quotearg_n_style_colon(0,3,param_2);
    func_0x001026e0(1,(ulong)*unaff_R12,&UNK_0010dabc,uVar2);
  }
  func_0x00102520();
code_r0x00103be8:
  uStack72 = quotearg_n_style_colon(0,3,param_2);
  uVar2 = func_0x001024f0(0,&UNK_0010b958,5);
  uVar8 = 1;
  func_0x001026e0(1,0,uVar2,uStack72);
  puVar6 = program_name;
  uVar2 = 5;
  uStack88 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack64 = param_2;
  puStack56 = unaff_R12;
  if ((int)uVar8 == 0) goto code_r0x00103c8d;
  uVar2 = func_0x001024f0(0,&UNK_0010b980,5);
  func_0x00102780(stderr,1,uVar2,puVar6);
  do {
    func_0x00102760(uVar8 & 0xffffffff);
    uVar2 = extraout_RDX;
code_r0x00103c8d:
    uVar2 = func_0x001024f0(0,&UNK_0010b9a8,uVar2);
    func_0x001026d0(1,uVar2,puVar6,puVar6,puVar6);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010ba40,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010ba70,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bac0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bb98,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bbc8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bc00,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010b342,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bc90,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bcc8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bd38,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bd70,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010be18,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010be58,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010be88,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bec0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bf68,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bfa8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010bfe0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c030,5);
    func_0x00102600(uVar3,uVar2);
    if (tcsetattr_options == 1) {
      uVar2 = func_0x001024f0(0,&UNK_0010b708,5);
    }
    else {
      uVar2 = func_0x001024f0(0,&UNK_0010b7c9,5);
    }
    uVar3 = func_0x001024f0(0,&UNK_0010c098,5);
    func_0x001026d0(1,uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c0f0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c120,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c148,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c1c8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c258,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c2d0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c340,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c370,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c3b0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c4e8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c520,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c628,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c678,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c718,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c758,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c798,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c7e8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010b358,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c8b8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c8f0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c930,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c968,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c9a0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010c9d8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010ca28,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010ca78,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cab8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010caf8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cb30,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cb78,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cba0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cc18,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cc50,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cca8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cd40,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cd88,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cdb0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cdd8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010ce38,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010ce60,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cea8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cef0,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cf38,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = func_0x001024f0(0,&UNK_0010cf60,5);
    func_0x001026d0(1,uVar2,&UNK_0010b36b);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010cfc8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d060,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d088,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d0d8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010b386,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d120,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d148,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d190,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = func_0x001024f0(0,&UNK_0010b39e,5);
    func_0x001026d0(1,uVar2,&UNK_0010b3bb);
    uVar2 = func_0x001024f0(0,&UNK_0010d240,5);
    func_0x001026d0(1,uVar2,&UNK_0010b3d0);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d290,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d2b8,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d350,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d380,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = func_0x001024f0(0,&UNK_0010d3e8,5);
    func_0x001026d0(1,uVar2,&UNK_0010b3ec,&UNK_0010d428);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d458,5);
    func_0x00102600(uVar3,uVar2);
    uVar2 = func_0x001024f0(0,&UNK_0010d528,5);
    func_0x001026d0(1,uVar2,&UNK_0010d600);
    uVar2 = func_0x001024f0(0,&UNK_0010d620,5);
    func_0x001026d0(1,uVar2,&UNK_0010d7a0,&UNK_0010d760,&UNK_0010d720);
    uVar2 = stdout;
    uVar3 = func_0x001024f0(0,&UNK_0010d7e0,5);
    func_0x00102600(uVar3,uVar2);
    uStack112 = 0;
    uStack104 = 0;
    pbStack208 = &UNK_0010b3fa;
    apbStack192[4] = &UNK_0010b43b;
    puStack200 = &UNK_0010b3fc;
    puStack144 = &UNK_0010b445;
    apbStack192[0] = &UNK_0010b474;
    puStack128 = &UNK_0010b44f;
    apbStack192[1] = &UNK_0010b40c;
    apbStack192[2] = &UNK_0010b422;
    apbStack192[3] = &UNK_0010b42c;
    puStack152 = &UNK_0010b42c;
    puStack136 = &UNK_0010b42c;
    puStack120 = &UNK_0010b42c;
    ppbVar5 = &pbStack208;
    do {
      ppbVar5 = ppbVar5;
      ppbVar5 = ppbVar5 + 2;
      pbVar9 = *ppbVar5;
      bVar10 = false;
      bVar11 = pbVar9 == (byte *)0x0;
      if (bVar11) break;
      lVar4 = 5;
      pbVar7 = &UNK_0010b33d;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar10 = *pbVar7 < *pbVar9;
        bVar11 = *pbVar7 == *pbVar9;
        pbVar7 = pbVar7 + (ulong)bVar12 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar12 * -2 + 1;
      } while (bVar11);
    } while ((!bVar10 && !bVar11) != bVar10);
    pbVar9 = ppbVar5[3];
    if (pbVar9 == (byte *)0x0) {
      uVar2 = func_0x001024f0(0,&UNK_0010b459,5);
      func_0x001026d0(1,uVar2,&UNK_0010b470,&UNK_0010d8f8);
      lVar4 = func_0x001026b0(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x00102460(lVar4,&UNK_0010b47e,3);
        if (iVar1 != 0) {
          pbVar9 = &UNK_0010b33d;
          goto code_r0x00104ab8;
        }
      }
      pbVar9 = &UNK_0010b33d;
      puVar6 = &UNK_0010b416;
      uVar2 = func_0x001024f0(0,&UNK_0010b482,5);
      func_0x001026d0(1,uVar2,&UNK_0010d8f8,&UNK_0010b33d);
    }
    else {
      uVar2 = func_0x001024f0(0,&UNK_0010b459,5);
      func_0x001026d0(1,uVar2,&UNK_0010b470,&UNK_0010d8f8);
      lVar4 = func_0x001026b0(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x00102460(lVar4,&UNK_0010b47e,3);
        if (iVar1 != 0) {
code_r0x00104ab8:
          uVar2 = stdout;
          uVar3 = func_0x001024f0(0,&UNK_0010d920,5);
          func_0x00102600(uVar3,uVar2);
        }
      }
      uVar2 = func_0x001024f0(0,&UNK_0010b482,5);
      func_0x001026d0(1,uVar2,&UNK_0010d8f8,&UNK_0010b33d);
      puVar6 = &UNK_0010e041;
      if (pbVar9 == &UNK_0010b33d) {
        puVar6 = &UNK_0010b416;
      }
    }
    uVar2 = func_0x001024f0(0,&UNK_0010d968,5);
    func_0x001026d0(1,uVar2,pbVar9,puVar6);
  } while( true );
}

