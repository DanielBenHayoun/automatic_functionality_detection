
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *******
print_xfer_stats(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                long param_9)

{
  undefined *puVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *******pppppppuVar10;
  undefined4 *puVar11;
  uint *puVar12;
  long lVar13;
  ulong *puVar14;
  undefined8 *******pppppppuVar15;
  undefined8 extraout_RDX;
  undefined *extraout_RDX_00;
  long extraout_RDX_01;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  ulong uVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *******pppppppuVar23;
  undefined *puVar24;
  ulong uVar25;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  byte bVar28;
  double dVar29;
  undefined extraout_XMM0 [16];
  undefined auStack2744 [8];
  long lStack2736;
  long lStack2704;
  undefined8 uStack2696;
  long lStack2688;
  long lStack2656;
  long lStack2640;
  ulong uStack2632;
  undefined8 *******pppppppuStack2624;
  undefined8 *******pppppppuStack2616;
  undefined *puStack2608;
  code *pcStack2600;
  undefined auStack2592 [24];
  uint uStack2568;
  long lStack2440;
  ulong uStack2424;
  undefined8 *******pppppppuStack2416;
  undefined8 *******pppppppuStack2408;
  undefined *puStack2400;
  undefined8 *******pppppppuStack2384;
  undefined8 *******pppppppuStack2376;
  ulong uStack2368;
  undefined8 *******pppppppuStack2352;
  undefined8 *******pppppppuStack2344;
  undefined *puStack2336;
  undefined *puStack2328;
  undefined8 uStack2312;
  undefined4 uStack2304;
  undefined4 uStack2300;
  double *pdStack2296;
  undefined *puStack2288;
  long lStack2280;
  undefined auStack2272 [24];
  undefined *puStack2248;
  undefined *puStack2240;
  undefined *puStack2232;
  undefined4 uStack2224;
  undefined4 uStack2220;
  undefined4 uStack2216;
  undefined4 uStack2212;
  undefined4 uStack2208;
  undefined4 uStack2192;
  undefined4 uStack2176;
  undefined4 uStack2160;
  undefined4 uStack2144;
  undefined4 uStack2128;
  undefined4 uStack2112;
  undefined *puStack2096;
  undefined *puStack2088;
  undefined *puStack2080;
  double dStack2064;
  undefined auStack2056 [654];
  undefined auStack1402 [654];
  undefined auStack748 [660];
  undefined auStack88 [24];
  long lStack64;
  
  bVar28 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = param_9;
  if (param_9 == 0) {
    puStack2080 = &UNK_00104035;
    lVar8 = gethrxtime();
  }
  puStack2080 = &UNK_00103e07;
  puVar7 = (undefined *)human_readable(w_bytes,auStack2056,0x1d1,1,1);
  puStack2080 = &UNK_00103e2d;
  puStack2608 = (undefined *)human_readable(w_bytes,auStack1402,0x1f1,1,1);
  if (start_time < lVar8) {
    uVar25 = lVar8 - start_time;
    if ((long)uVar25 < 0) {
      dStack2064 = (double)(uVar25 >> 1 | (ulong)((uint)uVar25 & 1));
      dStack2064 = dStack2064 + dStack2064;
    }
    else {
      dStack2064 = (double)uVar25;
    }
    dStack2064 = dStack2064 / _UNK_0010e170;
    puStack2080 = &UNK_00103e80;
    puStack2232 = (undefined *)human_readable(dStack2064,w_bytes,auStack748,0x1d1,1000000000,uVar25)
    ;
    puStack2080 = &UNK_00103e8b;
    lVar8 = func_0x00101b80(puStack2232);
    puStack2232[lVar8 + 2] = 0;
    *(undefined2 *)(puStack2232 + lVar8) = 0x732f;
    dVar29 = dStack2064;
    dVar2 = dStack2064;
  }
  else {
    puStack2232 = auStack748;
    puStack2080 = &UNK_00103fa2;
    uVar9 = func_0x00101b60(0,&UNK_0010c610,5);
    puStack2080 = &UNK_00103fc5;
    func_0x00101a40(puStack2232,0x28e,1,0x28e,&UNK_0010c619,uVar9);
    dVar29 = 0.00000000;
    dVar2 = dStack2064;
  }
  dStack2064 = dVar29;
  puVar24 = &UNK_0010c60b;
  dVar29 = dStack2064;
  if (param_9 != 0) {
    puVar1 = *(undefined **)(stderr + 0x28);
    if (puVar1 < *(undefined **)(stderr + 0x30)) {
      puVar24 = &UNK_0010c604;
      *(undefined **)(stderr + 0x28) = puVar1 + 1;
      *puVar1 = 0xd;
    }
    else {
      puStack2080 = &UNK_00104120;
      func_0x00101be0(dStack2064,stderr,0xd);
      puVar24 = &UNK_0010c604;
      dVar29 = dStack2064;
      dVar2 = dStack2064;
    }
  }
  dStack2064 = dVar2;
  puStack2080 = &UNK_00103ed3;
  func_0x00101a40(dVar29,auStack88,0x18,1,0x18,puVar24);
  puStack2080 = &UNK_00103edb;
  lVar8 = func_0x00101b80(puVar7);
  puStack2336 = w_bytes;
  if (puVar7[lVar8 + -2] == ' ') {
    puStack2080 = &UNK_00104085;
    uVar9 = func_0x00101dd0(0,&UNK_0010c639,&UNK_0010c620,w_bytes,5);
    uVar18 = 1;
    puStack2080 = &UNK_001040a4;
    puStack2248 = puStack2336;
    uVar25 = stderr;
    puStack2240 = auStack88;
    uVar4 = func_0x00101e30(stderr,1,uVar9);
  }
  else {
    puStack2080 = &UNK_00103eef;
    lVar8 = func_0x00101b80(puStack2608);
    puStack2248 = w_bytes;
    if (puStack2608[lVar8 + -2] == ' ') {
      puStack2080 = &UNK_0010404e;
      uVar9 = func_0x00101b60(0,&UNK_0010c651,5);
      puVar24 = auStack88;
      puStack2088 = puStack2232;
    }
    else {
      puStack2080 = &UNK_00103f15;
      uVar9 = func_0x00101b60(0,&UNK_0010c988,5);
      puVar24 = puStack2608;
      puStack2088 = auStack88;
      puStack2080 = puStack2232;
    }
    puStack2232 = puVar24;
    uVar18 = 1;
    puStack2096 = &UNK_00103f37;
    uVar25 = stderr;
    puStack2240 = puVar7;
    uVar4 = func_0x00101e30(stderr,1,uVar9);
    puStack2336 = puVar7;
  }
  uVar21 = stderr;
  uVar17 = (ulong)uVar4;
  if (param_9 == 0) {
    puVar7 = *(undefined **)(stderr + 0x28);
    if (puVar7 < *(undefined **)(stderr + 0x30)) {
      *(undefined **)(stderr + 0x28) = puVar7 + 1;
      *puVar7 = 10;
      uVar25 = uVar21;
      uVar4 = progress_len;
    }
    else {
      uVar18 = 10;
      puStack2080 = &UNK_0010410a;
      uVar25 = stderr;
      func_0x00101be0();
      uVar4 = progress_len;
    }
  }
  else {
    if ((-1 < (int)uVar4) &&
       (puStack2248 = (undefined *)(ulong)progress_len, (int)uVar4 < (int)progress_len)) {
      puStack2240 = &UNK_0010e7a1;
      puStack2248 = (undefined *)(ulong)(progress_len - uVar4);
      uVar18 = 1;
      puStack2080 = &UNK_001040fb;
      uVar25 = stderr;
      func_0x00101e30(stderr,1,&UNK_0010c66f);
    }
  }
  progress_len = uVar4;
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)0x0;
  }
  puStack2080 = &UNK_00104137;
  cVar3 = func_0x00101b90();
  pppppppuStack2344 = (undefined8 *******)(uVar18 & 0xffffffff);
  pppppppuStack2352 = (undefined8 *******)(uVar25 & 0xffffffff);
  if (cVar3 != '\0') {
    uStack2224 = SUB164(extraout_XMM0,0);
    uStack2220 = SUB164(extraout_XMM0 >> 0x20,0);
    uStack2216 = SUB164(extraout_XMM0 >> 0x40,0);
    uStack2212 = SUB164(extraout_XMM0 >> 0x60,0);
    uStack2208 = param_2;
    uStack2192 = param_3;
    uStack2176 = param_4;
    uStack2160 = param_5;
    uStack2144 = param_6;
    uStack2128 = param_7;
    uStack2112 = param_8;
  }
  lStack2280 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = extraout_RDX;
  puStack2088 = (undefined *)uVar17;
  puStack2080 = (undefined *)param_9;
  if (0 < (int)progress_len) {
    puVar7 = *(undefined **)(stderr + 0x28);
    if (puVar7 < *(undefined **)(stderr + 0x30)) {
      *(undefined **)(stderr + 0x28) = puVar7 + 1;
      *puVar7 = 10;
      uVar9 = extraout_RDX;
    }
    else {
      puStack2328 = &UNK_0010423f;
      uStack2312 = extraout_RDX;
      func_0x00101be0();
      uVar9 = uStack2312;
    }
    progress_len = 0;
  }
  pdStack2296 = &dStack2064;
  uStack2304 = 0x18;
  uStack2300 = 0x30;
  puStack2288 = auStack2272;
  puStack2328 = &UNK_0010420f;
  pppppppuStack2616 = pppppppuStack2344;
  pppppppuStack2416 = pppppppuStack2352;
  verror(pppppppuStack2352,pppppppuStack2344,uVar9,&uStack2304);
  if (lStack2280 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)0x0;
  }
  puStack2328 = &UNK_0010424b;
  func_0x00101b90();
  pppppppuVar15 = &pppppppuStack2384;
  pppppppuVar20 = &pppppppuStack2376;
  uStack2368 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack2400 = &UNK_0010428b;
  pppppppuVar23 = pppppppuStack2416;
  puStack2328 = puStack2608;
  iVar5 = xstrtoumax();
  if (iVar5 == 2) {
    pppppppuVar23 = pppppppuStack2376;
    if (*(char *)pppppppuStack2376 != 'x') goto code_r0x001042ca;
    pppppppuVar23 = (undefined8 *******)((long)pppppppuStack2376 + 1);
    puStack2400 = &UNK_001042e4;
    pppppppuVar20 = pppppppuStack2616;
    uVar25 = parse_integer();
    pppppppuVar10 = pppppppuStack2384;
    if ((uVar25 == 0) ||
       (pppppppuVar10 = (undefined8 *******)(((long)pppppppuStack2384 * uVar25) / uVar25),
       pppppppuVar15 = pppppppuStack2384, pppppppuStack2384 == pppppppuVar10)) {
      bVar26 = false;
      bVar27 = pppppppuVar10 == (undefined8 *******)0x0;
      if (bVar27) {
        pppppppuStack2616 = (undefined8 *******)&UNK_0010c682;
        pppppppuVar15 = (undefined8 *******)0x2;
        pppppppuVar19 = pppppppuStack2416;
        pppppppuVar22 = (undefined8 *******)&UNK_0010c682;
        do {
          pppppppuVar20 = pppppppuVar19;
          pppppppuVar23 = pppppppuVar22;
          if (pppppppuVar15 == (undefined8 *******)0x0) break;
          pppppppuVar15 = (undefined8 *******)((long)pppppppuVar15 + -1);
          pppppppuVar23 = (undefined8 *******)((long)pppppppuVar22 + (ulong)bVar28 * -2 + 1);
          pppppppuVar20 = (undefined8 *******)((long)pppppppuVar19 + (ulong)bVar28 * -2 + 1);
          bVar26 = *(byte *)pppppppuVar19 < *(byte *)pppppppuVar22;
          bVar27 = *(char *)pppppppuVar19 == *(char *)pppppppuVar22;
          pppppppuVar19 = pppppppuVar20;
          pppppppuVar22 = pppppppuVar23;
        } while (bVar27);
        if ((!bVar26 && !bVar27) == bVar26) {
          puStack2400 = &UNK_00104352;
          puStack2608 = (undefined *)quote_n(1,&UNK_0010c681);
          puStack2400 = &UNK_0010435f;
          pppppppuStack2416 = (undefined8 *******)quote_n(0,&UNK_0010c682);
          puStack2400 = &UNK_00104375;
          uVar9 = func_0x00101b60(0,&UNK_0010c9b0,5);
          pppppppuVar20 = (undefined8 *******)0x0;
          pppppppuVar23 = (undefined8 *******)0x0;
          puStack2400 = &UNK_00104389;
          pppppppuVar15 = pppppppuStack2416;
          nl_error(0,0,uVar9,pppppppuStack2416,puStack2608);
          pppppppuVar10 = pppppppuStack2384;
        }
      }
      pppppppuVar10 = (undefined8 *******)((long)pppppppuVar10 * uVar25);
    }
    else {
      *(int *)pppppppuStack2616 = 1;
      pppppppuVar10 = (undefined8 *******)0x0;
    }
  }
  else {
    pppppppuVar10 = pppppppuStack2384;
    if (iVar5 != 0) {
code_r0x001042ca:
      *(int *)pppppppuStack2616 = iVar5;
      pppppppuVar10 = (undefined8 *******)0x0;
    }
  }
  uStack2424 = uStack2368 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uStack2424 == 0) {
    return pppppppuVar10;
  }
  puStack2400 = &UNK_00104395;
  func_0x00101b90();
  uVar4 = (uint)pppppppuVar15;
  lStack2440 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = (uint)pppppppuVar20 & 0xfffdfeff;
  uStack2632 = (ulong)uVar16;
  pppppppuStack2624 = pppppppuStack2416;
  pppppppuStack2408 = pppppppuStack2616;
  puStack2400 = puStack2608;
  if (((ulong)pppppppuVar20 & 0xfffdfeff) != 0) {
    pppppppuVar20 = (undefined8 *******)0x3;
    pppppppuStack2624 = (undefined8 *******)((ulong)pppppppuVar23 & 0xffffffff);
    pcStack2600 = (code *)&UNK_001043fe;
    uVar6 = rpl_fcntl();
    uVar4 = (uint)pppppppuVar15;
    uVar16 = uVar16 | uVar6;
    uStack2632 = (ulong)uVar16;
    pppppppuStack2616 = (undefined8 *******)(ulong)uVar6;
    puStack2608 = extraout_RDX_00;
    if ((int)uVar6 < 0) goto code_r0x00104458;
    if (uVar6 != uVar16) {
      if ((uVar16 & 0x10000) != 0) {
        pppppppuVar23 = (undefined8 *******)0x1;
        pcStack2600 = (code *)&UNK_00104439;
        pppppppuVar20 = pppppppuStack2624;
        iVar5 = func_0x00101d30(1,pppppppuStack2624,auStack2592);
        if (iVar5 != 0) goto code_r0x00104458;
        if ((uStack2568 & 0xf000) == 0x4000) goto code_r0x00104497;
        pcStack2600 = (code *)&UNK_00104452;
        puVar11 = (undefined4 *)func_0x00101a80();
        *puVar11 = 0x14;
        goto code_r0x00104458;
      }
      do {
        uVar4 = (uint)pppppppuVar15;
        pppppppuVar20 = (undefined8 *******)0x4;
        pppppppuVar23 = (undefined8 *******)((ulong)pppppppuStack2624 & 0xffffffff);
        pcStack2600 = (code *)&UNK_00104423;
        iVar5 = rpl_fcntl(pppppppuVar23,4,uStack2632);
        if (iVar5 != -1) break;
code_r0x00104458:
        pcStack2600 = (code *)&UNK_00104465;
        pppppppuStack2624 = (undefined8 *******)quotearg_style(4,extraout_RDX_00);
        pcStack2600 = (code *)&UNK_0010447b;
        uVar9 = func_0x00101b60(0,&UNK_0010c685,5);
        uVar16 = (uint)uVar9;
        pcStack2600 = (code *)&UNK_00104483;
        puVar12 = (uint *)func_0x00101a80();
        pppppppuVar20 = (undefined8 *******)(ulong)*puVar12;
        pppppppuVar23 = (undefined8 *******)0x1;
        pcStack2600 = (code *)&UNK_00104497;
        pppppppuVar15 = pppppppuStack2624;
        nl_error(1,pppppppuVar20,uVar9);
code_r0x00104497:
        uVar4 = (uint)pppppppuVar15;
        uStack2632 = (ulong)(uVar16 & 0xfffeffff);
      } while ((uVar16 & 0xfffeffff) != uVar6);
    }
  }
  if (lStack2440 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)0x0;
  }
  pcStack2600 = skip_via_lseek;
  func_0x00101b90();
  uVar25 = (ulong)pppppppuVar20 & 0xffffffff;
  lStack2640 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack2600 = (code *)auStack88;
  iVar5 = func_0x00101c50(uVar25,0x80306d02,auStack2744);
  lVar8 = extraout_RDX_01;
  uVar16 = (uint)uVar25;
  lVar13 = func_0x00101c10(uVar25,extraout_RDX_01,(ulong)uVar4);
  if ((-1 < lVar13) && (iVar5 == 0)) {
    lVar8 = 0x80306d02;
    uVar16 = (uint)uVar25;
    iVar5 = func_0x00101c50(uVar25,0x80306d02,&uStack2696);
    if ((iVar5 == 0) && ((lStack2736 == lStack2688 && (lStack2704 == lStack2656)))) {
      if (status_level != 1) {
        uVar9 = func_0x00101b60(0,&UNK_0010c9f0,5);
        lVar8 = 0;
        uVar16 = 0;
        nl_error(0,0,uVar9,pppppppuVar23,uStack2696);
      }
      puVar11 = (undefined4 *)func_0x00101a80();
      lVar13 = -1;
      *puVar11 = 0;
    }
  }
  if (lStack2640 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)lVar13;
  }
  func_0x00101b90();
  if (uVar16 == 0) {
    puVar14 = &i_pending_7166;
    cVar3 = i_nocache_eof;
  }
  else {
    puVar14 = &o_pending_7167;
    cVar3 = o_nocache_eof;
  }
  uVar25 = *puVar14;
  if (lVar8 == 0) {
    if ((uVar25 == 0) && (cVar3 == '\0')) {
      return (undefined8 *******)1;
    }
    uVar18 = 0;
  }
  else {
    uVar25 = uVar25 + lVar8;
    uVar18 = (ulong)((uint)uVar25 & 0x1ffff);
    *puVar14 = uVar18;
    if ((uVar25 <= uVar18) || (uVar25 = uVar25 - uVar18, uVar25 == 0)) {
      return (undefined8 *******)1;
    }
  }
  if (uVar16 == 0) {
    uVar21 = (ulong)input_seekable;
    lVar13 = input_offset;
    if (input_seekable == 0) {
      puVar11 = (undefined4 *)func_0x00101a80();
      *puVar11 = 0x1d;
      return (undefined8 *******)uVar21;
    }
code_r0x0010469c:
    if (lVar13 < 0) {
      return (undefined8 *******)0;
    }
  }
  else {
    if (output_offset_7179 == -1) {
      return (undefined8 *******)0;
    }
    if (output_offset_7179 < 0) {
      lVar13 = func_0x00101c10(1,0,1);
      output_offset_7179 = lVar13;
      goto code_r0x0010469c;
    }
    lVar13 = output_offset_7179;
    if (lVar8 != 0) {
      lVar13 = output_offset_7179 + uVar18 + uVar25;
      output_offset_7179 = lVar13;
      goto code_r0x0010469c;
    }
  }
  uVar21 = lVar13 - uVar25;
  if ((lVar8 == 0) && (uVar25 != 0)) {
    if (cVar3 == '\0') {
      uVar21 = uVar21 - uVar18;
      goto code_r0x001046cb;
    }
  }
  else {
    uVar21 = uVar21 - uVar18;
    if (uVar25 != 0) goto code_r0x001046cb;
  }
  uVar25 = 0;
  uVar21 = uVar21 - uVar21 % page_size;
code_r0x001046cb:
  iVar5 = func_0x00101c70((ulong)uVar16,uVar21,uVar25,4);
  return (undefined8 *******)(ulong)(iVar5 != -1);
}

