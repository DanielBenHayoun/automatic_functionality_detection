
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unblock_signal(ulong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_RDX;
  byte **ppbVar8;
  undefined *puVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong unaff_R12;
  byte *pbVar12;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  byte *pbStack408;
  undefined *puStack400;
  byte *apbStack392 [5];
  undefined *puStack352;
  undefined *puStack344;
  undefined *puStack336;
  undefined *puStack328;
  undefined *puStack320;
  undefined8 uStack312;
  undefined8 uStack304;
  undefined8 uStack288;
  ulong uStack272;
  ulong uStack264;
  ulong uStack256;
  double dStack232;
  undefined auStack224 [24];
  long lStack200;
  undefined *puStack192;
  ulong uStack184;
  undefined auStack168 [136];
  long lStack32;
  
  bVar15 = 0;
  uStack184 = param_1 & 0xffffffff;
  puStack192 = auStack168;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x00101b30(auStack168);
  func_0x00101d10(auStack168,uStack184);
  uVar11 = 1;
  iVar2 = func_0x00101920(1,auStack168,0);
  if (iVar2 != 0) {
    puStack192 = (undefined *)func_0x00101a20(0,&UNK_00105eb1,5);
    puVar4 = (uint *)func_0x00101970();
    uVar11 = 0;
    func_0x00101c10(0,(ulong)*puVar4,puStack192);
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00101a50();
  uStack272 = uVar11 & 0xffffffff;
  lStack200 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)uVar11 == 0xe) {
    uStack272 = (ulong)term_signal;
    timed_out = 1;
  }
  uStack264 = (ulong)monitored_pid;
  iVar2 = (int)uStack272;
  if (monitored_pid == 0) {
    uVar11 = (ulong)(iVar2 + 0x80);
    func_0x00101990();
    goto code_r0x00102843;
  }
  if (kill_after == _UNK_00106878) {
    if (verbose != '\0') {
code_r0x00102730:
      iVar3 = sig2str(uStack272,auStack224);
      if (iVar3 != 0) {
        func_0x00101930(auStack224,0x13,1,0x13,&UNK_00105ec6,uStack272);
      }
      unaff_R12 = quote();
      uVar7 = func_0x00101a20(0,&UNK_00106040,5);
      func_0x00101c10(0,0,uVar7,auStack224,unaff_R12);
      goto code_r0x0010277d;
    }
  }
  else {
    dStack232 = kill_after;
    puVar4 = (uint *)func_0x00101970();
    uVar1 = *puVar4;
    unaff_R12 = (ulong)uVar1;
    term_signal = 9;
    settimeout(dStack232);
    bVar13 = verbose != '\0';
    kill_after = 0.00000000;
    *puVar4 = uVar1;
    if (bVar13) goto code_r0x00102730;
code_r0x0010277d:
    uStack264 = (ulong)monitored_pid;
    if (monitored_pid == 0) {
      func_0x00101b20(uStack272,1);
    }
  }
  uVar11 = uStack264;
  func_0x00101b70(uStack264,uStack272);
  if (foreground == '\0') {
    func_0x00101b20(uStack272,1);
    uVar11 = 0;
    func_0x00101b70(0,uStack272);
    if ((iVar2 != 9) && (iVar2 != 0x12)) {
      if ((int)uStack264 == 0) {
        func_0x00101b20(0x12,1);
      }
      func_0x00101b70(uStack264,0x12);
      func_0x00101b20(0x12,1);
      uVar11 = 0;
      func_0x00101b70(0,0x12);
    }
  }
  if (lStack200 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
code_r0x00102843:
  func_0x00101a50();
  puVar9 = program_name;
  uVar7 = 5;
  uStack288 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack256 = unaff_R12;
  if ((int)uVar11 == 0) goto code_r0x001028ad;
  uVar7 = func_0x00101a20(0,&UNK_00106060,5);
  func_0x00101cd0(stderr,1,uVar7,puVar9);
  do {
    func_0x00101ca0(uVar11 & 0xffffffff);
    uVar7 = extraout_RDX;
code_r0x001028ad:
    uVar7 = func_0x00101a20(0,&UNK_00106088,uVar7);
    func_0x00101c00(1,uVar7,puVar9,puVar9);
    uVar7 = stdout;
    uVar5 = func_0x00101a20(0,&UNK_001060d0,5);
    func_0x00101af0(uVar5,uVar7);
    uVar7 = stdout;
    uVar5 = func_0x00101a20(0,&UNK_00106110,5);
    func_0x00101af0(uVar5,uVar7);
    uVar7 = stdout;
    uVar5 = func_0x00101a20(0,&UNK_00106160,5);
    func_0x00101af0(uVar5,uVar7);
    uVar7 = stdout;
    uVar5 = func_0x00101a20(0,&UNK_00106440,5);
    func_0x00101af0(uVar5,uVar7);
    uVar7 = stdout;
    uVar5 = func_0x00101a20(0,&UNK_00106488,5);
    func_0x00101af0(uVar5,uVar7);
    uVar7 = stdout;
    uVar5 = func_0x00101a20(0,&UNK_001064b8,5);
    func_0x00101af0(uVar5,uVar7);
    uVar7 = stdout;
    uVar5 = func_0x00101a20(0,&UNK_001064f0,5);
    func_0x00101af0(uVar5,uVar7);
    uVar7 = stdout;
    uVar5 = func_0x00101a20(0,&UNK_001065b0,5);
    func_0x00101af0(uVar5,uVar7);
    uStack312 = 0;
    uStack304 = 0;
    pbStack408 = &UNK_00105ed1;
    apbStack392[4] = &UNK_00105f12;
    puStack400 = &UNK_00105ed3;
    puStack344 = &UNK_00105f1c;
    apbStack392[0] = &UNK_00105f4b;
    puStack328 = &UNK_00105f26;
    apbStack392[1] = &UNK_00105ee3;
    apbStack392[2] = &UNK_00105ef9;
    apbStack392[3] = &UNK_00105f03;
    puStack352 = &UNK_00105f03;
    puStack336 = &UNK_00105f03;
    puStack320 = &UNK_00105f03;
    ppbVar8 = &pbStack408;
    do {
      ppbVar8 = ppbVar8;
      ppbVar8 = ppbVar8 + 2;
      pbVar12 = *ppbVar8;
      bVar13 = false;
      bVar14 = pbVar12 == (byte *)0x0;
      if (bVar14) break;
      lVar6 = 8;
      pbVar10 = &UNK_00105ec9;
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar13 = *pbVar10 < *pbVar12;
        bVar14 = *pbVar10 == *pbVar12;
        pbVar10 = pbVar10 + (ulong)bVar15 * -2 + 1;
        pbVar12 = pbVar12 + (ulong)bVar15 * -2 + 1;
      } while (bVar14);
    } while ((!bVar13 && !bVar14) != bVar13);
    pbVar12 = ppbVar8[3];
    if (pbVar12 == (byte *)0x0) {
      uVar7 = func_0x00101a20(0,&UNK_00105f30,5);
      func_0x00101c00(1,uVar7,&UNK_00105f47,&UNK_00106750);
      lVar6 = func_0x00101bf0(5,0);
      if ((lVar6 != 0) && (iVar2 = func_0x00101980(lVar6,&UNK_00105f55,3), iVar2 != 0)) {
        pbVar12 = &UNK_00105ec9;
        goto code_r0x00102c20;
      }
      pbVar12 = &UNK_00105ec9;
      puVar9 = &UNK_00105eed;
      uVar7 = func_0x00101a20(0,&UNK_00105f59,5);
      func_0x00101c00(1,uVar7,&UNK_00106750,&UNK_00105ec9);
    }
    else {
      uVar7 = func_0x00101a20(0,&UNK_00105f30,5);
      func_0x00101c00(1,uVar7,&UNK_00105f47,&UNK_00106750);
      lVar6 = func_0x00101bf0(5,0);
      if ((lVar6 != 0) && (iVar2 = func_0x00101980(lVar6,&UNK_00105f55,3), iVar2 != 0)) {
code_r0x00102c20:
        uVar7 = stdout;
        uVar5 = func_0x00101a20(0,&UNK_00106778,5);
        func_0x00101af0(uVar5,uVar7);
      }
      uVar7 = func_0x00101a20(0,&UNK_00105f59,5);
      func_0x00101c00(1,uVar7,&UNK_00106750,&UNK_00105ec9);
      puVar9 = &UNK_00106e61;
      if (pbVar12 == &UNK_00105ec9) {
        puVar9 = &UNK_00105eed;
      }
    }
    uVar7 = func_0x00101a20(0,&UNK_001067c0,5);
    func_0x00101c00(1,uVar7,pbVar12,puVar9);
  } while( true );
}

