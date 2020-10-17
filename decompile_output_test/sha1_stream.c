
undefined8 sha1_stream(byte *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 uStack232;
  undefined8 uStack224;
  undefined8 uStack216;
  undefined8 uStack208;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = func_0x00101790(0x8048);
  uVar2 = 1;
  if (lVar1 == 0) {
code_r0x00104c13:
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
    func_0x00101690();
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)PTR_posix_fadvise_0030aed8)();
    return uVar2;
  }
  uStack208 = 0;
  uStack232 = 0xefcdab8967452301;
  uStack224 = 0x1032547698badcfe;
  uStack216 = 0xc3d2e1f0;
  do {
    lVar4 = 0;
code_r0x00104bf0:
    if ((*param_1 & 0x10) != 0) goto code_r0x00104bf6;
    lVar3 = func_0x00101620(lVar1 + lVar4,1,0x8000 - lVar4,param_1);
    lVar4 = lVar4 + lVar3;
    if (lVar4 != 0x8000) break;
    sha1_process_block(lVar1,0x8000,&uStack232);
  } while( true );
  if (lVar3 == 0) {
    if ((*param_1 & 0x20) == 0) {
code_r0x00104bf6:
      if (lVar4 != 0) {
        sha1_process_bytes(lVar1,lVar4,&uStack232);
      }
      sha1_finish_ctx(&uStack232,param_2);
      func_0x001015b0(lVar1);
      uVar2 = 0;
    }
    else {
      func_0x001015b0(lVar1);
      uVar2 = 1;
    }
    goto code_r0x00104c13;
  }
  goto code_r0x00104bf0;
}

