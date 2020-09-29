
/* WARNING: Could not reconcile some variable overlaps */

undefined8 seq_fast(char *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 extraout_RDX;
  byte **ppbVar12;
  undefined *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  byte *pbStack288;
  undefined *puStack280;
  byte *apbStack272 [5];
  undefined *puStack232;
  undefined *puStack224;
  undefined *puStack216;
  undefined *puStack208;
  undefined *puStack200;
  undefined8 uStack192;
  undefined8 uStack184;
  undefined8 uStack168;
  undefined *puStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined *puStack128;
  undefined *puStack120;
  undefined *puStack112;
  long lStack104;
  undefined *puStack96;
  undefined *puStack88;
  undefined *puStack80;
  undefined8 uStack72;
  long lStack64;
  
  bVar19 = 0;
  lVar7 = 4;
  bVar17 = &stack0xffffffffffffffd0 < (undefined *)0x48;
  bVar18 = (undefined *)register0x00000020 == (undefined *)0x78;
  pbVar15 = param_2;
  pbVar14 = &UNK_00107f9b;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    bVar17 = *pbVar15 < *pbVar14;
    bVar18 = *pbVar15 == *pbVar14;
    pbVar15 = pbVar15 + 1;
    pbVar14 = pbVar14 + 1;
  } while (bVar18);
  puStack112 = (undefined *)
               ((ulong)puStack112 & 0xffffffff00000000 |
               (ulong)(uint)(int)(char)((!bVar17 && !bVar18) - bVar17));
  pcVar16 = param_1;
  if (*param_1 == '0') {
    do {
      pcVar5 = pcVar16;
      pcVar16 = pcVar5 + 1;
    } while (pcVar5[1] == '0');
    if ((pcVar5[1] != '\0') || (bVar17 = param_1 == pcVar16, param_1 = pcVar5, bVar17)) {
      param_1 = pcVar16;
    }
  }
  pbVar15 = param_2;
  if (*param_2 == 0x30) {
    do {
      pbVar14 = pbVar15;
      pbVar15 = pbVar14 + 1;
    } while (pbVar14[1] == 0x30);
    if ((param_2 == pbVar15) || (param_2 = pbVar14, pbVar14[1] != 0)) {
      param_2 = pbVar15;
    }
  }
  puStack128 = &UNK_0010276d;
  puVar13 = (undefined *)func_0x00101660(param_1);
  puVar3 = puVar13 + 1;
  puStack152 = (undefined *)0x1f;
  if ((undefined *)0x1e < puVar3) {
    puStack152 = puVar3;
  }
  puStack120 = puVar13;
  if ((int)puStack112 == 0) {
    puStack96 = puStack152 + 1;
    puStack136 = (undefined *)0x0;
    puStack128 = &UNK_00102a42;
    lStack104 = xmalloc(puStack96);
    puStack128 = &UNK_00102a5c;
    pcVar16 = (char *)func_0x00101760(puStack152 + (lStack104 - (long)puStack120),param_1,puVar3);
    lStack64 = 0;
    uStack72 = 0;
  }
  else {
    uVar8 = 0xffffffffffffffff;
    pbVar15 = param_2;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar1 = *pbVar15;
      pbVar15 = pbVar15 + (ulong)bVar19 * -2 + 1;
    } while (bVar1 != 0);
    puStack88 = (undefined *)~uVar8;
    puStack136 = puStack88 + -1;
    if (puStack152 < puStack136) {
      puStack152 = puStack136;
    }
    puStack96 = puStack152 + 1;
    puStack128 = &UNK_001027bb;
    lStack104 = xmalloc();
    puStack128 = &UNK_001027d8;
    pcVar16 = (char *)func_0x00101760(puStack152 + (lStack104 - (long)puStack120),param_1,puVar3);
    puStack128 = &UNK_001027e8;
    lStack64 = xmalloc(puStack96);
    puStack128 = &UNK_00102806;
    uStack72 = func_0x00101760(puStack152 + (lStack64 - (long)puStack136),param_2,puStack88,
                               puStack88);
    if (puStack136 <= puStack120) {
      if (puStack136 < puStack120) {
        uVar11 = 0;
      }
      else {
        puStack128 = &UNK_00102a87;
        iVar2 = func_0x00101740(pcVar16,uStack72);
        if (iVar2 < 1) goto code_r0x00102815;
        uVar11 = 0;
      }
code_r0x00102a09:
      puStack128 = &UNK_00102a13;
      func_0x00101590(lStack104);
      puStack128 = &UNK_00102a1d;
      func_0x00101590(lStack64);
      return uVar11;
    }
  }
