
/* WARNING: Could not reconcile some variable overlaps */

void set_window_size(uint param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  undefined *puVar7;
  byte *pbVar8;
  char cVar9;
  ulong uVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  byte *pbStack264;
  undefined *puStack256;
  byte *apbStack248 [5];
  undefined *puStack208;
  undefined *puStack200;
  undefined *puStack192;
  undefined *puStack184;
  undefined *puStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined8 uStack144;
  undefined8 uStack128;
  ulong uStack120;
  uint *puStack112;
  undefined *puStack104;
  ushort uStack96;
  ushort uStack94;
  long lStack88;
  undefined8 uStack80;
  ulong uStack72;
  uint *puStack64;
  ulong uStack56;
  long lStack48;
  
  bVar14 = 0;
  puStack112 = (uint *)(ulong)param_1;
  uStack72 = param_2 & 0xffffffff;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  puStack64 = (uint *)&UNK_00103a66;
  iVar1 = func_0x001025d0(0,0x5413,&uStack56);
  if (iVar1 == 0) {
code_r0x00103a7e:
    if (-1 < (int)param_1) {
      uStack56 = uStack56 & 0xffffffffffff0000 | (ulong)(ushort)param_1;
    }
    if (-1 < (int)uStack72) {
      uStack56._0_4_ = CONCAT22((short)uStack72,(undefined2)uStack56);
      uStack56 = uStack56 & 0xffffffff00000000 | (ulong)(uint)uStack56;
    }
    puStack64 = (uint *)&UNK_00103aa2;
    iVar1 = func_0x001025d0(0,0x5414,&uStack56);
    if (iVar1 == 0) {
      if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto code_r0x00103aeb;
    }
  }
  else {
    puStack64 = (uint *)&UNK_00103a6f;
    puVar2 = (uint *)func_0x00102450();
    if (*puVar2 == 0x16) {
      uStack56 = 0;
      goto code_r0x00103a7e;
    }
    puStack64 = (uint *)&UNK_00103ad2;
    uVar3 = quotearg_n_style_colon(0,3,param_3);
    puStack64 = (uint *)&UNK_00103aeb;
    func_0x001026e0(1,(ulong)*puVar2,&UNK_0010dabc,uVar3);
code_r0x00103aeb:
    puStack64 = (uint *)&UNK_00103af0;
    func_0x00102520();
  }
  puStack64 = (uint *)&UNK_00103aff;
  uStack80 = quotearg_n_style_colon(0,3,param_3);
  puStack64 = (uint *)&UNK_00103b07;
  puVar2 = (uint *)func_0x00102450();
  uStack120 = (ulong)*puVar2;
  cVar9 = '\x01';
  puStack64 = (uint *)&UNK_00103b1f;
  func_0x001026e0(1,uStack120,&UNK_0010dabc,uStack80);
  lStack88 = *(long *)(in_FS_OFFSET + 0x28);
  puStack104 = &UNK_00103b4c;
  puStack64 = puStack112;
  iVar1 = func_0x001025d0(0,0x5413,&uStack96);
  if (iVar1 == 0) {
    if (cVar9 == '\0') {
      puStack104 = &UNK_00103bae;
      wrapf(&UNK_0010b321,(ulong)uStack96,(ulong)uStack94);
      current_col = 0;
    }
    else {
      puStack104 = &UNK_00103b9b;
      wrapf(&UNK_0010b328,(ulong)uStack96,(ulong)uStack94);
    }
code_r0x00103b65:
    if (lStack88 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    puStack104 = &UNK_00103b55;
    puStack112 = (uint *)func_0x00102450();
    if (*puStack112 == 0x16) {
      if (cVar9 == '\0') goto code_r0x00103be8;
      goto code_r0x00103b65;
    }
    puStack104 = &UNK_00103bc9;
    uVar3 = quotearg_n_style_colon(0,3,uStack120);
    puStack104 = &UNK_00103be3;
    func_0x001026e0(1,(ulong)*puStack112,&UNK_0010dabc,uVar3);
  }
  puStack104 = &UNK_00103be8;
  func_0x00102520();
code_r0x00103be8:
  puStack104 = &UNK_00103bf7;
  uStack128 = quotearg_n_style_colon(0,3,uStack120);
  puStack104 = &UNK_00103c0d;
  uVar3 = func_0x001024f0(0,&UNK_0010b958,5);
  uVar10 = 1;
  puStack104 = &UNK_00103c21;
  func_0x001026e0(1,0,uVar3,uStack128);
  puVar7 = program_name;
  uVar3 = 5;
  uStack144 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack104 = (undefined *)param_3;
  if ((int)uVar10 == 0) goto code_r0x00103c8d;
  uVar3 = func_0x001024f0(0,&UNK_0010b980,5);
  func_0x00102780(stderr,1,uVar3,puVar7);
  do {
    func_0x00102760(uVar10 & 0xffffffff);
    uVar3 = extraout_RDX;
code_r0x00103c8d:
    uVar3 = func_0x001024f0(0,&UNK_0010b9a8,uVar3);
    func_0x001026d0(1,uVar3,puVar7,puVar7,puVar7);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010ba40,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010ba70,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bac0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bb98,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bbc8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bc00,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010b342,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bc90,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bcc8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bd38,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bd70,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010be18,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010be58,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010be88,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bec0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bf68,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bfa8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010bfe0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c030,5);
    func_0x00102600(uVar4,uVar3);
    if (tcsetattr_options == 1) {
      uVar3 = func_0x001024f0(0,&UNK_0010b708,5);
    }
    else {
      uVar3 = func_0x001024f0(0,&UNK_0010b7c9,5);
    }
    uVar4 = func_0x001024f0(0,&UNK_0010c098,5);
    func_0x001026d0(1,uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c0f0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c120,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c148,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c1c8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c258,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c2d0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c340,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c370,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c3b0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c4e8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c520,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c628,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c678,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c718,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c758,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c798,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c7e8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010b358,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c8b8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c8f0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c930,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c968,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c9a0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010c9d8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010ca28,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010ca78,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cab8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010caf8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cb30,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cb78,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cba0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cc18,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cc50,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cca8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cd40,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cd88,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cdb0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cdd8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010ce38,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010ce60,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cea8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cef0,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cf38,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = func_0x001024f0(0,&UNK_0010cf60,5);
    func_0x001026d0(1,uVar3,&UNK_0010b36b);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010cfc8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d060,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d088,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d0d8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010b386,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d120,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d148,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d190,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = func_0x001024f0(0,&UNK_0010b39e,5);
    func_0x001026d0(1,uVar3,&UNK_0010b3bb);
    uVar3 = func_0x001024f0(0,&UNK_0010d240,5);
    func_0x001026d0(1,uVar3,&UNK_0010b3d0);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d290,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d2b8,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d350,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d380,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = func_0x001024f0(0,&UNK_0010d3e8,5);
    func_0x001026d0(1,uVar3,&UNK_0010b3ec,&UNK_0010d428);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d458,5);
    func_0x00102600(uVar4,uVar3);
    uVar3 = func_0x001024f0(0,&UNK_0010d528,5);
    func_0x001026d0(1,uVar3,&UNK_0010d600);
    uVar3 = func_0x001024f0(0,&UNK_0010d620,5);
    func_0x001026d0(1,uVar3,&UNK_0010d7a0,&UNK_0010d760,&UNK_0010d720);
    uVar3 = stdout;
    uVar4 = func_0x001024f0(0,&UNK_0010d7e0,5);
    func_0x00102600(uVar4,uVar3);
    uStack168 = 0;
    uStack160 = 0;
    pbStack264 = &UNK_0010b3fa;
    apbStack248[4] = &UNK_0010b43b;
    puStack256 = &UNK_0010b3fc;
    puStack200 = &UNK_0010b445;
    apbStack248[0] = &UNK_0010b474;
    puStack184 = &UNK_0010b44f;
    apbStack248[1] = &UNK_0010b40c;
    apbStack248[2] = &UNK_0010b422;
    apbStack248[3] = &UNK_0010b42c;
    puStack208 = &UNK_0010b42c;
    puStack192 = &UNK_0010b42c;
    puStack176 = &UNK_0010b42c;
    ppbVar6 = &pbStack264;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar11 = *ppbVar6;
      bVar12 = false;
      bVar13 = pbVar11 == (byte *)0x0;
      if (bVar13) break;
      lVar5 = 5;
      pbVar8 = &UNK_0010b33d;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar12 = *pbVar8 < *pbVar11;
        bVar13 = *pbVar8 == *pbVar11;
        pbVar8 = pbVar8 + (ulong)bVar14 * -2 + 1;
        pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
      } while (bVar13);
    } while ((!bVar12 && !bVar13) != bVar12);
    pbVar11 = ppbVar6[3];
    if (pbVar11 == (byte *)0x0) {
      uVar3 = func_0x001024f0(0,&UNK_0010b459,5);
      func_0x001026d0(1,uVar3,&UNK_0010b470,&UNK_0010d8f8);
      lVar5 = func_0x001026b0(5,0);
      if (lVar5 != 0) {
        iVar1 = func_0x00102460(lVar5,&UNK_0010b47e,3);
        if (iVar1 != 0) {
          pbVar11 = &UNK_0010b33d;
          goto code_r0x00104ab8;
        }
      }
      pbVar11 = &UNK_0010b33d;
      puVar7 = &UNK_0010b416;
      uVar3 = func_0x001024f0(0,&UNK_0010b482,5);
      func_0x001026d0(1,uVar3,&UNK_0010d8f8,&UNK_0010b33d);
    }
    else {
      uVar3 = func_0x001024f0(0,&UNK_0010b459,5);
      func_0x001026d0(1,uVar3,&UNK_0010b470,&UNK_0010d8f8);
      lVar5 = func_0x001026b0(5,0);
      if (lVar5 != 0) {
        iVar1 = func_0x00102460(lVar5,&UNK_0010b47e,3);
        if (iVar1 != 0) {
code_r0x00104ab8:
          uVar3 = stdout;
          uVar4 = func_0x001024f0(0,&UNK_0010d920,5);
          func_0x00102600(uVar4,uVar3);
        }
      }
      uVar3 = func_0x001024f0(0,&UNK_0010b482,5);
      func_0x001026d0(1,uVar3,&UNK_0010d8f8,&UNK_0010b33d);
      puVar7 = &UNK_0010e041;
      if (pbVar11 == &UNK_0010b33d) {
        puVar7 = &UNK_0010b416;
      }
    }
    uVar3 = func_0x001024f0(0,&UNK_0010d968,5);
    func_0x001026d0(1,uVar3,pbVar11,puVar7);
  } while( true );
}

