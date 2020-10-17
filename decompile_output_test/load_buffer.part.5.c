
long * load_buffer_part_5(void)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  uVar11 = 0x1fff;
  if (0x1ffe < hold_count) {
    uVar11 = hold_count;
  }
  if (uVar11 < 0x2000) goto code_r0x00103b2c;
code_r0x00103970:
  uVar8 = uVar11 - 0x1800 & 0xfffffffffffff800;
  uVar11 = uVar8 + 0x1fff;
  lVar9 = uVar8 + 0x2000;
  do {
    puVar7 = (ulong *)xmalloc(0x48);
    uVar8 = xmalloc(lVar9);
    uVar4 = hold_count;
    puVar7[5] = uVar8;
    lVar9 = last_line_number;
    *puVar7 = uVar11;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    puVar7[8] = 0;
    puVar7[3] = lVar9 + 1U;
    puVar7[2] = lVar9 + 1U;
    if (uVar4 == 0) {
code_r0x001039f6:
      lVar9 = safe_read(0,uVar8,uVar11);
      if (lVar9 == 0) {
        have_read_eof = '\x01';
      }
      else {
        if (lVar9 == -1) {
          puVar7 = (ulong *)func_0x00101bf0(0,&UNK_00115fe2,5);
          puVar5 = (uint *)func_0x00101b20();
          func_0x00101e60(0,(ulong)*puVar5,puVar7);
          cleanup_fatal();
          goto code_r0x00103bb0;
        }
      }
      uVar4 = lVar9 + puVar7[1];
      puVar7[1] = uVar4;
      if (uVar4 != 0) {
        uVar8 = puVar7[5];
        goto code_r0x00103a2b;
      }
    }
    else {
      func_0x00101d70(uVar8,hold_area,uVar4);
      uVar11 = uVar11 - uVar4;
      puVar7[1] = uVar4;
      hold_count = 0;
      if (uVar11 != 0) {
        uVar8 = uVar8 + uVar4;
        goto code_r0x001039f6;
      }
code_r0x00103a2b:
      uVar11 = 0;
      while (lVar9 = func_0x00101ce0(uVar8,10,uVar4), lVar9 != 0) {
        lVar10 = (lVar9 - uVar8) + 1;
        uVar11 = uVar11 + 1;
        uVar4 = uVar4 - lVar10;
        keep_new_line_isra_2(puVar7 + 6,puVar7 + 7,uVar8,lVar10);
        uVar8 = lVar9 + 1;
      }
      if (uVar4 != 0) {
        if (have_read_eof == '\0') {
          uVar6 = xmemdup(uVar8);
          func_0x00101b00(hold_area);
          hold_count = uVar4;
          hold_area = uVar6;
        }
        else {
          uVar11 = uVar11 + 1;
          keep_new_line_isra_2(puVar7 + 6,puVar7 + 7,uVar8,uVar4);
        }
      }
      puVar7[4] = uVar11;
      uVar8 = last_line_number + 1;
      last_line_number = last_line_number + uVar11;
      puVar7[2] = uVar8;
      puVar7[3] = uVar8;
      if (uVar11 != 0) {
code_r0x00103bb0:
        puVar7[8] = 0;
        puVar7[7] = puVar7[6];
        lVar9 = (long)head;
        if (head != (ulong *)0x0) {
          do {
            lVar10 = lVar9;
            lVar9 = *(long *)(lVar10 + 0x40);
          } while (lVar9 != 0);
          *(ulong **)(lVar10 + 0x40) = puVar7;
          return (long *)1;
        }
        head = puVar7;
        return (long *)1;
      }
    }
    if (have_read_eof != '\0') {
      free_buffer_isra_4(puVar7 + 5,puVar7 + 6);
      func_0x00101b00(puVar7);
      return (long *)0;
    }
    if (SUB168(ZEXT816(2) * ZEXT816(*puVar7) >> 0x40,0) != 0) {
      xalloc_die();
      lVar9 = prev_buf_7217;
      if (prev_buf_7217 != 0) {
        free_buffer_isra_4(prev_buf_7217 + 0x28,prev_buf_7217 + 0x30);
        func_0x00101b00(lVar9);
        prev_buf_7217 = 0;
      }
      if ((head == (ulong *)0x0) &&
         ((have_read_eof != '\0' || (cVar3 = load_buffer_part_5(), cVar3 == '\0')))) {
        return (long *)0;
      }
      lVar9 = (long)head;
      uVar11 = *(ulong *)((long)head + 0x18);
      if (current_line < uVar11) {
        current_line = uVar11;
      }
      plVar1 = *(long **)((long)head + 0x38);
      *(long *)((long)head + 0x18) = uVar11 + 1;
      lVar10 = plVar1[2] + 1;
      plVar1[2] = lVar10;
      if (*plVar1 == lVar10) {
        plVar2 = (long *)plVar1[0xa3];
        *(long **)(lVar9 + 0x38) = plVar2;
        if ((plVar2 == (long *)0x0) || (*plVar2 == 0)) {
          prev_buf_7217 = lVar9;
          head = (ulong *)*(undefined8 *)(lVar9 + 0x40);
          return plVar1 + lVar10 * 2 + 1;
        }
      }
      return plVar1 + lVar10 * 2 + 1;
    }
    uVar11 = *puVar7 * 2;
    free_buffer_isra_4(puVar7 + 5,puVar7 + 6);
    func_0x00101b00(puVar7);
    if (0x1fff < uVar11) goto code_r0x00103970;
code_r0x00103b2c:
    lVar9 = 0x2000;
    uVar11 = 0x1fff;
  } while( true );
}

