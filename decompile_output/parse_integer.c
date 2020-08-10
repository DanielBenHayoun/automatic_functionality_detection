
/* WARNING: Type propagation algorithm not settling */

undefined8 ******* parse_integer(undefined8 *******param_1,undefined8 *******param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *******pppppppuVar3;
  undefined4 *puVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong *puVar8;
  uint uVar9;
  undefined8 *******pppppppuVar10;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  uint uVar11;
  ulong uVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 unaff_R13;
  ulong uVar19;
  char cVar20;
  long in_FS_OFFSET;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  undefined auStack424 [8];
  long lStack416;
  long lStack384;
  undefined8 uStack376;
  long lStack368;
  long lStack336;
  long lStack320;
  ulong uStack312;
  undefined8 *******pppppppuStack304;
  undefined8 *******pppppppuStack296;
  undefined8 uStack288;
  undefined auStack272 [24];
  uint uStack248;
  long lStack120;
  ulong uStack104;
  undefined8 *******pppppppuStack96;
  undefined8 *******pppppppuStack88;
  undefined *puStack80;
  undefined8 *******pppppppuStack64;
  undefined8 *******pppppppuStack56;
  ulong uStack48;
  
  bVar23 = 0;
  pppppppuVar10 = &pppppppuStack64;
  pppppppuVar14 = &pppppppuStack56;
  uStack48 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack80 = &UNK_0010428b;
  pppppppuVar18 = param_1;
  iVar1 = xstrtoumax(param_1,pppppppuVar14,10,pppppppuVar10,&UNK_0010c673);
  if (iVar1 == 2) {
    pppppppuVar18 = pppppppuStack56;
    if (*(char *)pppppppuStack56 != 'x') goto code_r0x001042ca;
    pppppppuVar18 = (undefined8 *******)((long)pppppppuStack56 + 1);
    puStack80 = &UNK_001042e4;
    pppppppuVar14 = param_2;
    uVar12 = parse_integer();
    pppppppuVar3 = pppppppuStack64;
    if ((uVar12 == 0) ||
       (pppppppuVar3 = (undefined8 *******)(((long)pppppppuStack64 * uVar12) / uVar12),
       pppppppuVar10 = pppppppuStack64, pppppppuStack64 == pppppppuVar3)) {
      bVar21 = false;
      bVar22 = pppppppuVar3 == (undefined8 *******)0x0;
      if (bVar22) {
        param_2 = (undefined8 *******)&UNK_0010c682;
        pppppppuVar10 = (undefined8 *******)0x2;
        pppppppuVar13 = param_1;
        pppppppuVar17 = (undefined8 *******)&UNK_0010c682;
        do {
          pppppppuVar14 = pppppppuVar13;
          pppppppuVar18 = pppppppuVar17;
          if (pppppppuVar10 == (undefined8 *******)0x0) break;
          pppppppuVar10 = (undefined8 *******)((long)pppppppuVar10 + -1);
          pppppppuVar18 = (undefined8 *******)((long)pppppppuVar17 + (ulong)bVar23 * -2 + 1);
          pppppppuVar14 = (undefined8 *******)((long)pppppppuVar13 + (ulong)bVar23 * -2 + 1);
          bVar21 = *(byte *)pppppppuVar13 < *(byte *)pppppppuVar17;
          bVar22 = *(char *)pppppppuVar13 == *(char *)pppppppuVar17;
          pppppppuVar13 = pppppppuVar14;
          pppppppuVar17 = pppppppuVar18;
        } while (bVar22);
        if ((!bVar21 && !bVar22) == bVar21) {
          puStack80 = &UNK_00104352;
          unaff_R13 = quote_n(1,&UNK_0010c681);
          puStack80 = &UNK_0010435f;
          param_1 = (undefined8 *******)quote_n(0,&UNK_0010c682);
          puStack80 = &UNK_00104375;
          uVar7 = func_0x00101b60(0,&UNK_0010c9b0,5);
          pppppppuVar14 = (undefined8 *******)0x0;
          pppppppuVar18 = (undefined8 *******)0x0;
          puStack80 = &UNK_00104389;
          pppppppuVar10 = param_1;
          nl_error(0,0,uVar7,param_1,unaff_R13);
          pppppppuVar3 = pppppppuStack64;
        }
      }
      pppppppuVar3 = (undefined8 *******)((long)pppppppuVar3 * uVar12);
    }
    else {
      *(int *)param_2 = 1;
      pppppppuVar3 = (undefined8 *******)0x0;
    }
  }
  else {
    pppppppuVar3 = pppppppuStack64;
    if (iVar1 != 0) {
code_r0x001042ca:
      *(int *)param_2 = iVar1;
      pppppppuVar3 = (undefined8 *******)0x0;
    }
  }
  uStack104 = uStack48 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uStack104 == 0) {
    return pppppppuVar3;
  }
  puStack80 = &UNK_00104395;
  func_0x00101b90();
  uVar9 = (uint)pppppppuVar10;
  lStack120 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)pppppppuVar14 & 0xfffdfeff;
  uStack312 = (ulong)uVar11;
  pppppppuStack304 = param_1;
  pppppppuStack96 = param_1;
  pppppppuStack88 = param_2;
  puStack80 = (undefined *)unaff_R13;
  if (((ulong)pppppppuVar14 & 0xfffdfeff) != 0) {
    pppppppuVar14 = (undefined8 *******)0x3;
    pppppppuStack304 = (undefined8 *******)((ulong)pppppppuVar18 & 0xffffffff);
    uVar2 = rpl_fcntl();
    uVar9 = (uint)pppppppuVar10;
    uVar11 = uVar11 | uVar2;
    uStack312 = (ulong)uVar11;
    param_2 = (undefined8 *******)(ulong)uVar2;
    unaff_R13 = extraout_RDX;
    if ((int)uVar2 < 0) goto code_r0x00104458;
    if (uVar2 != uVar11) {
      if ((uVar11 & 0x10000) != 0) {
        pppppppuVar18 = (undefined8 *******)0x1;
        pppppppuVar14 = pppppppuStack304;
        iVar1 = func_0x00101d30(1,pppppppuStack304,auStack272);
        if (iVar1 != 0) goto code_r0x00104458;
        if ((uStack248 & 0xf000) == 0x4000) goto code_r0x00104497;
        puVar4 = (undefined4 *)func_0x00101a80();
        *puVar4 = 0x14;
        goto code_r0x00104458;
      }
      do {
        uVar9 = (uint)pppppppuVar10;
        pppppppuVar14 = (undefined8 *******)0x4;
        pppppppuVar18 = (undefined8 *******)((ulong)pppppppuStack304 & 0xffffffff);
        iVar1 = rpl_fcntl(pppppppuVar18,4,uStack312);
        if (iVar1 != -1) break;
code_r0x00104458:
        pppppppuStack304 = (undefined8 *******)quotearg_style(4,extraout_RDX);
        uVar7 = func_0x00101b60(0,&UNK_0010c685,5);
        uVar11 = (uint)uVar7;
        puVar5 = (uint *)func_0x00101a80();
        pppppppuVar14 = (undefined8 *******)(ulong)*puVar5;
        pppppppuVar18 = (undefined8 *******)0x1;
        pppppppuVar10 = pppppppuStack304;
        nl_error(1,pppppppuVar14,uVar7);
code_r0x00104497:
        uVar9 = (uint)pppppppuVar10;
        uStack312 = (ulong)(uVar11 & 0xfffeffff);
      } while ((uVar11 & 0xfffeffff) != uVar2);
    }
  }
  if (lStack120 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)0x0;
  }
  func_0x00101b90();
  uVar12 = (ulong)pppppppuVar14 & 0xffffffff;
  lStack320 = *(long *)(in_FS_OFFSET + 0x28);
  pppppppuStack296 = param_2;
  uStack288 = unaff_R13;
  iVar1 = func_0x00101c50(uVar12,0x80306d02,auStack424);
  lVar15 = extraout_RDX_00;
  uVar11 = (uint)uVar12;
  lVar6 = func_0x00101c10(uVar12,extraout_RDX_00,(ulong)uVar9);
  if ((-1 < lVar6) && (iVar1 == 0)) {
    lVar15 = 0x80306d02;
    uVar11 = (uint)uVar12;
    iVar1 = func_0x00101c50(uVar12,0x80306d02,&uStack376);
    if ((iVar1 == 0) && ((lStack416 == lStack368 && (lStack384 == lStack336)))) {
      if (status_level != 1) {
        uVar7 = func_0x00101b60(0,&UNK_0010c9f0,5);
        lVar15 = 0;
        uVar11 = 0;
        nl_error(0,0,uVar7,pppppppuVar18,uStack376);
      }
      puVar4 = (undefined4 *)func_0x00101a80();
      lVar6 = -1;
      *puVar4 = 0;
    }
  }
  if (lStack320 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)lVar6;
  }
  func_0x00101b90();
  if (uVar11 == 0) {
    puVar8 = &i_pending_7166;
    cVar20 = i_nocache_eof;
  }
  else {
    puVar8 = &o_pending_7167;
    cVar20 = o_nocache_eof;
  }
  uVar12 = *puVar8;
  if (lVar15 == 0) {
    if ((uVar12 == 0) && (cVar20 == '\0')) {
      return (undefined8 *******)1;
    }
    uVar19 = 0;
  }
  else {
    uVar12 = uVar12 + lVar15;
    uVar19 = (ulong)((uint)uVar12 & 0x1ffff);
    *puVar8 = uVar19;
    if ((uVar12 <= uVar19) || (uVar12 = uVar12 - uVar19, uVar12 == 0)) {
      return (undefined8 *******)1;
    }
  }
  if (uVar11 == 0) {
    uVar16 = (ulong)input_seekable;
    lVar6 = input_offset;
    if (input_seekable == 0) {
      puVar4 = (undefined4 *)func_0x00101a80();
      *puVar4 = 0x1d;
      return (undefined8 *******)uVar16;
    }
code_r0x0010469c:
    if (lVar6 < 0) {
      return (undefined8 *******)0;
    }
  }
  else {
    if (output_offset_7179 == -1) {
      return (undefined8 *******)0;
    }
    if (output_offset_7179 < 0) {
      lVar6 = func_0x00101c10(1,0,1);
      output_offset_7179 = lVar6;
      goto code_r0x0010469c;
    }
    lVar6 = output_offset_7179;
    if (lVar15 != 0) {
      lVar6 = output_offset_7179 + uVar19 + uVar12;
      output_offset_7179 = lVar6;
      goto code_r0x0010469c;
    }
  }
  uVar16 = lVar6 - uVar12;
  if ((lVar15 == 0) && (uVar12 != 0)) {
    if (cVar20 == '\0') {
      uVar16 = uVar16 - uVar19;
      goto code_r0x001046cb;
    }
  }
  else {
    uVar16 = uVar16 - uVar19;
    if (uVar12 != 0) goto code_r0x001046cb;
  }
  uVar12 = 0;
  uVar16 = uVar16 - uVar16 % page_size;
code_r0x001046cb:
  iVar1 = func_0x00101c70((ulong)uVar11,uVar16,uVar12,4);
  return (undefined8 *******)(ulong)(iVar1 != -1);
}

