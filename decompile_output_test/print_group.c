
ulong print_group(ulong param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  param_1 = param_1 & 0xffffffff;
  uVar3 = 1;
  if ((char)param_2 != '\0') {
    uVar3 = param_2 & 0xffffffff;
    puVar1 = (undefined8 *)func_0x00101740(param_1);
    if (puVar1 != (undefined8 *)0x0) {
      uVar2 = *puVar1;
      goto code_r0x001029e2;
    }
    uVar3 = 0;
    uVar2 = func_0x001016c0(0,&UNK_00106950,5);
    func_0x001018d0(0,0,uVar2,param_1);
  }
  uVar2 = umaxtostr(param_1,buf_6964);
code_r0x001029e2:
  func_0x001017c0(uVar2,stdout);
  return uVar3;
}

