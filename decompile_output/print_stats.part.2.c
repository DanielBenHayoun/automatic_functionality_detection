
/* WARNING: Removing unreachable block (ram,0x00103fd9) */
/* WARNING: Removing unreachable block (ram,0x00104110) */
/* WARNING: Removing unreachable block (ram,0x00103fee) */
/* WARNING: Removing unreachable block (ram,0x00103f44) */
/* WARNING: Removing unreachable block (ram,0x00103f48) */
/* WARNING: Removing unreachable block (ram,0x001040d8) */
/* WARNING: Removing unreachable block (ram,0x00103f56) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *******
print_stats_part_2(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  undefined4 *puVar12;
  uint *puVar13;
  long lVar14;
  ulong *puVar15;
  undefined8 uVar16;
  undefined8 *******pppppppuVar17;
  undefined8 extraout_RDX;
  undefined *extraout_RDX_00;
  long extraout_RDX_01;
  uint uVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *******pppppppuVar23;
  undefined8 *******pppppppuVar24;
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
  undefined *puStack64;
  undefined8 uStack56;
  undefined *puStack48;
  
  bVar28 = 0;
  if (0 < progress_len) {
    puVar8 = *(undefined **)(stderr + 0x28);
    if (puVar8 < *(undefined **)(stderr + 0x30)) {
      *(undefined **)(stderr + 0x28) = puVar8 + 1;
      *puVar8 = 10;
    }
    else {
      puStack48 = &UNK_0010488a;
      func_0x00101be0(stderr,10);
    }
    progress_len = 0;
  }
  uStack56 = w_partial;
  uVar2 = w_full;
  uVar1 = r_partial;
  uVar10 = r_full;
  puStack48 = &UNK_001047dd;
  uVar16 = func_0x00101b60(0,&UNK_0010ca68,5);
  puStack64 = &UNK_00104802;
  func_0x00101e30(stderr,1,uVar16,uVar10,uVar1,uVar2);
  lVar9 = r_truncate;
  uVar10 = uStack56;
  if (r_truncate != 0) {
    puStack48 = &UNK_0010485e;
    uVar10 = func_0x00101dd0(0,&UNK_0010c6b1,&UNK_0010c69a,r_truncate,5);
    puStack48 = &UNK_00104877;
    uVar10 = func_0x00101e30(stderr,1,uVar10,lVar9);
  }
  if (status_level == 2) {
    return (undefined8 *******)uVar10;
  }
  puStack64 = *(undefined **)(in_FS_OFFSET + 0x28);
  puStack2080 = &UNK_00104035;
  lVar9 = gethrxtime();
  puStack2080 = &UNK_00103e07;
  puVar8 = (undefined *)human_readable(w_bytes,auStack2056,0x1d1,1,1);
  puStack2080 = &UNK_00103e2d;
  puStack2608 = (undefined *)human_readable(w_bytes,auStack1402,0x1f1,1,1);
  if (start_time < lVar9) {
    uVar25 = lVar9 - start_time;
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
    lVar9 = func_0x00101b80(puStack2232);
    puStack2232[lVar9 + 2] = 0;
    *(undefined2 *)(puStack2232 + lVar9) = 0x732f;
    dVar29 = dStack2064;
  }
  else {
    puStack2232 = auStack748;
    puStack2080 = &UNK_00103fa2;
    uVar10 = func_0x00101b60(0,&UNK_0010c610,5);
    puStack2080 = &UNK_00103fc5;
    func_0x00101a40(puStack2232,0x28e,1,0x28e,&UNK_0010c619,uVar10);
    dVar29 = 0.00000000;
  }
  puStack2080 = &UNK_00103ed3;
  func_0x00101a40(dVar29,auStack88,0x18,1,0x18,&UNK_0010c60b);
  puStack2080 = &UNK_00103edb;
  lVar9 = func_0x00101b80(puVar8);
  puStack2336 = w_bytes;
  if (puVar8[lVar9 + -2] == ' ') {
    puStack2080 = &UNK_00104085;
    uVar10 = func_0x00101dd0(0,&UNK_0010c639,&UNK_0010c620,w_bytes,5);
    uVar25 = 1;
    puStack2080 = &UNK_001040a4;
    puStack2248 = puStack2336;
    puStack2240 = auStack88;
    uVar5 = func_0x00101e30(stderr,1,uVar10);
  }
  else {
    puStack2080 = &UNK_00103eef;
    lVar9 = func_0x00101b80(puStack2608);
    puStack2248 = w_bytes;
    if (puStack2608[lVar9 + -2] == ' ') {
      puStack2080 = &UNK_0010404e;
      uVar10 = func_0x00101b60(0,&UNK_0010c651,5);
      puVar3 = auStack88;
      puStack2088 = puStack2232;
    }
    else {
      puStack2080 = &UNK_00103f15;
      uVar10 = func_0x00101b60(0,&UNK_0010c988,5);
      puVar3 = puStack2608;
      puStack2088 = auStack88;
      puStack2080 = puStack2232;
    }
    puStack2232 = puVar3;
    uVar25 = 1;
    puStack2096 = &UNK_00103f37;
    puStack2240 = puVar8;
    uVar5 = func_0x00101e30(stderr,1,uVar10);
    puStack2336 = puVar8;
  }
  uVar22 = stderr;
  uVar21 = (ulong)uVar5;
  puVar8 = *(undefined **)(stderr + 0x28);
  if (puVar8 < *(undefined **)(stderr + 0x30)) {
    *(undefined **)(stderr + 0x28) = puVar8 + 1;
    *puVar8 = 10;
  }
  else {
    uVar25 = 10;
    puStack2080 = &UNK_0010410a;
    func_0x00101be0();
  }
  if (puStack64 == (undefined *)*(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)0x0;
  }
  puStack2080 = &UNK_00104137;
  cVar4 = func_0x00101b90();
  puStack2080 = (undefined *)0x0;
  pppppppuStack2344 = (undefined8 *******)(uVar25 & 0xffffffff);
  pppppppuStack2352 = (undefined8 *******)(uVar22 & 0xffffffff);
  if (cVar4 != '\0') {
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
  uVar10 = extraout_RDX;
  puStack2088 = (undefined *)uVar21;
  if (0 < progress_len) {
    puVar8 = *(undefined **)(stderr + 0x28);
    if (puVar8 < *(undefined **)(stderr + 0x30)) {
      *(undefined **)(stderr + 0x28) = puVar8 + 1;
      *puVar8 = 10;
      uVar10 = extraout_RDX;
    }
    else {
      puStack2328 = &UNK_0010423f;
      uStack2312 = extraout_RDX;
      func_0x00101be0();
      uVar10 = uStack2312;
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
  verror(pppppppuStack2352,pppppppuStack2344,uVar10,&uStack2304);
  if (lStack2280 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)0x0;
  }
  puStack2328 = &UNK_0010424b;
  func_0x00101b90();
  pppppppuVar17 = &pppppppuStack2384;
  pppppppuVar20 = &pppppppuStack2376;
  uStack2368 = *(ulong *)(in_FS_OFFSET + 0x28);
  puStack2400 = &UNK_0010428b;
  pppppppuVar24 = pppppppuStack2416;
  puStack2328 = puStack2608;
  iVar6 = xstrtoumax();
  if (iVar6 == 2) {
    pppppppuVar24 = pppppppuStack2376;
    if (*(char *)pppppppuStack2376 != 'x') goto code_r0x001042ca;
    pppppppuVar24 = (undefined8 *******)((long)pppppppuStack2376 + 1);
    puStack2400 = &UNK_001042e4;
    pppppppuVar20 = pppppppuStack2616;
    uVar25 = parse_integer();
    pppppppuVar11 = pppppppuStack2384;
    if ((uVar25 == 0) ||
       (pppppppuVar11 = (undefined8 *******)(((long)pppppppuStack2384 * uVar25) / uVar25),
       pppppppuVar17 = pppppppuStack2384, pppppppuStack2384 == pppppppuVar11)) {
      bVar26 = false;
      bVar27 = pppppppuVar11 == (undefined8 *******)0x0;
      if (bVar27) {
        pppppppuStack2616 = (undefined8 *******)&UNK_0010c682;
        pppppppuVar17 = (undefined8 *******)0x2;
        pppppppuVar19 = pppppppuStack2416;
        pppppppuVar23 = (undefined8 *******)&UNK_0010c682;
        do {
          pppppppuVar20 = pppppppuVar19;
          pppppppuVar24 = pppppppuVar23;
          if (pppppppuVar17 == (undefined8 *******)0x0) break;
          pppppppuVar17 = (undefined8 *******)((long)pppppppuVar17 + -1);
          pppppppuVar24 = (undefined8 *******)((long)pppppppuVar23 + (ulong)bVar28 * -2 + 1);
          pppppppuVar20 = (undefined8 *******)((long)pppppppuVar19 + (ulong)bVar28 * -2 + 1);
          bVar26 = *(byte *)pppppppuVar19 < *(byte *)pppppppuVar23;
          bVar27 = *(char *)pppppppuVar19 == *(char *)pppppppuVar23;
          pppppppuVar19 = pppppppuVar20;
          pppppppuVar23 = pppppppuVar24;
        } while (bVar27);
        if ((!bVar26 && !bVar27) == bVar26) {
          puStack2400 = &UNK_00104352;
          puStack2608 = (undefined *)quote_n(1,&UNK_0010c681);
          puStack2400 = &UNK_0010435f;
          pppppppuStack2416 = (undefined8 *******)quote_n(0,&UNK_0010c682);
          puStack2400 = &UNK_00104375;
          uVar10 = func_0x00101b60(0,&UNK_0010c9b0,5);
          pppppppuVar20 = (undefined8 *******)0x0;
          pppppppuVar24 = (undefined8 *******)0x0;
          puStack2400 = &UNK_00104389;
          pppppppuVar17 = pppppppuStack2416;
          nl_error(0,0,uVar10,pppppppuStack2416,puStack2608);
          pppppppuVar11 = pppppppuStack2384;
        }
      }
      pppppppuVar11 = (undefined8 *******)((long)pppppppuVar11 * uVar25);
    }
    else {
      *(int *)pppppppuStack2616 = 1;
      pppppppuVar11 = (undefined8 *******)0x0;
    }
  }
  else {
    pppppppuVar11 = pppppppuStack2384;
    if (iVar6 != 0) {
code_r0x001042ca:
      *(int *)pppppppuStack2616 = iVar6;
      pppppppuVar11 = (undefined8 *******)0x0;
    }
  }
  uStack2424 = uStack2368 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uStack2424 == 0) {
    return pppppppuVar11;
  }
  puStack2400 = &UNK_00104395;
  func_0x00101b90();
  uVar5 = (uint)pppppppuVar17;
  lStack2440 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = (uint)pppppppuVar20 & 0xfffdfeff;
  uStack2632 = (ulong)uVar18;
  pppppppuStack2624 = pppppppuStack2416;
  pppppppuStack2408 = pppppppuStack2616;
  puStack2400 = puStack2608;
  if (((ulong)pppppppuVar20 & 0xfffdfeff) != 0) {
    pppppppuVar20 = (undefined8 *******)0x3;
    pppppppuStack2624 = (undefined8 *******)((ulong)pppppppuVar24 & 0xffffffff);
    pcStack2600 = (code *)&UNK_001043fe;
    uVar7 = rpl_fcntl();
    uVar5 = (uint)pppppppuVar17;
    uVar18 = uVar18 | uVar7;
    uStack2632 = (ulong)uVar18;
    pppppppuStack2616 = (undefined8 *******)(ulong)uVar7;
    puStack2608 = extraout_RDX_00;
    if ((int)uVar7 < 0) goto code_r0x00104458;
    if (uVar7 != uVar18) {
      if ((uVar18 & 0x10000) != 0) {
        pppppppuVar24 = (undefined8 *******)0x1;
        pcStack2600 = (code *)&UNK_00104439;
        pppppppuVar20 = pppppppuStack2624;
        iVar6 = func_0x00101d30(1,pppppppuStack2624,auStack2592);
        if (iVar6 != 0) goto code_r0x00104458;
        if ((uStack2568 & 0xf000) == 0x4000) goto code_r0x00104497;
        pcStack2600 = (code *)&UNK_00104452;
        puVar12 = (undefined4 *)func_0x00101a80();
        *puVar12 = 0x14;
        goto code_r0x00104458;
      }
      do {
        uVar5 = (uint)pppppppuVar17;
        pppppppuVar20 = (undefined8 *******)0x4;
        pppppppuVar24 = (undefined8 *******)((ulong)pppppppuStack2624 & 0xffffffff);
        pcStack2600 = (code *)&UNK_00104423;
        iVar6 = rpl_fcntl(pppppppuVar24,4,uStack2632);
        if (iVar6 != -1) break;
code_r0x00104458:
        pcStack2600 = (code *)&UNK_00104465;
        pppppppuStack2624 = (undefined8 *******)quotearg_style(4,extraout_RDX_00);
        pcStack2600 = (code *)&UNK_0010447b;
        uVar10 = func_0x00101b60(0,&UNK_0010c685,5);
        uVar18 = (uint)uVar10;
        pcStack2600 = (code *)&UNK_00104483;
        puVar13 = (uint *)func_0x00101a80();
        pppppppuVar20 = (undefined8 *******)(ulong)*puVar13;
        pppppppuVar24 = (undefined8 *******)0x1;
        pcStack2600 = (code *)&UNK_00104497;
        pppppppuVar17 = pppppppuStack2624;
        nl_error(1,pppppppuVar20,uVar10);
code_r0x00104497:
        uVar5 = (uint)pppppppuVar17;
        uStack2632 = (ulong)(uVar18 & 0xfffeffff);
      } while ((uVar18 & 0xfffeffff) != uVar7);
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
  iVar6 = func_0x00101c50(uVar25,0x80306d02,auStack2744);
  lVar9 = extraout_RDX_01;
  uVar18 = (uint)uVar25;
  lVar14 = func_0x00101c10(uVar25,extraout_RDX_01,(ulong)uVar5);
  if ((-1 < lVar14) && (iVar6 == 0)) {
    lVar9 = 0x80306d02;
    uVar18 = (uint)uVar25;
    iVar6 = func_0x00101c50(uVar25,0x80306d02,&uStack2696);
    if ((iVar6 == 0) && ((lStack2736 == lStack2688 && (lStack2704 == lStack2656)))) {
      if (status_level != 1) {
        uVar10 = func_0x00101b60(0,&UNK_0010c9f0,5);
        lVar9 = 0;
        uVar18 = 0;
        nl_error(0,0,uVar10,pppppppuVar24,uStack2696);
      }
      puVar12 = (undefined4 *)func_0x00101a80();
      lVar14 = -1;
      *puVar12 = 0;
    }
  }
  if (lStack2640 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *******)lVar14;
  }
  func_0x00101b90();
  if (uVar18 == 0) {
    puVar15 = &i_pending_7166;
    cVar4 = i_nocache_eof;
  }
  else {
    puVar15 = &o_pending_7167;
    cVar4 = o_nocache_eof;
  }
  uVar25 = *puVar15;
  if (lVar9 == 0) {
    if ((uVar25 == 0) && (cVar4 == '\0')) {
      return (undefined8 *******)1;
    }
    uVar22 = 0;
  }
  else {
    uVar25 = uVar25 + lVar9;
    uVar22 = (ulong)((uint)uVar25 & 0x1ffff);
    *puVar15 = uVar22;
    if ((uVar25 <= uVar22) || (uVar25 = uVar25 - uVar22, uVar25 == 0)) {
      return (undefined8 *******)1;
    }
  }
  if (uVar18 == 0) {
    uVar21 = (ulong)input_seekable;
    lVar14 = input_offset;
    if (input_seekable == 0) {
      puVar12 = (undefined4 *)func_0x00101a80();
      *puVar12 = 0x1d;
      return (undefined8 *******)uVar21;
    }
code_r0x0010469c:
    if (lVar14 < 0) {
      return (undefined8 *******)0;
    }
  }
  else {
    if (output_offset_7179 == -1) {
      return (undefined8 *******)0;
    }
    if (output_offset_7179 < 0) {
      lVar14 = func_0x00101c10(1,0,1);
      output_offset_7179 = lVar14;
      goto code_r0x0010469c;
    }
    lVar14 = output_offset_7179;
    if (lVar9 != 0) {
      lVar14 = output_offset_7179 + uVar22 + uVar25;
      output_offset_7179 = lVar14;
      goto code_r0x0010469c;
    }
  }
  uVar21 = lVar14 - uVar25;
  if ((lVar9 == 0) && (uVar25 != 0)) {
    if (cVar4 == '\0') {
      uVar21 = uVar21 - uVar22;
      goto code_r0x001046cb;
    }
  }
  else {
    uVar21 = uVar21 - uVar22;
    if (uVar25 != 0) goto code_r0x001046cb;
  }
  uVar25 = 0;
  uVar21 = uVar21 - uVar21 % page_size;
code_r0x001046cb:
  iVar6 = func_0x00101c70((ulong)uVar18,uVar21,uVar25,4);
  return (undefined8 *******)(ulong)(iVar6 != -1);
}

