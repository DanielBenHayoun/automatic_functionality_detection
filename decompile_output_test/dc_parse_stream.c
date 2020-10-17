
ulong dc_parse_stream(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_RDX;
  byte **ppbVar8;
  byte *unaff_RBX;
  byte *pbVar9;
  undefined *puVar10;
  ulong uVar11;
  byte *pbVar12;
  long *unaff_R13;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  byte bVar15;
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
  byte *pbStack152;
  long lStack144;
  undefined1 *puStack136;
  long *plStack128;
  int iStack120;
  byte bStack113;
  long lStack112;
  char *pcStack104;
  byte *pbStack96;
  byte *pbStack80;
  undefined8 uStack72;
  ulong uStack64;
  
  bVar15 = 0;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  pbStack80 = (byte *)0x0;
  uStack72 = 0;
  plStack128 = (long *)&UNK_001027e4;
  lStack112 = param_2;
  pcVar4 = (char *)func_0x00101d00(&UNK_001061b0);
  if (pcVar4 == (char *)0x0) {
    pcStack104 = "none";
  }
  else {
    pcStack104 = "none";
    if (*pcVar4 != '\0') {
      pcStack104 = pcVar4;
    }
  }
  puStack136 = G_line;
  iStack120 = 3;
  bStack113 = 1;
  lStack144 = 0;
code_r0x00102820:
  lStack144 = lStack144 + 1;
  pbVar12 = puStack136;
  if (param_1 == 0) goto code_r0x001029cd;
code_r0x0010282d:
  plStack128 = (long *)&UNK_00102844;
  lVar5 = func_0x00101eb0(&pbStack80,&uStack72,10,param_1);
  pbVar12 = pbStack80;
  if (0 < lVar5) {
    do {
      plStack128 = (long *)&UNK_00102857;
      unaff_R13 = (long *)func_0x00101ff0();
      while (bVar1 = *pbVar12, (*(byte *)(*unaff_R13 + 1 + (ulong)bVar1 * 2) & 0x20) != 0) {
        pbVar12 = pbVar12 + 1;
      }
      if ((bVar1 == 0) || (pbVar9 = pbVar12, bVar1 == 0x23)) goto code_r0x00102820;
      do {
        unaff_RBX = pbVar9 + 1;
        pbVar9 = unaff_RBX;
      } while ((*unaff_RBX != 0 &
               ((byte)((ushort)*(undefined2 *)(*unaff_R13 + (ulong)*unaff_RBX * 2) >> 0xd) ^ 1)) !=
               0);
      plStack128 = (long *)&UNK_001028ac;
      pcVar4 = (char *)xstrndup(pbVar12,unaff_RBX + -(long)pbVar12);
      if (*unaff_RBX == 0) {
code_r0x00102a20:
        if (pcVar4 != (char *)0x0) {
code_r0x00102a29:
          plStack128 = (long *)&UNK_00102a3a;
          unaff_RBX = (byte *)quotearg_n_style_colon(0,3,lStack112);
          plStack128 = (long *)&UNK_00102a50;
          uVar6 = func_0x00101da0(0,&UNK_00106478,5);
          plStack128 = (long *)&UNK_00102a64;
          func_0x00101f60(0,0,uVar6,unaff_RBX,lStack144);
          plStack128 = (long *)&UNK_00102a6c;
          func_0x00102000(pcVar4);
          bStack113 = 0;
        }
        goto code_r0x00102820;
      }
      lVar5 = *unaff_R13;
      do {
        unaff_RBX = unaff_RBX + 1;
        bVar1 = *unaff_RBX;
      } while ((*(byte *)(lVar5 + 1 + (ulong)bVar1 * 2) & 0x20) != 0);
      if ((bVar1 == 0) || (pbVar12 = unaff_RBX, bVar1 == 0x23)) goto code_r0x00102a20;
      do {
        pbVar9 = pbVar12;
        pbVar12 = pbVar9 + 1;
      } while (pbVar9[1] != 0 && pbVar9[1] != 0x23);
      bVar1 = *(byte *)(lVar5 + 1 + (ulong)*pbVar9 * 2);
      while ((bVar1 & 0x20) != 0) {
        bVar1 = *(byte *)(lVar5 + 1 + (ulong)pbVar9[-1] * 2);
        pbVar12 = pbVar9;
        pbVar9 = pbVar9 + -1;
      }
      plStack128 = (long *)&UNK_0010291d;
      unaff_RBX = (byte *)xstrndup(unaff_RBX,pbVar12 + -(long)unaff_RBX);
      if (pcVar4 == (char *)0x0) goto code_r0x00102820;
      if (unaff_RBX == (byte *)0x0) goto code_r0x00102a29;
      plStack128 = (long *)&UNK_00102941;
      iVar3 = c_strcasecmp(pcVar4,&UNK_001061b0);
      if (iVar3 == 0) {
        plStack128 = (long *)&UNK_00102a8f;
        iVar3 = func_0x00101e30(unaff_RBX,pcStack104,0);
        if ((iVar3 == 0) || (bVar13 = iStack120 == 2, iStack120 = 0, bVar13)) {
          iStack120 = 2;
        }
        goto code_r0x001029b0;
      }
      if (iStack120 == 2) {
        cVar2 = *pcVar4;
        iStack120 = 1;
      }
      else {
        if (iStack120 == 0) goto code_r0x001029b0;
        cVar2 = *pcVar4;
      }
      if (cVar2 == '.') {
        if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
          plStack128 = (long *)&UNK_00102c27;
          _obstack_newchunk(lsc_obstack,1);
        }
        puVar10 = lsc_obstack._24_8_ + 1;
        *lsc_obstack._24_8_ = 0x2a;
        lsc_obstack._24_8_ = puVar10;
        plStack128 = (long *)&UNK_00102aed;
        append_quoted(pcVar4);
        if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
          plStack128 = (long *)&UNK_00102c0a;
          _obstack_newchunk(lsc_obstack,1);
        }
        puVar10 = lsc_obstack._24_8_ + 1;
        *lsc_obstack._24_8_ = 0x3d;
        lsc_obstack._24_8_ = puVar10;
        plStack128 = (long *)&UNK_00102b17;
        append_quoted(unaff_RBX);
        if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
code_r0x00102bd5:
          plStack128 = (long *)&UNK_00102be6;
          _obstack_newchunk(lsc_obstack,1);
        }
code_r0x00102b2b:
        puVar10 = lsc_obstack._24_8_ + 1;
        *lsc_obstack._24_8_ = 0x3a;
        lsc_obstack._24_8_ = puVar10;
        plStack128 = (long *)&UNK_00102b41;
        func_0x00102000(pcVar4);
        plStack128 = (long *)&UNK_00102b49;
        func_0x00102000(unaff_RBX);
      }
      else {
        if (cVar2 == '*') {
          plStack128 = (long *)&UNK_00102b88;
          append_quoted(pcVar4);
          if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
code_r0x00102cf8:
            plStack128 = (long *)&UNK_00102d09;
            _obstack_newchunk(lsc_obstack,1);
          }
code_r0x00102b9c:
          puVar10 = lsc_obstack._24_8_ + 1;
          *lsc_obstack._24_8_ = 0x3d;
          lsc_obstack._24_8_ = puVar10;
          plStack128 = (long *)&UNK_00102bb9;
          append_quoted(unaff_RBX);
          if (lsc_obstack._32_8_ == lsc_obstack._24_8_) goto code_r0x00102bd5;
          goto code_r0x00102b2b;
        }
        plStack128 = (long *)&UNK_0010297c;
        iVar3 = c_strcasecmp(pcVar4,&UNK_001061b5);
        if (iVar3 == 0) {
code_r0x001029b0:
          plStack128 = (long *)&UNK_001029b8;
          func_0x00102000(pcVar4);
          plStack128 = (long *)&UNK_001029c0;
          func_0x00102000(unaff_RBX);
        }
        else {
          plStack128 = (long *)&UNK_0010298f;
          iVar3 = c_strcasecmp(pcVar4,&UNK_001061bd);
          if (iVar3 == 0) goto code_r0x001029b0;
          plStack128 = (long *)&UNK_001029a2;
          iVar3 = c_strcasecmp(pcVar4,&UNK_001061c3);
          if (iVar3 == 0) goto code_r0x001029b0;
          uVar11 = 0;
          puVar10 = &UNK_001061a9;
          pbStack96 = unaff_RBX;
          do {
            unaff_R13 = (long *)(uVar11 & 0xffffffff);
            plStack128 = (long *)&UNK_00102c73;
            iVar3 = c_strcasecmp(pcVar4,puVar10);
            unaff_RBX = pbStack96;
            if (iVar3 == 0) {
              if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
                plStack128 = (long *)&UNK_00102da3;
                _obstack_newchunk(lsc_obstack,1);
              }
              unaff_R13 = *(long **)(ls_codes + (long)(int)unaff_R13 * 8);
              puVar10 = lsc_obstack._24_8_ + 1;
              *lsc_obstack._24_8_ = *(undefined *)unaff_R13;
              lsc_obstack._24_8_ = puVar10;
              if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
                plStack128 = (long *)&UNK_00102db9;
                _obstack_newchunk(lsc_obstack,1);
              }
              puVar10 = lsc_obstack._24_8_ + 1;
              *lsc_obstack._24_8_ = *(undefined *)((long)unaff_R13 + 1);
              lsc_obstack._24_8_ = puVar10;
              if (lsc_obstack._32_8_ != lsc_obstack._24_8_) goto code_r0x00102b9c;
              goto code_r0x00102cf8;
            }
            uVar11 = uVar11 + 1;
            puVar10 = *(undefined **)(slack_codes + uVar11 * 8);
          } while (puVar10 != (undefined *)0x0);
          if (iStack120 == 3) goto code_r0x001029b0;
          if (lStack112 == 0) {
            plStack128 = (long *)&UNK_00102d8d;
            unaff_R13 = (long *)func_0x00101da0(0,&UNK_001061cc,5);
          }
          else {
            plStack128 = (long *)&UNK_00102d33;
            unaff_R13 = (long *)quotearg_n_style_colon(0,3);
          }
          plStack128 = (long *)&UNK_00102d49;
          uVar6 = func_0x00101da0(0,&UNK_001064a8,5);
          plStack128 = (long *)&UNK_00102d60;
          func_0x00101f60(0,0,uVar6,unaff_R13,lStack144,pcVar4);
          bStack113 = 0;
          plStack128 = (long *)&UNK_00102d6d;
          func_0x00102000(pcVar4);
          plStack128 = (long *)&UNK_00102d75;
          func_0x00102000(unaff_RBX);
        }
      }
      lStack144 = lStack144 + 1;
      pbVar12 = puStack136;
      if (param_1 != 0) goto code_r0x0010282d;
