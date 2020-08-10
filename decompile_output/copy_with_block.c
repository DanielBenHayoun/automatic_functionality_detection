
void copy_with_block(char *param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    return;
  }
  pcVar2 = param_1 + param_2;
  do {
    while (uVar3 = col, *param_1 != newline_character) {
      if (conversion_blocksize == col) {
        r_truncate = r_truncate + 1;
      }
      else {
        if (col < conversion_blocksize) {
          uVar1 = oc + 1;
          bVar4 = output_blocksize <= uVar1;
          *(char *)(obuf + oc) = *param_1;
          oc = uVar1;
          if (bVar4) {
            write_output();
            uVar3 = col;
          }
        }
      }
      param_1 = param_1 + 1;
      col = uVar3 + 1;
      if (pcVar2 == param_1) {
        return;
      }
    }
    if (col < conversion_blocksize) {
      do {
        uVar1 = oc + 1;
        bVar4 = output_blocksize <= uVar1;
        *(undefined *)(obuf + oc) = space_character;
        oc = uVar1;
        if (bVar4) {
          write_output();
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < conversion_blocksize);
    }
    param_1 = param_1 + 1;
    col = 0;
  } while (pcVar2 != param_1);
  col = 0;
  return;
}

