
void tzfree(long *param_1)

{
  if (param_1 == (long *)0x1) {
    return;
  }
  if (param_1 == (long *)0x0) {
    return;
  }
  do {
    param_1 = (long *)*param_1;
    func_0x00101850();
  } while (param_1 != (long *)0x0);
  return;
}

