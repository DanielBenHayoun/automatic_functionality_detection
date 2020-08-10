
long alloc_ibuf_part_4(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long in_FS_OFFSET;
  undefined auStack696 [664];
  long lStack32;
  
  uVar3 = page_size;
  lVar4 = input_blocksize;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = func_0x00101d00(input_blocksize + 3 + page_size * 2);
  if (lVar2 == 0) {
    uVar3 = human_readable(lVar4,auStack696,0x1f1,1,1);
    uVar6 = func_0x00101b60(0,&UNK_0010cb10,5);
    nl_error(1,0,uVar6,lVar4,uVar3);
  }
  else {
    uVar5 = lVar2 + 1 + uVar3;
    ibuf = uVar5 - uVar5 % uVar3;
    if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  func_0x00101b90();
  puVar1 = auStack696;
  while( true ) {
    puVar7 = puVar1;
    uVar5 = page_size;
    lVar2 = output_blocksize;
    *(long *)(puVar7 + -8) = lVar4;
    *(ulong *)(puVar7 + -0x10) = uVar3;
    *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)(puVar7 + -0x2c0) = 0x104d14;
    lVar4 = func_0x00101d00((page_size - 1) + output_blocksize);
    if (lVar4 == 0) {
      *(undefined8 *)(puVar7 + -0x2c0) = 0x104d68;
      uVar5 = human_readable(lVar2,puVar7 + -0x2b8,0x1f1,1,1);
      *(undefined8 *)(puVar7 + -0x2c0) = 0x104d7e;
      uVar6 = func_0x00101b60(0,&UNK_0010cb48,5);
      *(undefined8 *)(puVar7 + -0x2c0) = 0x104d95;
      nl_error(1,0,uVar6,lVar2,uVar5);
    }
    else {
      uVar3 = lVar4 + -1 + uVar5;
      obuf = uVar3 - uVar3 % uVar5;
      if (*(long *)(puVar7 + -0x20) == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
    }
    *(undefined8 *)(puVar7 + -0x2c0) = 0x104d9a;
    uVar6 = func_0x00101b90();
    if (obuf != 0) break;
    uVar3 = uVar5;
    puVar1 = puVar7 + -0x2b8;
    lVar4 = lVar2;
    if ((conversions_mask._1_1_ & 8) == 0) {
      if (ibuf == 0) {
        *(undefined8 *)(puVar7 + -0x2c8) = 0x104ddc;
        alloc_ibuf_part_4();
        obuf = ibuf;
        return *(undefined8 *)(puVar7 + -0x2c0);
      }
      obuf = ibuf;
      return ibuf;
    }
  }
  return uVar6;
}

