
void set_fields(byte *param_1,uint param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong *puVar11;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  undefined8 uVar12;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long lVar13;
  ulong *puVar14;
  byte *pbVar15;
  undefined *puVar16;
  byte *pbVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  bool bVar21;
  ulong uStack72;
  
  bVar20 = false;
  bVar21 = (param_2 & 1) == 0;
  if (!bVar21) {
    lVar10 = 2;
    pbVar15 = param_1;
    pbVar17 = &UNK_00107052;
    do {
      if (lVar10 == 0) break;
      lVar10 = lVar10 + -1;
      bVar20 = *pbVar15 < *pbVar17;
      bVar21 = *pbVar15 == *pbVar17;
      pbVar15 = pbVar15 + 1;
      pbVar17 = pbVar17 + 1;
    } while (bVar21);
    if ((!bVar20 && !bVar21) == bVar20) {
      param_1 = param_1 + 1;
      uVar19 = 1;
      bVar20 = true;
      goto code_r0x00102d23;
    }
  }
  uVar19 = 0;
  bVar20 = false;
code_r0x00102d23:
  bVar5 = false;
  bVar21 = false;
  uStack72 = 1;
  bVar4 = bVar20;
  do {
    bVar2 = *param_1;
    if (bVar2 == 0x2d) {
      if (bVar20) {
        if ((param_2 & 4) == 0) {
          uVar12 = func_0x00101740(0,&UNK_00106e5b,5);
        }
        else {
          uVar12 = func_0x00101740(0,&UNK_00106f00,5);
        }
        goto code_r0x00103120;
      }
      bVar5 = (bool)(uVar19 == 0 & bVar4);
      if (bVar5) {
code_r0x00103106:
        uVar12 = 5;
        if ((param_2 & 4) == 0) goto code_r0x00103138;
        uVar12 = func_0x00101740(0,&UNK_00106f20,5);
        goto code_r0x00103120;
      }
      if (bVar4) {
        uVar18 = 0;
        uStack72 = uVar19;
        bVar20 = bVar4;
      }
      else {
        uVar18 = 0;
        uStack72 = 1;
        bVar20 = true;
        bVar5 = bVar4;
      }
    }
    else {
      if (((bVar2 == 0x2c) ||
          (plVar6 = (long *)func_0x001019d0(), (*(byte *)(*plVar6 + (ulong)bVar2 * 2) & 1) != 0)) ||
         (bVar2 == 0)) {
        if (bVar20) {
          if (bVar4) {
            if (!bVar21) goto code_r0x00102d96;
code_r0x00102f70:
            if (uVar19 < uStack72) {
              puVar16 = &UNK_00106e8a;
              uVar12 = 5;
              goto code_r0x00103154;
            }
            add_range_pair(uStack72,uVar19);
          }
          else {
            if (bVar21) goto code_r0x00102f70;
            if ((param_2 & 1) == 0) goto code_r0x001031e9;
            uStack72 = 1;
code_r0x00102d96:
            add_range_pair(uStack72,0xffffffffffffffff);
          }
          bVar2 = *param_1;
        }
        else {
          if (uVar19 == 0) goto code_r0x00103106;
          add_range_pair(uVar19,uVar19);
          bVar2 = *param_1;
        }
        if (bVar2 == 0) {
          if (n_frp != 0) {
            uVar18 = 0;
            lVar13 = 0;
            func_0x001016f0(frp,n_frp,0x10,compare_ranges);
            puVar11 = frp;
            lVar10 = extraout_RDX;
            uVar19 = n_frp;
            if (n_frp != 0) {
              do {
                uVar18 = uVar18 + 1;
                if (uVar18 < uVar19) {
                  lVar10 = (long)puVar11 + lVar13;
                  puVar14 = puVar11 + uVar18 * 2;
                  uVar7 = *(ulong *)(lVar10 + 8);
                  if (*puVar14 <= uVar7) {
                    do {
                      if (uVar7 <= puVar14[1]) {
                        uVar7 = puVar14[1];
                      }
                      *(ulong *)(lVar10 + 8) = uVar7;
                      func_0x00101930(puVar14,(long)puVar11 + lVar13 + 0x20,
                                      (uVar19 - uVar18) * 0x10 + -0x10);
                      uVar19 = n_frp - 1;
                      puVar11 = frp;
                      lVar10 = extraout_RDX_00;
                      n_frp = uVar19;
                      if (uVar19 <= uVar18) break;
                      puVar14 = frp + uVar18 * 2;
                      lVar10 = (long)frp + lVar13;
                      uVar7 = *(ulong *)(lVar10 + 8);
                    } while (*puVar14 < uVar7 || *puVar14 == uVar7);
                  }
                }
                lVar13 = lVar13 + 0x10;
              } while (uVar18 < uVar19);
            }
            n_frp = uVar19;
            if ((param_2 & 2) != 0) {
              frp = (ulong *)0x0;
              n_frp = 0;
              n_frp_allocated = 0;
              if (1 < *puVar11) {
                add_range_pair(1,*puVar11 - 1);
              }
              if (1 < uVar19) {
                puVar14 = puVar11 + 1;
                do {
                  if (*puVar14 + 1 != puVar14[1]) {
                    add_range_pair(*puVar14 + 1,puVar14[1] - 1);
                  }
                  puVar14 = puVar14 + 2;
                } while (puVar11 + uVar19 * 2 + -1 != puVar14);
              }
              if (puVar11[uVar19 * 2 + -1] != 0xffffffffffffffff) {
                add_range_pair(puVar11[uVar19 * 2 + -1] + 1,0xffffffffffffffff);
              }
              func_0x00101680(puVar11);
              puVar11 = frp;
              lVar10 = extraout_RDX_01;
            }
            n_frp = n_frp + 1;
            frp = (ulong *)xrealloc(puVar11,n_frp * 0x10,lVar10,puVar11);
            puVar1 = (undefined8 *)((long)frp + -0x10 + n_frp * 0x10);
            puVar1[1] = 0xffffffffffffffff;
            *puVar1 = 0xffffffffffffffff;
            return;
          }
          uVar12 = 5;
          if ((param_2 & 4) == 0) {
code_r0x0010327c:
            puVar16 = &UNK_00106ee2;
code_r0x00103154:
            uVar12 = func_0x00101740(0,puVar16,uVar12);
          }
          else {
            uVar12 = func_0x00101740(0,&UNK_00106fc8,5);
          }
code_r0x00103120:
          do {
            func_0x00101940(0,0,uVar12);
            usage();
            uVar12 = extraout_RDX_02;
code_r0x00103138:
            uVar12 = func_0x00101740(0,&UNK_00106e6f,uVar12);
          } while( true );
        }
        uVar18 = 0;
        bVar5 = false;
        bVar20 = false;
        bVar4 = false;
        bVar21 = false;
      }
      else {
        if (9 < (int)(char)bVar2 - 0x30U) {
          uVar12 = quote(param_1);
          if ((param_2 & 4) == 0) {
            uVar8 = func_0x00101740(0,&UNK_00106ecb,5);
          }
          else {
            uVar8 = func_0x00101740(0,&UNK_00106fa0,5);
          }
          func_0x00101940(0,0,uVar8,uVar12);
          usage(1);
          uVar12 = extraout_RDX_03;
          goto code_r0x0010327c;
        }
        if ((!bVar5) || (num_start_6877 == (byte *)0x0)) {
          num_start_6877 = param_1;
        }
        pbVar15 = num_start_6877;
        bVar3 = bVar20;
        if (!bVar20) {
          bVar4 = true;
          bVar3 = bVar21;
        }
        if (((0x1999999999999999 < uVar19) ||
            (uVar18 = (long)((int)(char)bVar2 + -0x30) + uVar19 * 10, uVar18 < uVar19)) ||
           (uVar18 == 0xffffffffffffffff)) {
          uVar12 = func_0x00101800(num_start_6877,&UNK_00106ea3);
          uVar12 = xstrndup(pbVar15,uVar12);
          uVar8 = quote(uVar12);
          if ((param_2 & 4) == 0) {
            uVar9 = func_0x00101740(0,&UNK_00106eae,5);
          }
          else {
            uVar9 = func_0x00101740(0,&UNK_00106f78,5);
          }
          func_0x00101940(0,0,uVar9,uVar8);
          func_0x00101680(uVar12);
          usage(1);
code_r0x001031e9:
          uVar12 = 5;
          puVar16 = &UNK_00106f50;
          goto code_r0x00103154;
        }
        bVar5 = true;
        bVar21 = bVar3;
      }
    }
    param_1 = param_1 + 1;
    uVar19 = uVar18;
  } while( true );
}

