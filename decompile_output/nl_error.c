
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
nl_error(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
        undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,ulong param_9,
        ulong param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
        undefined8 param_14)

{
  undefined *puVar1;
  char in_AL;
  int iVar2;
  uint uVar3;
  undefined8 *******pppppppuVar4;
  undefined4 *puVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong *puVar9;
  uint uVar10;
  undefined8 *******pppppppuVar11;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  uint uVar12;
  ulong uVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 unaff_R13;
  ulong uVar20;
  char cVar21;
  long in_FS_OFFSET;
  bool bVar22;
  bool bVar23;
  byte bVar24;
  undefined auStack672 [8];
  long lStack664;
  long lStack632;
  undefined8 uStack624;
  long lStack616;
  long lStack584;
  long lStack568;
  ulong uStack560;
  undefined8 *******pppppppuStack552;
  undefined8 *******pppppppuStack544;
  undefined8 uStack536;
  undefined auStack520 [24];
  uint uStack496;
  long lStack368;
  ulong uStack352;
  undefined8 *******pppppppuStack344;
  undefined8 *******pppppppuStack336;
  undefined *puStack328;
  undefined8 *******pppppppuStack312;
  undefined8 *******pppppppuStack304;
  ulong uStack296;
  undefined8 *******pppppppuStack280;
  undefined8 *******pppppppuStack272;
  undefined8 uStack240;
  undefined4 uStack232;
  undefined4 uStack228;
  undefined *puStack224;
  undefined *puStack216;
  long lStack208;
  undefined auStack200 [24];
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined4 uStack152;
  undefined4 uStack136;
  undefined4 uStack120;
  undefined4 uStack104;
  undefined4 uStack88;
  undefined4 uStack72;
  undefined4 uStack56;
  undefined4 uStack40;
  
  bVar24 = 0;
  pppppppuStack272 = (undefined8 *******)(param_10 & 0xffffffff);
  pppppppuStack280 = (undefined8 *******)(param_9 & 0xffffffff);
  if (in_AL != '\0') {
    uStack152 = param_1;
    uStack136 = param_2;
    uStack120 = param_3;
    uStack104 = param_4;
    uStack88 = param_5;
    uStack72 = param_6;
    uStack56 = param_7;
    uStack40 = param_8;
  }
  lStack208 = *(long *)(in_FS_OFFSET + 0x28);
  uStack176 = param_12;
  uStack168 = param_13;
  uStack160 = param_14;
  if (0 < progress_len) {
    puVar1 = *(undefined **)(stderr + 0x28);
    if (puVar1 < *(undefined **)(stderr + 0x30)) {
      *(undefined **)(stderr + 0x28) = puVar1 + 1;
      *puVar1 = 10;
    }
    else {
      uStack240 = param_11;
      func_0x00101be0();
      param_11 = uStack240;
    }
    progress_len = 0;
  }
  puStack224 = &stack0x00000008;
  uStack232 = 0x18;
  uStack228 = 0x30;
  puStack216 = auStack200;
  pppppppuStack544 = pppppppuStack272;
  pppppppuStack344 = pppppppuStack280;
  verror(pppppppuStack280,pppppppuStack272,param_11,&uStack232);
  if (lStack208 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)0x0;
  }
  func_0x00101b90();
  pppppppuVar11 = &pppppppuStack312;
  pppppppuVar15 = &pppppppuStack304;
  uStack296 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack328 = &UNK_0010428b;
  pppppppuVar19 = pppppppuStack344;
  iVar2 = xstrtoumax();
  if (iVar2 == 2) {
    pppppppuVar19 = pppppppuStack304;
    if (*(char *)pppppppuStack304 != 'x') goto code_r0x001042ca;
    pppppppuVar19 = (undefined8 *******)((long)pppppppuStack304 + 1);
    puStack328 = &UNK_001042e4;
    pppppppuVar15 = pppppppuStack544;
    uVar13 = parse_integer();
    pppppppuVar4 = pppppppuStack312;
    if ((uVar13 == 0) ||
       (pppppppuVar4 = (undefined8 *******)(((long)pppppppuStack312 * uVar13) / uVar13),
       pppppppuVar11 = pppppppuStack312, pppppppuStack312 == pppppppuVar4)) {
      bVar22 = false;
      bVar23 = pppppppuVar4 == (undefined8 *******)0x0;
      if (bVar23) {
        pppppppuStack544 = (undefined8 *******)&UNK_0010c682;
        pppppppuVar11 = (undefined8 *******)0x2;
        pppppppuVar14 = pppppppuStack344;
        pppppppuVar18 = (undefined8 *******)&UNK_0010c682;
        do {
          pppppppuVar15 = pppppppuVar14;
          pppppppuVar19 = pppppppuVar18;
          if (pppppppuVar11 == (undefined8 *******)0x0) break;
          pppppppuVar11 = (undefined8 *******)((long)pppppppuVar11 + -1);
          pppppppuVar19 = (undefined8 *******)((long)pppppppuVar18 + (ulong)bVar24 * -2 + 1);
          pppppppuVar15 = (undefined8 *******)((long)pppppppuVar14 + (ulong)bVar24 * -2 + 1);
          bVar22 = *(byte *)pppppppuVar14 < *(byte *)pppppppuVar18;
          bVar23 = *(char *)pppppppuVar14 == *(char *)pppppppuVar18;
          pppppppuVar14 = pppppppuVar15;
          pppppppuVar18 = pppppppuVar19;
        } while (bVar23);
        if ((!bVar22 && !bVar23) == bVar22) {
          puStack328 = &UNK_00104352;
          unaff_R13 = quote_n(1,&UNK_0010c681);
          puStack328 = &UNK_0010435f;
          pppppppuStack344 = (undefined8 *******)quote_n(0,&UNK_0010c682);
          puStack328 = &UNK_00104375;
          uVar8 = func_0x00101b60(0,&UNK_0010c9b0,5);
          pppppppuVar15 = (undefined8 *******)0x0;
          pppppppuVar19 = (undefined8 *******)0x0;
          puStack328 = &UNK_00104389;
          pppppppuVar11 = pppppppuStack344;
          nl_error(0,0,uVar8,pppppppuStack344,unaff_R13);
          pppppppuVar4 = pppppppuStack312;
        }
      }
      pppppppuVar4 = (undefined8 *******)((long)pppppppuVar4 * uVar13);
    }
    else {
      *(int *)pppppppuStack544 = 1;
      pppppppuVar4 = (undefined8 *******)0x0;
    }
  }
  else {
    pppppppuVar4 = pppppppuStack312;
    if (iVar2 != 0) {
code_r0x001042ca:
      *(int *)pppppppuStack544 = iVar2;
      pppppppuVar4 = (undefined8 *******)0x0;
    }
  }
  uStack352 = uStack296 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uStack352 == 0) {
    return pppppppuVar4;
  }
  puStack328 = &UNK_00104395;
  func_0x00101b90();
  uVar10 = (uint)pppppppuVar11;
  lStack368 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)pppppppuVar15 & 0xfffdfeff;
  uStack560 = (ulong)uVar12;
  pppppppuStack552 = pppppppuStack344;
  pppppppuStack336 = pppppppuStack544;
  puStack328 = (undefined *)unaff_R13;
  if (((ulong)pppppppuVar15 & 0xfffdfeff) != 0) {
    pppppppuVar15 = (undefined8 *******)0x3;
    pppppppuStack552 = (undefined8 *******)((ulong)pppppppuVar19 & 0xffffffff);
    uVar3 = rpl_fcntl();
    uVar10 = (uint)pppppppuVar11;
    uVar12 = uVar12 | uVar3;
    uStack560 = (ulong)uVar12;
    pppppppuStack544 = (undefined8 *******)(ulong)uVar3;
    unaff_R13 = extraout_RDX;
    if ((int)uVar3 < 0) goto code_r0x00104458;
    if (uVar3 != uVar12) {
      if ((uVar12 & 0x10000) != 0) {
        pppppppuVar19 = (undefined8 *******)0x1;
        pppppppuVar15 = pppppppuStack552;
        iVar2 = func_0x00101d30(1,pppppppuStack552,auStack520);
        if (iVar2 != 0) goto code_r0x00104458;
        if ((uStack496 & 0xf000) == 0x4000) goto code_r0x00104497;
        puVar5 = (undefined4 *)func_0x00101a80();
        *puVar5 = 0x14;
        goto code_r0x00104458;
      }
      do {
        uVar10 = (uint)pppppppuVar11;
        pppppppuVar15 = (undefined8 *******)0x4;
        pppppppuVar19 = (undefined8 *******)((ulong)pppppppuStack552 & 0xffffffff);
        iVar2 = rpl_fcntl(pppppppuVar19,4,uStack560);
        if (iVar2 != -1) break;
code_r0x00104458:
        pppppppuStack552 = (undefined8 *******)quotearg_style(4,extraout_RDX);
        uVar8 = func_0x00101b60(0,&UNK_0010c685,5);
        uVar12 = (uint)uVar8;
        puVar6 = (uint *)func_0x00101a80();
        pppppppuVar15 = (undefined8 *******)(ulong)*puVar6;
        pppppppuVar19 = (undefined8 *******)0x1;
        pppppppuVar11 = pppppppuStack552;
        nl_error(1,pppppppuVar15,uVar8);
code_r0x00104497:
        uVar10 = (uint)pppppppuVar11;
        uStack560 = (ulong)(uVar12 & 0xfffeffff);
      } while ((uVar12 & 0xfffeffff) != uVar3);
    }
  }
  if (lStack368 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)0x0;
  }
  func_0x00101b90();
  uVar13 = (ulong)pppppppuVar15 & 0xffffffff;
  lStack568 = *(long *)(in_FS_OFFSET + 0x28);
  uStack536 = unaff_R13;
  iVar2 = func_0x00101c50(uVar13,0x80306d02,auStack672);
  lVar16 = extraout_RDX_00;
  uVar12 = (uint)uVar13;
  lVar7 = func_0x00101c10(uVar13,extraout_RDX_00,(ulong)uVar10);
  if ((-1 < lVar7) && (iVar2 == 0)) {
    lVar16 = 0x80306d02;
    uVar12 = (uint)uVar13;
    iVar2 = func_0x00101c50(uVar13,0x80306d02,&uStack624);
    if ((iVar2 == 0) && ((lStack664 == lStack616 && (lStack632 == lStack584)))) {
      if (status_level != 1) {
        uVar8 = func_0x00101b60(0,&UNK_0010c9f0,5);
        lVar16 = 0;
        uVar12 = 0;
        nl_error(0,0,uVar8,pppppppuVar19,uStack624);
      }
      puVar5 = (undefined4 *)func_0x00101a80();
      lVar7 = -1;
      *puVar5 = 0;
    }
  }
  if (lStack568 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)lVar7;
  }
  func_0x00101b90();
  if (uVar12 == 0) {
    puVar9 = &i_pending_7166;
    cVar21 = i_nocache_eof;
  }
  else {
    puVar9 = &o_pending_7167;
    cVar21 = o_nocache_eof;
  }
  uVar13 = *puVar9;
  if (lVar16 == 0) {
    if ((uVar13 == 0) && (cVar21 == '\0')) {
      return (undefined8 *******)1;
    }
    uVar20 = 0;
  }
  else {
    uVar13 = uVar13 + lVar16;
    uVar20 = (ulong)((uint)uVar13 & 0x1ffff);
    *puVar9 = uVar20;
    if ((uVar13 <= uVar20) || (uVar13 = uVar13 - uVar20, uVar13 == 0)) {
      return (undefined8 *******)1;
    }
  }
  if (uVar12 == 0) {
    uVar17 = (ulong)input_seekable;
    lVar7 = input_offset;
    if (input_seekable == 0) {
      puVar5 = (undefined4 *)func_0x00101a80();
      *puVar5 = 0x1d;
      return (undefined8 *******)uVar17;
    }
code_r0x0010469c:
    if (lVar7 < 0) {
      return (undefined8 *******)0;
    }
  }
  else {
    if (output_offset_7179 == -1) {
      return (undefined8 *******)0;
    }
    if (output_offset_7179 < 0) {
      lVar7 = func_0x00101c10(1,0,1);
      output_offset_7179 = lVar7;
      goto code_r0x0010469c;
    }
    lVar7 = output_offset_7179;
    if (lVar16 != 0) {
      lVar7 = output_offset_7179 + uVar20 + uVar13;
      output_offset_7179 = lVar7;
      goto code_r0x0010469c;
    }
  }
  uVar17 = lVar7 - uVar13;
  if ((lVar16 == 0) && (uVar13 != 0)) {
    if (cVar21 == '\0') {
      uVar17 = uVar17 - uVar20;
      goto code_r0x001046cb;
    }
  }
  else {
    uVar17 = uVar17 - uVar20;
    if (uVar13 != 0) goto code_r0x001046cb;
  }
  uVar13 = 0;
  uVar17 = uVar17 - uVar17 % page_size;
code_r0x001046cb:
  iVar2 = func_0x00101c70((ulong)uVar12,uVar17,uVar13,4);
  return (undefined8 *******)(ulong)(iVar2 != -1);
}

