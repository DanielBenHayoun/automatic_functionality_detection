
long alloc_obuf_part_5(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong unaff_RBX;
  undefined *puVar7;
  long unaff_RBP;
  long in_FS_OFFSET;
  
  puVar3 = (undefined *)register0x00000020;
  while( true ) {
    puVar7 = puVar3;
    uVar5 = page_size;
    lVar2 = output_blocksize;
    *(long *)(puVar7 + -8) = unaff_RBP;
    *(ulong *)(puVar7 + -0x10) = unaff_RBX;
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
      uVar1 = lVar4 + -1 + uVar5;
      obuf = uVar1 - uVar1 % uVar5;
      if (*(long *)(puVar7 + -0x20) == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
    }
    *(undefined8 *)(puVar7 + -0x2c0) = 0x104d9a;
    uVar6 = func_0x00101b90();
    if (obuf != 0) break;
    unaff_RBX = uVar5;
    puVar3 = puVar7 + -0x2b8;
    unaff_RBP = lVar2;
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

