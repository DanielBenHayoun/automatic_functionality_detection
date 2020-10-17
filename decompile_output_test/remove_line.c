
long * remove_line(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  
  lVar5 = prev_buf_7217;
  if (prev_buf_7217 != 0) {
    free_buffer_isra_4(prev_buf_7217 + 0x28,prev_buf_7217 + 0x30);
    func_0x00101b00(lVar5);
    prev_buf_7217 = 0;
  }
  if ((head == 0) && ((have_read_eof != '\0' || (cVar6 = load_buffer_part_5(), cVar6 == '\0')))) {
    return (long *)0;
  }
  lVar5 = head;
  uVar2 = *(ulong *)(head + 0x18);
  if (current_line < uVar2) {
    current_line = uVar2;
  }
  plVar3 = *(long **)(head + 0x38);
  *(long *)(head + 0x18) = uVar2 + 1;
  lVar1 = plVar3[2] + 1;
  plVar3[2] = lVar1;
  if (*plVar3 == lVar1) {
    plVar4 = (long *)plVar3[0xa3];
    *(long **)(lVar5 + 0x38) = plVar4;
    if ((plVar4 == (long *)0x0) || (*plVar4 == 0)) {
      prev_buf_7217 = lVar5;
      head = *(undefined8 *)(lVar5 + 0x40);
      return plVar3 + lVar1 * 2 + 1;
    }
  }
  return plVar3 + lVar1 * 2 + 1;
}

