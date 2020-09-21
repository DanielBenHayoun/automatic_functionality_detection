
undefined8 knuth_morris_pratt(char *param_1,undefined *param_2,ulong param_3,char **param_4)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  char ***pppcVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 extraout_RDX;
  char ***pppcVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  char *pcVar16;
  long *plVar17;
  undefined8 unaff_R13;
  long *plVar18;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  char **ppcStack56;
  undefined *puStack48;
  long lStack32;
  
  pppcVar12 = &ppcStack56;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  bVar20 = SUB168(ZEXT816(8) * ZEXT816(param_3) >> 0x40,0) != 0;
  uVar14 = (ulong)bVar20;
  pppcVar4 = &ppcStack56;
  if (!bVar20) {
    if (param_3 * 8 < 0xfa1) {
      lVar11 = -(param_3 * 8 + 0x3d & 0xfffffffffffffff0);
      pppcVar12 = (char ***)((long)&ppcStack56 + lVar11);
      uVar14 = (ulong)(&stack0xffffffffffffffef + lVar11) & 0xffffffffffffffe0;
    }
    else {
      ppcStack56 = param_4;
      puStack48 = param_2;
      uVar14 = mmalloca();
      param_4 = ppcStack56;
      param_2 = puStack48;
    }
    pppcVar4 = pppcVar12;
    if (uVar14 != 0) {
      *(undefined8 *)(uVar14 + 8) = 1;
      if (2 < param_3) {
        lVar11 = 0;
        uVar15 = 2;
        do {
          cVar5 = param_2[lVar11];
          while (param_2[uVar15 - 1] != cVar5) {
            if (lVar11 == 0) {
              *(ulong *)(uVar14 + uVar15 * 8) = uVar15;
              lVar11 = 0;
              goto code_r0x00108d48;
            }
            lVar11 = lVar11 - *(long *)(uVar14 + lVar11 * 8);
            cVar5 = param_2[lVar11];
          }
          lVar11 = lVar11 + 1;
          *(long *)(uVar14 + uVar15 * 8) = uVar15 - lVar11;
code_r0x00108d48:
          uVar15 = uVar15 + 1;
        } while (param_3 != uVar15);
      }
      *param_4 = (char *)0x0;
      cVar5 = *param_1;
      uVar15 = 0;
      pcVar16 = param_1;
code_r0x00108d60:
      if (cVar5 != '\0') {
        while (param_2[uVar15] != cVar5) {
          if (uVar15 == 0) {
            cVar5 = pcVar16[1];
            param_1 = param_1 + 1;
            pcVar16 = pcVar16 + 1;
            goto code_r0x00108d60;
          }
          lVar11 = *(long *)(uVar14 + uVar15 * 8);
          param_1 = param_1 + lVar11;
          uVar15 = uVar15 - lVar11;
          if (cVar5 == '\0') goto code_r0x00108d7c;
        }
        uVar15 = uVar15 + 1;
        if (param_3 == uVar15) {
          *param_4 = param_1;
          goto code_r0x00108d7c;
        }
        cVar5 = pcVar16[1];
        pcVar16 = pcVar16 + 1;
        goto code_r0x00108d60;
      }
code_r0x00108d7c:
      *(undefined8 *)((undefined *)pppcVar12 + -8) = 0x108d81;
      freea();
      uVar7 = 1;
      goto code_r0x00108d92;
    }
  }
  pppcVar12 = pppcVar4;
  uVar7 = 0;
code_r0x00108d92:
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
  *(undefined8 *)((undefined *)pppcVar12 + -8) = 0x108e2c;
  func_0x001016f0();
  *(undefined **)((undefined *)pppcVar12 + -8) = &stack0xfffffffffffffff8;
  *(undefined8 *)((undefined *)pppcVar12 + -0x10) = unaff_R15;
  *(undefined8 *)((undefined *)pppcVar12 + -0x18) = unaff_R14;
  *(undefined8 *)((undefined *)pppcVar12 + -0x20) = unaff_R13;
  *(ulong *)((undefined *)pppcVar12 + -0x28) = param_3;
  *(char **)((undefined *)pppcVar12 + -0x30) = param_1;
  puVar13 = (undefined *)pppcVar12 + -0x138;
  *(ulong *)((undefined *)pppcVar12 + -0x120) = uVar14;
  *(undefined8 *)((undefined *)pppcVar12 + -0x130) = extraout_RDX;
  *(undefined8 *)((undefined *)pppcVar12 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)((undefined *)pppcVar12 + -0x140) = 0x108e6c;
  uVar14 = mbslen(param_2);
  *(ulong *)((undefined *)pppcVar12 + -0x110) = uVar14;
  lVar11 = SUB168(ZEXT816(0x38) * ZEXT816(uVar14),0);
  if (SUB168(ZEXT816(0x38) * ZEXT816(uVar14) >> 0x40,0) != 0) goto code_r0x00109897;
  bVar20 = false;
  puVar13 = (undefined *)pppcVar12 + -0x138;
