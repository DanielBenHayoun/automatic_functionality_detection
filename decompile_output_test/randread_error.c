
void randread_error(long param_1)

{
  undefined8 uVar1;
  undefined8 extraout_RDX;
  uint *unaff_RBX;
  undefined8 unaff_RBP;
  
  if (param_1 == 0) goto code_r0x001058b8;
  unaff_RBP = quote();
  unaff_RBX = (uint *)func_0x001019b0();
  uVar1 = 5;
  if (*unaff_RBX == 0) goto code_r0x001058bd;
  uVar1 = func_0x00101aa0(0,&UNK_00109c98,5);
  do {
    func_0x00101cf0((ulong)exit_failure,(ulong)*unaff_RBX,uVar1,unaff_RBP);
code_r0x001058b8:
    func_0x001019a0();
    uVar1 = extraout_RDX;
code_r0x001058bd:
    uVar1 = func_0x00101aa0(0,&UNK_00109c88,uVar1);
  } while( true );
}

