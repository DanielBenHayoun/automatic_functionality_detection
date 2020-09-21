
undefined8 leaf_optimization(void)

{
  long lVar1;
  
  lVar1 = filesystem_type();
  if (lVar1 == 0x52654973) {
    return 2;
  }
  if (lVar1 < 0x52654974) {
    if (((lVar1 == 0x6969) || (lVar1 == 0x9fa0)) || (lVar1 == 0)) {
      return 0;
    }
  }
  else {
    if (lVar1 == 0x58465342) {
      return 2;
    }
    if (lVar1 == 0xff534d42) {
      return 0;
    }
    if (lVar1 == 0x5346414f) {
      return 0;
    }
  }
  return 1;
}

