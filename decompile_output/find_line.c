
long find_line(ulong param_1)

{
  char cVar1;
  long lVar2;
  ulong extraout_RDX;
  ulong uVar3;
  long lVar4;
  
  if (((head == 0) && ((have_read_eof != '\0' || (cVar1 = load_buffer_part_5(), cVar1 == '\0')))) ||
     (uVar3 = *(ulong *)(head + 0x10), lVar4 = head, param_1 < uVar3)) {
    return 0;
  }
  do {
    if (param_1 < *(long *)(lVar4 + 0x20) + uVar3) {
code_r0x00103e30:
      param_1 = param_1 - uVar3;
      lVar4 = *(long *)(lVar4 + 0x30);
      while (0x4f < param_1) {
        param_1 = param_1 - 0x50;
        lVar4 = *(long *)(lVar4 + 0x518);
      }
      return lVar4 + 0x18 + param_1 * 0x10;
    }
    lVar2 = *(long *)(lVar4 + 0x40);
    if (lVar2 == 0) {
      if (have_read_eof != '\0') {
        return 0;
      }
      cVar1 = load_buffer_part_5();
      if (cVar1 == '\0') {
        return 0;
      }
      lVar2 = *(long *)(lVar4 + 0x40);
      if (lVar2 == 0) {
        func_0x00101c90(&UNK_00116012,&UNK_00116005,0x26a,__PRETTY_FUNCTION___7224);
        uVar3 = extraout_RDX;
        goto code_r0x00103e30;
      }
    }
    uVar3 = *(ulong *)(lVar2 + 0x10);
    lVar4 = lVar2;
  } while( true );
}

