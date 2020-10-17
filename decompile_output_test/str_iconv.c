
long str_iconv(char *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  
  if ((*param_1 == '\0') || (iVar2 = c_strcasecmp(param_2,param_3), iVar2 == 0)) {
    lVar3 = func_0x00101910(param_1);
    if (lVar3 != 0) {
      return lVar3;
    }
    puVar5 = (undefined4 *)func_0x00101610();
    *puVar5 = 0xc;
    return 0;
  }
  lVar3 = func_0x00101950(param_3,param_2);
  if (lVar3 == -1) {
    return 0;
  }
  lVar4 = str_cd_iconv(param_1,lVar3);
  if (lVar4 != 0) {
    iVar2 = func_0x00101880(lVar3);
    if (-1 < iVar2) {
      return lVar4;
    }
    puVar5 = (undefined4 *)func_0x00101610();
    uVar1 = *puVar5;
    func_0x001015f0(lVar4);
    *puVar5 = uVar1;
    return 0;
  }
  puVar5 = (undefined4 *)func_0x00101610();
  uVar1 = *puVar5;
  func_0x00101880(lVar3);
  *puVar5 = uVar1;
  return 0;
}

