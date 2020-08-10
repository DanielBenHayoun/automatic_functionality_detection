
undefined8 sha1_buffer(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 uStack432;
  undefined8 uStack424;
  undefined8 uStack416;
  undefined8 uStack408;
  long lStack264;
  undefined8 *puStack248;
  undefined8 uStack240;
  undefined8 uStack200;
  undefined8 uStack192;
  undefined8 uStack184;
  undefined8 uStack176;
  long lStack32;
  
  puVar6 = &uStack200;
  puStack248 = &uStack200;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  uStack176 = 0;
  uStack200 = 0xefcdab8967452301;
  uStack192 = 0x1032547698badcfe;
  uStack184 = 0xc3d2e1f0;
  sha1_process_bytes(param_1,param_2,&uStack200);
  uVar1 = param_3;
  uVar2 = sha1_finish_ctx(&uStack200,param_3);
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  func_0x00101690();
  lStack264 = *(long *)(in_FS_OFFSET + 0x28);
  uStack240 = param_3;
  lVar3 = func_0x00101790(0x8048);
  uVar2 = 1;
  if (lVar3 == 0) {
code_r0x00104c13:
    if (lStack264 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
    func_0x00101690();
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_posix_fadvise_0030aed8)();
    return uVar1;
  }
  uStack408 = 0;
  uStack432 = 0xefcdab8967452301;
  uStack424 = 0x1032547698badcfe;
  uStack416 = 0xc3d2e1f0;
  do {
    lVar5 = 0;
code_r0x00104bf0:
    if ((*(byte *)puVar6 & 0x10) != 0) goto code_r0x00104bf6;
    lVar4 = func_0x00101620(lVar3 + lVar5,1,0x8000 - lVar5,puVar6);
    lVar5 = lVar5 + lVar4;
    if (lVar5 != 0x8000) break;
    sha1_process_block(lVar3,0x8000,&uStack432);
  } while( true );
  if (lVar4 == 0) {
    if ((*(byte *)puVar6 & 0x20) == 0) {
code_r0x00104bf6:
      if (lVar5 != 0) {
        sha1_process_bytes(lVar3,lVar5,&uStack432);
      }
      sha1_finish_ctx(&uStack432,uVar1);
      func_0x001015b0(lVar3);
      uVar2 = 0;
    }
    else {
      func_0x001015b0(lVar3);
      uVar2 = 1;
    }
    goto code_r0x00104c13;
  }
  goto code_r0x00104bf0;
}

