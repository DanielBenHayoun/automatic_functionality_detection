
/* WARNING: Could not reconcile some variable overlaps */

undefined8 io_error(void)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 extraout_RDX;
  byte **ppbVar13;
  undefined *puVar14;
  byte *pbVar15;
  char *pcVar16;
  byte *pbVar17;
  byte *pbVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  byte *pbStack296;
  undefined *puStack288;
  byte *apbStack280 [5];
  undefined *puStack240;
  undefined *puStack232;
  undefined *puStack224;
  undefined *puStack216;
  undefined *puStack208;
  undefined8 uStack200;
  undefined8 uStack192;
  undefined8 uStack176;
  undefined *puStack160;
  undefined *puStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined *puStack128;
  undefined8 uStack120;
  long lStack112;
  undefined *puStack104;
  undefined *puStack96;
  undefined *puStack88;
  undefined8 uStack80;
  long lStack72;
  undefined8 uStack56;
  
  bVar21 = 0;
  func_0x00101600(stdout);
  uStack56 = func_0x00101640(0,&UNK_00107f8f,5);
  puVar3 = (uint *)func_0x001015b0();
  pbVar18 = (byte *)(ulong)*puVar3;
  pcVar16 = (char *)0x1;
  func_0x00101840(1,pbVar18,uStack56);
  lVar8 = 4;
  bVar19 = &uStack56 < (undefined *)0x48;
  bVar20 = (undefined *)register0x00000020 == (undefined *)0x80;
  pbVar15 = pbVar18;
  pbVar17 = &UNK_00107f9b;
  do {
    if (lVar8 == 0) break;
    lVar8 = lVar8 + -1;
    bVar19 = *pbVar15 < *pbVar17;
    bVar20 = *pbVar15 == *pbVar17;
    pbVar15 = pbVar15 + (ulong)bVar21 * -2 + 1;
    pbVar17 = pbVar17 + (ulong)bVar21 * -2 + 1;
  } while (bVar20);
  uStack120 = (undefined *)CONCAT44(uStack120._4_4_,(int)(char)((!bVar19 && !bVar20) - bVar19));
  pcVar6 = pcVar16;
  if (*pcVar16 == '0') {
    do {
      pcVar5 = pcVar6;
      pcVar6 = pcVar5 + 1;
    } while (pcVar5[1] == '0');
    if ((pcVar5[1] != '\0') || (bVar19 = pcVar16 == pcVar6, pcVar16 = pcVar5, bVar19)) {
      pcVar16 = pcVar6;
    }
  }
  pbVar15 = pbVar18;
  if (*pbVar18 == 0x30) {
    do {
      pbVar17 = pbVar15;
      pbVar15 = pbVar17 + 1;
    } while (pbVar17[1] == 0x30);
    if ((pbVar18 == pbVar15) || (pbVar18 = pbVar17, pbVar17[1] != 0)) {
      pbVar18 = pbVar15;
    }
  }
  puStack136 = &UNK_0010276d;
  puVar14 = (undefined *)func_0x00101660(pcVar16);
  puVar4 = puVar14 + 1;
  puStack160 = (undefined *)0x1f;
  if ((undefined *)0x1e < puVar4) {
    puStack160 = puVar4;
  }
  puStack128 = puVar14;
  if ((int)uStack120 == 0) {
    puStack104 = puStack160 + 1;
    puStack144 = (undefined *)0x0;
    puStack136 = &UNK_00102a42;
    lStack112 = xmalloc(puStack104);
    puStack136 = &UNK_00102a5c;
    pcVar16 = (char *)func_0x00101760(puStack160 + (lStack112 - (long)puStack128),pcVar16,puVar4);
    lStack72 = 0;
    uStack80 = 0;
  }
  else {
    uVar9 = 0xffffffffffffffff;
    pbVar15 = pbVar18;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + (ulong)bVar21 * -2 + 1;
    } while (bVar1 != 0);
    puStack96 = (undefined *)~uVar9;
    puStack144 = puStack96 + -1;
    if (puStack160 < puStack144) {
      puStack160 = puStack144;
    }
    puStack104 = puStack160 + 1;
    puStack136 = &UNK_001027bb;
    lStack112 = xmalloc();
    puStack136 = &UNK_001027d8;
    pcVar16 = (char *)func_0x00101760(puStack160 + (lStack112 - (long)puStack128),pcVar16,puVar4);
    puStack136 = &UNK_001027e8;
    lStack72 = xmalloc(puStack104);
    puStack136 = &UNK_00102806;
    uStack80 = func_0x00101760(puStack160 + (lStack72 - (long)puStack144),pbVar18,puStack96,
                               puStack96);
    if (puStack144 <= puStack128) {
      if (puStack144 < puStack128) {
        uVar12 = 0;
      }
      else {
        puStack136 = &UNK_00102a87;
        iVar2 = func_0x00101740(pcVar16,uStack80);
        if (iVar2 < 1) goto code_r0x00102815;
        uVar12 = 0;
      }
code_r0x00102a09:
      puStack136 = &UNK_00102a13;
      func_0x00101590(lStack112);
      puStack136 = &UNK_00102a1d;
      func_0x00101590(lStack72);
      return uVar12;
    }
  }
