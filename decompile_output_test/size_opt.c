
ulong size_opt(long param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long extraout_RDX;
  long lVar5;
  long in_FS_OFFSET;
  undefined uStack40;
  undefined7 uStack39;
  long lStack32;
  
  cVar2 = '\0';
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = param_1;
  uVar3 = xstrtoul(param_1,0,10,&uStack40,&UNK_001077a1);
  if (uVar3 < 2) {
    if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
      return CONCAT71(uStack39,uStack40);
    }
  }
  else {
    uVar4 = func_0x00101800(0,param_2,5);
    cVar2 = '\0';
    lVar5 = 1;
    func_0x00101a00(1,0,&UNK_00106744,param_1,uVar4);
  }
  func_0x00101830();
  bVar1 = output_unique;
  if ((extraout_RDX == 0) || (bVar1 = output_later_repeated, cVar2 != '\0')) {
    uVar3 = (uint)bVar1 ^ 1;
    cVar2 = (char)uVar3;
  }
  else {
    uVar3 = (uint)output_first_repeated ^ 1;
    cVar2 = (char)uVar3;
  }
  if (cVar2 != '\0') {
    return (ulong)uVar3;
  }
  if (countmode == 0) {
    func_0x001019f0(1,&UNK_0010674b,extraout_RDX + 1);
  }
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)PTR_fwrite_unlocked_00309f60)
                    (*(undefined8 *)(lVar5 + 0x10),1,*(undefined8 *)(lVar5 + 8),stdout);
  return uVar4;
}

