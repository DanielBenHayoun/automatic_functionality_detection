
void check_order_isra_1_part_2
               (long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)&issued_disorder_warning + (long)(int)(param_5 - 1)) == '\0') {
    if (hard_LC_COLLATE == '\0') {
      iVar1 = memcmp2();
    }
    else {
      iVar1 = xmemcoll(*param_2,*param_1 + -1,*param_4,*param_3 + -1);
    }
    if (0 < iVar1) {
      uVar2 = func_0x00101530(0,&UNK_00105a88,5);
      func_0x001016e0((ulong)(check_input_order == 1),0,uVar2,(ulong)param_5);
      *(undefined *)((long)&issued_disorder_warning + (long)(int)(param_5 - 1)) = 1;
    }
  }
  return;
}

