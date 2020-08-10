
void maybe_close_stdout(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  byte **ppbVar5;
  uint *unaff_RBX;
  undefined *puVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  byte *pbStack176;
  undefined *puStack168;
  byte *apbStack160 [5];
  undefined *puStack120;
  undefined *puStack112;
  undefined *puStack104;
  undefined *puStack96;
  undefined *puStack88;
  undefined8 uStack80;
  undefined8 uStack72;
  undefined8 uStack56;
  
  bVar12 = 0;
  if (stdout_closed != '\0') {
    iVar1 = close_stream(stderr);
    if (iVar1 == 0) {
      return;
    }
    uVar8 = 1;
    func_0x001017e0();
    puVar6 = program_name;
    uVar4 = 5;
    uStack56 = *(undefined8 *)(in_FS_OFFSET + 0x28);
    if ((int)uVar8 == 0) goto code_r0x001023dd;
    uVar4 = func_0x00101890(0,&UNK_00106790,5);
    func_0x00101b20(stderr,1,uVar4,puVar6);
    do {
      func_0x00101b00(uVar8 & 0xffffffff);
      uVar4 = extraout_RDX;
code_r0x001023dd:
      uVar4 = func_0x00101890(0,&UNK_001067b8,uVar4);
      func_0x00101a60(1,uVar4,puVar6);
      uVar4 = stdout;
      uVar2 = func_0x00101890(0,&UNK_001067e0,5);
      func_0x00101990(uVar2,uVar4);
      uVar4 = stdout;
      uVar2 = func_0x00101890(0,&UNK_001068b8,5);
      func_0x00101990(uVar2,uVar4);
      func_0x001019b0(10,stdout);
      uVar4 = stdout;
      uVar2 = func_0x00101890(0,&UNK_00106908,5);
      func_0x00101990(uVar2,uVar4);
      uVar4 = stdout;
      uVar2 = func_0x00101890(0,&UNK_001069d8,5);
      func_0x00101990(uVar2,uVar4);
      uVar4 = stdout;
      uVar2 = func_0x00101890(0,&UNK_00106a78,5);
      func_0x00101990(uVar2,uVar4);
      uVar4 = stdout;
      uVar2 = func_0x00101890(0,&UNK_00106be8,5);
      func_0x00101990(uVar2,uVar4);
      uVar4 = stdout;
      uVar2 = func_0x00101890(0,&UNK_00106cd0,5);
      func_0x00101990(uVar2,uVar4);
      uVar4 = stdout;
      uVar2 = func_0x00101890(0,&UNK_00106d00,5);
      func_0x00101990(uVar2,uVar4);
      uStack80 = 0;
      uStack72 = 0;
      pbStack176 = &UNK_0010662b;
      apbStack160[4] = &UNK_0010666c;
      puStack168 = &UNK_0010662d;
      puStack112 = &UNK_00106676;
      apbStack160[0] = &UNK_001066a5;
      puStack96 = &UNK_00106680;
      apbStack160[1] = &UNK_0010663d;
      apbStack160[2] = &UNK_00106653;
      apbStack160[3] = &UNK_0010665d;
      puStack120 = &UNK_0010665d;
      puStack104 = &UNK_0010665d;
      puStack88 = &UNK_0010665d;
      ppbVar5 = &pbStack176;
      do {
        ppbVar5 = ppbVar5;
        ppbVar5 = ppbVar5 + 2;
        pbVar9 = *ppbVar5;
        bVar10 = false;
        bVar11 = pbVar9 == (byte *)0x0;
        if (bVar11) break;
        lVar3 = 7;
        pbVar7 = &UNK_00106624;
        do {
          if (lVar3 == 0) break;
          lVar3 = lVar3 + -1;
          bVar10 = *pbVar7 < *pbVar9;
          bVar11 = *pbVar7 == *pbVar9;
          pbVar7 = pbVar7 + (ulong)bVar12 * -2 + 1;
          pbVar9 = pbVar9 + (ulong)bVar12 * -2 + 1;
        } while (bVar11);
      } while ((!bVar10 && !bVar11) != bVar10);
      pbVar9 = ppbVar5[3];
      if (pbVar9 == (byte *)0x0) {
        uVar4 = func_0x00101890(0,&UNK_0010668a,5);
        func_0x00101a60(1,uVar4,&UNK_001066a1,&UNK_00106d38);
        lVar3 = func_0x00101a50(5,0);
        if (lVar3 != 0) {
          iVar1 = func_0x001017d0(lVar3,&UNK_001066af,3);
          if (iVar1 != 0) {
            pbVar9 = &UNK_00106624;
            goto code_r0x00102760;
          }
        }
        pbVar9 = &UNK_00106624;
        puVar6 = &UNK_00106647;
        uVar4 = func_0x00101890(0,&UNK_001066b3,5);
        func_0x00101a60(1,uVar4,&UNK_00106d38,&UNK_00106624);
      }
      else {
        uVar4 = func_0x00101890(0,&UNK_0010668a,5);
        func_0x00101a60(1,uVar4,&UNK_001066a1,&UNK_00106d38);
        lVar3 = func_0x00101a50(5,0);
        if (lVar3 != 0) {
          iVar1 = func_0x001017d0(lVar3,&UNK_001066af,3);
          if (iVar1 != 0) {
code_r0x00102760:
            uVar4 = stdout;
            uVar2 = func_0x00101890(0,&UNK_00106d60,5);
            func_0x00101990(uVar2,uVar4);
          }
        }
        uVar4 = func_0x00101890(0,&UNK_001066b3,5);
        func_0x00101a60(1,uVar4,&UNK_00106d38,&UNK_00106624);
        puVar6 = &UNK_00107538;
        if (pbVar9 == &UNK_00106624) {
          puVar6 = &UNK_00106647;
        }
      }
      uVar4 = func_0x00101890(0,&UNK_00106da8,5);
      func_0x00101a60(1,uVar4,pbVar9,puVar6);
    } while( true );
  }
  iVar1 = close_stream(stdout);
  if (iVar1 != 0) {
    unaff_RBX = (uint *)func_0x001017b0();
    if ((ignore_EPIPE == '\0') || (*unaff_RBX != 0x20)) {
      uVar4 = func_0x00101890(0,&UNK_0010674f,5);
      if (file_name == 0) goto code_r0x001028bd;
      uVar2 = quotearg_colon();
      func_0x00101a90(0,(ulong)*unaff_RBX,&UNK_00106f13,uVar2,uVar4);
      goto code_r0x001028b2;
    }
  }
  iVar1 = close_stream(stderr);
  if (iVar1 == 0) {
    return;
  }
code_r0x001028b2:
  do {
    uVar4 = func_0x001017e0((ulong)exit_failure);
code_r0x001028bd:
    func_0x00101a90(0,(ulong)*unaff_RBX,&UNK_00106f17,uVar4);
  } while( true );
}

