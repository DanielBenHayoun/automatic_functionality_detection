
void print_and_abort(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = func_0x00101a80(0,&UNK_0010812f,5);
  uVar2 = 1;
  func_0x00101d70(stderr,1,&UNK_00107dd0,uVar1);
  uVar3 = (ulong)exit_failure;
  func_0x00101d50();
  if ((*(byte *)(uVar3 + 0x50) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00106b3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar3 + 0x38))(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00106b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar3 + 0x38))(*(undefined8 *)(uVar3 + 0x48));
  return;
}

