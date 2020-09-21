
void fd_ring_clear(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  
  while( true ) {
    cVar1 = i_ring_empty(param_1);
    if (cVar1 != '\0') break;
    uVar2 = i_ring_pop(param_1);
    if (-1 < (int)uVar2) {
      func_0x00101b70((ulong)uVar2);
    }
  }
  return;
}

