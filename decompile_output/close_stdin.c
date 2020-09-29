
void close_stdin(void)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *unaff_RBX;
  long lVar6;
  
  lVar6 = stdin;
  lVar2 = freadahead(stdin);
  if (lVar2 != 0) goto code_r0x00103d48;
  iVar1 = close_stream(lVar6);
  while (iVar1 != 0) {
    while( true ) {
      uVar5 = func_0x00101a60(0,&UNK_0010b872,5);
      lVar6 = file_name;
      puVar3 = (uint *)func_0x001019a0();
      if (lVar6 == 0) {
        func_0x00101cd0(0,(ulong)*puVar3,&UNK_0010b86f,uVar5);
      }
      else {
        uVar4 = quotearg_colon(lVar6);
        func_0x00101cd0(0,(ulong)*puVar3,&UNK_0010b885,uVar4,uVar5);
      }
      close_stdout();
      func_0x001019c0((ulong)exit_failure);
code_r0x00103d48:
      iVar1 = rpl_fseeko(lVar6,0,1);
      if ((iVar1 != 0) || (iVar1 = rpl_fflush(), iVar1 == 0)) break;
      close_stream();
    }
    iVar1 = close_stream();
  }
  iVar1 = close_stream(stdout);
  if ((iVar1 == 0) ||
     ((unaff_RBX = (uint *)func_0x001019a0(), ignore_EPIPE != '\0' && (*unaff_RBX == 0x20)))) {
    iVar1 = close_stream(stderr);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    uVar5 = func_0x00101a60(0,&UNK_0010b88c,5);
    if (file_name == 0) goto code_r0x00103e4d;
    uVar4 = quotearg_colon();
    func_0x00101cd0(0,(ulong)*unaff_RBX,&UNK_0010b885,uVar4,uVar5);
  }
  do {
    uVar5 = func_0x001019c0((ulong)exit_failure);
code_r0x00103e4d:
    func_0x00101cd0(0,(ulong)*unaff_RBX,&UNK_0010b86f,uVar5);
  } while( true );
}