code_r0x00108e89:
  if ((lVar11 < 0) || (bVar20)) goto code_r0x001092b0;
  if ((ulong)(*(long *)((undefined *)pppcVar12 + -0x110) * 0x38) < 0xfa1) {
    lVar11 = -(*(long *)((undefined *)pppcVar12 + -0x110) * 0x38 + 0x3dU & 0xfffffffffffffff0);
    plVar17 = (long *)(((ulong)(puVar13 + lVar11 + 0xf) & 0xfffffffffffffff0) + 0x1f &
                      0xffffffffffffffe0);
    puVar13 = puVar13 + lVar11;
  }
  else {
    *(undefined8 *)(puVar13 + -8) = 0x1097f9;
    plVar17 = (long *)mmalloca();
  }
  if (plVar17 == (long *)0x0) goto code_r0x001092b0;
  *(undefined **)((undefined *)pppcVar12 + -0xf8) = param_2;
  param_2 = (undefined *)pppcVar12 + -0x108;
  ((undefined *)pppcVar12)[-0x108] = 0;
  *(undefined8 *)((undefined *)pppcVar12 + -0x104) = 0;
  ((undefined *)pppcVar12)[-0xfc] = 0;
  *(undefined **)((undefined *)pppcVar12 + -0x128) = (undefined *)pppcVar12 + -0x104;
  plVar18 = plVar17 + *(long *)((undefined *)pppcVar12 + -0x110) * 6;
  plVar10 = plVar17;
code_r0x00108fe1:
  if (((undefined *)pppcVar12)[-0x108] != '\0') {
code_r0x00108fee:
    *(undefined8 *)(puVar13 + -8) = 0x108ff3;
    uVar8 = func_0x001016d0();
    uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0xf8);
    *(undefined8 *)((undefined *)pppcVar12 + -0x118) = uVar7;
    *(undefined8 *)(puVar13 + -8) = 0x10900c;
    uVar8 = strnlen1(uVar7,uVar8);
    uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0x118);
    *(undefined8 *)(puVar13 + -8) = 0x109026;
    lVar11 = rpl_mbrtowc((undefined *)pppcVar12 + -0xe4,uVar7,uVar8);
    *(long *)((undefined *)pppcVar12 + -0xf0) = lVar11;
    if (lVar11 == -1) {
      *(undefined8 *)((undefined *)pppcVar12 + -0xf0) = 1;
      ((undefined *)pppcVar12)[-0xe8] = 0;
      cVar5 = '\0';
      ((undefined *)pppcVar12)[-0xfc] = 1;
    }
    else {
      if (lVar11 != -2) {
        if (lVar11 == 0) {
          *(undefined8 *)((undefined *)pppcVar12 + -0xf0) = 1;
          if (**(char **)((undefined *)pppcVar12 + -0xf8) != '\0') goto code_r0x00109873;
          if (*(int *)((undefined *)pppcVar12 + -0xe4) != 0) goto code_r0x00109892;
        }
        ((undefined *)pppcVar12)[-0xe8] = 1;
        *(undefined8 *)(puVar13 + -8) = 0x109081;
        iVar6 = func_0x00101920((undefined *)pppcVar12 + -0x104);
        if (iVar6 == 0) {
          ((undefined *)pppcVar12)[-0xfc] = 1;
          goto code_r0x00108f7f;
        }
        ((undefined *)pppcVar12)[-0x108] = 0;
        ((undefined *)pppcVar12)[-0xfc] = 1;
        if (*(int *)((undefined *)pppcVar12 + -0xe4) != 0) goto code_r0x00108f8f;
        goto code_r0x001090b0;
      }
      uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0xf8);
      *(undefined8 *)(puVar13 + -8) = 0x1097b5;
      uVar7 = func_0x001016e0(uVar7);
      ((undefined *)pppcVar12)[-0xe8] = 0;
      *(undefined8 *)((undefined *)pppcVar12 + -0xf0) = uVar7;
      cVar5 = '\0';
      ((undefined *)pppcVar12)[-0xfc] = 1;
    }
