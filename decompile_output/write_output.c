
void write_output(void)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  char *pcVar7;
  bool bVar8;
  
  uVar2 = iwrite_constprop_7(obuf,output_blocksize);
  w_bytes = w_bytes + uVar2;
  if (output_blocksize == uVar2) {
    w_full = w_full + 1;
    oc = 0;
    return;
  }
  uVar3 = quotearg_style(4,output_file);
  uVar4 = func_0x00101b60(0,&UNK_0010c7e7,5);
  puVar5 = (uint *)func_0x00101a80();
  uVar6 = (ulong)*puVar5;
  nl_error(0,uVar6,uVar4,uVar3);
  if (uVar2 != 0) {
    w_partial = w_partial + 1;
  }
  finish_up();
  pcVar7 = (char *)0x1;
  func_0x00101e10();
  if (uVar6 != 0) {
    pcVar1 = pcVar7 + uVar6;
    do {
      while (uVar2 = col, *pcVar7 != newline_character) {
        if (conversion_blocksize == col) {
          r_truncate = r_truncate + 1;
        }
        else {
          if (col < conversion_blocksize) {
            uVar6 = oc + 1;
            bVar8 = output_blocksize <= uVar6;
            *(char *)(obuf + oc) = *pcVar7;
            oc = uVar6;
            if (bVar8) {
              write_output();
              uVar2 = col;
            }
          }
        }
        pcVar7 = pcVar7 + 1;
        col = uVar2 + 1;
        if (pcVar1 == pcVar7) {
          return;
        }
      }
      if (col < conversion_blocksize) {
        do {
          uVar6 = oc + 1;
          bVar8 = output_blocksize <= uVar6;
          *(undefined *)(obuf + oc) = space_character;
          oc = uVar6;
          if (bVar8) {
            write_output();
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < conversion_blocksize);
      }
      pcVar7 = pcVar7 + 1;
      col = 0;
    } while (pcVar1 != pcVar7);
    col = 0;
    return;
  }
  return;
}

