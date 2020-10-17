
void print_size(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  undefined *puVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 unaff_R12;
  byte *pbVar10;
  undefined8 unaff_R13;
  long in_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte *pbStack320;
  undefined *puStack312;
  byte *apbStack304 [5];
  undefined *puStack264;
  undefined *puStack256;
  undefined *puStack248;
  undefined *puStack240;
  undefined *puStack232;
  undefined8 uStack224;
  undefined8 uStack216;
  undefined8 uStack200;
  undefined8 *puStack184;
  undefined8 uStack176;
  undefined8 uStack168;
  undefined *puStack160;
  undefined4 uStack152;
  undefined4 uStack148;
  uint uStack144;
  undefined4 uStack140;
  undefined8 auStack136 [8];
  undefined auStack72 [24];
  long lStack48;
  
  bVar13 = 0;
  uVar5 = param_1[1];
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (opt_inodes == '\0') {
    uVar5 = *param_1;
  }
  puStack160 = &UNK_00104114;
  print_only_size(uVar5);
  if (opt_time != '\0') {
    puVar7 = *(undefined **)(stdout + 0x28);
    if (puVar7 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar7 + 1;
      *puVar7 = 9;
    }
    else {
      puStack160 = &UNK_001041da;
      func_0x001025c0(stdout,9);
    }
    unaff_R13 = time_format;
    unaff_R12 = localtz;
                    /* WARNING: Load size is inaccurate */
    auVar1 = *(undefined *)(param_1 + 2);
    param_1 = auStack136;
    uStack152 = SUB164(auVar1,0);
    uStack148 = SUB164(auVar1 >> 0x20,0);
    uStack144 = SUB164(auVar1 >> 0x40,0);
    uStack140 = SUB164(auVar1 >> 0x60,0);
    puStack160 = &UNK_00104167;
    lVar4 = localtime_rz(SUB168(auVar1,0),localtz,&uStack152,param_1);
    if (lVar4 == 0) {
      puStack160 = &UNK_001041ee;
      param_1 = (undefined8 *)imaxtostr(CONCAT44(uStack148,uStack152),auStack72);
      puStack160 = &UNK_001041f9;
      unaff_R12 = quote(param_1);
      puStack160 = &UNK_0010420f;
      uVar5 = func_0x00102510(0,&UNK_0011fa6d,5);
      puStack160 = &UNK_00104220;
      func_0x001028a0(0,0,uVar5);
      puStack160 = &UNK_0010422f;
      func_0x001026a0(param_1,stdout);
    }
    else {
      puStack160 = &UNK_00104186;
      fprintftime(stdout,unaff_R13,param_1,unaff_R12,(ulong)uStack144);
    }
  }
  puStack160 = &UNK_001041a8;
  func_0x00102850(1,&UNK_0011fa85,param_2,(ulong)(-(uint)(opt_nul_terminate_output == '\0') & 10));
  puStack160 = &UNK_001041b4;
  uVar9 = stdout;
  func_0x00102980();
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack160 = &UNK_00104239;
  func_0x00102560();
  puVar7 = program_name;
  uVar5 = 5;
  uStack200 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack184 = param_1;
  uStack176 = param_2;
  uStack168 = unaff_R12;
  puStack160 = (undefined *)unaff_R13;
  if ((int)uVar9 == 0) goto code_r0x0010429d;
  uVar5 = func_0x00102510(0,&UNK_0011fe28,5);
  func_0x00102970(stderr,1,uVar5,puVar7);
  do {
    func_0x00102950(uVar9 & 0xffffffff);
    uVar5 = extraout_RDX;
code_r0x0010429d:
    uVar5 = func_0x00102510(0,&UNK_0011fe50,uVar5);
    func_0x00102850(1,uVar5,puVar7,puVar7);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_0011fe98,5);
    func_0x001026a0(uVar5,uVar2);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_0011fee0,5);
    func_0x001026a0(uVar5,uVar2);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_0011ff30,5);
    func_0x001026a0(uVar5,uVar2);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_001200f0,5);
    func_0x001026a0(uVar5,uVar2);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_001203a8,5);
    func_0x001026a0(uVar5,uVar2);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_00120550,5);
    func_0x001026a0(uVar5,uVar2);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_00120620,5);
    func_0x001026a0(uVar5,uVar2);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_00120740,5);
    func_0x001026a0(uVar5,uVar2);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_001209a8,5);
    func_0x001026a0(uVar5,uVar2);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_00120a78,5);
    func_0x001026a0(uVar5,uVar2);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_00120aa8,5);
    func_0x001026a0(uVar5,uVar2);
    uVar5 = func_0x00102510(0,&UNK_00120ae0,5);
    func_0x00102850(1,uVar5,&UNK_0011fa8e);
    uVar2 = stdout;
    uVar5 = func_0x00102510(0,&UNK_00120bc0,5);
    func_0x001026a0(uVar5,uVar2);
    uStack224 = 0;
    uStack216 = 0;
    pbStack320 = &UNK_0011fa91;
    apbStack304[4] = &UNK_0011fad2;
    puStack312 = &UNK_0011fa93;
    puStack256 = &UNK_0011fadc;
    apbStack304[0] = &UNK_0011fb0b;
    puStack240 = &UNK_0011fae6;
    apbStack304[1] = &UNK_0011faa3;
    apbStack304[2] = &UNK_0011fab9;
    apbStack304[3] = &UNK_0011fac3;
    puStack264 = &UNK_0011fac3;
    puStack248 = &UNK_0011fac3;
    puStack232 = &UNK_0011fac3;
    ppbVar6 = &pbStack320;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar10 = *ppbVar6;
      bVar11 = false;
      bVar12 = pbVar10 == (byte *)0x0;
      if (bVar12) break;
      lVar4 = 3;
      pbVar8 = &UNK_0011fa8b;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar11 = *pbVar8 < *pbVar10;
        bVar12 = *pbVar8 == *pbVar10;
        pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
        pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
      } while (bVar12);
    } while ((!bVar11 && !bVar12) != bVar11);
    pbVar10 = ppbVar6[3];
    if (pbVar10 == (byte *)0x0) {
      uVar5 = func_0x00102510(0,&UNK_0011faf0,5);
      func_0x00102850(1,uVar5,&UNK_0011fb07,&UNK_00120c98);
      lVar4 = func_0x00102840(5,0);
      if (lVar4 != 0) {
        iVar3 = func_0x00102420(lVar4,&UNK_0011fb15,3);
        if (iVar3 != 0) {
          pbVar10 = &UNK_0011fa8b;
          goto code_r0x001046d0;
        }
      }
      pbVar10 = &UNK_0011fa8b;
      puVar7 = &UNK_0011faad;
      uVar5 = func_0x00102510(0,&UNK_0011fb19,5);
      func_0x00102850(1,uVar5,&UNK_00120c98,&UNK_0011fa8b);
    }
    else {
      uVar5 = func_0x00102510(0,&UNK_0011faf0,5);
      func_0x00102850(1,uVar5,&UNK_0011fb07,&UNK_00120c98);
      lVar4 = func_0x00102840(5,0);
      if (lVar4 != 0) {
        iVar3 = func_0x00102420(lVar4,&UNK_0011fb15,3);
        if (iVar3 != 0) {
code_r0x001046d0:
          uVar2 = stdout;
          uVar5 = func_0x00102510(0,&UNK_00120cc0,5);
          func_0x001026a0(uVar5,uVar2);
        }
      }
      uVar5 = func_0x00102510(0,&UNK_0011fb19,5);
      func_0x00102850(1,uVar5,&UNK_00120c98,&UNK_0011fa8b);
      puVar7 = &UNK_00121fc1;
      if (pbVar10 == &UNK_0011fa8b) {
        puVar7 = &UNK_0011faad;
      }
    }
    uVar5 = func_0x00102510(0,&UNK_00120d08,5);
    func_0x00102850(1,uVar5,pbVar10,puVar7);
  } while( true );
}

