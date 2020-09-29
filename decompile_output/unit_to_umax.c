
long unit_to_umax(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  char *pcStack48;
  long lStack40;
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = func_0x00101aa0();
  pcStack48 = (char *)0x0;
  if ((lVar2 == 0) || ((byte)(*(char *)(param_1 + -1 + lVar2) - 0x30U) < 10)) {
    puVar7 = &UNK_001094a4;
    lVar3 = param_1;
    lVar6 = 0;
  }
  else {
    lVar3 = xmalloc(lVar2 + 2);
    pcVar8 = (char *)(lVar2 + -1 + lVar3);
    pcStack48 = pcVar8;
    lVar3 = func_0x00101bc0(lVar3,param_1,lVar2);
    lVar6 = lVar3;
    if ((*pcVar8 == 'i') && ((lVar2 != 1 && (9 < (byte)(pcVar8[-1] - 0x30U))))) {
      *pcVar8 = '\0';
      puVar7 = &UNK_001094a4;
    }
    else {
      pcStack48 = pcVar8 + 2;
      puVar7 = &UNK_001094ad;
      *(undefined2 *)(pcVar8 + 1) = 0x42;
    }
  }
  iVar1 = xstrtoumax(lVar3,&pcStack48,10,&lStack40,puVar7);
  if (((iVar1 == 0) && (*pcStack48 == '\0')) && (lStack40 != 0)) {
    func_0x001019b0();
    if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lStack40;
    }
  }
  else {
    func_0x001019b0(lVar6);
    uVar4 = quote(param_1);
    uVar5 = func_0x00101a80(0,&UNK_001094b7,5);
    lVar6 = 1;
    func_0x00101c80(1,0,uVar5,uVar4);
  }
  func_0x00101ab0();
  padding_buffer_size = lVar6 + 1;
  padding_buffer = xrealloc(padding_buffer);
  return padding_buffer;
}

