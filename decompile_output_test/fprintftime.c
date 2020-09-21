
void fprintftime(undefined8 param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __strftime_internal();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00102850();
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_clock_gettime_00317df8)(0,param_1);
  return;
}

