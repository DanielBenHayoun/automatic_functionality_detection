
void flush_paragraph(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar1 = word_limit;
  if (word_limit == (long *)unused_word_type) {
    func_0x001016e0(parabuf,1,(long)wptr + -0x312d80,stdout);
    wptr = parabuf;
    return;
  }
  fmt_paragraph();
  plVar7 = plVar1;
  if (plVar1 != unused_word_type._32_8_) {
    lVar2 = 0x7fffffffffffffff;
    plVar3 = unused_word_type._32_8_;
    lVar6 = unused_word_type._32_8_[3];
    do {
      plVar4 = (long *)plVar3[4];
      lVar6 = lVar6 - plVar4[3];
      if (lVar6 < lVar2) {
        lVar2 = lVar6;
        plVar7 = plVar3;
      }
      if (lVar2 < 0x7ffffffffffffff7) {
        lVar2 = lVar2 + 9;
      }
      plVar3 = plVar4;
      lVar6 = plVar4[3];
    } while (plVar1 != plVar4);
  }
  put_paragraph(plVar7);
  lVar6 = (long)wptr;
  func_0x00101670(parabuf,*plVar7,(long)wptr - *plVar7,5000);
  plVar1 = word_limit;
  lVar2 = *plVar7;
  lVar5 = -(long)((int)lVar2 + -0x312d80);
  wptr = (undefined1 *)(lVar6 + lVar5);
  plVar3 = plVar7;
  if (plVar7 <= word_limit) {
    while( true ) {
      plVar4 = plVar3 + 5;
      *plVar3 = lVar2 + lVar5;
      if (plVar1 < plVar4) break;
      lVar2 = *plVar4;
      plVar3 = plVar4;
    }
  }
  func_0x00101670(unused_word_type,plVar7,((long)((long)plVar1 - (long)plVar7) >> 3) * 8 + 0x28,
                  40000);
  word_limit = (long *)((long)plVar1 - (long)(plVar7 + -0x61224));
  return;
}

