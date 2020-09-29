
void call_freefun(long param_1,undefined8 param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00106b5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x40))(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00106b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x48));
  return;
}

