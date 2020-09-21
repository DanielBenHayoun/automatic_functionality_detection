
/* WARNING: Removing unreachable block (ram,0x001074d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_value_part_0(int param_1)

{
  ulong uVar1;
  float10 fVar2;
  float10 in_stack_00000008;
  
  if ((float10)_UNK_00110020 <= in_stack_00000008) {
    uVar1 = (long)ROUND(in_stack_00000008 - (float10)_UNK_00110020) ^ 0x8000000000000000;
  }
  else {
    uVar1 = (ulong)ROUND(in_stack_00000008);
  }
  fVar2 = (float10)uVar1;
  if ((long)uVar1 < 0) {
    fVar2 = fVar2 + (float10)_UNK_0011001c;
  }
  if (((param_1 == 0) && (in_stack_00000008 != fVar2)) && ((long)(uVar1 + 1) < 0)) {
    return;
  }
  return;
}

