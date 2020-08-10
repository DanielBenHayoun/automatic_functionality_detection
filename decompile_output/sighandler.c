
void sighandler(int param_1)

{
  if (interrupt_signal == 0) {
    interrupt_signal = param_1;
  }
  return;
}