code_r0x00108f94:
    puVar2 = *(undefined **)((undefined *)pppcVar12 + -0xf8);
    lVar11 = *(long *)((undefined *)pppcVar12 + -0xf0);
    if (puVar2 == (undefined *)pppcVar12 + -0xe0) {
      *(undefined8 *)(puVar13 + -8) = 0x10930c;
      lVar19 = func_0x001017d0(plVar10 + 3,puVar2,lVar11,plVar10 + 3);
      lVar11 = *(long *)((undefined *)pppcVar12 + -0xf0);
      *plVar10 = lVar19;
      cVar5 = ((undefined *)pppcVar12)[-0xe8];
    }
    else {
      *(undefined **)plVar10 = puVar2;
    }
    plVar10[1] = lVar11;
    *(char *)(plVar10 + 2) = cVar5;
    if (cVar5 != '\0') {
      *(undefined4 *)((long)plVar10 + 0x14) = *(undefined4 *)((undefined *)pppcVar12 + -0xe4);
    }
    *(long *)((undefined *)pppcVar12 + -0xf8) =
         *(long *)((undefined *)pppcVar12 + -0xf8) + *(long *)((undefined *)pppcVar12 + -0xf0);
    plVar10 = plVar10 + 6;
    ((undefined *)pppcVar12)[-0xfc] = 0;
    goto code_r0x00108fe1;
  }
  bVar1 = **(byte **)((undefined *)pppcVar12 + -0xf8);
  if ((*(uint *)(is_basic_table + (ulong)(bVar1 >> 5) * 4) >> ((uint)bVar1 & 0x1f) & 1) != 0) {
    *(undefined8 *)((undefined *)pppcVar12 + -0xf0) = 1;
    bVar1 = **(byte **)((undefined *)pppcVar12 + -0xf8);
    ((undefined *)pppcVar12)[-0xe8] = 1;
    ((undefined *)pppcVar12)[-0xfc] = 1;
    *(int *)((undefined *)pppcVar12 + -0xe4) = (int)(char)bVar1;
code_r0x00108f7f:
    if (*(int *)((undefined *)pppcVar12 + -0xe4) == 0) goto code_r0x001090b0;
code_r0x00108f8f:
    cVar5 = '\x01';
    goto code_r0x00108f94;
  }
  uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0x128);
  *(undefined8 *)(puVar13 + -8) = 0x1092e4;
  iVar6 = func_0x00101920(uVar7);
  if (iVar6 != 0) {
    ((undefined *)pppcVar12)[-0x108] = 1;
    goto code_r0x00108fee;
  }
code_r0x0010984f:
  *(undefined8 *)(puVar13 + -8) = 0x10986e;
  func_0x00101750(&UNK_0010e9b4,&UNK_0010e994,0x96,__PRETTY_FUNCTION___5056);
  goto code_r0x0010986e;