code_r0x00102815:
  puVar3 = (undefined *)0x2000;
  if ((undefined *)0x1fff < (undefined *)((long)puStack96 * 2)) {
    puVar3 = (undefined *)((long)puStack96 * 2);
  }
  puStack128 = &UNK_0010283d;
  puStack80 = puVar3;
  puStack144 = (undefined *)xmalloc(puVar3);
  puVar3 = puStack144 + (long)puVar3;
  puStack128 = &UNK_00102854;
  puVar10 = (undefined *)func_0x00101810(puStack144,pcVar16,puStack120);
  puStack120 = (undefined *)((ulong)puStack120 & 0xffffffffffffff00 | (ulong)((int)puStack112 == 0))
  ;
  do {
    do {
      if ((puStack136 <= puVar13) && ((char)puStack120 == '\0')) {
        if (puVar13 <= puStack136) {
          puStack128 = &UNK_001029cf;
          puStack112 = puVar10;
          iVar2 = func_0x00101740(pcVar16,uStack72);
          puVar10 = puStack112;
          if (iVar2 < 0) goto code_r0x00102877;
        }
        *puVar10 = 10;
        puStack128 = &UNK_001029fa;
        puVar9 = puStack144;
        lVar7 = func_0x001017d0(puStack144,puVar10 + (1 - (long)puStack144),1,stdout);
        if (lVar7 == 1) {
          uVar11 = 1;
          goto code_r0x00102a09;
        }
        goto code_r0x00102a96;
      }
code_r0x00102877:
      *puVar10 = *separator;
      pcVar5 = pcVar16 + (long)(puVar13 + -1);
      do {
        if (*pcVar5 < '9') {
          *pcVar5 = *pcVar5 + '\x01';
          goto joined_r0x001028ad;
        }
        pcVar4 = pcVar5 + -1;
        *pcVar5 = '0';
        pcVar5 = pcVar4;
      } while (pcVar16 <= pcVar4);
      puVar13 = puVar13 + 1;
      pcVar16[-1] = '1';
      pcVar16 = pcVar16 + -1;
joined_r0x001028ad:
      puVar9 = puVar10 + 1;
      if (puStack152 == puVar13) {
        puStack96 = (undefined *)((long)puStack152 * 2);
        puStack112 = puStack96 + 1;
        puStack128 = &UNK_00102946;
        puStack88 = puVar10 + 1;
        lStack104 = xrealloc(lStack104,puStack112);
        puStack128 = &UNK_0010295b;
        pcVar16 = (char *)func_0x00101820(puStack152 + lStack104,lStack104,puStack152 + 1);
        puStack152 = puStack96;
        puVar10 = (undefined *)((long)puStack112 * 2);
        puVar9 = puStack88;
        if (puStack80 < puVar10) {
          puStack112 = puStack88 + -(long)puStack144;
          puStack128 = &UNK_00102996;
          puStack96 = puVar10;
          puStack144 = (undefined *)xrealloc(puStack144,puVar10);
          puStack80 = puStack96;
          puVar3 = puStack144 + (long)puStack96;
          puVar9 = puStack112 + (long)puStack144;
        }
      }
      puStack128 = &UNK_001028bd;
      puVar10 = (undefined *)func_0x00101810(puVar9,pcVar16,puVar13,puVar9);
    } while (puVar10 <= puVar3 + ~(ulong)puVar13);
    puStack128 = &UNK_001028e8;
    puVar9 = puStack144;
    lVar7 = func_0x001017d0(puStack144,puVar10 + -(long)puStack144,1,stdout);
    puVar10 = puStack144;
  } while (lVar7 == 1);
