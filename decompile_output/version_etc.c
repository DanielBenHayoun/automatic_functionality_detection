
void version_etc(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  long alStack168 [11];
  long lStack80;
  long alStack72 [4];
  undefined8 uStack40;
  undefined8 uStack32;
  
  uVar6 = 0x20;
  lStack80 = *(long *)(in_FS_OFFSET + 0x28);
  uStack40 = in_R8;
  uStack32 = in_R9;
  lVar5 = 0;
  plVar3 = (long *)&stack0x00000008;
  do {
    if ((uint)uVar6 < 0x30) {
      plVar2 = (long *)((long)alStack72 + uVar6);
      plVar4 = plVar3;
      uVar6 = (ulong)((uint)uVar6 + 8);
    }
    else {
      plVar4 = plVar3 + 1;
      plVar2 = plVar3;
    }
    lVar1 = *plVar2;
    alStack168[lVar5] = lVar1;
  } while ((lVar1 != 0) && (lVar5 = lVar5 + 1, plVar3 = plVar4, lVar5 != 10));
  while (version_etc_arn(), lStack80 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x001012b0();
  }
  return;
}

