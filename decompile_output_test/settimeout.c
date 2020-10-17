
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void settimeout(ulong param_1)

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
  undefined in_XMM0 [16];
  byte *pbStack496;
  undefined *puStack488;
  byte *apbStack480 [5];
  undefined *puStack440;
  undefined *puStack432;
  undefined *puStack424;
  undefined *puStack416;
  undefined *puStack408;
  undefined8 uStack400;
  undefined8 uStack392;
  undefined8 uStack376;
  ulong uStack360;
  ulong uStack352;
  ulong uStack344;
  double dStack320;
  undefined auStack312 [24];
  long lStack288;
  undefined *puStack280;
  ulong uStack272;
  undefined auStack256 [136];
  long lStack120;
  uint *puStack104;
  double dStack80;
  ulong uStack64;
  undefined8 uStack56;
  undefined8 uStack48;
  undefined auStack40 [24];
  long lStack16;
  
  bVar15 = 0;
  puStack104 = (uint *)(param_1 & 0xffffffff);
  dStack80 = SUB168(in_XMM0,0);
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  auStack40._0_16_ = dtotimespec();
  uStack56 = 0;
  uStack48 = 0;
  iVar2 = func_0x00101c50(0,0,&uStack64);
  if (iVar2 == 0) {
    uStack272 = uStack64;
    iVar2 = func_0x00101c40(uStack64,0,&uStack56,0);
    if (iVar2 != 0) {
      if ((char)puStack104 != '\0') {
        puStack104 = (uint *)func_0x00101a20(0,&UNK_00105e84,5);
        puVar4 = (uint *)func_0x00101970();
        func_0x00101c10(0,(ulong)*puVar4,puStack104);
      }
      func_0x00101cc0(uStack64);
      goto code_r0x001024e1;
    }
  }
  else {
    if (((char)puStack104 != '\0') && (puStack104 = (uint *)func_0x00101970(), *puStack104 != 0x26))
    {
      uVar7 = func_0x00101a20(0,&UNK_00105e9b,5);
      func_0x00101c10(0,(ulong)*puStack104,uVar7);
    }
code_r0x001024e1:
    uStack272 = 0xffffffff;
    if (dStack80 < _UNK_00106870) {
      uStack272 = (ulong)((uint)((double)((long)dStack80 & 0xffffffff) < dStack80) +
                         (int)(long)dStack80);
    }
    func_0x00101ad0();
  }
  if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00101a50();
  uStack272 = uStack272 & 0xffffffff;
  puStack280 = auStack256;
  lStack120 = *(long *)(in_FS_OFFSET + 0x28);
  func_0x00101b30(auStack256);
  func_0x00101d10(auStack256,uStack272);
  uVar11 = 1;
  iVar2 = func_0x00101920(1,auStack256,0);
  if (iVar2 != 0) {
    puStack280 = (undefined *)func_0x00101a20(0,&UNK_00105eb1,5);
    puVar4 = (uint *)func_0x00101970();
    uVar11 = 0;
    func_0x00101c10(0,(ulong)*puVar4,puStack280);
  }
  if (lStack120 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00101a50();
  uStack360 = uVar11 & 0xffffffff;
  lStack288 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)uVar11 == 0xe) {
    uStack360 = (ulong)term_signal;
    timed_out = 1;
  }
  uStack352 = (ulong)monitored_pid;
  iVar2 = (int)uStack360;
  if (monitored_pid == 0) {
    uVar11 = (ulong)(iVar2 + 0x80);
    func_0x00101990();
    goto code_r0x00102843;
  }
  if (kill_after == _UNK_00106878) {
    if (verbose != '\0') {
code_r0x00102730:
      iVar3 = sig2str(uStack360,auStack312);
      if (iVar3 != 0) {
        func_0x00101930(auStack312,0x13,1,0x13,&UNK_00105ec6,uStack360);
      }
      unaff_R12 = quote();
      uVar7 = func_0x00101a20(0,&UNK_00106040,5);
      func_0x00101c10(0,0,uVar7,auStack312,unaff_R12);
      goto code_r0x0010277d;
    }
  }
  else {
    dStack320 = kill_after;
    puVar4 = (uint *)func_0x00101970(kill_after);
    uVar1 = *puVar4;
    unaff_R12 = (ulong)uVar1;
    term_signal = 9;
    settimeout(dStack320);
    bVar13 = verbose != '\0';
    kill_after = 0.00000000;
    *puVar4 = uVar1;
    if (bVar13) goto code_r0x00102730;
code_r0x0010277d:
    uStack352 = (ulong)monitored_pid;
    if (monitored_pid == 0) {
      func_0x00101b20(uStack360,1);
    }
  }
  uVar11 = uStack352;
  func_0x00101b70(uStack352,uStack360);
  if (foreground == '\0') {
    func_0x00101b20(uStack360,1);
    uVar11 = 0;
    func_0x00101b70(0,uStack360);
    if ((iVar2 != 9) && (iVar2 != 0x12)) {
      if ((int)uStack352 == 0) {
        func_0x00101b20(0x12,1);
      }
      func_0x00101b70(uStack352,0x12);
      func_0x00101b20(0x12,1);
      uVar11 = 0;
      func_0x00101b70(0,0x12);
    }
  }
  if (lStack288 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
code_r0x00102843:
  func_0x00101a50();
  puVar9 = program_name;
  uVar7 = 5;
  uStack376 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack344 = unaff_R12;
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
    uStack400 = 0;
    uStack392 = 0;
    pbStack496 = &UNK_00105ed1;
    apbStack480[4] = &UNK_00105f12;
    puStack488 = &UNK_00105ed3;
    puStack432 = &UNK_00105f1c;
    apbStack480[0] = &UNK_00105f4b;
    puStack416 = &UNK_00105f26;
    apbStack480[1] = &UNK_00105ee3;
    apbStack480[2] = &UNK_00105ef9;
    apbStack480[3] = &UNK_00105f03;
    puStack440 = &UNK_00105f03;
    puStack424 = &UNK_00105f03;
    puStack408 = &UNK_00105f03;
    ppbVar8 = &pbStack496;
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

