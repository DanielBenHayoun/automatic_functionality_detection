
long alloc_obuf(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 in_RAX;
  ulong unaff_RBX;
  long unaff_RBP;
  long in_FS_OFFSET;
  
  while( true ) {
    uVar4 = page_size;
    lVar2 = output_blocksize;
    if (obuf != 0) {
      return in_RAX;
    }
    if ((conversions_mask._1_1_ & 8) == 0) break;
    *(long *)((undefined *)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((undefined *)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((undefined *)register0x00000020 + -0x20) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x2c0) = 0x104d14;
    lVar3 = func_0x00101d00((page_size - 1) + output_blocksize);
    if (lVar3 == 0) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x2c0) = 0x104d68;
      uVar4 = human_readable(lVar2,(undefined *)register0x00000020 + -0x2b8,0x1f1,1,1);
      *(undefined8 *)((undefined *)register0x00000020 + -0x2c0) = 0x104d7e;
      uVar5 = func_0x00101b60(0,&UNK_0010cb48,5);
      *(undefined8 *)((undefined *)register0x00000020 + -0x2c0) = 0x104d95;
      nl_error(1,0,uVar5,lVar2,uVar4);
    }
    else {
      uVar1 = lVar3 + -1 + uVar4;
      obuf = uVar1 - uVar1 % uVar4;
      if (*(long *)((undefined *)register0x00000020 + -0x20) == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x2c0) = 0x104d9a;
    in_RAX = func_0x00101b90();
    unaff_RBX = uVar4;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x2b8);
    unaff_RBP = lVar2;
  }
  if (ibuf != 0) {
    obuf = ibuf;
    return ibuf;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x10) = 0x104ddc;
  alloc_ibuf_part_4();
  obuf = ibuf;
  return *(undefined8 *)((undefined *)register0x00000020 + -8);
}

