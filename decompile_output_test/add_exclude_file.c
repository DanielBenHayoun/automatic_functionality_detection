
ulong add_exclude_file(undefined8 param_1,undefined8 param_2,char *param_3,ulong param_4,
                      char param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uStack32;
  
  uStack32 = param_1;
  if ((*param_3 == '-') && (param_3[1] == '\0')) {
    uVar1 = add_exclude_fp(call_addfn,param_2,stdin,param_4,(ulong)(uint)(int)param_5,&uStack32);
    return (ulong)uVar1;
  }
  lVar3 = func_0x001028d0(param_3,&UNK_00122781);
  if (lVar3 != 0) {
    uVar1 = add_exclude_fp(call_addfn,param_2,lVar3,param_4 & 0xffffffff,(ulong)(uint)(int)param_5,
                           &uStack32);
    iVar2 = rpl_fclose(lVar3);
    if (iVar2 == 0) {
      return (ulong)uVar1;
    }
  }
  return 0xffffffff;
}

