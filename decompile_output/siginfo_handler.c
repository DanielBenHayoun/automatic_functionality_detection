
void siginfo_handler(void)

{
  info_signal_count = info_signal_count + 1;
  return;
}

