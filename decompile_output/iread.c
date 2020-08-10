
ulong iread(uint param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  do {
    process_signals();
    uVar4 = func_0x00101c80((ulong)param_1,param_2,param_3);
    if (uVar4 == 0xffffffffffffffff) {
      piVar3 = (int *)func_0x00101a80();
      iVar1 = *piVar3;
      if (iVar1 == 0x16) {
        if ((long)prev_nread_7186 < 1) {
          prev_nread_7186 = uVar4;
          return 0xffffffffffffffff;
        }
        if (param_3 <= prev_nread_7186) {
          prev_nread_7186 = uVar4;
          return 0xffffffffffffffff;
        }
        if ((input_flags._1_1_ & 0x40) == 0) {
          prev_nread_7186 = uVar4;
          return 0xffffffffffffffff;
        }
        *piVar3 = 0;
        prev_nread_7186 = 0;
        return 0;
      }
    }
    else {
      if (-1 < (long)uVar4) {
        if ((0 < (long)uVar4) && (uVar4 < param_3)) {
          process_signals();
          goto code_r0x00104b0c;
        }
        break;
      }
      piVar3 = (int *)func_0x00101a80();
      iVar1 = *piVar3;
    }
  } while (iVar1 == 4);
  if (0 < (long)uVar4) {
code_r0x00104b0c:
    uVar2 = prev_nread_7186;
    if (((warn_partial_read != '\0') && (0 < (long)prev_nread_7186)) && (prev_nread_7186 < param_3))
    {
      if (status_level != 1) {
        uVar5 = func_0x00101dd0(0,&UNK_0010cad0,&UNK_0010ca90,prev_nread_7186,5);
        nl_error(0,0,uVar5,uVar2);
      }
      warn_partial_read = '\0';
    }
  }
  prev_nread_7186 = uVar4;
  return uVar4;
}

