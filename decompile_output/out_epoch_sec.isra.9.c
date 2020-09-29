
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong out_epoch_sec_isra_9(char *param_1,char *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  int iStack72;
  
  pcVar8 = (char *)func_0x00101f70(param_1,0x2e,param_2);
  if (pcVar8 == (char *)0x0) {
    iStack72 = 0;
    uVar10 = 0;
code_r0x0010415a:
    iVar2 = 1;
    uVar11 = uVar10;
    do {
      uVar11 = uVar11 + 1;
      iVar2 = iVar2 * 10;
    } while (uVar11 != 9);
    lVar7 = (long)iVar2;
    uVar4 = (long)param_4 / lVar7;
  }
  else {
    param_1[(long)param_2] = '\0';
    param_2 = pcVar8 + -(long)param_1;
    uVar4 = param_4;
    if ((int)pcVar8[1] - 0x30U < 10) {
      lVar7 = func_0x00101fd0(pcVar8 + 1,0,10);
      uVar10 = (uint)lVar7;
      if (0x7fffffff < lVar7) {
        uVar10 = 0x7fffffff;
      }
      if (uVar10 != 0) {
        if ((int)pcVar8[-1] - 0x30U < 10) goto code_r0x00104206;
        iStack72 = 0;
        goto code_r0x00104130;
      }
      iStack72 = 0;
      goto code_r0x0010415a;
    }
    if ((int)pcVar8[-1] - 0x30U < 10) {
      uVar10 = 9;
code_r0x00104206:
      *pcVar8 = '\0';
      do {
        pcVar12 = pcVar8 + -1;
        pcVar6 = pcVar8 + -2;
        pcVar8 = pcVar12;
      } while ((int)*pcVar6 - 0x30U < 10);
      lVar7 = func_0x00101fd0(pcVar12,0,10);
      iStack72 = (int)lVar7;
      if (0x7fffffff < lVar7) {
        iStack72 = 0x7fffffff;
      }
      if (1 < iStack72) {
        pcVar12 = pcVar12 + (*pcVar12 == '0');
        param_2 = pcVar12 + -(long)param_1;
        if (((decimal_point_len < (ulong)(long)iStack72) &&
            (iVar2 = iStack72 - (int)decimal_point_len, 1 < iVar2)) &&
           (uVar11 = iVar2 - uVar10, 1 < (int)uVar11)) {
          pcVar8 = param_1;
          if (param_1 < pcVar12) {
            bVar1 = false;
            pcVar6 = param_1;
            do {
              if (*pcVar6 == '-') {
                bVar1 = true;
              }
              else {
                *pcVar8 = *pcVar6;
                pcVar8 = pcVar8 + 1;
              }
              pcVar6 = pcVar6 + 1;
            } while (pcVar12 != pcVar6);
            lVar7 = 0;
            param_2 = pcVar8 + -(long)param_1;
            if (!bVar1) goto code_r0x001042f8;
          }
          else {
            param_2 = (char *)0x0;
code_r0x001042f8:
            iVar2 = func_0x00102220(pcVar8,1,0xffffffffffffffff,&UNK_0010f404,(ulong)uVar11);
            lVar7 = (long)iVar2;
          }
          param_2 = param_2 + lVar7;
        }
      }
code_r0x00104130:
      if ((int)uVar10 < 9) goto code_r0x0010415a;
      lVar7 = 1;
      iVar2 = 1;
    }
    else {
      lVar7 = 1;
      iStack72 = 0;
      uVar10 = 9;
      iVar2 = 1;
    }
  }
  if ((param_3 < 0) && (param_4 != 0)) {
    uVar11 = (1000000000 / iVar2 - (int)uVar4) - (uint)((long)param_4 % lVar7 != 0);
    uVar4 = (ulong)uVar11;
    param_3 = (ulong)(uVar11 != 0) + param_3;
    if (param_3 == 0) {
      make_format(param_1,param_2,&UNK_0010da95,&UNK_0010ddd7);
      uVar3 = func_0x001020f0(_UNK_0010f270,1,param_1);
      goto code_r0x00104064;
    }
  }
  uVar3 = out_int(param_1,param_2,param_3);
code_r0x00104064:
  iVar2 = (int)uVar3;
  if (uVar10 != 0) {
    uVar5 = 9;
    if ((int)uVar10 < 10) {
      uVar5 = (ulong)uVar10;
    }
    uVar3 = (ulong)(uVar10 - (int)uVar5);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    uVar9 = 0;
    if ((iVar2 < iStack72) && (decimal_point_len < (ulong)(long)(iStack72 - iVar2))) {
      uVar9 = (ulong)(uint)(((iStack72 - iVar2) - (int)decimal_point_len) - (int)uVar5);
    }
    func_0x001020f0(1,&UNK_0010dddb,decimal_point,uVar5,uVar4 & 0xffffffff,uVar9,uVar3,0);
  }
  return uVar3;
}

