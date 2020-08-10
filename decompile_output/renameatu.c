
ulong renameatu(uint param_1,long param_2,uint param_3,long param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  undefined auStack360 [24];
  uint uStack336;
  undefined auStack216 [24];
  uint uStack192;
  long lStack64;
  
  uVar11 = (ulong)param_3;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = 0x13c;
  uVar4 = func_0x00101ef0(0x13c,(ulong)param_1,param_2,(ulong)param_3,param_4,(ulong)param_5);
  uVar12 = uVar4 & 0xffffffff;
  piVar5 = (int *)func_0x00101c70();
  if ((-1 < (int)uVar4) || (bVar9 = (*piVar5 - 0x16U & 0xffffffef) != 0 && *piVar5 != 0x5f, bVar9))
  goto code_r0x00107e7a;
  if (param_5 == 0) {
code_r0x00107ecc:
    lVar6 = func_0x00101d90(param_2);
    lVar7 = func_0x00101d90();
    if (((lVar6 != 0) && (lVar7 != 0)) &&
       ((*(char *)(param_2 + -1 + lVar6) == '/' || (*(char *)(param_4 + -1 + lVar7) == '/')))) {
      uVar10 = 1;
      iVar2 = func_0x00101df0(1,(ulong)param_1,param_2,auStack360,0x100);
      if (iVar2 != 0) goto code_r0x00107fc9;
      if (bVar9) {
        if ((uStack336 & 0xf000) != 0x4000) {
          *piVar5 = 2;
          uVar12 = 0xffffffff;
          goto code_r0x00107e7a;
        }
      }
      else {
        uVar10 = 1;
        iVar2 = func_0x00101df0(1,uVar11,param_4,auStack216,0x100);
        if (iVar2 == 0) {
          if ((uStack192 & 0xf000) != 0x4000) {
            *piVar5 = 0x14;
            goto code_r0x00107fc9;
          }
          if ((uStack336 & 0xf000) != 0x4000) {
            *piVar5 = 0x15;
            uVar12 = 0xffffffff;
            goto code_r0x00107e7a;
          }
        }
        else {
          if ((*piVar5 != 2) || ((uStack336 & 0xf000) != 0x4000)) goto code_r0x00107fc9;
        }
      }
    }
    uVar10 = (ulong)param_1;
    uVar3 = func_0x00102090(uVar10,param_2,uVar11,param_4);
    uVar12 = (ulong)uVar3;
  }
  else {
    if ((param_5 & 0xfffffffe) != 0) {
      *piVar5 = 0x5f;
      uVar12 = 0xffffffff;
      goto code_r0x00107e7a;
    }
    uVar10 = 1;
    iVar2 = func_0x00101df0(1,uVar11,param_4,auStack216,0x100);
    if ((iVar2 == 0) || (*piVar5 == 0x4b)) {
      *piVar5 = 0x11;
      uVar12 = 0xffffffff;
      goto code_r0x00107e7a;
    }
    if (*piVar5 == 2) {
      bVar9 = true;
      goto code_r0x00107ecc;
    }
code_r0x00107fc9:
    uVar12 = 0xffffffff;
  }
code_r0x00107e7a:
  if (lStack64 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101da0();
    uVar4 = uVar10 & 0xffffffff;
    if ((uint)uVar10 < 3) {
      uVar3 = dup_safer();
      uVar4 = (ulong)uVar3;
      puVar8 = (undefined4 *)func_0x00101c70();
      uVar1 = *puVar8;
      func_0x00101e90(uVar10 & 0xffffffff);
      *puVar8 = uVar1;
    }
    return uVar4;
  }
  return uVar12;
}