code_r0x001090b0:
  uVar14 = *(ulong *)((undefined *)pppcVar12 + -0x110);
  plVar18[1] = 1;
  if (uVar14 < 3) {
code_r0x00109156:
    ((undefined *)pppcVar12)[-200] = 0;
    *(undefined8 *)((undefined *)pppcVar12 + -0xc4) = 0;
    ((undefined *)pppcVar12)[-0xbc] = 0;
    lVar11 = 0;
    ((undefined *)pppcVar12)[-0x88] = 0;
    *(undefined8 *)((undefined *)pppcVar12 + -0x84) = 0;
    **(undefined8 **)((undefined *)pppcVar12 + -0x130) = 0;
    uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0x120);
    *(undefined **)((undefined *)pppcVar12 + -0x120) = (undefined *)pppcVar12 + -0x88;
    ((undefined *)pppcVar12)[-0x7c] = 0;
    *(undefined **)((undefined *)pppcVar12 + -0x128) = (undefined *)pppcVar12 + -0x84;
    param_2 = (undefined *)pppcVar12 + -200;
    *(undefined8 *)((undefined *)pppcVar12 + -0xb8) = uVar7;
    *(undefined8 *)((undefined *)pppcVar12 + -0x78) = uVar7;
    cVar5 = '\0';
    do {
      do {
        if (cVar5 == '\0') goto code_r0x001093ac;
        if (((undefined *)pppcVar12)[-0x68] != '\0') goto code_r0x00109366;
code_r0x001091da:
        plVar10 = plVar17 + lVar11 * 6;
code_r0x001091e5:
        if (plVar10[1] == *(long *)((undefined *)pppcVar12 + -0x70)) {
          lVar19 = *plVar10;
          *(undefined8 *)(puVar13 + -8) = 0x10958c;
          iVar6 = func_0x00101790(lVar19);
          if (iVar6 == 0) goto code_r0x0010938f;
        }
code_r0x001091f3:
        if (lVar11 == 0) {
          if (((undefined *)pppcVar12)[-0xbc] == '\0') {
            if (((undefined *)pppcVar12)[-200] == '\0') {
              bVar1 = **(byte **)((undefined *)pppcVar12 + -0xb8);
              if ((*(uint *)(is_basic_table + (ulong)(bVar1 >> 5) * 4) >> ((uint)bVar1 & 0x1f) & 1)
                  != 0) {
                *(undefined8 *)((undefined *)pppcVar12 + -0xb0) = 1;
                bVar1 = **(byte **)((undefined *)pppcVar12 + -0xb8);
                ((undefined *)pppcVar12)[-0xa8] = 1;
                ((undefined *)pppcVar12)[-0xbc] = 1;
                *(int *)((undefined *)pppcVar12 + -0xa4) = (int)(char)bVar1;
                goto code_r0x00109631;
              }
              *(undefined8 *)(puVar13 + -8) = 0x1096c1;
              iVar6 = func_0x00101920((undefined *)pppcVar12 + -0xc4);
              if (iVar6 == 0) goto code_r0x0010984f;
              ((undefined *)pppcVar12)[-200] = 1;
            }
            *(undefined8 *)(puVar13 + -8) = 0x1096d5;
            uVar8 = func_0x001016d0();
            uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0xb8);
            *(undefined8 *)((undefined *)pppcVar12 + -0x118) = uVar7;
            *(undefined8 *)(puVar13 + -8) = 0x1096ee;
            uVar8 = strnlen1(uVar7,uVar8);
            uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0x118);
            *(undefined8 *)(puVar13 + -8) = 0x109708;
            lVar19 = rpl_mbrtowc((undefined *)pppcVar12 + -0xa4,uVar7,uVar8);
            *(long *)((undefined *)pppcVar12 + -0xb0) = lVar19;
            if (lVar19 == -1) {
              *(undefined8 *)((undefined *)pppcVar12 + -0xb0) = 1;
              ((undefined *)pppcVar12)[-0xa8] = 0;
              goto code_r0x0010963f;
            }
            if (lVar19 == -2) {
              uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0xb8);
              *(undefined8 *)(puVar13 + -8) = 0x109819;
              uVar7 = func_0x001016e0(uVar7);
              ((undefined *)pppcVar12)[-0xa8] = 0;
              *(undefined8 *)((undefined *)pppcVar12 + -0xb0) = uVar7;
              goto code_r0x0010963f;
            }
            if (lVar19 == 0) {
              *(undefined8 *)((undefined *)pppcVar12 + -0xb0) = 1;
              if (**(char **)((undefined *)pppcVar12 + -0xb8) != '\0') goto code_r0x00109873;
              if (*(int *)((undefined *)pppcVar12 + -0xa4) != 0) goto code_r0x00109892;
            }
            ((undefined *)pppcVar12)[-0xa8] = 1;
            *(undefined8 *)(puVar13 + -8) = 0x109761;
            iVar6 = func_0x00101920((undefined *)pppcVar12 + -0xc4);
            if (iVar6 == 0) {
              ((undefined *)pppcVar12)[-0xbc] = 1;
            }
            else {
              ((undefined *)pppcVar12)[-200] = 0;
              ((undefined *)pppcVar12)[-0xbc] = 1;
            }
          }
          else {
            if (((undefined *)pppcVar12)[-0xa8] == '\0') goto code_r0x0010963f;
          }