code_r0x00102a96:
  puStack128 = &UNK_00102a9b;
  io_error();
  puVar13 = program_name;
  uVar11 = 5;
  uStack168 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack128 = puVar3;
  if ((int)puVar9 == 0) goto code_r0x00102afd;
  uVar11 = func_0x00101640(0,&UNK_00108150,5);
  func_0x00101890(stderr,1,uVar11,puVar13);
  do {
    func_0x00101870((ulong)puVar9 & 0xffffffff);
    uVar11 = extraout_RDX;
code_r0x00102afd:
    uVar11 = func_0x00101640(0,&UNK_00108178,uVar11);
    func_0x00101800(1,uVar11,puVar13,puVar13,puVar13);
    uVar11 = stdout;
    uVar6 = func_0x00101640(0,&UNK_001081e0,5);
    func_0x00101720(uVar6,uVar11);
    uVar11 = stdout;
    uVar6 = func_0x00101640(0,&UNK_00108220,5);
    func_0x00101720(uVar6,uVar11);
    uVar11 = stdout;
    uVar6 = func_0x00101640(0,&UNK_00108270,5);
    func_0x00101720(uVar6,uVar11);
    uVar11 = stdout;
    uVar6 = func_0x00101640(0,&UNK_00108348,5);
    func_0x00101720(uVar6,uVar11);
    uVar11 = stdout;
    uVar6 = func_0x00101640(0,&UNK_00108378,5);
    func_0x00101720(uVar6,uVar11);
    uVar11 = stdout;
    uVar6 = func_0x00101640(0,&UNK_001083b0,5);
    func_0x00101720(uVar6,uVar11);
    uVar11 = stdout;
    uVar6 = func_0x00101640(0,&UNK_001085b8,5);
    func_0x00101720(uVar6,uVar11);
    uStack192 = 0;
    uStack184 = 0;
    pbStack288 = &UNK_00107fa3;
    apbStack272[4] = &UNK_00107fe4;
    puStack280 = &UNK_00107fa5;
    puStack224 = &UNK_00107fee;
    apbStack272[0] = &UNK_0010801d;
    puStack208 = &UNK_00107ff8;
    apbStack272[1] = &UNK_00107fb5;
    apbStack272[2] = &UNK_00107fcb;
    apbStack272[3] = &UNK_00107fd5;
    puStack232 = &UNK_00107fd5;
    puStack216 = &UNK_00107fd5;
    puStack200 = &UNK_00107fd5;
    ppbVar12 = &pbStack288;
    do {
      ppbVar12 = ppbVar12;
      ppbVar12 = ppbVar12 + 2;
      pbVar15 = *ppbVar12;
      bVar17 = false;
      bVar18 = pbVar15 == (byte *)0x0;
      if (bVar18) break;
      lVar7 = 4;
      pbVar14 = &UNK_00107f9f;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar17 = *pbVar14 < *pbVar15;
        bVar18 = *pbVar14 == *pbVar15;
        pbVar14 = pbVar14 + (ulong)bVar19 * -2 + 1;
        pbVar15 = pbVar15 + (ulong)bVar19 * -2 + 1;
      } while (bVar18);
    } while ((!bVar17 && !bVar18) != bVar17);
    pbVar15 = ppbVar12[3];
    if (pbVar15 == (byte *)0x0) {
      uVar11 = func_0x00101640(0,&UNK_00108002,5);
      func_0x00101800(1,uVar11,&UNK_00108019,&UNK_00108688);
      lVar7 = func_0x001017f0(5,0);
      if ((lVar7 != 0) && (iVar2 = func_0x001015c0(lVar7,&UNK_00108027,3), iVar2 != 0)) {
        pbVar15 = &UNK_00107f9f;
        goto code_r0x00102e50;
      }
      pbVar15 = &UNK_00107f9f;
      puVar13 = &UNK_00107fbf;
      uVar11 = func_0x00101640(0,&UNK_0010802b,5);
      func_0x00101800(1,uVar11,&UNK_00108688,&UNK_00107f9f);
    }
    else {
      uVar11 = func_0x00101640(0,&UNK_00108002,5);
      func_0x00101800(1,uVar11,&UNK_00108019,&UNK_00108688);
      lVar7 = func_0x001017f0(5,0);
      if ((lVar7 != 0) && (iVar2 = func_0x001015c0(lVar7,&UNK_00108027,3), iVar2 != 0)) {
code_r0x00102e50:
        uVar11 = stdout;
        uVar6 = func_0x00101640(0,&UNK_001086b0,5);
        func_0x00101720(uVar6,uVar11);
      }
      uVar11 = func_0x00101640(0,&UNK_0010802b,5);
      func_0x00101800(1,uVar11,&UNK_00108688,&UNK_00107f9f);
      puVar13 = &UNK_00108da1;
      if (pbVar15 == &UNK_00107f9f) {
        puVar13 = &UNK_00107fbf;
      }
    }
    uVar11 = func_0x00101640(0,&UNK_001086f8,5);
    func_0x00101800(1,uVar11,pbVar15,puVar13);
  } while( true );
}

