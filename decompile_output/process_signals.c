
void process_signals(void)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined auStack168 [136];
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  while ((interrupt_signal != 0 || (stop_signal_count != 0))) {
    if (used_color != '\0') {
      put_indicator(color_indicator);
      put_indicator(0x320070);
    }
    func_0x00103810(stdout);
    func_0x00103260(0,caught_signals,auStack168);
    uVar3 = (ulong)interrupt_signal;
    if (stop_signal_count == 0) {
      func_0x001035a0((ulong)interrupt_signal,0);
    }
    else {
      stop_signal_count = stop_signal_count + -1;
      uVar3 = 0x13;
    }
    func_0x00103280(uVar3);
    func_0x00103260(2,auStack168,0);
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00103420();
  if (print_with_color == '\0') {
    return;
  }
  cVar1 = is_colored(4);
  if (cVar1 == '\0') {
    return;
  }
  put_indicator(color_indicator);
  put_indicator(0x3200a0);
  if (used_color == '\0') {
    used_color = '\x01';
    iVar2 = func_0x00103630(1);
    if (iVar2 < 0) {
      prep_non_filename_text();
    }
    else {
      signal_setup(1);
      prep_non_filename_text();
    }
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fwrite_unlocked_0031fee8)(color_indicator._24_8_,color_indicator._16_8_,1,stdout);
  return;
}

