
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong build_charclass_op(long param_1,ulong ***param_2,undefined8 param_3,ulong **param_4,
                        ulong ***param_5,undefined4 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  ulong **ppuVar3;
  uint **ppuVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  ulong **ppuVar17;
  ulong *puVar18;
  ulong **ppuVar19;
  long *extraout_RDX;
  long extraout_RDX_00;
  ulong **unaff_RBX;
  undefined8 uVar20;
  ulong **ppuVar21;
  ulong **ppuVar22;
  uint *puVar23;
  ulong **ppuVar24;
  char cVar25;
  ulong **ppuVar26;
  ulong uVar27;
  ulong **unaff_R15;
  long in_FS_OFFSET;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  ulong **ppuStack560;
  ulong **ppuStack536;
  uint uStack476;
  ulong *puStack472;
  byte bStack464;
  undefined auStack463 [263];
  long lStack200;
  ulong **ppuStack184;
  long lStack176;
  ulong uStack168;
  ulong **ppuStack160;
  long lStack152;
  ulong **ppuStack144;
  ulong ***pppuStack136;
  undefined4 *puStack128;
  ulong **ppuStack112;
  ulong **ppuStack104;
  undefined uStack96;
  ulong **ppuStack88;
  undefined uStack80;
  ulong uStack64;
  
  uStack168 = (ulong)param_5 & 0xffffffff;
  ppuVar21 = (ulong **)0x1;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppuStack112 = (ulong **)0x0;
  ppuStack144 = (ulong **)&UNK_0010b47b;
  ppuVar9 = param_4;
  pppuStack136 = param_2;
  puStack128 = param_6;
  ppuStack184 = (ulong **)func_0x00101a70(0x20);
  if (ppuStack184 != (ulong **)0x0) {
    ppuVar21 = (ulong **)0x1;
    ppuStack144 = (ulong **)&UNK_0010b496;
    unaff_R15 = (ulong **)func_0x00101a70(0x50);
    if (unaff_R15 == (ulong **)0x0) {
      lVar10 = 0;
      ppuStack144 = (ulong **)&UNK_0010b65b;
      func_0x00101880(ppuStack184);
      *puStack128 = 0xc;
      goto code_r0x0010b5f2;
    }
    lStack152 = 0;
    param_5 = &ppuStack112;
    *(byte *)(unaff_R15 + 4) = *(byte *)(unaff_R15 + 4) & 0xfe | (byte)uStack168 & 1;
    ppuStack160 = (ulong **)&UNK_0010b4d8;
    ppuVar21 = ppuStack184;
    uVar6 = build_charclass_isra_29
                      (pppuStack136,ppuStack184,unaff_R15 + 3,unaff_R15 + 9,param_5,param_3);
    ppuVar9 = ppuStack144;
    if (uVar6 != 0) {
      pppuStack136 = (ulong ***)((ulong)pppuStack136 & 0xffffffff00000000 | (ulong)uVar6);
      lVar10 = 0;
      ppuStack144 = (ulong **)&UNK_0010b67e;
      func_0x00101880(ppuStack184);
      ppuStack144 = (ulong **)&UNK_0010b686;
      free_charset(unaff_R15);
      *puStack128 = pppuStack136._0_4_;
      goto code_r0x0010b5f2;
    }
    cVar25 = *(char *)param_4;
    while (cVar25 != '\0') {
      lVar16 = (long)cVar25;
      lVar10 = lVar16 + 0x3f;
      if (-1 < lVar16) {
        lVar10 = lVar16;
      }
      param_4 = (ulong **)((long)param_4 + 1);
      bVar2 = cVar25 >> 7;
      bVar5 = cVar25 + (bVar2 >> 2);
      cVar25 = *(char *)param_4;
      ppuStack184[lVar10 >> 6] =
           (ulong *)((ulong)ppuStack184[lVar10 >> 6] | 1 << ((bVar5 & 0x3f) - (bVar2 >> 2) & 0x3f));
    }
    if ((byte)uStack168 != 0) {
      ppuVar9 = ppuStack184;
      do {
        *ppuVar9 = (ulong *)~(ulong)*ppuVar9;
        ppuVar9 = ppuVar9 + 1;
      } while (ppuStack184 + 4 != ppuVar9);
    }
    if (1 < *(int *)(param_1 + 0xb4)) {
      lVar10 = *(long *)(param_1 + 0x78);
      lVar16 = 0;
      do {
        *(ulong *)((long)ppuStack184 + lVar16) =
             *(ulong *)((long)ppuStack184 + lVar16) & *(ulong *)(lVar10 + lVar16);
        lVar16 = lVar16 + 8;
      } while (lVar16 != 0x20);
    }
    param_5 = &ppuStack104;
    uStack168 = param_1 + 0x70;
    param_4 = (ulong **)(param_1 + 0x80);
    ppuVar9 = (ulong **)0x0;
    uStack96 = 3;
    ppuStack144 = (ulong **)&UNK_0010b593;
    ppuVar21 = param_4;
    pppuStack136 = param_5;
    ppuStack104 = ppuStack184;
    lVar10 = create_token_tree_isra_16(uStack168,param_4,0);
    ppuVar17 = ppuVar9;
    if (lVar10 != 0) {
      if (*(int *)(param_1 + 0xb4) < 2) {
        ppuStack144 = (ulong **)&UNK_0010b628;
        free_charset(unaff_R15);
        goto code_r0x0010b5f2;
      }
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 2;
      ppuVar17 = (ulong **)0x0;
      uStack96 = 6;
      ppuStack144 = (ulong **)&UNK_0010b5cf;
      ppuVar21 = param_4;
      param_5 = pppuStack136;
      ppuStack104 = unaff_R15;
      ppuVar9 = (ulong **)create_token_tree_isra_16(uStack168,param_4,0);
      if (ppuVar9 != (ulong **)0x0) {
        param_5 = &ppuStack88;
        uStack80 = 10;
        ppuStack144 = (ulong **)&UNK_0010b5ef;
        ppuVar21 = param_4;
        lVar10 = create_token_tree_isra_16(uStack168,param_4,lVar10);
        goto code_r0x0010b5f2;
      }
    }
    ppuStack144 = (ulong **)&UNK_0010b638;
    func_0x00101880(ppuStack184);
    ppuStack144 = (ulong **)&UNK_0010b640;
    free_charset(unaff_R15);
    ppuVar9 = ppuVar17;
    unaff_RBX = ppuStack184;
  }
  ppuStack184 = unaff_RBX;
  lVar10 = 0;
  *puStack128 = 0xc;
code_r0x0010b5f2:
  ppuVar17 = (ulong **)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (ppuVar17 == (ulong **)0x0) {
    return lVar10;
  }
  ppuStack144 = (ulong **)&UNK_0010b69a;
  func_0x00101990();
  uVar6 = 0;
  ppuVar3 = (ulong **)*ppuVar17;
  lStack200 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)((long)ppuVar3 + 0xb4) == 1) {
    uVar6 = (uint)((ulong)ppuVar17[3] >> 0x16) & 1;
  }
  ppuVar19 = ppuVar9;
  ppuVar22 = ppuVar21;
  ppuStack560 = (ulong **)0x0;
  lStack176 = param_1;
  ppuStack160 = param_4;
  lStack152 = lVar10;
  ppuStack144 = unaff_R15;
  if (0 < (long)*ppuVar21) {
    ppuStack560 = (ulong **)0x0;
    ppuVar24 = ppuStack560;
    do {
      ppuStack560 = ppuVar24;
      lVar10 = *(long *)(*extraout_RDX + (long)ppuStack560 * 8);
      ppuVar19 = (ulong **)*ppuVar3;
      ppuVar22 = ppuVar19 + lVar10 * 2;
      bVar5 = *(byte *)(ppuVar22 + 1);
      if (bVar5 == 1) {
        bVar5 = *(byte *)ppuVar22;
        *(undefined *)((long)ppuVar9 + (ulong)bVar5) = 1;
        if (uVar6 != 0) {
          plVar13 = (long *)func_0x00101c60();
          *(undefined *)((long)ppuVar9 + (long)*(int *)(*plVar13 + (ulong)bVar5 * 4)) = 1;
        }
        if (((*(byte *)((long)ppuVar17 + 0x1a) & 0x40) != 0) &&
           (ppuVar22 = ppuVar3, 1 < *(int *)((long)ppuVar3 + 0xb4))) {
          bStack464 = *(byte *)(*ppuVar3 + lVar10 * 2);
          if ((ppuVar3[2] < (ulong *)(lVar10 + 1U) || ppuVar3[2] == (ulong *)(lVar10 + 1U)) ||
             (puVar18 = *ppuVar3 + lVar10 * 2 + 2, (*(uint *)(puVar18 + 1) & 0x2000ff) != 0x200001))
          {
            puVar12 = auStack463;
          }
          else {
            lVar16 = lVar10 * 0x10 + 0x20;
            puVar11 = auStack463;
            do {
              puVar12 = puVar11 + 1;
              *puVar11 = *(undefined *)puVar18;
              if (ppuVar3[2] < puVar12 + (lVar10 - (long)&bStack464) ||
                  ppuVar3[2] == (ulong *)(puVar12 + (lVar10 - (long)&bStack464))) break;
              puVar18 = (ulong *)((long)*ppuVar3 + lVar16);
              lVar16 = lVar16 + 0x10;
              puVar11 = puVar12;
            } while ((*(uint *)(puVar18 + 1) & 0x2000ff) == 0x200001);
          }
          puStack472 = (ulong *)0x0;
          ppuVar19 = &puStack472;
          ppuVar22 = (ulong **)&bStack464;
          puVar11 = (undefined *)rpl_mbrtowc(&uStack476,&bStack464,puVar12 + -(long)&bStack464);
          if (puVar12 + -(long)&bStack464 == puVar11) {
            uVar7 = func_0x00101bd0((ulong)uStack476);
            ppuVar22 = (ulong **)(ulong)uVar7;
            lVar10 = func_0x00101ad0(&bStack464,ppuVar22,&puStack472);
            if (lVar10 != -1) {
              *(undefined *)((long)ppuVar9 + (ulong)bStack464) = 1;
            }
          }
        }
      }
      else {
        if (bVar5 == 3) {
          lVar10 = 0;
          ppuStack536 = (ulong **)0x0;
          ppuVar24 = ppuStack560;
          ppuVar26 = ppuVar9;
          while( true ) {
            uVar27 = 0;
            ppuVar22 = ppuStack536;
            do {
              if ((((ulong)ppuVar24 >> (uVar27 & 0x1f) & 1) != 0) &&
                 (*(undefined *)((long)ppuVar26 + uVar27) = 1, uVar6 != 0)) {
                plVar13 = (long *)func_0x00101c60();
                *(undefined *)((long)ppuVar9 + (long)*(int *)(*plVar13 + (lVar10 + uVar27) * 4)) = 1
                ;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 != 0x40);
            lVar10 = lVar10 + 0x40;
            ppuStack536 = ppuStack536 + 1;
            ppuVar26 = ppuVar26 + 8;
            if (lVar10 == 0x100) break;
            ppuVar19 = (ulong **)*ppuVar3;
          }
        }
        else {
          if (bVar5 != 6) {
            uVar28 = SUB164(_UNK_00115770,0);
            uVar29 = SUB164(_UNK_00115770 >> 0x20,0);
            uVar30 = SUB164(_UNK_00115770 >> 0x40,0);
            uVar31 = SUB164(_UNK_00115770 >> 0x60,0);
            if ((bVar5 & 0xfd) == 5) {
              *(undefined4 *)ppuVar9 = uVar28;
              *(undefined4 *)((long)ppuVar9 + 4) = uVar29;
              *(undefined4 *)(ppuVar9 + 1) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xc) = uVar31;
              *(undefined4 *)(ppuVar9 + 2) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x14) = uVar29;
              *(undefined4 *)(ppuVar9 + 3) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x1c) = uVar31;
              *(undefined4 *)(ppuVar9 + 4) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x24) = uVar29;
              *(undefined4 *)(ppuVar9 + 5) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x2c) = uVar31;
              *(undefined4 *)(ppuVar9 + 6) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x34) = uVar29;
              *(undefined4 *)(ppuVar9 + 7) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x3c) = uVar31;
              *(undefined4 *)(ppuVar9 + 8) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x44) = uVar29;
              *(undefined4 *)(ppuVar9 + 9) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x4c) = uVar31;
              *(undefined4 *)(ppuVar9 + 10) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x54) = uVar29;
              *(undefined4 *)(ppuVar9 + 0xb) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x5c) = uVar31;
              *(undefined4 *)(ppuVar9 + 0xc) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 100) = uVar29;
              *(undefined4 *)(ppuVar9 + 0xd) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x6c) = uVar31;
              *(undefined4 *)(ppuVar9 + 0xe) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x74) = uVar29;
              *(undefined4 *)(ppuVar9 + 0xf) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x7c) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x10) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x84) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x11) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x8c) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x12) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x94) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x13) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x9c) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x14) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xa4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x15) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xac) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x16) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xb4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x17) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xbc) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x18) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xc4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x19) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xcc) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x1a) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xd4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x1b) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xdc) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x1c) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xe4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x1d) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xec) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x1e) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xf4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x1f) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xfc) = uVar31;
              if (bVar5 != 2) break;
            }
            else {
              if (bVar5 != 2) goto code_r0x0010b767;
              *(undefined4 *)ppuVar9 = uVar28;
              *(undefined4 *)((long)ppuVar9 + 4) = uVar29;
              *(undefined4 *)(ppuVar9 + 1) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xc) = uVar31;
              *(undefined4 *)(ppuVar9 + 2) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x14) = uVar29;
              *(undefined4 *)(ppuVar9 + 3) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x1c) = uVar31;
              *(undefined4 *)(ppuVar9 + 4) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x24) = uVar29;
              *(undefined4 *)(ppuVar9 + 5) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x2c) = uVar31;
              *(undefined4 *)(ppuVar9 + 6) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x34) = uVar29;
              *(undefined4 *)(ppuVar9 + 7) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x3c) = uVar31;
              *(undefined4 *)(ppuVar9 + 8) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x44) = uVar29;
              *(undefined4 *)(ppuVar9 + 9) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x4c) = uVar31;
              *(undefined4 *)(ppuVar9 + 10) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x54) = uVar29;
              *(undefined4 *)(ppuVar9 + 0xb) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x5c) = uVar31;
              *(undefined4 *)(ppuVar9 + 0xc) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 100) = uVar29;
              *(undefined4 *)(ppuVar9 + 0xd) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x6c) = uVar31;
              *(undefined4 *)(ppuVar9 + 0xe) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x74) = uVar29;
              *(undefined4 *)(ppuVar9 + 0xf) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x7c) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x10) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x84) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x11) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x8c) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x12) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0x94) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x13) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0x9c) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x14) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xa4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x15) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xac) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x16) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xb4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x17) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xbc) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x18) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xc4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x19) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xcc) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x1a) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xd4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x1b) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xdc) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x1c) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xe4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x1d) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xec) = uVar31;
              *(undefined4 *)(ppuVar9 + 0x1e) = uVar28;
              *(undefined4 *)((long)ppuVar9 + 0xf4) = uVar29;
              *(undefined4 *)(ppuVar9 + 0x1f) = uVar30;
              *(undefined4 *)((long)ppuVar9 + 0xfc) = uVar31;
            }
            *(byte *)(ppuVar17 + 7) = *(byte *)(ppuVar17 + 7) | 1;
            break;
          }
          puVar18 = *ppuVar22;
          if ((*(int *)((long)ppuVar3 + 0xb4) < 2) ||
             (((puVar18[9] == 0 && ((*(byte *)(puVar18 + 4) & 1) == 0)) && (puVar18[8] == 0)))) {
            lVar10 = 0;
            if (0 < (long)puVar18[5]) {
              do {
                while( true ) {
                  puStack472 = (ulong *)0x0;
                  ppuVar22 = (ulong **)(ulong)*(uint *)(*puVar18 + lVar10 * 4);
                  lVar16 = func_0x00101ad0(&bStack464,ppuVar22,&puStack472);
                  if (lVar16 != -1) {
                    uVar27 = (ulong)bStack464;
                    *(undefined *)((long)ppuVar9 + uVar27) = 1;
                    if (uVar6 != 0) {
                      plVar13 = (long *)func_0x00101c60();
                      *(undefined *)((long)ppuVar9 + (long)*(int *)(*plVar13 + uVar27 * 4)) = 1;
                    }
                  }
                  if (((*(byte *)((long)ppuVar17 + 0x1a) & 0x40) != 0) &&
                     (1 < *(int *)((long)ppuVar3 + 0xb4))) break;
code_r0x0010b92f:
                  lVar10 = lVar10 + 1;
                  if ((long)puVar18[5] <= lVar10) goto code_r0x0010b767;
                }
                uVar7 = func_0x00101bd0((ulong)*(uint *)(*puVar18 + lVar10 * 4));
                ppuVar22 = (ulong **)(ulong)uVar7;
                lVar16 = func_0x00101ad0(&bStack464,ppuVar22,&puStack472);
                if (lVar16 == -1) goto code_r0x0010b92f;
                lVar10 = lVar10 + 1;
                *(undefined *)((long)ppuVar9 + (ulong)bStack464) = 1;
              } while (lVar10 < (long)puVar18[5]);
            }
          }
          else {
            uStack476 = uStack476 & 0xffffff00;
            do {
              puStack472 = (ulong *)0x0;
              ppuVar19 = &puStack472;
              ppuVar22 = (ulong **)&uStack476;
              lVar10 = rpl_mbrtowc(0,&uStack476,1);
              if (lVar10 == -2) {
                *(undefined *)((long)ppuVar9 + (ulong)(byte)uStack476) = 1;
              }
              uStack476 = uStack476 & 0xffffff00 | (uint)(byte)((byte)uStack476 + 1);
            } while ((byte)((byte)uStack476 + 1) != 0);
          }
        }
      }