code_r0x00109631:
          if (*(int *)((undefined *)pppcVar12 + -0xa4) != 0) {
code_r0x0010963f:
            ((undefined *)pppcVar12)[-0xbc] = 0;
            *(long *)((undefined *)pppcVar12 + -0xb8) =
                 *(long *)((undefined *)pppcVar12 + -0xb8) +
                 *(long *)((undefined *)pppcVar12 + -0xb0);
            ((undefined *)pppcVar12)[-0x7c] = 0;
            *(long *)((undefined *)pppcVar12 + -0x78) =
                 *(long *)((undefined *)pppcVar12 + -0x78) +
                 *(long *)((undefined *)pppcVar12 + -0x70);
code_r0x001093ac:
            do {
              if (((undefined *)pppcVar12)[-0x88] == '\0') {
                bVar1 = **(byte **)((undefined *)pppcVar12 + -0x78);
                if ((*(uint *)(is_basic_table + (ulong)(bVar1 >> 5) * 4) >> ((uint)bVar1 & 0x1f) & 1
                    ) == 0) {
                  uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0x128);
                  *(undefined8 *)(puVar13 + -8) = 0x1093dc;
                  iVar6 = func_0x00101920(uVar7);
                  if (iVar6 != 0) {
                    ((undefined *)pppcVar12)[-0x88] = 1;
                    goto code_r0x001093e8;
                  }
                  goto code_r0x0010984f;
                }
                *(undefined8 *)((undefined *)pppcVar12 + -0x70) = 1;
                bVar1 = **(byte **)((undefined *)pppcVar12 + -0x78);
                ((undefined *)pppcVar12)[-0x68] = 1;
                ((undefined *)pppcVar12)[-0x7c] = 1;
                *(int *)((undefined *)pppcVar12 + -100) = (int)(char)bVar1;
code_r0x00109366:
                iVar6 = *(int *)((undefined *)pppcVar12 + -100);
              }
              else {
code_r0x001093e8:
                *(undefined8 *)(puVar13 + -8) = 0x1093ed;
                uVar8 = func_0x001016d0();
                uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0x78);
                *(undefined8 *)((undefined *)pppcVar12 + -0x118) = uVar7;
                *(undefined8 *)(puVar13 + -8) = 0x109403;
                uVar8 = strnlen1(uVar7,uVar8);
                lVar19 = *(long *)((undefined *)pppcVar12 + -0x120);
                uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0x118);
                *(undefined8 *)(puVar13 + -8) = 0x109424;
                lVar19 = rpl_mbrtowc(lVar19 + 0x24,uVar7,uVar8,lVar19 + 4);
                *(long *)((undefined *)pppcVar12 + -0x70) = lVar19;
                if (lVar19 == -1) {
                  *(undefined8 *)((undefined *)pppcVar12 + -0x70) = 1;
                  ((undefined *)pppcVar12)[-0x68] = 0;
                  ((undefined *)pppcVar12)[-0x7c] = 1;
                  goto code_r0x001091da;
                }
                if (lVar19 == -2) {
                  uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0x78);
                  *(undefined8 *)(puVar13 + -8) = 0x109789;
                  uVar7 = func_0x001016e0(uVar7);
                  ((undefined *)pppcVar12)[-0x68] = 0;
                  *(undefined8 *)((undefined *)pppcVar12 + -0x70) = uVar7;
                  ((undefined *)pppcVar12)[-0x7c] = 1;
                  goto code_r0x001091da;
                }
                if (lVar19 == 0) {
                  *(undefined8 *)((undefined *)pppcVar12 + -0x70) = 1;
                  if (**(char **)((undefined *)pppcVar12 + -0x78) != '\0') goto code_r0x00109873;
                  if (*(int *)((undefined *)pppcVar12 + -100) != 0) goto code_r0x00109892;
                }
                lVar19 = *(long *)((undefined *)pppcVar12 + -0x120);
                ((undefined *)pppcVar12)[-0x68] = 1;
                *(undefined8 *)(puVar13 + -8) = 0x109475;
                iVar6 = func_0x00101920(lVar19 + 4);
                if (iVar6 == 0) {
                  ((undefined *)pppcVar12)[-0x7c] = 1;
                  goto code_r0x00109366;
                }
                iVar6 = *(int *)((undefined *)pppcVar12 + -100);
                ((undefined *)pppcVar12)[-0x88] = 0;
                ((undefined *)pppcVar12)[-0x7c] = 1;
              }
              if (iVar6 == 0) {
                *(undefined8 *)(puVar13 + -8) = 0x109498;
                freea(plVar17);
                uVar7 = 1;
                goto code_r0x001092b2;
              }
              plVar10 = plVar17 + lVar11 * 6;
              if (*(char *)(plVar10 + 2) == '\0') goto code_r0x001091e5;
              if (*(int *)((long)plVar10 + 0x14) != iVar6) goto code_r0x001091f3;
