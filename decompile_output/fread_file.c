
long fread_file(undefined8 param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  long in_FS_OFFSET;
  undefined auStack216 [24];
  uint uStack192;
  long lStack168;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = func_0x00101c20();
  uVar8 = (ulong)uVar1;
  iVar2 = func_0x00101c70(1,uVar8,auStack216);
  if ((((iVar2 < 0) || ((uStack192 & 0xf000) != 0x8000)) ||
      (lVar3 = func_0x001019e0(param_1), lVar3 < 0)) || (lStack168 <= lVar3)) {
    uVar6 = 0x2000;
  }
  else {
    uVar6 = (lStack168 - lVar3) + 1;
  }
  lVar3 = func_0x00101c40(uVar6);
  if (lVar3 != 0) {
    uVar7 = 0;
    do {
      lVar5 = lVar3;
      lVar9 = uVar6 - uVar7;
      uVar8 = 1;
      lVar3 = func_0x00101a20(lVar5 + uVar7,1,lVar9,param_1);
      uVar7 = uVar7 + lVar3;
      if (lVar9 != lVar3) {
        puVar10 = (undefined4 *)func_0x001019b0();
        uVar11 = *puVar10;
        iVar2 = func_0x00101a10(param_1);
        if (iVar2 != 0) goto code_r0x0010642b;
        lVar3 = lVar5;
        if (uVar7 < uVar6 - 1) {
          uVar8 = uVar7 + 1;
          lVar5 = func_0x00101ca0(lVar5);
          if (lVar5 != 0) {
            lVar3 = lVar5;
          }
          *(undefined *)(lVar3 + uVar7) = 0;
          *param_2 = uVar7;
        }
        else {
          *(undefined *)(lVar5 + uVar7) = 0;
          *param_2 = uVar7;
        }
        goto code_r0x001063f0;
      }
      if (uVar6 == 0xffffffffffffffff) {
        puVar10 = (undefined4 *)func_0x001019b0();
        func_0x00101dd0(lVar5);
        lVar3 = 0;
        *puVar10 = 0xc;
        goto code_r0x001063f0;
      }
      uVar4 = (uVar6 >> 1) + uVar6;
      if (~(uVar6 >> 1) <= uVar6) {
        uVar4 = 0xffffffffffffffff;
      }
      uVar8 = uVar4;
      lVar3 = func_0x00101ca0(lVar5);
      uVar6 = uVar4;
    } while (lVar3 != 0);
    puVar10 = (undefined4 *)func_0x001019b0();
    uVar11 = *puVar10;
code_r0x0010642b:
    lVar3 = 0;
    func_0x00101dd0(lVar5);
    *puVar10 = uVar11;
  }
code_r0x001063f0:
  if (lStack64 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101ad0();
    lVar3 = func_0x00101d30();
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = fread_file(lVar3,uVar8);
      puVar10 = (undefined4 *)func_0x001019b0();
      uVar11 = *puVar10;
      iVar2 = rpl_fclose(lVar3);
      if (iVar2 != 0) {
        if (lVar5 != 0) {
          uVar11 = *puVar10;
          func_0x00101dd0(lVar5);
        }
        *puVar10 = uVar11;
        lVar5 = 0;
      }
    }
    return lVar5;
  }
  return lVar3;
}