code_r0x001029cd:
      puStack136 = pbVar12;
      if (pbVar12 == &UNK_001079a4) goto code_r0x00102b58;
      plStack128 = (long *)&UNK_001029e8;
      lVar5 = func_0x00101dc0(pbVar12);
      puStack136 = pbVar12 + lVar5 + 1;
    } while( true );
  }
  plStack128 = (long *)&UNK_00102b58;
  func_0x00102000(pbStack80);
code_r0x00102b58:
  uVar11 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uVar11 == 0) {
    return (ulong)bStack113;
  }
  plStack128 = (long *)&UNK_00102dc3;
  func_0x00101dd0();
  puVar10 = program_name;
  uVar6 = 5;
  uStack168 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pbStack152 = unaff_RBX;
  plStack128 = unaff_R13;
  if ((int)uVar11 == 0) goto code_r0x00102e2d;
  uVar6 = func_0x00101da0(0,&UNK_001064c8,5);
  func_0x00101fc0(stderr,1,uVar6,puVar10);
  do {
    func_0x00101fa0(uVar11 & 0xffffffff);
    uVar6 = extraout_RDX;
code_r0x00102e2d:
    uVar6 = func_0x00101da0(0,&UNK_001061e1,uVar6);
    func_0x00101f50(1,uVar6,puVar10);
    uVar6 = stdout;
    uVar7 = func_0x00101da0(0,&UNK_001064f0,5);
    func_0x00101e90(uVar7,uVar6);
    uVar6 = stdout;
    uVar7 = func_0x00101da0(0,&UNK_00106608,5);
    func_0x00101e90(uVar7,uVar6);
    uVar6 = stdout;
    uVar7 = func_0x00101da0(0,&UNK_00106638,5);
    func_0x00101e90(uVar7,uVar6);
    uVar6 = stdout;
    uVar7 = func_0x00101da0(0,&UNK_00106670,5);
    func_0x00101e90(uVar7,uVar6);
    uStack192 = 0;
    uStack184 = 0;
    pbStack288 = &UNK_001061ff;
    apbStack272[4] = &UNK_00106240;
    puStack280 = &UNK_00106201;
    puStack224 = &UNK_0010624a;
    apbStack272[0] = &UNK_00106279;
    puStack208 = &UNK_00106254;
    apbStack272[1] = &UNK_00106211;
    apbStack272[2] = &UNK_00106227;
    apbStack272[3] = &UNK_00106231;
    puStack232 = &UNK_00106231;
    puStack216 = &UNK_00106231;
    puStack200 = &UNK_00106231;
    ppbVar8 = &pbStack288;
    do {
      ppbVar8 = ppbVar8;
      ppbVar8 = ppbVar8 + 2;
      pbVar12 = *ppbVar8;
      bVar13 = false;
      bVar14 = pbVar12 == (byte *)0x0;
      if (bVar14) break;
      lVar5 = 10;
      pbVar9 = &UNK_001061d7;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar13 = *pbVar9 < *pbVar12;
        bVar14 = *pbVar9 == *pbVar12;
        pbVar9 = pbVar9 + (ulong)bVar15 * -2 + 1;
        pbVar12 = pbVar12 + (ulong)bVar15 * -2 + 1;
      } while (bVar14);
    } while ((!bVar13 && !bVar14) != bVar13);
    pbVar12 = ppbVar8[3];
    if (pbVar12 == (byte *)0x0) {
      uVar6 = func_0x00101da0(0,&UNK_0010625e,5);
      func_0x00101f50(1,uVar6,&UNK_00106275,&UNK_00106750);
      lVar5 = func_0x00101f40(5,0);
      if ((lVar5 != 0) && (iVar3 = func_0x00101d30(lVar5,&UNK_00106283,3), iVar3 != 0)) {
        pbVar12 = &UNK_001061d7;
        goto code_r0x00103110;
      }
      pbVar12 = &UNK_001061d7;
      puVar10 = &UNK_0010621b;
      uVar6 = func_0x00101da0(0,&UNK_00106287,5);
      func_0x00101f50(1,uVar6,&UNK_00106750,&UNK_001061d7);
    }
    else {
      uVar6 = func_0x00101da0(0,&UNK_0010625e,5);
      func_0x00101f50(1,uVar6,&UNK_00106275,&UNK_00106750);
      lVar5 = func_0x00101f40(5,0);
      if ((lVar5 != 0) && (iVar3 = func_0x00101d30(lVar5,&UNK_00106283,3), iVar3 != 0)) {
code_r0x00103110:
        uVar6 = stdout;
        uVar7 = func_0x00101da0(0,&UNK_00106778,5);
        func_0x00101e90(uVar7,uVar6);
      }
      uVar6 = func_0x00101da0(0,&UNK_00106287,5);
      func_0x00101f50(1,uVar6,&UNK_00106750,&UNK_001061d7);
      puVar10 = &UNK_001062c5;
      if (pbVar12 == &UNK_001061d7) {
        puVar10 = &UNK_0010621b;
      }
    }
    uVar6 = func_0x00101da0(0,&UNK_001067c0,5);
    func_0x00101f50(1,uVar6,pbVar12,puVar10);
  } while( true );
}

