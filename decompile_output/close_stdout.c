
void close_stdout(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *unaff_RBX;
  
  iVar1 = close_stream(stdout);
  if (iVar1 != 0) {
    unaff_RBX = (uint *)func_0x00101200();
    if ((ignore_EPIPE == '\0') || (*unaff_RBX != 0x20)) {
      uVar3 = func_0x00101280(0,&UNK_00104b30,5);
      if (file_name == 0) goto code_r0x00101bbd;
      uVar2 = quotearg_colon();
      func_0x001013d0(0,(ulong)*unaff_RBX,&UNK_00104b3c,uVar2,uVar3);
      goto code_r0x00101bb2;
    }
  }
  iVar1 = close_stream(stderr);
  if (iVar1 == 0) {
    return;
  }
code_r0x00101bb2:
  do {
    uVar3 = func_0x00101220((ulong)exit_failure);
code_r0x00101bbd:
    func_0x001013d0(0,(ulong)*unaff_RBX,&UNK_00104b40,uVar3);
  } while( true );
}