code_r0x0010b767:
      ppuVar24 = (ulong **)((long)ppuStack560 + 1);
      ppuStack560 = ppuVar21;
    } while ((long)ppuVar24 < (long)*ppuVar21);
  }
  if (lStack200 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x00101990();
  ppuStack560 = ppuStack560 + extraout_RDX_00 * 2;
  cVar25 = *(char *)(ppuStack560 + 1);
  if (cVar25 == '\a') {
    pbVar1 = (byte *)((long)ppuVar19[1] + (long)param_5);
    bVar5 = *pbVar1;
    if ((0xc1 < bVar5) && ((long)param_5 + 1 < (long)ppuVar19[0xb])) {
      bVar2 = *(byte *)((long)ppuVar19[1] + 1U + (long)param_5);
      if (bVar5 < 0xe0) {
        if ((byte)(bVar2 + 0x80) < 0x40) {
          return 2;
        }
      }
      else {
        if (bVar5 < 0xf0) {
          if ((bVar5 == 0xe0) && (bVar2 < 0xa0)) {
            return 0;
          }
          uVar20 = 3;
        }
        else {
          if (bVar5 < 0xf8) {
            if ((bVar5 == 0xf0) && (bVar2 < 0x90)) {
              return 0;
            }
            uVar20 = 4;
          }
          else {
            if (bVar5 < 0xfc) {
              if ((bVar5 == 0xf8) && (bVar2 < 0x88)) {
                return 0;
              }
              uVar20 = 5;
            }
            else {
              if (0xfd < bVar5) {
                return 0;
              }
              if ((bVar5 == 0xfc) && (bVar2 < 0x84)) {
                return 0;
              }
              uVar20 = 6;
            }
          }
        }
        if ((long)param_5 + (long)(int)uVar20 <= (long)ppuVar19[0xb]) {
          lVar10 = 1;
          while ((byte)(pbVar1[lVar10] + 0x80) < 0x40) {
            lVar10 = lVar10 + 1;
            if ((long)(int)uVar20 <= lVar10) {
              return uVar20;
            }
          }
        }
      }
    }
  }
  else {
    if (*(int *)(ppuVar19 + 0x12) != 1) {
      uVar6 = re_string_char_size_at_part_0(ppuVar19,param_5);
      uVar27 = (ulong)uVar6;
      if (cVar25 == '\x05') {
        if ((int)uVar6 < 2) {
          return 0;
        }
        if ((((ulong)*ppuVar22 & 0x40) == 0) &&
           (*(char *)((long)ppuVar19[1] + (long)param_5) == '\n')) {
          return 0;
        }
        if (((ulong)*ppuVar22 & 0x80) == 0) {
          return uVar27;
        }
        bVar5 = *(byte *)((long)ppuVar19[1] + (long)param_5);
      }
      else {
        if (cVar25 != '\x06') {
          return 0;
        }
        if ((int)uVar6 < 2) {
          return 0;
        }
        ppuVar4 = (uint **)*ppuStack560;
        puVar23 = ppuVar4[8];
        puVar15 = ppuVar4[5];
        if (((puVar23 != (uint *)0x0) || (ppuVar4[9] != (uint *)0x0)) || (puVar15 != (uint *)0x0)) {
          uVar6 = *(uint *)((long)ppuVar19[2] + (long)param_5 * 4);
          if (0 < (long)puVar15) {
            if (uVar6 != **ppuVar4) {
              puVar14 = (uint *)0x0;
              do {
                puVar14 = (uint *)((long)puVar14 + 1);
                if (puVar14 == puVar15) goto code_r0x0010bc77;
              } while (uVar6 != (*ppuVar4)[(long)puVar14]);
            }
code_r0x0010bcb2:
            if ((*(byte *)(ppuVar4 + 4) & 1) != 0) {
              return 0;
            }
            return uVar27;
          }
code_r0x0010bc77:
          if (0 < (long)ppuVar4[9]) {
            lVar10 = 0;
            do {
              iVar8 = func_0x00101930((ulong)uVar6,*(undefined8 *)(ppuVar4[3] + lVar10 * 2));
              if (iVar8 != 0) goto code_r0x0010bcb2;
              lVar10 = lVar10 + 1;
            } while (lVar10 < (long)ppuVar4[9]);
            puVar23 = ppuVar4[8];
          }
          if (0 < (long)puVar23) {
            puVar15 = (uint *)0x0;
            do {
              if (((int)ppuVar4[1][(long)puVar15] <= (int)uVar6) &&
                 ((int)uVar6 <= (int)ppuVar4[2][(long)puVar15])) goto code_r0x0010bcb2;
              puVar15 = (uint *)((long)puVar15 + 1);
            } while (puVar15 != puVar23);
          }
        }
        bVar5 = *(byte *)(ppuVar4 + 4) & 1;
      }
      if (bVar5 != 0) {
        return uVar27;
      }
    }
  }
  return 0;
}

