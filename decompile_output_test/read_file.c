
long read_file(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  lVar2 = func_0x00101d30(param_1,&UNK_00109ca5,&UNK_00109ca5);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = fread_file(lVar2,param_2);
    puVar4 = (undefined4 *)func_0x001019b0();
    uVar5 = *puVar4;
    iVar1 = rpl_fclose(lVar2);
    if (iVar1 != 0) {
      if (lVar3 != 0) {
        uVar5 = *puVar4;
        func_0x00101dd0(lVar3);
      }
      *puVar4 = uVar5;
      lVar3 = 0;
    }
  }
  return lVar3;
}

