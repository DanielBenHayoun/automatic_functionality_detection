
/* WARNING: Possible PIC construction at 0x00102cb8: Changing call to branch */

void free_spareline(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = spareline._8_8_;
  lVar1 = spareline._0_8_;
  if (spareline._0_8_ == 0) {
    if (spareline._8_8_ == 0) {
      return;
    }
    freeline_part_2(spareline._8_8_);
  }
  else {
    freeline_part_2(spareline._0_8_);
    lVar2 = lVar1;
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_0030ae30)(lVar2);
  return;
}