code_r0x00102815:
  puVar4 = (undefined *)0x2000;
  if ((undefined *)0x1fff < (undefined *)((long)puStack104 * 2)) {
    puVar4 = (undefined *)((long)puStack104 * 2);
  }
  puStack136 = &UNK_0010283d;
  puStack88 = puVar4;
  puStack152 = (undefined *)xmalloc(puVar4);
  puVar4 = puStack152 + (long)puVar4;
  puStack136 = &UNK_00102854;
  puVar11 = (undefined *)func_0x00101810(puStack152,pcVar16,puStack128);
  puStack128 = (undefined *)((ulong)puStack128 & 0xffffffffffffff00 | (ulong)((int)uStack120 == 0));
  do {
    do {
      if ((puStack144 <= puVar14) && ((char)puStack128 == '\0')) {
        if (puVar14 <= puStack144) {
          puStack136 = &UNK_001029cf;
          uStack120 = puVar11;
          iVar2 = func_0x00101740(pcVar16,uStack80);
          puVar11 = uStack120;
          if (iVar2 < 0) goto code_r0x00102877;
        }
        *puVar11 = 10;
        puStack136 = &UNK_001029fa;
        puVar10 = puStack152;
        lVar8 = func_0x001017d0(puStack152,puVar11 + (1 - (long)puStack152),1,stdout);
        if (lVar8 == 1) {
          uVar12 = 1;
          goto code_r0x00102a09;
        }
        goto code_r0x00102a96;
      }
code_r0x00102877:
      *puVar11 = *separator;
      pcVar6 = pcVar16 + (long)(puVar14 + -1);
      do {
        if (*pcVar6 < '9') {
          *pcVar6 = *pcVar6 + '\x01';
          goto joined_r0x001028ad;
        }
        pcVar5 = pcVar6 + -1;
        *pcVar6 = '0';
        pcVar6 = pcVar5;
      } while (pcVar16 <= pcVar5);
      puVar14 = puVar14 + 1;
      pcVar16[-1] = '1';
      pcVar16 = pcVar16 + -1;
joined_r0x001028ad:
      puVar10 = puVar11 + 1;
      if (puStack160 == puVar14) {
        puStack104 = (undefined *)((long)puStack160 * 2);
        uStack120 = puStack104 + 1;
        puStack136 = &UNK_00102946;
        puStack96 = puVar11 + 1;
        lStack112 = xrealloc(lStack112,uStack120);
        puStack136 = &UNK_0010295b;
        pcVar16 = (char *)func_0x00101820(puStack160 + lStack112,lStack112,puStack160 + 1);
        puStack160 = puStack104;
        puVar11 = (undefined *)((long)uStack120 * 2);
        puVar10 = puStack96;
        if (puStack88 < puVar11) {
          uStack120 = puStack96 + -(long)puStack152;
          puStack136 = &UNK_00102996;
          puStack104 = puVar11;
          puStack152 = (undefined *)xrealloc(puStack152,puVar11);
          puStack88 = puStack104;
          puVar4 = puStack152 + (long)puStack104;
          puVar10 = uStack120 + (long)puStack152;
        }
      }
      puStack136 = &UNK_001028bd;
      puVar11 = (undefined *)func_0x00101810(puVar10,pcVar16,puVar14,puVar10);
    } while (puVar11 <= puVar4 + ~(ulong)puVar14);
    puStack136 = &UNK_001028e8;
    puVar10 = puStack152;
    lVar8 = func_0x001017d0(puStack152,puVar11 + -(long)puStack152,1,stdout);
    puVar11 = puStack152;
  } while (lVar8 == 1);
