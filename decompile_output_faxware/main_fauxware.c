
void fauxware(void)

{
  int iStack44;
  undefined auStack40 [8];
  undefined uStack32;
  undefined auStack24 [8];
  undefined uStack16;
  
  uStack16 = 0;
  uStack32 = 0;
  func_0x00400510(&UNK_00400915);
  func_0x00400530(0,auStack24,8);
  func_0x00400530(0,&iStack44,1);
  func_0x00400510(&UNK_00400920);
  func_0x00400530(0,auStack40,8);
  func_0x00400530(0,&iStack44,1);
  iStack44 = authenticate(auStack24,auStack40,auStack40);
  if (iStack44 == 0) {
    rejected();
  }
  else {
    accepted();
  }
  return;
}