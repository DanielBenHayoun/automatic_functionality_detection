
void replace_problematic_chars(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (tty_out_8809 < 0) {
    tty_out_8809 = func_0x001020f0(1);
  }
  UNRECOVERED_JUMPTABLE = replace_control_chars;
  if (tty_out_8809 != 0) {
    UNRECOVERED_JUMPTABLE = replace_invalid_chars;
  }
                    /* WARNING: Could not recover jumptable at 0x00103ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

