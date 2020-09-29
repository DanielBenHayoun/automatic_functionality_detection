
long xgetcwd(void)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  uint *puVar6;
  long in_FS_OFFSET;
  
  piVar5 = (int *)0x0;
  lVar2 = func_0x00101f30();
  if ((lVar2 != 0) || (piVar3 = (int *)func_0x00101d40(), *piVar3 != 0xc)) {
    return lVar2;
  }
  xalloc_die();
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = xvasprintf();
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  uVar4 = func_0x00101e80();
  if (-1 < *piVar5) {
    uVar4 = func_0x00101f50();
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    puVar6 = (uint *)&UNK_0010feb1;
    func_0x00101f10(&UNK_0010feb1,&UNK_0010fea0,0x40,__PRETTY_FUNCTION___5081);
    uVar1 = func_0x00101e60((ulong)*puVar6);
    if ((int)uVar1 < 0) {
      uVar4 = 0xffffffff;
    }
    else {
      cdb_free(puVar6);
      *puVar6 = uVar1;
      uVar4 = 0;
    }
    return uVar4;
  }
  return uVar4;
}

