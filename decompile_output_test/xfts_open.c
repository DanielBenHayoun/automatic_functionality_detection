
ulong xfts_open(undefined8 param_1,uint param_2)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar1 = rpl_fts_open(param_1,(ulong)(param_2 | 0x200));
  if (lVar1 != 0) {
    return lVar1;
  }
  piVar2 = (int *)func_0x001019c0();
  if (*piVar2 != 0x16) {
    xalloc_die();
  }
  puVar4 = &UNK_0010c360;
  puVar5 = &UNK_0010c36b;
  func_0x00101b50(&UNK_0010c36b,&UNK_0010c360,0x29,__PRETTY_FUNCTION___3434);
  uVar3 = 1;
  if (((*(uint *)(puVar5 + 0x48) & 0x11) != 0x10) &&
     (uVar3 = 0, (*(uint *)(puVar5 + 0x48) & 0x11) == 0x11)) {
    return (ulong)(*(long *)(puVar4 + 0x58) != 0);
  }
  return uVar3;
}