code_r0x0010938f:
              lVar11 = lVar11 + 1;
              *(long *)((undefined *)pppcVar12 + -0x78) =
                   *(long *)((undefined *)pppcVar12 + -0x78) +
                   *(long *)((undefined *)pppcVar12 + -0x70);
              ((undefined *)pppcVar12)[-0x7c] = 0;
              if (*(long *)((undefined *)pppcVar12 + -0x110) == lVar11) {
                **(undefined8 **)((undefined *)pppcVar12 + -0x130) =
                     *(undefined8 *)((undefined *)pppcVar12 + -0xb8);
                *(undefined8 *)(puVar13 + -8) = 0x109845;
                freea(plVar17);
                uVar7 = 1;
                goto code_r0x001092b2;
              }
            } while( true );
          }
          goto code_r0x001092a6;
        }
        lVar19 = plVar18[lVar11];
        *(long *)((undefined *)pppcVar12 + -0x118) = lVar11 - lVar19;
        cVar5 = ((undefined *)pppcVar12)[-0x7c];
      } while (lVar19 == 0);
      if (((undefined *)pppcVar12)[-0xbc] == '\0') goto code_r0x00109248;
      if (((undefined *)pppcVar12)[-0xa8] != '\0') goto code_r0x0010929c;
      while( true ) {
        *(long *)((undefined *)pppcVar12 + -0xb8) =
             *(long *)((undefined *)pppcVar12 + -0xb8) + *(long *)((undefined *)pppcVar12 + -0xb0);
        lVar19 = lVar19 + -1;
        ((undefined *)pppcVar12)[-0xbc] = 0;
        if (lVar19 == 0) break;
code_r0x00109248:
        if (((undefined *)pppcVar12)[-200] == '\0') {
          bVar1 = **(byte **)((undefined *)pppcVar12 + -0xb8);
          if ((*(uint *)(is_basic_table + (ulong)(bVar1 >> 5) * 4) >> ((uint)bVar1 & 0x1f) & 1) == 0
             ) {
            *(undefined8 *)(puVar13 + -8) = 0x1094b1;
            iVar6 = func_0x00101920((undefined *)pppcVar12 + -0xc4);
            if (iVar6 != 0) {
              ((undefined *)pppcVar12)[-200] = 1;
              goto code_r0x001094c0;
            }
            goto code_r0x0010984f;
          }
          *(undefined8 *)((undefined *)pppcVar12 + -0xb0) = 1;
          bVar1 = **(byte **)((undefined *)pppcVar12 + -0xb8);
          ((undefined *)pppcVar12)[-0xa8] = 1;
          ((undefined *)pppcVar12)[-0xbc] = 1;
          *(int *)((undefined *)pppcVar12 + -0xa4) = (int)(char)bVar1;
code_r0x0010929c:
          if (*(int *)((undefined *)pppcVar12 + -0xa4) == 0) goto code_r0x001092a6;
        }
        else {
code_r0x001094c0:
          *(undefined8 *)(puVar13 + -8) = 0x1094c5;
          uVar8 = func_0x001016d0();
          uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0xb8);
          *(undefined8 *)(puVar13 + -8) = 0x1094d7;
          uVar8 = strnlen1(uVar7,uVar8);
          *(undefined8 *)(puVar13 + -8) = 0x1094ea;
          lVar11 = rpl_mbrtowc((undefined *)pppcVar12 + -0xa4,uVar7,uVar8,
                               (undefined *)pppcVar12 + -0xc4);
          *(long *)((undefined *)pppcVar12 + -0xb0) = lVar11;
          if (lVar11 == -1) {
            *(undefined8 *)((undefined *)pppcVar12 + -0xb0) = 1;
            ((undefined *)pppcVar12)[-0xa8] = 0;
          }
          else {
            if (lVar11 != -2) {
              if (lVar11 == 0) {
                *(undefined8 *)((undefined *)pppcVar12 + -0xb0) = 1;
                if (**(char **)((undefined *)pppcVar12 + -0xb8) != '\0') goto code_r0x00109873;
                if (*(int *)((undefined *)pppcVar12 + -0xa4) != 0) goto code_r0x00109892;
              }
              ((undefined *)pppcVar12)[-0xa8] = 1;
              *(undefined8 *)(puVar13 + -8) = 0x10953f;
              iVar6 = func_0x00101920((undefined *)pppcVar12 + -0xc4);
              if (iVar6 == 0) {
                ((undefined *)pppcVar12)[-0xbc] = 1;
              }
              else {
                ((undefined *)pppcVar12)[-200] = 0;
                ((undefined *)pppcVar12)[-0xbc] = 1;
              }
              goto code_r0x0010929c;
            }
            uVar7 = *(undefined8 *)((undefined *)pppcVar12 + -0xb8);
            *(undefined8 *)(puVar13 + -8) = 0x1095ac;
            uVar7 = func_0x001016e0(uVar7);
            ((undefined *)pppcVar12)[-0xa8] = 0;
            *(undefined8 *)((undefined *)pppcVar12 + -0xb0) = uVar7;
          }
        }
      }
      cVar5 = ((undefined *)pppcVar12)[-0x7c];
      lVar11 = *(long *)((undefined *)pppcVar12 + -0x118);
    } while( true );
  }
  lVar11 = 0;
  lVar19 = 2;
  plVar10 = plVar17;
