
void put_paragraph(long param_1)

{
  long lVar1;
  
  put_line(unused_word_type,(ulong)first_indent);
  lVar1 = unused_word_type._32_8_;
  while (lVar1 != param_1) {
    put_line(lVar1,(ulong)other_indent);
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}

