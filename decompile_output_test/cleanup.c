
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cleanup(uint param_1)

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
  byte *pbStack240;
  undefined *puStack232;
  byte *apbStack224 [5];
  undefined *puStack184;
  undefined *puStack176;
  undefined *puStack168;
  undefined *puStack160;
  undefined *puStack152;
  undefined8 uStack144;
  undefined8 uStack136;
  undefined8 uStack120;
  ulong uStack104;
  ulong uStack96;
  ulong uStack88;
  double dStack64;
  undefined auStack56 [24];
  long lStack32;
  
  bVar15 = 0;
  uStack104 = (ulong)param_1;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0xe) {
    uStack104 = (ulong)term_signal;
    timed_out = 1;
  }
  uStack96 = (ulong)monitored_pid;
  iVar3 = (int)uStack104;
  if (monitored_pid == 0) {
    uVar11 = (ulong)(iVar3 + 0x80);
    func_0x00101990();
    goto code_r0x00102843;
  }
  if (kill_after == _UNK_00106878) {
    if (verbose != '\0') {
code_r0x00102730:
      iVar2 = sig2str(uStack104,auStack56);
      if (iVar2 != 0) {
        func_0x00101930(auStack56,0x13,1,0x13,&UNK_00105ec6,uStack104);
      }
      unaff_R12 = quote();
      uVar7 = func_0x00101a20(0,&UNK_00106040,5);
      func_0x00101c10(0,0,uVar7,auStack56,unaff_R12);
      goto code_r0x0010277d;
    }
  }
  else {
    dStack64 = kill_after;
    puVar4 = (uint *)func_0x00101970();
    uVar1 = *puVar4;
    unaff_R12 = (ulong)uVar1;
    term_signal = 9;
    settimeout(dStack64);
    bVar13 = verbose != '\0';
    kill_after = 0.00000000;
    *puVar4 = uVar1;
    if (bVar13) goto code_r0x00102730;
code_r0x0010277d:
    uStack96 = (ulong)monitored_pid;
    if (monitored_pid == 0) {
      func_0x00101b20(uStack104,1);
    }
  }
  uVar11 = uStack96;
  func_0x00101b70(uStack96,uStack104);
  if (foreground == '\0') {
    func_0x00101b20(uStack104,1);
    uVar11 = 0;
    func_0x00101b70(0,uStack104);
    if ((iVar3 != 9) && (iVar3 != 0x12)) {
      if ((int)uStack96 == 0) {
        func_0x00101b20(0x12,1);
      }
      func_0x00101b70(uStack96,0x12);
      func_0x00101b20(0x12,1);
      uVar11 = 0;
      func_0x00101b70(0,0x12);
    }
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
code_r0x00102843:
  func_0x00101a50();
  puVar9 = program_name;
  uVar7 = 5;
  uStack120 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack88 = unaff_R12;
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
    uStack144 = 0;
    uStack136 = 0;
    pbStack240 = &UNK_00105ed1;
    apbStack224[4] = &UNK_00105f12;
    puStack232 = &UNK_00105ed3;
    puStack176 = &UNK_00105f1c;
    apbStack224[0] = &UNK_00105f4b;
    puStack160 = &UNK_00105f26;
    apbStack224[1] = &UNK_00105ee3;
    apbStack224[2] = &UNK_00105ef9;
    apbStack224[3] = &UNK_00105f03;
    puStack184 = &UNK_00105f03;
    puStack168 = &UNK_00105f03;
    puStack152 = &UNK_00105f03;
    ppbVar8 = &pbStack240;
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
      if ((lVar6 != 0) && (iVar3 = func_0x00101980(lVar6,&UNK_00105f55,3), iVar3 != 0)) {
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
      if ((lVar6 != 0) && (iVar3 = func_0x00101980(lVar6,&UNK_00105f55,3), iVar3 != 0)) {
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

