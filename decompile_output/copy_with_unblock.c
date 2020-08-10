
void copy_with_unblock(long param_1,ulong param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    return;
  }
  uVar5 = 0;
  do {
    bVar6 = col < conversion_blocksize;
    cVar2 = *(char *)(param_1 + uVar5);
    col = col + 1;
    if (bVar6) {
      uVar4 = oc;
      lVar3 = obuf;
      uVar1 = output_blocksize;
      if (space_character == cVar2) {
        pending_spaces_7443 = pending_spaces_7443 + 1;
      }
      else {
        while (pending_spaces_7443 != 0) {
          oc = uVar4 + 1;
          *(char *)(lVar3 + uVar4) = space_character;
          if (uVar1 <= oc) {
            write_output();
            uVar1 = output_blocksize;
            lVar3 = obuf;
          }
          pending_spaces_7443 = pending_spaces_7443 + -1;
          uVar4 = oc;
        }
        oc = uVar4 + 1;
        *(char *)(lVar3 + uVar4) = cVar2;
        if (uVar1 <= oc) goto code_r0x00105d73;
      }
    }
    else {
      uVar5 = uVar5 - 1;
      pending_spaces_7443 = 0;
      col = 0;
      uVar1 = oc + 1;
      bVar6 = output_blocksize <= uVar1;
      *(undefined *)(obuf + oc) = newline_character;
      oc = uVar1;
      if (bVar6) {
code_r0x00105d73:
        write_output();
      }
    }
    uVar5 = uVar5 + 1;
    if (param_2 <= uVar5) {
      return;
    }
  } while( true );
}

