
ulong skip_via_lseek(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  char cVar10;
  long in_FS_OFFSET;
  undefined auStack152 [8];
  long lStack144;
  long lStack112;
  undefined8 uStack104;
  long lStack96;
  long lStack64;
  long lStack48;
  
  param_2 = param_2 & 0xffffffff;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = func_0x00101c50(param_2,0x80306d02,auStack152);
  uVar8 = (uint)param_2;
  lVar2 = func_0x00101c10(param_2,param_3,param_4 & 0xffffffff);
  if ((-1 < lVar2) && (iVar1 == 0)) {
    param_3 = 0x80306d02;
    uVar8 = (uint)param_2;
    iVar1 = func_0x00101c50(param_2,0x80306d02,&uStack104);
    if ((iVar1 == 0) && ((lStack144 == lStack96 && (lStack112 == lStack64)))) {
      if (status_level != 1) {
        uVar3 = func_0x00101b60(0,&UNK_0010c9f0,5);
        param_3 = 0;
        uVar8 = 0;
        nl_error(0,0,uVar3,param_1,uStack104);
      }
      puVar4 = (undefined4 *)func_0x00101a80();
      lVar2 = -1;
      *puVar4 = 0;
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
  func_0x00101b90();
  if (uVar8 == 0) {
    puVar5 = &i_pending_7166;
    cVar10 = i_nocache_eof;
  }
  else {
    puVar5 = &o_pending_7167;
    cVar10 = o_nocache_eof;
  }
  uVar6 = *puVar5;
  if (param_3 == 0) {
    if ((uVar6 == 0) && (cVar10 == '\0')) {
      return 1;
    }
    uVar9 = 0;
  }
  else {
    uVar6 = uVar6 + param_3;
    uVar9 = (ulong)((uint)uVar6 & 0x1ffff);
    *puVar5 = uVar9;
    if ((uVar6 <= uVar9) || (uVar6 = uVar6 - uVar9, uVar6 == 0)) {
      return 1;
    }
  }
  if (uVar8 == 0) {
    uVar7 = (ulong)input_seekable;
    lVar2 = input_offset;
    if (input_seekable == 0) {
      puVar4 = (undefined4 *)func_0x00101a80();
      *puVar4 = 0x1d;
      return uVar7;
    }
code_r0x0010469c:
    if (lVar2 < 0) {
      return 0;
    }
  }
  else {
    if (output_offset_7179 == -1) {
      return 0;
    }
    if (output_offset_7179 < 0) {
      lVar2 = func_0x00101c10(1,0,1);
      output_offset_7179 = lVar2;
      goto code_r0x0010469c;
    }
    lVar2 = output_offset_7179;
    if (param_3 != 0) {
      lVar2 = output_offset_7179 + uVar9 + uVar6;
      output_offset_7179 = lVar2;
      goto code_r0x0010469c;
    }
  }
  uVar7 = lVar2 - uVar6;
  if ((param_3 == 0) && (uVar6 != 0)) {
    if (cVar10 == '\0') {
      uVar7 = uVar7 - uVar9;
      goto code_r0x001046cb;
    }
  }
  else {
    uVar7 = uVar7 - uVar9;
    if (uVar6 != 0) goto code_r0x001046cb;
  }
  uVar6 = 0;
  uVar7 = uVar7 - uVar7 % page_size;
code_r0x001046cb:
  iVar1 = func_0x00101c70((ulong)uVar8,uVar7,uVar6,4);
  return (ulong)(iVar1 != -1);
}

