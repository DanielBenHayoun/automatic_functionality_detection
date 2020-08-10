
ulong invalidate_cache(uint param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char cVar8;
  
  if (param_1 == 0) {
    puVar2 = &i_pending_7166;
    cVar8 = i_nocache_eof;
  }
  else {
    puVar2 = &o_pending_7167;
    cVar8 = o_nocache_eof;
  }
  uVar4 = *puVar2;
  if (param_2 == 0) {
    if ((uVar4 == 0) && (cVar8 == '\0')) {
      return 1;
    }
    uVar7 = 0;
  }
  else {
    uVar4 = uVar4 + param_2;
    uVar7 = (ulong)((uint)uVar4 & 0x1ffff);
    *puVar2 = uVar7;
    if ((uVar4 <= uVar7) || (uVar4 = uVar4 - uVar7, uVar4 == 0)) {
      return 1;
    }
  }
  if (param_1 == 0) {
    uVar6 = (ulong)input_seekable;
    lVar5 = input_offset;
    if (input_seekable == 0) {
      puVar3 = (undefined4 *)func_0x00101a80();
      *puVar3 = 0x1d;
      return uVar6;
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
    if (param_2 != 0) {
      lVar5 = output_offset_7179 + uVar7 + uVar4;
      output_offset_7179 = lVar5;
      goto code_r0x0010469c;
    }
  }
  uVar6 = lVar5 - uVar4;
  if ((param_2 == 0) && (uVar4 != 0)) {
    if (cVar8 == '\0') {
      uVar6 = uVar6 - uVar7;
      goto code_r0x001046cb;
    }
  }
  else {
    uVar6 = uVar6 - uVar7;
    if (uVar4 != 0) goto code_r0x001046cb;
  }
  uVar4 = 0;
  uVar6 = uVar6 - uVar6 % page_size;
code_r0x001046cb:
  iVar1 = func_0x00101c70((ulong)param_1,uVar6,uVar4,4);
  return (ulong)(iVar1 != -1);
}

