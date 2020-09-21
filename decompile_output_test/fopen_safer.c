
long fopen_safer(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  
  lVar4 = func_0x00101e90();
  if ((lVar4 != 0) && (uVar2 = func_0x00101d80(lVar4), uVar2 < 3)) {
    uVar2 = dup_safer((ulong)uVar2);
    if ((int)uVar2 < 0) {
      puVar5 = (undefined4 *)func_0x00101b20();
      uVar1 = *puVar5;
      rpl_fclose(lVar4);
      lVar4 = 0;
      *puVar5 = uVar1;
    }
    else {
      iVar3 = rpl_fclose(lVar4);
      if ((iVar3 == 0) && (lVar4 = func_0x00101e10((ulong)uVar2,param_2), lVar4 != 0)) {
        return lVar4;
      }
      puVar5 = (undefined4 *)func_0x00101b20();
      uVar1 = *puVar5;
      func_0x00101cc0((ulong)uVar2);
      *puVar5 = uVar1;
      lVar4 = 0;
    }
  }
  return lVar4;
}