code_r0x001090d8:
  cVar5 = *(char *)(plVar10 + 8);
  do {
    plVar9 = plVar17 + lVar11 * 6;
    if ((cVar5 == '\0') || (*(char *)(plVar9 + 2) == '\0')) {
      if (plVar10[7] == plVar9[1]) {
        lVar3 = plVar10[6];
        ((undefined *)pppcVar12)[-0x118] = cVar5;
        *(undefined8 *)(puVar13 + -8) = 0x109127;
        iVar6 = func_0x00101790(lVar3);
        cVar5 = ((undefined *)pppcVar12)[-0x118];
        if (iVar6 == 0) goto code_r0x00109132;
      }
    }
    else {
      if (*(int *)((long)plVar10 + 0x44) == *(int *)((long)plVar9 + 0x14)) {
code_r0x00109132:
        lVar11 = lVar11 + 1;
        plVar18[lVar19] = lVar19 - lVar11;
        goto code_r0x00109141;
      }
    }
    if (lVar11 == 0) break;
    lVar11 = lVar11 - plVar18[lVar11];
  } while( true );
  plVar18[lVar19] = lVar19;
code_r0x00109141:
  lVar19 = lVar19 + 1;
  plVar10 = plVar10 + 6;
  if (*(long *)((undefined *)pppcVar12 + -0x110) == lVar19) goto code_r0x00109156;
  goto code_r0x001090d8;
code_r0x001092a6:
  *(undefined8 *)(puVar13 + -8) = 0x1092ab;
  func_0x00101600();
code_r0x001092b0:
  uVar7 = 0;
code_r0x001092b2:
  param_2 = (undefined *)
            (*(ulong *)((undefined *)pppcVar12 + -0x40) ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (param_2 == (undefined *)0x0) {
    return uVar7;
  }
code_r0x0010986e:
  *(undefined8 *)(puVar13 + -8) = 0x109873;
  func_0x001016f0();
code_r0x00109873:
  *(undefined8 *)(puVar13 + -8) = 0x109892;
  func_0x00101750(&UNK_0010e9cb,&UNK_0010e994,0xb2,__PRETTY_FUNCTION___5056);
code_r0x00109892:
  *(undefined8 *)(puVar13 + -8) = 0x109897;
  lVar11 = mbuiter_multi_next_part_0();
code_r0x00109897:
  bVar20 = true;
  goto code_r0x00108e89;
}

