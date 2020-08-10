
/* WARNING: Possible PIC construction at 0x00105f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00105f85) */
/* WARNING: Removing unreachable block (ram,0x00105f89) */
/* WARNING: Removing unreachable block (ram,0x00105f91) */
/* WARNING: Removing unreachable block (ram,0x00105fe5) */
/* WARNING: Removing unreachable block (ram,0x00105fdf) */

void gethrxtime(void)

{
  long in_FS_OFFSET;
  undefined auStack40 [24];
  undefined8 uStack16;
  
  uStack16 = *(undefined8 *)(in_FS_OFFSET + 0x28);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_clock_gettime_00310e00)(1,auStack40);
  return;
}

