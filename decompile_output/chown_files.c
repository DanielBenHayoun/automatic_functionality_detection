
ulong chown_files(undefined8 param_1,ulong param_2,uint param_3,ulong param_4,uint param_5,
                 uint param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  
  if ((((param_5 == 0xffffffff) && (param_6 == 0xffffffff)) && (*(char *)(param_7 + 4) == '\0')) &&
     (*param_7 == 2)) {
    param_2 = (ulong)((uint)param_2 | 8);
  }
  uVar7 = 1;
  uVar3 = xfts_open(param_1,param_2,0);
  while( true ) {
    puVar8 = &UNK_001038fa;
    lVar4 = rpl_fts_read(uVar3);
    if (lVar4 == 0) break;
    uVar1 = change_file_owner(uVar3,lVar4,(ulong)param_3,param_4 & 0xffffffff,(ulong)param_5,
                              (ulong)param_6,param_7,puVar8);
    uVar7 = (ulong)((uint)uVar7 & uVar1);
  }
  puVar5 = (uint *)func_0x001019c0();
  if (*puVar5 != 0) {
    uVar7 = (ulong)*(byte *)((long)param_7 + 0x11);
    if (*(byte *)((long)param_7 + 0x11) == 0) {
      uVar6 = func_0x00101a80(0,&UNK_0010b759,5);
      func_0x00101cf0(0,(ulong)*puVar5,uVar6);
    }
    else {
      uVar7 = 0;
    }
  }
  iVar2 = rpl_fts_close(uVar3);
  if (iVar2 != 0) {
    uVar7 = 0;
    uVar3 = func_0x00101a80(0,&UNK_0010b769,5);
    func_0x00101cf0(0,(ulong)*puVar5,uVar3);
  }
  return uVar7;
}

