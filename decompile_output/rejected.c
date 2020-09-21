
void rejected(void)

{
  int iStack52;
  undefined auStack48 [8];
  undefined uStack40;
  undefined auStack32 [8];
  undefined uStack24;
  code *pcStack16;
  
  pcStack16 = (code *)&UNK_00400713;
  func_0x00400520(&UNK_0040090c);
  pcStack16 = main;
  func_0x00400570();
  uStack24 = 0;
  uStack40 = 0;
  pcStack16 = (code *)&stack0xfffffffffffffff8;
  func_0x00400510(&UNK_00400915);
  func_0x00400530(0,auStack32,8);
  func_0x00400530(0,&iStack52,1);
  func_0x00400510(&UNK_00400920);
  func_0x00400530(0,auStack48,8);
  func_0x00400530(0,&iStack52,1);
  iStack52 = authenticate(auStack32,auStack48,auStack48);
  if (iStack52 == 0) {
    rejected();
  }
  else {
    accepted();
  }
  return;
}

