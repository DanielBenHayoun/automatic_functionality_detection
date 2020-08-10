
ulong set_fd_flags(ulong param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong *puVar7;
  uint uVar8;
  long extraout_RDX;
  uint uVar9;
  ulong uVar10;
  ulong unaff_RBP;
  long lVar11;
  ulong uVar12;
  ulong unaff_R12;
  undefined8 unaff_R13;
  ulong uVar13;
  char cVar14;
  long in_FS_OFFSET;
  undefined auStack352 [8];
  long lStack344;
  long lStack312;
  undefined8 uStack304;
  long lStack296;
  long lStack264;
  long lStack248;
  ulong uStack240;
  ulong uStack232;
  ulong uStack224;
  undefined8 uStack216;
  undefined auStack200 [24];
  uint uStack176;
  long lStack48;
  
  uVar8 = (uint)param_4;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)param_2 & 0xfffdfeff;
  uStack240 = (ulong)uVar9;
  uStack216 = unaff_R13;
  if ((param_2 & 0xfffdfeff) != 0) {
    param_2 = 3;
    unaff_RBP = param_1 & 0xffffffff;
    uVar1 = rpl_fcntl();
    uVar8 = (uint)param_4;
    uVar9 = uVar9 | uVar1;
    uStack240 = (ulong)uVar9;
    unaff_R12 = (ulong)uVar1;
    uStack216 = param_3;
    if ((int)uVar1 < 0) goto code_r0x00104458;
    if (uVar1 != uVar9) {
      if ((uVar9 & 0x10000) != 0) {
        param_1 = 1;
        param_2 = unaff_RBP;
        iVar2 = func_0x00101d30(1,unaff_RBP,auStack200);
        if (iVar2 != 0) goto code_r0x00104458;
        if ((uStack176 & 0xf000) == 0x4000) goto code_r0x00104497;
        puVar3 = (undefined4 *)func_0x00101a80();
        *puVar3 = 0x14;
        goto code_r0x00104458;
      }
      do {
        uVar8 = (uint)param_4;
        param_2 = 4;
        param_1 = unaff_RBP & 0xffffffff;
        iVar2 = rpl_fcntl(param_1,4,uStack240);
        if (iVar2 != -1) break;
code_r0x00104458:
        unaff_RBP = quotearg_style(4,param_3);
        uVar6 = func_0x00101b60(0,&UNK_0010c685,5);
        uVar9 = (uint)uVar6;
        puVar4 = (uint *)func_0x00101a80();
        param_2 = (ulong)*puVar4;
        param_1 = 1;
        param_4 = unaff_RBP;
        nl_error(1,param_2,uVar6);
code_r0x00104497:
        uVar8 = (uint)param_4;
        uStack240 = (ulong)(uVar9 & 0xfffeffff);
      } while ((uVar9 & 0xfffeffff) != uVar1);
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x00101b90();
  param_2 = param_2 & 0xffffffff;
  lStack248 = *(long *)(in_FS_OFFSET + 0x28);
  uStack232 = unaff_RBP;
  uStack224 = unaff_R12;
  iVar2 = func_0x00101c50(param_2,0x80306d02,auStack352);
  lVar11 = extraout_RDX;
  uVar9 = (uint)param_2;
  lVar5 = func_0x00101c10(param_2,extraout_RDX,(ulong)uVar8);
  if ((-1 < lVar5) && (iVar2 == 0)) {
    lVar11 = 0x80306d02;
    uVar9 = (uint)param_2;
    iVar2 = func_0x00101c50(param_2,0x80306d02,&uStack304);
    if ((iVar2 == 0) && ((lStack344 == lStack296 && (lStack312 == lStack264)))) {
      if (status_level != 1) {
        uVar6 = func_0x00101b60(0,&UNK_0010c9f0,5);
        lVar11 = 0;
        uVar9 = 0;
        nl_error(0,0,uVar6,param_1,uStack304);
      }
      puVar3 = (undefined4 *)func_0x00101a80();
      lVar5 = -1;
      *puVar3 = 0;
    }
  }
  if (lStack248 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
  func_0x00101b90();
  if (uVar9 == 0) {
    puVar7 = &i_pending_7166;
    cVar14 = i_nocache_eof;
  }
  else {
    puVar7 = &o_pending_7167;
    cVar14 = o_nocache_eof;
  }
  uVar10 = *puVar7;
  if (lVar11 == 0) {
    if ((uVar10 == 0) && (cVar14 == '\0')) {
      return 1;
    }
    uVar13 = 0;
  }
  else {
    uVar10 = uVar10 + lVar11;
    uVar13 = (ulong)((uint)uVar10 & 0x1ffff);
    *puVar7 = uVar13;
    if ((uVar10 <= uVar13) || (uVar10 = uVar10 - uVar13, uVar10 == 0)) {
      return 1;
    }
  }
  if (uVar9 == 0) {
    uVar12 = (ulong)input_seekable;
    lVar5 = input_offset;
    if (input_seekable == 0) {
      puVar3 = (undefined4 *)func_0x00101a80();
      *puVar3 = 0x1d;
      return uVar12;
    }
code_r0x0010469c:
    if (lVar5 < 0) {
      return 0;
    }
  }
  else {
    if (output_offset_7179 == -1) {
      return 0;
    }
    if (output_offset_7179 < 0) {
      lVar5 = func_0x00101c10(1,0,1);
      output_offset_7179 = lVar5;
      goto code_r0x0010469c;
    }
    lVar5 = output_offset_7179;
    if (lVar11 != 0) {
      lVar5 = output_offset_7179 + uVar13 + uVar10;
      output_offset_7179 = lVar5;
      goto code_r0x0010469c;
    }
  }
  uVar12 = lVar5 - uVar10;
  if ((lVar11 == 0) && (uVar10 != 0)) {
    if (cVar14 == '\0') {
      uVar12 = uVar12 - uVar13;
      goto code_r0x001046cb;
    }
  }
  else {
    uVar12 = uVar12 - uVar13;
    if (uVar10 != 0) goto code_r0x001046cb;
  }
  uVar10 = 0;
  uVar12 = uVar12 - uVar12 % page_size;
code_r0x001046cb:
  iVar2 = func_0x00101c70((ulong)uVar9,uVar12,uVar10,4);
  return (ulong)(iVar2 != -1);
}

