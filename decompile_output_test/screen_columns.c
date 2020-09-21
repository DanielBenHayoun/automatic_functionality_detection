
/* WARNING: Could not reconcile some variable overlaps */

ulong screen_columns(void)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  byte **ppbVar6;
  undefined *puVar7;
  byte *pbVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  byte *pbStack304;
  undefined *puStack296;
  byte *apbStack288 [5];
  undefined *puStack248;
  undefined *puStack240;
  undefined *puStack232;
  undefined *puStack224;
  undefined *puStack216;
  undefined8 uStack208;
  undefined8 uStack200;
  undefined8 uStack184;
  undefined8 uStack168;
  ulong uStack160;
  uint *puStack152;
  undefined *puStack144;
  ushort uStack136;
  ushort uStack134;
  long lStack128;
  undefined8 uStack120;
  ulong uStack112;
  uint *puStack104;
  ulong uStack96;
  long lStack88;
  ulong uStack32;
  undefined auStack24 [2];
  ushort uStack22;
  long lStack16;
  
  bVar15 = 0;
  uStack112 = 0x5413;
  uVar10 = 1;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = func_0x001025d0(1,0x5413,auStack24);
  if ((iVar1 != 0) || (uVar11 = (ulong)uStack22, uStack22 == 0)) {
    uVar10 = 0x10b319;
    lVar2 = func_0x00102410();
    if (lVar2 != 0) {
      uStack112 = 0;
      uVar10 = (uint)lVar2;
      iVar1 = xstrtol(lVar2,0,0,&uStack32,&UNK_0010e041);
      if ((iVar1 == 0) && (uVar11 = uStack32, uStack32 - 1 < 0x7fffffff)) goto code_r0x001039f8;
    }
    uVar11 = 0x50;
  }
