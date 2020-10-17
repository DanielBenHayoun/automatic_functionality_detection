
void new_exclude(void)

{
  undefined8 uVar1;
  
  uVar1 = xmalloc(0x10);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memset_00327dd0)(uVar1,0,0x10);
  return;
}

