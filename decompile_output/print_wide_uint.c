
/* WARNING: Possible PIC construction at 0x00100f62: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00100fca: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010101d: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00100fcf) */
/* WARNING: Removing unreachable block (ram,0x00100f67) */
/* WARNING: Removing unreachable block (ram,0x00101022) */

void print_wide_uint(ulong param_1,ulong param_2,int param_3,uint param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  if ((param_2 | (uint)param_1 & 0xfffffff ^ param_1) == 0) {
    uVar1 = 7;
    if (param_3 == 0) {
      puVar2 = &UNK_00101211;
    }
    else {
      puVar2 = &UNK_00101204;
    }
  }
  else {
    uVar1 = param_1 >> 0x1c | param_2 << 0x24;
    if ((param_2 >> 0x38 | param_1 >> 0x38 | param_2 << 8) == 0) {
      print_wide_uint(uVar1,param_2 >> 0x1c);
      puVar2 = &UNK_001011fa;
      uVar1 = 0x1c;
    }
    else {
      func_0x001008f0(0x28);
      print_wide_uint(uVar1,param_2 >> 0x1c,(ulong)(param_3 + 1),(ulong)param_4);
      uVar1 = (ulong)(param_3 + 3);
      puVar2 = &UNK_001011f4;
    }
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___printf_chk_00301fb0)(1,puVar2,uVar1);
  return;
}

