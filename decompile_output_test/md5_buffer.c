
undefined8 md5_buffer(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined4 uStack408;
  long lStack264;
  undefined8 *puStack248;
  undefined8 uStack240;
  undefined8 uStack200;
  undefined8 uStack192;
  undefined8 uStack184;
  undefined4 uStack176;
  long lStack32;
  
  puVar6 = &uStack200;
  puStack248 = &uStack200;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  uStack184 = 0;
  uStack200 = 0xefcdab8967452301;
  uStack192 = 0x1032547698badcfe;
  uStack176 = 0;
  md5_process_bytes(param_1,param_2,&uStack200);
  uVar1 = param_3;
  uVar2 = md5_finish_ctx(&uStack200,param_3);
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
  func_0x00101690();
  lStack264 = *(long *)(in_FS_OFFSET + 0x28);
  uStack240 = param_3;
  lVar3 = func_0x00101790(0x8048);
  uVar2 = 1;
  if (lVar3 == 0) {
code_r0x001040eb:
    if (lStack264 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
    func_0x00101690();
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)PTR_posix_fadvise_00309ed8)();
    return uVar1;
  }
  uStack416 = 0;
  uStack408 = 0;
  uStack432 = 0xefcdab8967452301;
  uStack424 = 0x1032547698badcfe;
  do {
    lVar5 = 0;
code_r0x001040c8:
    if ((*(byte *)puVar6 & 0x10) != 0) goto code_r0x001040ce;
    lVar4 = func_0x00101620(lVar3 + lVar5,1,0x8000 - lVar5,puVar6);
    lVar5 = lVar5 + lVar4;
    if (lVar5 != 0x8000) break;
    md5_process_block(lVar3,0x8000,&uStack432);
  } while( true );
  if (lVar4 == 0) {
    if ((*(byte *)puVar6 & 0x20) == 0) {
code_r0x001040ce:
      if (lVar5 != 0) {
        md5_process_bytes(lVar3,lVar5,&uStack432);
      }
      md5_finish_ctx(&uStack432,uVar1);
      func_0x001015b0(lVar3);
      uVar2 = 0;
    }
    else {
      func_0x001015b0(lVar3);
      uVar2 = 1;
    }
    goto code_r0x001040eb;
  }
  goto code_r0x001040c8;
}

