
uint * human_options(byte *param_1,uint *param_2,long *param_3)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined *puVar11;
  long in_FS_OFFSET;
  byte *pbStack56;
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (byte *)0x0) &&
      (param_1 = (byte *)func_0x00103250(&UNK_00117ad6), param_1 == (byte *)0x0)) &&
     (param_1 = (byte *)func_0x00103250(&UNK_0011a04c), param_1 == (byte *)0x0)) {
    uVar9 = 0x11a056;
    lVar6 = func_0x00103250();
    if (lVar6 == 0) {
      *param_3 = 0x400;
      uVar4 = 0;
      *param_2 = 0;
    }
    else {
      *param_3 = 0x200;
      uVar4 = 0;
      *param_2 = 0;
    }
  }
  else {
    uVar8 = 0;
    if (*param_1 == 0x27) {
      param_1 = param_1 + 1;
      uVar8 = 4;
    }
    uVar9 = (uint)param_1;
    iVar3 = argmatch(param_1,block_size_args,&block_size_opts,4);
    if (iVar3 < 0) {
      uVar9 = (uint)param_1;
      uVar4 = xstrtoumax(param_1,&pbStack56,0,param_3,&UNK_0011a066);
      if ((int)uVar4 == 0) {
        bVar1 = *param_1;
        while (9 < (byte)(bVar1 - 0x30)) {
          if (param_1 == pbStack56) {
            if (pbStack56[-1] == 0x42) {
              uVar8 = uVar8 | 0x180;
              if (pbStack56[-2] != 0x69) break;
            }
            else {
              uVar8 = uVar8 | 0x80;
            }
            uVar8 = uVar8 | 0x20;
            break;
          }
          param_1 = param_1 + 1;
          bVar1 = *param_1;
          uVar9 = (uint)bVar1;
        }
        lVar6 = *param_3;
        *param_2 = uVar8;
      }
      else {
        lVar6 = *param_3;
        *param_2 = 0;
      }
      if (lVar6 == 0) {
        uVar9 = 0x11a056;
        lVar6 = func_0x00103250();
        *param_3 = (ulong)(-(uint)(lVar6 == 0) & 0x200) + 0x200;
        uVar4 = 4;
      }
    }
    else {
      *param_3 = 1;
      uVar4 = 0;
      *param_2 = uVar8 | *(uint *)((long)&block_size_opts + (long)iVar3 * 4);
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uint *)uVar4;
  }
  func_0x00103420();
  if (user_alist == (uint *)0x0) {
code_r0x0010f7ed:
    puVar11 = &UNK_001178a1;
    puVar5 = (undefined8 *)func_0x001033c0();
    uVar10 = 0x18;
    if (puVar5 != (undefined8 *)0x0) {
      puVar11 = (undefined *)*puVar5;
      lVar6 = func_0x00103400(puVar11);
      uVar10 = lVar6 + 0x18U & 0xfffffffffffffff8;
    }
    puVar7 = (uint *)xmalloc(uVar10);
    *puVar7 = uVar9;
    func_0x001032e0(puVar7 + 4,puVar11);
    puVar2 = puVar7;
    *(uint **)(puVar7 + 2) = user_alist;
    user_alist = puVar2;
  }
  else {
    uVar8 = *user_alist;
    puVar7 = user_alist;
    while (uVar9 != uVar8) {
      puVar7 = *(uint **)(puVar7 + 2);
      if (puVar7 == (uint *)0x0) goto code_r0x0010f7ed;
      uVar8 = *puVar7;
    }
  }
  if (*(char *)(puVar7 + 4) == '\0') {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = puVar7 + 4;
  }
  return puVar7;
}

