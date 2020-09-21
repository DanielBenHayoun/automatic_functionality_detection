
void interrupt_handler(uint param_1)

{
  if (remove_files != '\0') {
    delete_all_files_part_0(1);
  }
  func_0x00101d50((ulong)param_1,0);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_raise_0031ad98)((ulong)param_1);
  return;
}

