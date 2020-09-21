
void handle_line_error_isra_1(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined auStack72 [24];
  undefined8 uStack48;
  
  uStack48 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar1 = umaxtostr(param_1,auStack72);
  uVar2 = quote(uVar1);
  uVar1 = program_name;
  uVar3 = func_0x00101bf0(0,&UNK_00116200,5);
  func_0x00101f00(stderr,1,uVar3,uVar1,uVar2);
  if (param_2 == 0) goto code_r0x001036bd;
  uVar1 = umaxtostr(param_2,auStack72);
  uVar2 = func_0x00101bf0(0,&UNK_00115fbe,5);
  func_0x00101f00(stderr,1,uVar2,uVar1);
  do {
    cleanup_fatal();
code_r0x001036bd:
    func_0x00101cd0(10,stderr);
  } while( true );
}

