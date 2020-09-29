
void writeline(long param_1,char param_2,long param_3)

{
  char cVar1;
  
  cVar1 = output_unique;
  if ((param_3 == 0) || (cVar1 = output_later_repeated, param_2 != '\0')) {
    if (cVar1 != '\x01') {
      return;
    }
  }
  else {
    if (output_first_repeated != '\x01') {
      return;
    }
  }
  if (countmode == 0) {
    func_0x001019f0(1,&UNK_0010674b,param_3 + 1);
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fwrite_unlocked_00309f60)
            (*(undefined8 *)(param_1 + 0x10),1,*(undefined8 *)(param_1 + 8),stdout);
  return;
}

