
void string_to_integer(char param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (param_1 == '\0') {
    puVar2 = &UNK_00102a8c;
    uVar1 = func_0x001015a0(0,&UNK_0010681c,5);
  }
  else {
    puVar2 = &UNK_00102abe;
    uVar1 = func_0x001015a0(0,&UNK_00106804,5);
  }
  xnumtoumax(param_2,10,0,0xffffffffffffffff,&UNK_00106834,uVar1,0,puVar2);
  return;
}

