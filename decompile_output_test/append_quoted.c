
void append_quoted(char *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return;
  }
  bVar2 = true;
  do {
    if (cVar1 == '=') {
code_r0x001025ea:
      if (!bVar2) goto code_r0x00102690;
      if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
        _obstack_newchunk(lsc_obstack,1);
      }
      pcVar3 = lsc_obstack._24_8_ + 1;
      *lsc_obstack._24_8_ = '\\';
      lsc_obstack._24_8_ = pcVar3;
code_r0x00102620:
      if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
code_r0x00102671:
        _obstack_newchunk(lsc_obstack,1);
      }
    }
    else {
      if (cVar1 < '>') {
        if (cVar1 == '\'') {
          if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
            _obstack_newchunk(lsc_obstack,1);
          }
          pcVar3 = lsc_obstack._24_8_ + 1;
          *lsc_obstack._24_8_ = '\'';
          lsc_obstack._24_8_ = pcVar3;
          if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
            _obstack_newchunk(lsc_obstack,1);
          }
          pcVar3 = lsc_obstack._24_8_ + 1;
          *lsc_obstack._24_8_ = '\\';
          lsc_obstack._24_8_ = pcVar3;
          if (lsc_obstack._32_8_ == lsc_obstack._24_8_) {
            _obstack_newchunk(lsc_obstack,1);
          }
          bVar2 = true;
          pcVar3 = lsc_obstack._24_8_ + 1;
          *lsc_obstack._24_8_ = '\'';
          lsc_obstack._24_8_ = pcVar3;
          goto code_r0x00102620;
        }
        if (cVar1 == ':') goto code_r0x001025ea;
code_r0x00102690:
        bVar2 = true;
        goto code_r0x00102620;
      }
      if ((cVar1 != '\\') && (cVar1 != '^')) goto code_r0x00102690;
      bVar2 = (bool)(bVar2 ^ 1);
      if (lsc_obstack._32_8_ == lsc_obstack._24_8_) goto code_r0x00102671;
    }
    pcVar3 = lsc_obstack._24_8_ + 1;
    *lsc_obstack._24_8_ = *param_1;
    lsc_obstack._24_8_ = pcVar3;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
    if (cVar1 == '\0') {
      return;
    }
  } while( true );
}