code_r0x001039f8:
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
  func_0x00102520();
  puStack152 = (uint *)(ulong)uVar10;
  uStack112 = uStack112 & 0xffffffff;
  lStack88 = *(long *)(in_FS_OFFSET + 0x28);
  puStack104 = (uint *)&UNK_00103a66;
  iVar1 = func_0x001025d0(0,0x5413,&uStack96);
  if (iVar1 == 0) {
code_r0x00103a7e:
    if (-1 < (int)uVar10) {
      uStack96 = uStack96 & 0xffffffffffff0000 | (ulong)(ushort)uVar10;
    }
    if (-1 < (int)uStack112) {
      uStack96._0_4_ = CONCAT22((short)uStack112,(undefined2)uStack96);
      uStack96 = uStack96 & 0xffffffff00000000 | (ulong)(uint)uStack96;
    }
    puStack104 = (uint *)&UNK_00103aa2;
    iVar1 = func_0x001025d0(0,0x5414,&uStack96);
    if (iVar1 == 0) {
      if (lStack88 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
      goto code_r0x00103aeb;
    }
  }
  else {
    puStack104 = (uint *)&UNK_00103a6f;
    puVar3 = (uint *)func_0x00102450();
    if (*puVar3 == 0x16) {
      uStack96 = 0;
      goto code_r0x00103a7e;
    }
    puStack104 = (uint *)&UNK_00103ad2;
    uVar4 = quotearg_n_style_colon(0,3,extraout_RDX);
    puStack104 = (uint *)&UNK_00103aeb;
    func_0x001026e0(1,(ulong)*puVar3,&UNK_0010dabc,uVar4);
code_r0x00103aeb:
    puStack104 = (uint *)&UNK_00103af0;
    func_0x00102520();
  }
  puStack104 = (uint *)&UNK_00103aff;
  uStack120 = quotearg_n_style_colon(0,3,extraout_RDX);
  puStack104 = (uint *)&UNK_00103b07;
  puVar3 = (uint *)func_0x00102450();
  uStack160 = (ulong)*puVar3;
  cVar9 = '\x01';
  puStack104 = (uint *)&UNK_00103b1f;
  func_0x001026e0(1,uStack160,&UNK_0010dabc,uStack120);
  lStack128 = *(long *)(in_FS_OFFSET + 0x28);
  puStack144 = &UNK_00103b4c;
  puStack104 = puStack152;
  iVar1 = func_0x001025d0(0,0x5413,&uStack136);
  if (iVar1 == 0) {
    if (cVar9 == '\0') {
      puStack144 = &UNK_00103bae;
      wrapf(&UNK_0010b321,(ulong)uStack136,(ulong)uStack134);
      current_col = 0;
    }
    else {
      puStack144 = &UNK_00103b9b;
      wrapf(&UNK_0010b328,(ulong)uStack136,(ulong)uStack134);
    }
code_r0x00103b65:
    if (lStack128 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
    puStack144 = &UNK_00103b55;
    puStack152 = (uint *)func_0x00102450();
    if (*puStack152 == 0x16) {
      if (cVar9 == '\0') goto code_r0x00103be8;
      goto code_r0x00103b65;
    }
    puStack144 = &UNK_00103bc9;
    uVar4 = quotearg_n_style_colon(0,3,uStack160);
    puStack144 = &UNK_00103be3;
    func_0x001026e0(1,(ulong)*puStack152,&UNK_0010dabc,uVar4);
  }
  puStack144 = &UNK_00103be8;
  func_0x00102520();
code_r0x00103be8:
  puStack144 = &UNK_00103bf7;
  uStack168 = quotearg_n_style_colon(0,3,uStack160);
  puStack144 = &UNK_00103c0d;
  uVar4 = func_0x001024f0(0,&UNK_0010b958,5);
  uVar11 = 1;
  puStack144 = &UNK_00103c21;
  func_0x001026e0(1,0,uVar4,uStack168);
  puVar7 = program_name;
  uVar4 = 5;
  uStack184 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack144 = (undefined *)extraout_RDX;
  if ((int)uVar11 == 0) goto code_r0x00103c8d;
  uVar4 = func_0x001024f0(0,&UNK_0010b980,5);
  func_0x00102780(stderr,1,uVar4,puVar7);
  do {
    func_0x00102760(uVar11 & 0xffffffff);
    uVar4 = extraout_RDX_00;
code_r0x00103c8d:
    uVar4 = func_0x001024f0(0,&UNK_0010b9a8,uVar4);
    func_0x001026d0(1,uVar4,puVar7,puVar7,puVar7);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010ba40,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010ba70,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bac0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bb98,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bbc8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bc00,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010b342,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bc90,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bcc8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bd38,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bd70,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010be18,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010be58,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010be88,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bec0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bf68,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bfa8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010bfe0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c030,5);
    func_0x00102600(uVar5,uVar4);
    if (tcsetattr_options == 1) {
      uVar4 = func_0x001024f0(0,&UNK_0010b708,5);
    }
    else {
      uVar4 = func_0x001024f0(0,&UNK_0010b7c9,5);
    }
    uVar5 = func_0x001024f0(0,&UNK_0010c098,5);
    func_0x001026d0(1,uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c0f0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c120,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c148,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c1c8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c258,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c2d0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c340,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c370,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c3b0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c4e8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c520,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c628,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c678,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c718,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c758,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c798,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c7e8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010b358,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c8b8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c8f0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c930,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c968,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c9a0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010c9d8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010ca28,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010ca78,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cab8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010caf8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cb30,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cb78,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cba0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cc18,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cc50,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cca8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cd40,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cd88,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cdb0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cdd8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010ce38,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010ce60,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cea8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cef0,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cf38,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = func_0x001024f0(0,&UNK_0010cf60,5);
    func_0x001026d0(1,uVar4,&UNK_0010b36b);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010cfc8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d060,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d088,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d0d8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010b386,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d120,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d148,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d190,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = func_0x001024f0(0,&UNK_0010b39e,5);
    func_0x001026d0(1,uVar4,&UNK_0010b3bb);
    uVar4 = func_0x001024f0(0,&UNK_0010d240,5);
    func_0x001026d0(1,uVar4,&UNK_0010b3d0);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d290,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d2b8,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d350,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d380,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = func_0x001024f0(0,&UNK_0010d3e8,5);
    func_0x001026d0(1,uVar4,&UNK_0010b3ec,&UNK_0010d428);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d458,5);
    func_0x00102600(uVar5,uVar4);
    uVar4 = func_0x001024f0(0,&UNK_0010d528,5);
    func_0x001026d0(1,uVar4,&UNK_0010d600);
    uVar4 = func_0x001024f0(0,&UNK_0010d620,5);
    func_0x001026d0(1,uVar4,&UNK_0010d7a0,&UNK_0010d760,&UNK_0010d720);
    uVar4 = stdout;
    uVar5 = func_0x001024f0(0,&UNK_0010d7e0,5);
    func_0x00102600(uVar5,uVar4);
    uStack208 = 0;
    uStack200 = 0;
    pbStack304 = &UNK_0010b3fa;
    apbStack288[4] = &UNK_0010b43b;
    puStack296 = &UNK_0010b3fc;
    puStack240 = &UNK_0010b445;
    apbStack288[0] = &UNK_0010b474;
    puStack224 = &UNK_0010b44f;
    apbStack288[1] = &UNK_0010b40c;
    apbStack288[2] = &UNK_0010b422;
    apbStack288[3] = &UNK_0010b42c;
    puStack248 = &UNK_0010b42c;
    puStack232 = &UNK_0010b42c;
    puStack216 = &UNK_0010b42c;
    ppbVar6 = &pbStack304;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar12 = *ppbVar6;
      bVar13 = false;
      bVar14 = pbVar12 == (byte *)0x0;
      if (bVar14) break;
      lVar2 = 5;
      pbVar8 = &UNK_0010b33d;
      do {
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        bVar13 = *pbVar8 < *pbVar12;
        bVar14 = *pbVar8 == *pbVar12;
        pbVar8 = pbVar8 + (ulong)bVar15 * -2 + 1;
        pbVar12 = pbVar12 + (ulong)bVar15 * -2 + 1;
      } while (bVar14);
    } while ((!bVar13 && !bVar14) != bVar13);
    pbVar12 = ppbVar6[3];
    if (pbVar12 == (byte *)0x0) {
      uVar4 = func_0x001024f0(0,&UNK_0010b459,5);
      func_0x001026d0(1,uVar4,&UNK_0010b470,&UNK_0010d8f8);
      lVar2 = func_0x001026b0(5,0);
      if ((lVar2 != 0) && (iVar1 = func_0x00102460(lVar2,&UNK_0010b47e,3), iVar1 != 0)) {
        pbVar12 = &UNK_0010b33d;
        goto code_r0x00104ab8;
      }
      pbVar12 = &UNK_0010b33d;
      puVar7 = &UNK_0010b416;
      uVar4 = func_0x001024f0(0,&UNK_0010b482,5);
      func_0x001026d0(1,uVar4,&UNK_0010d8f8,&UNK_0010b33d);
    }
    else {
      uVar4 = func_0x001024f0(0,&UNK_0010b459,5);
      func_0x001026d0(1,uVar4,&UNK_0010b470,&UNK_0010d8f8);
      lVar2 = func_0x001026b0(5,0);
      if ((lVar2 != 0) && (iVar1 = func_0x00102460(lVar2,&UNK_0010b47e,3), iVar1 != 0)) {
code_r0x00104ab8:
        uVar4 = stdout;
        uVar5 = func_0x001024f0(0,&UNK_0010d920,5);
        func_0x00102600(uVar5,uVar4);
      }
      uVar4 = func_0x001024f0(0,&UNK_0010b482,5);
      func_0x001026d0(1,uVar4,&UNK_0010d8f8,&UNK_0010b33d);
      puVar7 = &UNK_0010e041;
      if (pbVar12 == &UNK_0010b33d) {
        puVar7 = &UNK_0010b416;
      }
    }
    uVar4 = func_0x001024f0(0,&UNK_0010d968,5);
    func_0x001026d0(1,uVar4,pbVar12,puVar7);
  } while( true );
}