code_r0x00102a96:
  puStack136 = &UNK_00102a9b;
  io_error();
  puVar14 = program_name;
  uVar12 = 5;
  uStack176 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack136 = puVar4;
  if ((int)puVar10 == 0) goto code_r0x00102afd;
  uVar12 = func_0x00101640(0,&UNK_00108150,5);
  func_0x00101890(stderr,1,uVar12,puVar14);
  do {
    func_0x00101870((ulong)puVar10 & 0xffffffff);
    uVar12 = extraout_RDX;
code_r0x00102afd:
    uVar12 = func_0x00101640(0,&UNK_00108178,uVar12);
    func_0x00101800(1,uVar12,puVar14,puVar14,puVar14);
    uVar12 = stdout;
    uVar7 = func_0x00101640(0,&UNK_001081e0,5);
    func_0x00101720(uVar7,uVar12);
    uVar12 = stdout;
    uVar7 = func_0x00101640(0,&UNK_00108220,5);
    func_0x00101720(uVar7,uVar12);
    uVar12 = stdout;
    uVar7 = func_0x00101640(0,&UNK_00108270,5);
    func_0x00101720(uVar7,uVar12);
    uVar12 = stdout;
    uVar7 = func_0x00101640(0,&UNK_00108348,5);
    func_0x00101720(uVar7,uVar12);
    uVar12 = stdout;
    uVar7 = func_0x00101640(0,&UNK_00108378,5);
    func_0x00101720(uVar7,uVar12);
    uVar12 = stdout;
    uVar7 = func_0x00101640(0,&UNK_001083b0,5);
    func_0x00101720(uVar7,uVar12);
    uVar12 = stdout;
    uVar7 = func_0x00101640(0,&UNK_001085b8,5);
    func_0x00101720(uVar7,uVar12);
    uStack200 = 0;
    uStack192 = 0;
    pbStack296 = &UNK_00107fa3;
    apbStack280[4] = &UNK_00107fe4;
    puStack288 = &UNK_00107fa5;
    puStack232 = &UNK_00107fee;
    apbStack280[0] = &UNK_0010801d;
    puStack216 = &UNK_00107ff8;
    apbStack280[1] = &UNK_00107fb5;
    apbStack280[2] = &UNK_00107fcb;
    apbStack280[3] = &UNK_00107fd5;
    puStack240 = &UNK_00107fd5;
    puStack224 = &UNK_00107fd5;
    puStack208 = &UNK_00107fd5;
    ppbVar13 = &pbStack296;
    do {
      ppbVar13 = ppbVar13;
      ppbVar13 = ppbVar13 + 2;
      pbVar18 = *ppbVar13;
      bVar19 = false;
      bVar20 = pbVar18 == (byte *)0x0;
      if (bVar20) break;
      lVar8 = 4;
      pbVar15 = &UNK_00107f9f;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar19 = *pbVar15 < *pbVar18;
        bVar20 = *pbVar15 == *pbVar18;
        pbVar15 = pbVar15 + (ulong)bVar21 * -2 + 1;
        pbVar18 = pbVar18 + (ulong)bVar21 * -2 + 1;
      } while (bVar20);
    } while ((!bVar19 && !bVar20) != bVar19);
    pbVar18 = ppbVar13[3];
    if (pbVar18 == (byte *)0x0) {
      uVar12 = func_0x00101640(0,&UNK_00108002,5);
      func_0x00101800(1,uVar12,&UNK_00108019,&UNK_00108688);
      lVar8 = func_0x001017f0(5,0);
      if ((lVar8 != 0) && (iVar2 = func_0x001015c0(lVar8,&UNK_00108027,3), iVar2 != 0)) {
        pbVar18 = &UNK_00107f9f;
        goto code_r0x00102e50;
      }
      pbVar18 = &UNK_00107f9f;
      puVar14 = &UNK_00107fbf;
      uVar12 = func_0x00101640(0,&UNK_0010802b,5);
      func_0x00101800(1,uVar12,&UNK_00108688,&UNK_00107f9f);
    }
    else {
      uVar12 = func_0x00101640(0,&UNK_00108002,5);
      func_0x00101800(1,uVar12,&UNK_00108019,&UNK_00108688);
      lVar8 = func_0x001017f0(5,0);
      if ((lVar8 != 0) && (iVar2 = func_0x001015c0(lVar8,&UNK_00108027,3), iVar2 != 0)) {
code_r0x00102e50:
        uVar12 = stdout;
        uVar7 = func_0x00101640(0,&UNK_001086b0,5);
        func_0x00101720(uVar7,uVar12);
      }
      uVar12 = func_0x00101640(0,&UNK_0010802b,5);
      func_0x00101800(1,uVar12,&UNK_00108688,&UNK_00107f9f);
      puVar14 = &UNK_00108da1;
      if (pbVar18 == &UNK_00107f9f) {
        puVar14 = &UNK_00107fbf;
      }
    }
    uVar12 = func_0x00101640(0,&UNK_001086f8,5);
    func_0x00101800(1,uVar12,pbVar18,puVar14);
  } while( true );
}

