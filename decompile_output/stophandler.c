
void stophandler(void)

{
  if (interrupt_signal == 0) {
    stop_signal_count = stop_signal_count + 1;
  }
  return;
}

