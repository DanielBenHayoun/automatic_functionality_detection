
/* WARNING: Could not reconcile some variable overlaps */

long vasnprintf(long param_1,uint **param_2,uint *param_3,uint *param_4)

{
  unkbyte10 Var1;
  undefined uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint **ppuVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  uint **ppuVar16;
  uint **ppuVar17;
  uint *puVar18;
  uint **unaff_R13;
  uint *puVar19;
  long in_FS_OFFSET;
  bool bVar20;
  uint *puStack1080;
  undefined auStack1072 [4];
  uint uStack1068;
  undefined *puStack1064;
  uint **ppuStack1056;
  uint *puStack1048;
  long *plStack1040;
  long lStack1032;
  uint *puStack1024;
  int *piStack1016;
  long lStack1008;
  undefined8 uStack1000;
  undefined *puStack992;
  uint *puStack984;
  uint *puStack976;
  int iStack964;
  uint auStack960 [4];
  uint *puStack944;
  long lStack712;
  uint **ppuStack704;
  long lStack696;
  ulong uStack688;
  long lStack64;
  
  puVar19 = auStack960 + 2;
  ppuVar16 = &puStack1080;
  ppuVar17 = &puStack1080;
  plStack1040 = &lStack712;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  ppuStack1056 = param_2;
  puStack1048 = puVar19;
  lStack1008 = param_1;
  iVar7 = printf_parse(param_3,plStack1040,puVar19);
  if (iVar7 < 0) {
    lVar11 = 0;
    goto code_r0x0010f77f;
  }
  iVar7 = printf_fetchargs(param_4,puVar19);
  ppuVar17 = &puStack1080;
  if (iVar7 < 0) goto code_r0x001104d0;
  uVar8 = lStack696 + 7;
  if (uVar8 < 7) {
    uVar8 = 0xffffffffffffffff;
  }
  uVar9 = uVar8 + uStack688;
  if (!CARRY8(uVar8,uStack688)) {
    puVar15 = (uint *)(ulong)(0xfffffffffffffff9 < uVar9);
    if (0xfffffffffffffff9 >= uVar9) {
      if (uVar9 + 6 < 4000) {
        puStack1064 = (undefined *)0x0;
        lVar11 = -(uVar9 + 0x24 & 0xfffffffffffffff0);
        ppuVar16 = (uint **)((long)&puStack1080 + lVar11);
        puStack992 = auStack1072 + lVar11;
code_r0x0010f695:
        param_4 = (uint *)0x0;
        if (lStack1008 != 0) {
          param_4 = *ppuStack1056;
        }
        lStack1032 = 0;
        piStack1016 = &iStack964;
        puVar14 = *ppuStack704;
        puVar19 = puVar15;
        ppuVar17 = ppuVar16;
        puVar18 = param_3;
        unaff_R13 = ppuStack704;
        lVar11 = lStack1008;
        if (puVar14 == param_3) goto code_r0x0010f853;
        goto code_r0x0010f6e9;
      }
      puStack976 = puVar15;
      if (uVar9 + 6 != 0xffffffffffffffff) {
        puStack992 = (undefined *)func_0x001029e0();
        if (puStack992 != (undefined *)0x0) {
          puStack1064 = puStack992;
          puVar15 = puStack976;
          goto code_r0x0010f695;
        }
      }
    }
  }
  puStack976 = (uint *)func_0x00102780();
  ppuVar17 = &puStack1080;
  do {
    if (ppuStack704 != (uint **)(plStack1040 + 4)) {
      *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10f753;
      func_0x00102750();
    }
    if (puStack944 != puStack1048 + 4) {
      *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10f76f;
      func_0x00102750();
    }
    lVar11 = 0;
    *puStack976 = 0xc;
code_r0x0010f77f:
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar11;
    }
    *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x11069c;
    puVar14 = (uint *)func_0x00102850();
code_r0x0011069c:
    bVar20 = true;
    if (param_4 == (uint *)0xffffffffffffffff) goto code_r0x0010fa8b;
    lVar13 = lVar11;
    if ((param_4 != (uint *)0x0) && (puVar15 = puVar19, -1 < (long)param_4)) {
code_r0x00110280:
      puVar19 = puVar15;
      lVar13 = lVar11;
      if ((!bVar20) && (puVar14 != (uint *)0xffffffffffffffff)) {
        bVar20 = lVar11 == lStack1008;
        param_4 = puVar14;
joined_r0x001102a3:
        if ((lVar13 == 0) || (bVar20 != false)) {
          puStack976 = (uint *)((ulong)puStack976 & 0xffffffffffffff00 | (ulong)bVar20);
          *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1102be;
          lVar11 = func_0x001029e0(param_4);
          if (lVar11 == 0) goto code_r0x0010f705;
          if ((puVar19 != (uint *)0x0) && ((char)puStack976 != '\0')) {
            *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1102f0;
            lVar11 = func_0x00102970(lVar11,lVar13,puVar19);
          }
        }
        else {
          *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10fa7f;
          lVar11 = func_0x00102a40(lVar13,param_4);
          if (lVar11 == 0) goto code_r0x0010f705;
        }
code_r0x0010fa8b:
        *(undefined *)(lVar11 + (long)puVar19) = 0;
        *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10fa95;
        puStack976 = (uint *)func_0x00102780();
        puStack1024 = param_3;
        uStack1068 = *puStack976;
        lVar13 = lVar11;
code_r0x0010fab0:
        lVar11 = lVar13;
        puVar6 = puStack992;
        param_3 = (uint *)((long)param_4 - (long)puVar19);
        iStack964 = -1;
        *puStack976 = 0;
        puVar15 = (uint *)0x7fffffff;
        if (param_3 < (uint *)0x80000000) {
          puVar15 = param_3;
        }
        lVar13 = lVar11;
        switch((ulong)puStack984 & 0xffffffff) {
        default:
          goto code_r0x001104c6;
        case 1:
          uVar8 = (ulong)(uint)(int)*(char *)(puStack944 + (long)unaff_R13[10] * 8 + 4);
          break;
        case 2:
          uVar8 = (ulong)*(byte *)(puStack944 + (long)unaff_R13[10] * 8 + 4);
          goto joined_r0x0010fec9;
        case 3:
          uVar8 = (ulong)(uint)(int)*(short *)(puStack944 + (long)unaff_R13[10] * 8 + 4);
joined_r0x0010fec9:
          if ((int)uStack1000 != 1) goto joined_r0x0010fece;
          goto code_r0x0010fe90;
        case 4:
          uVar8 = (ulong)*(ushort *)(puStack944 + (long)unaff_R13[10] * 8 + 4);
          break;
        case 5:
        case 6:
        case 0xd:
        case 0xe:
          uVar8 = (ulong)puStack944[(long)unaff_R13[10] * 8 + 4];
          break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xf:
        case 0x10:
        case 0x11:
          uVar4 = *(undefined8 *)(puStack944 + (long)unaff_R13[10] * 8 + 4);
          if ((int)uStack1000 != 1) {
            if ((int)uStack1000 != 2) {
              *(int **)((undefined *)ppuVar17 + -0x10) = piStack1016;
code_r0x0010fb39:
              puVar6 = puStack992;
              puStack1080 = puVar15;
              *(undefined8 *)((undefined *)ppuVar17 + -0x18) = 0x10fb5d;
              iVar7 = func_0x00102740(lVar11 + (long)puVar19,puVar15,1,0xffffffffffffffff,puVar6);
              goto code_r0x0010fb66;
            }
            *(int **)((undefined *)ppuVar17 + -0x10) = piStack1016;
            *(undefined8 *)((undefined *)ppuVar17 + -0x18) = uVar4;
            goto code_r0x0010fee4;
          }
          *(int **)((undefined *)ppuVar17 + -8) = piStack1016;
          *(undefined8 *)((undefined *)ppuVar17 + -0x10) = uVar4;
          goto code_r0x0010fc71;
        case 0xb:
          uVar4 = *(undefined8 *)(puStack944 + (long)unaff_R13[10] * 8 + 4);
          if ((int)uStack1000 == 1) {
            *(int **)((undefined *)ppuVar17 + -0x10) = piStack1016;
          }
          else {
            if ((int)uStack1000 != 2) {
              puStack1080 = puVar15;
              *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x11023e;
              iVar7 = func_0x00102740(uVar4,lVar11 + (long)puVar19,puVar15,1,0xffffffffffffffff,
                                      puVar6);
              goto code_r0x0010fb66;
            }
            uVar8 = (ulong)auStack960[1];
            *(int **)((undefined *)ppuVar17 + -8) = piStack1016;
            *(ulong *)((undefined *)ppuVar17 + -0x10) = uVar8;
          }
          puVar6 = puStack992;
          uVar8 = (ulong)auStack960[0];
          puStack1080 = puVar15;
          *(undefined8 *)((undefined *)ppuVar17 + -0x18) = 0x10fe53;
          iVar7 = func_0x00102740(uVar4,lVar11 + (long)puVar19,puVar15,1,0xffffffffffffffff,puVar6,
                                  uVar8);
          goto code_r0x0010fb66;
        case 0xc:
          Var1 = *(unkbyte10 *)(puStack944 + (long)unaff_R13[10] * 8 + 4);
          if ((int)uStack1000 != 1) {
            if ((int)uStack1000 != 2) {
              *(unkbyte10 *)((undefined *)ppuVar17 + -0x10) = Var1;
              goto code_r0x0010fb39;
            }
            uVar8 = (ulong)auStack960[1];
            *(int **)((undefined *)ppuVar17 + -0x10) = piStack1016;
            puVar6 = puStack992;
            *(unkbyte10 *)((undefined *)ppuVar17 + -0x20) = Var1;
            *(ulong *)((undefined *)ppuVar17 + -0x30) = uVar8;
            puStack1080 = puVar15;
            *(undefined8 *)((undefined *)ppuVar17 + -0x38) = 0x10fdd2;
            iVar7 = func_0x00102740(lVar11 + (long)puVar19,puVar15,1,0xffffffffffffffff,puVar6);
            goto code_r0x0010fb66;
          }
          *(int **)((undefined *)ppuVar17 + -0x10) = piStack1016;
          *(unkbyte10 *)((undefined *)ppuVar17 + -0x20) = Var1;
          goto code_r0x0010feeb;
        }
        if ((int)uStack1000 == 1) {
code_r0x0010fe90:
          *(int **)((undefined *)ppuVar17 + -8) = piStack1016;
          *(ulong *)((undefined *)ppuVar17 + -0x10) = uVar8;
code_r0x0010fc71:
          puVar6 = puStack992;
          puStack1080 = puVar15;
          *(undefined8 *)((undefined *)ppuVar17 + -0x18) = 0x10fc95;
          iVar7 = func_0x00102740(lVar11 + (long)puVar19,puVar15,1,0xffffffffffffffff,puVar6);
          if (-1 < iStack964) goto code_r0x0010fb74;
code_r0x0010fcac:
          if (*(char *)((long)puStack1024 + 1) == '\0') {
            if (-1 < iVar7) goto code_r0x0010fb8e;
            param_3 = (uint *)(ulong)*puStack976;
            if ((*puStack976 == 0) &&
               (param_3 = (uint *)0x16, (*(byte *)(unaff_R13 + 9) & 0xef) == 99)) {
              param_3 = (uint *)0x54;
            }
            if ((lVar11 != lStack1008) && (lVar11 != 0)) {
              *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1104b4;
              func_0x00102750(lVar11);
            }
            puVar6 = puStack1064;
            if (puStack1064 != (undefined *)0x0) {
              *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10fd16;
              func_0x00102750(puVar6);
            }
            if (ppuStack704 != (uint **)(plStack1040 + 4)) {
              *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10fd32;
              func_0x00102750();
            }
            if (puStack944 != puStack1048 + 4) {
              *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10fd4e;
              func_0x00102750();
            }
            lVar11 = 0;
            *puStack976 = (uint)param_3;
            goto code_r0x0010f77f;
          }
          *(undefined *)((long)puStack1024 + 1) = 0;
          goto code_r0x0010fab0;
        }
joined_r0x0010fece:
        if ((int)uStack1000 != 2) {
          *(int **)((undefined *)ppuVar17 + -0x10) = piStack1016;
          goto code_r0x0010fc71;
        }
        *(int **)((undefined *)ppuVar17 + -0x10) = piStack1016;
        *(ulong *)((undefined *)ppuVar17 + -0x18) = uVar8;
code_r0x0010fee4:
        *(ulong *)((undefined *)ppuVar17 + -0x20) = (ulong)auStack960[1];
code_r0x0010feeb:
        puVar6 = puStack992;
        puStack1080 = puVar15;
        *(undefined8 *)((undefined *)ppuVar17 + -0x28) = 0x10ff16;
        iVar7 = func_0x00102740(lVar11 + (long)puVar19,puVar15,1,0xffffffffffffffff,puVar6);
code_r0x0010fb66:
        if (iStack964 < 0) goto code_r0x0010fcac;
code_r0x0010fb74:
        if (((uint *)(long)iStack964 < puStack1080) &&
           (*(char *)((long)(uint *)(long)iStack964 + lVar11 + (long)puVar19) != '\0'))
        goto code_r0x001104c6;
        if (iStack964 < iVar7) {
code_r0x0010fb8e:
          iStack964 = iVar7;
        }
        if (puStack1080 <= (uint *)(ulong)(iStack964 + 1)) {
          if ((uint *)0x7ffffffe < param_3) {
            if ((lVar11 != lStack1008) && (lVar11 != 0)) {
              *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1104c1;
              func_0x00102750(lVar11);
            }
            puVar6 = puStack1064;
            if (puStack1064 != (undefined *)0x0) {
              *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x110416;
              func_0x00102750(puVar6);
            }
            if (ppuStack704 != (uint **)(plStack1040 + 4)) {
              *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x110432;
              func_0x00102750();
            }
            if (puStack944 != puStack1048 + 4) {
              *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x11044e;
              func_0x00102750();
            }
            lVar11 = 0;
            *puStack976 = 0x4b;
            goto code_r0x0010f77f;
          }
          puVar15 = (uint *)((long)param_4 * 2);
          puVar14 = (uint *)0xffffffffffffffff;
          if (-1 < (long)param_4) {
            puVar14 = puVar15;
          }
          puVar18 = (uint *)((ulong)(iStack964 + 2) + (long)puVar19);
          if (CARRY8((ulong)(iStack964 + 2),(ulong)puVar19)) {
            if (param_4 != (uint *)0xffffffffffffffff) goto code_r0x0010f711;
          }
          else {
            if (puVar14 < puVar18) {
              puVar14 = puVar18;
            }
            if (param_4 < puVar14) {
              if (((long)param_4 < 0) ||
                 ((puVar18 = puVar15, puVar15 < puVar14 &&
                  (puVar18 = puVar14, param_4 = puVar15, puVar14 == (uint *)0xffffffffffffffff))))
              goto code_r0x0010f711;
              bVar20 = lVar11 == lStack1008;
              param_3 = (uint *)((ulong)param_3 & 0xffffffffffffff00 | (ulong)bVar20);
              param_4 = puVar18;
              if ((lVar11 == 0) || (bVar20)) {
                *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10ff98;
                lVar13 = func_0x001029e0(puVar18);
                if (lVar13 == 0) goto code_r0x0010f711;
                if ((puVar19 != (uint *)0x0) && (bVar20)) {
                  *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10ffc3;
                  lVar13 = func_0x00102970(lVar13,lVar11,puVar19);
                }
              }
              else {
                *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10fc21;
                lVar13 = func_0x00102a40(lVar11,puVar18);
                if (lVar13 == 0) goto code_r0x0010f711;
              }
            }
          }
          goto code_r0x0010fab0;
        }
        puVar15 = (uint *)((long)iStack964 + (long)puVar19);
        *puStack976 = uStack1068;
code_r0x00110034:
        puVar18 = unaff_R13[1];
        unaff_R13 = unaff_R13 + 0xb;
        puVar14 = *unaff_R13;
        lStack1032 = lStack1032 + 1;
        puVar19 = puVar15;
        if (puVar14 != puVar18) {
code_r0x0010f6e9:
          param_3 = puVar15;
          puVar14 = (uint *)((long)puVar14 - (long)puVar18);
          puVar19 = (uint *)((long)param_3 + (long)puVar14);
          lVar10 = lVar11;
          lVar13 = lVar11;
          if (CARRY8((ulong)param_3,(ulong)puVar14)) {
            puVar15 = param_4;
            if (param_4 == (uint *)0xffffffffffffffff) {
code_r0x0010f844:
              *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10f853;
              func_0x00102970(lVar10 + (long)param_3,puVar18,puVar14);
              puVar19 = param_3;
              lVar11 = lVar10;
              goto code_r0x0010f853;
            }
            goto code_r0x0010f705;
          }
          puVar15 = puVar19;
          if (puVar19 <= param_4) goto code_r0x0010f844;
          if (param_4 == (uint *)0x0) {
            if ((uint *)0xc < puVar19) goto code_r0x00110122;
            param_4 = (uint *)0xc;
code_r0x0010f7f6:
            if (lVar11 != 0) goto code_r0x0010f809;
code_r0x00110148:
            uStack1000 = puVar18;
            puStack984 = (uint *)((ulong)puStack984 & 0xffffffffffffff00 |
                                 (ulong)(lVar11 == lStack1008));
            puStack976 = puVar14;
            *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x110164;
            lVar10 = func_0x001029e0(param_4);
            if (lVar10 != 0) {
              puVar14 = puStack976;
              puVar18 = uStack1000;
              if ((param_3 != (uint *)0x0) && (puVar18 = uStack1000, (char)puStack984 != '\0')) {
                puStack984 = uStack1000;
                *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1101b2;
                lVar10 = func_0x00102970(lVar10,lVar11,param_3);
                puVar14 = puStack976;
                puVar18 = puStack984;
              }
              goto code_r0x0010f844;
            }
            goto code_r0x0010f705;
          }
          if ((long)param_4 < 0) goto code_r0x0010f705;
          param_4 = (uint *)((long)param_4 * 2);
          if (puVar19 <= param_4) goto code_r0x0010f7f6;
code_r0x00110122:
          if (puVar19 == (uint *)0xffffffffffffffff) goto code_r0x0010f705;
          param_4 = puVar19;
          if (lVar11 == 0) goto code_r0x00110148;
code_r0x0010f809:
          if (lVar11 == lStack1008) goto code_r0x00110148;
          puStack984 = puVar18;
          puStack976 = puVar14;
          *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10f82a;
          lVar10 = func_0x00102a40(lVar11,param_4);
          puVar14 = puStack976;
          puVar18 = puStack984;
          if (lVar10 != 0) goto code_r0x0010f844;
code_r0x001101eb:
          *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1101f0;
          puStack976 = (uint *)func_0x00102780();
          goto code_r0x00110200;
        }
code_r0x0010f853:
        param_3 = puVar19;
        puVar19 = puVar15;
        lVar13 = lVar11;
        if (lStack712 == lStack1032) {
          bVar20 = false;
          param_3 = (uint *)((long)puVar15 + 1);
          lVar10 = lVar11;
          if (puVar15 < (uint *)0xffffffffffffffff) {
            if (param_4 < param_3) {
              if (param_4 == (uint *)0x0) {
                if (param_3 < (uint *)0xd) {
                  puVar14 = (uint *)0xc;
                }
                else {
code_r0x0011064e:
                  if ((bVar20) || (puVar14 = param_3, param_3 == (uint *)0xffffffffffffffff))
                  goto code_r0x0010f705;
                }
              }
              else {
                if ((long)param_4 < 0) goto code_r0x0010f705;
                param_4 = (uint *)((long)param_4 * 2);
                puVar14 = param_4;
                if (param_4 < param_3) goto code_r0x0011064e;
              }
              param_4 = puVar14;
              bVar20 = lVar11 == lStack1008;
              unaff_R13 = (uint **)((ulong)unaff_R13 & 0xffffffffffffff00 | (ulong)bVar20);
              if ((lVar11 == 0) || (bVar20)) {
                *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x110604;
                lVar10 = func_0x001029e0(param_4);
                if (lVar10 == 0) goto code_r0x0010f705;
                if ((puVar15 != (uint *)0x0) && (bVar20)) {
                  *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x110628;
                  lVar10 = func_0x00102970(lVar10,lVar11,puVar15);
                }
              }
              else {
                *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x110570;
                lVar10 = func_0x00102a40(lVar11,param_4);
                if (lVar10 == 0) goto code_r0x001101eb;
              }
            }
          }
          else {
            bVar20 = true;
            if (param_4 != (uint *)0xffffffffffffffff) {
              if ((param_4 != (uint *)0x0) && (-1 < (long)param_4)) goto code_r0x0011064e;
              goto code_r0x0010f705;
            }
          }
          *(undefined *)(lVar10 + (long)puVar15) = 0;
          lVar11 = lVar10;
          if ((lVar10 != lStack1008) && (param_3 < param_4)) {
            *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x11059a;
            lVar13 = func_0x00102a40(lVar10,param_3);
            if (lVar13 != 0) {
              lVar11 = lVar13;
            }
          }
          puVar6 = puStack1064;
          if (puStack1064 != (undefined *)0x0) {
            *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1105b5;
            func_0x00102750(puVar6);
          }
          if (ppuStack704 != (uint **)(plStack1040 + 4)) {
            *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1105d1;
            func_0x00102750();
          }
          if (puStack944 != puStack1048 + 4) {
            *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1105ed;
            func_0x00102750();
          }
          *ppuStack1056 = puVar15;
          goto code_r0x0010f77f;
        }
        puVar14 = unaff_R13[10];
        if (*(char *)(unaff_R13 + 9) == '%') {
          if (puVar14 != (uint *)0xffffffffffffffff) goto code_r0x001104c6;
          param_3 = (uint *)((long)puVar15 + 1);
          lVar10 = lVar11;
          if (puVar15 == (uint *)0xffffffffffffffff) {
            puVar14 = param_4;
            if (param_4 != (uint *)0xffffffffffffffff) goto code_r0x0010f705;
          }
          else {
            puVar14 = param_3;
            if (param_4 < param_3) {
              if (param_4 == (uint *)0x0) {
                if (param_3 < (uint *)0xd) {
                  puVar18 = (uint *)0xc;
                }
                else {
code_r0x00110492:
                  puVar18 = param_3;
                  if (param_3 == (uint *)0xffffffffffffffff) goto code_r0x0010f705;
                }
              }
              else {
                if ((long)param_4 < 0) goto code_r0x0010f705;
                param_4 = (uint *)((long)param_4 * 2);
                puVar18 = param_4;
                if (param_4 < param_3) goto code_r0x00110492;
              }
              param_4 = puVar18;
              if ((lVar11 == 0) || (lVar11 == lStack1008)) {
                puStack976 = (uint *)((ulong)puStack976 & 0xffffffffffffff00 |
                                     (ulong)(lVar11 == lStack1008));
                *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x11034e;
                lVar10 = func_0x001029e0();
                if (lVar10 == 0) goto code_r0x0010f705;
                if ((puVar15 != (uint *)0x0) && ((char)puStack976 != '\0')) {
                  *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x110380;
                  lVar10 = func_0x00102970(lVar10,lVar11,puVar15);
                }
              }
              else {
                *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1100ec;
                lVar10 = func_0x00102a40(lVar11,puVar18);
                if (lVar10 == 0) goto code_r0x001101eb;
              }
            }
          }
          *(undefined *)(lVar10 + (long)puVar15) = 0x25;
          puVar15 = puVar14;
          lVar11 = lVar10;
          goto code_r0x00110034;
        }
        if (puVar14 == (uint *)0xffffffffffffffff) goto code_r0x001104c6;
        uVar3 = puStack944[(long)puVar14 * 8];
        puStack984 = (uint *)((ulong)puStack984 & 0xffffffff00000000 | (ulong)uVar3);
        if (*(char *)(unaff_R13 + 9) == 'n') {
          if (4 < uVar3 - 0x12) goto code_r0x001104c6;
          ppuVar5 = *(uint ***)(puStack944 + (long)puVar14 * 8 + 4);
          switch(uVar3) {
          case 0x12:
            *(char *)ppuVar5 = (char)puVar15;
            break;
          case 0x13:
            *(short *)ppuVar5 = (short)puVar15;
            break;
          case 0x14:
            *(int *)ppuVar5 = (int)puVar15;
            break;
          default:
            *ppuVar5 = puVar15;
          }
          goto code_r0x00110034;
        }
        uVar3 = *(uint *)(unaff_R13 + 2);
        *puStack992 = 0x25;
        param_3 = (uint *)(puStack992 + 1);
        if ((uVar3 & 1) != 0) {
          param_3 = (uint *)(puStack992 + 2);
          puStack992[1] = 0x27;
        }
        if ((uVar3 & 2) != 0) {
          *(undefined *)param_3 = 0x2d;
          param_3 = (uint *)((long)param_3 + 1);
        }
        if ((uVar3 & 4) != 0) {
          *(undefined *)param_3 = 0x2b;
          param_3 = (uint *)((long)param_3 + 1);
        }
        if ((uVar3 & 8) != 0) {
          *(undefined *)param_3 = 0x20;
          param_3 = (uint *)((long)param_3 + 1);
        }
        if ((uVar3 & 0x10) != 0) {
          *(undefined *)param_3 = 0x23;
          param_3 = (uint *)((long)param_3 + 1);
        }
        if ((uVar3 & 0x40) != 0) {
          *(undefined *)param_3 = 0x49;
          param_3 = (uint *)((long)param_3 + 1);
        }
        if ((uVar3 & 0x20) != 0) {
          *(undefined *)param_3 = 0x30;
          param_3 = (uint *)((long)param_3 + 1);
        }
        puVar14 = unaff_R13[3];
        puVar18 = puStack944;
        if (puVar14 != unaff_R13[4]) {
          uStack1000 = puStack944;
          puVar18 = (uint *)((long)unaff_R13[4] - (long)puVar14);
          puStack976 = puVar18;
          *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10f935;
          func_0x00102970(param_3,puVar14,puVar18);
          param_3 = (uint *)((long)param_3 + (long)puStack976);
          puVar18 = uStack1000;
        }
        puVar14 = unaff_R13[6];
        if (puVar14 != unaff_R13[7]) {
          uStack1000 = puVar18;
          puVar18 = (uint *)((long)unaff_R13[7] - (long)puVar14);
          puStack976 = puVar18;
          *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10f972;
          func_0x00102970(param_3,puVar14,puVar18);
          param_3 = (uint *)((long)param_3 + (long)puStack976);
          puVar18 = uStack1000;
        }
        if ((uint)puStack984 < 0x11) {
          uVar8 = 1 << ((byte)puStack984 & 0x3f);
          if ((uVar8 & 0x14180) == 0) {
            if ((uVar8 & 0x1000) == 0) {
              if ((uVar8 & 0x600) != 0) {
                *(undefined *)param_3 = 0x6c;
                param_3 = (uint *)((long)param_3 + 1);
                goto code_r0x0010f9b4;
              }
            }
            else {
              *(undefined *)param_3 = 0x4c;
              param_3 = (uint *)((long)param_3 + 1);
            }
          }
          else {
code_r0x0010f9b4:
            *(undefined *)param_3 = 0x6c;
            param_3 = (uint *)((long)param_3 + 1);
          }
        }
        uVar2 = *(undefined *)(unaff_R13 + 9);
        *(undefined *)((long)param_3 + 1) = 0;
        *(undefined *)param_3 = uVar2;
        if (unaff_R13[5] == (uint *)0xffffffffffffffff) {
          uStack1000 = (uint *)((ulong)uStack1000._4_4_ << 0x20);
code_r0x0010f9f7:
          if (unaff_R13[8] != (uint *)0xffffffffffffffff) {
            if (puVar18[(long)unaff_R13[8] * 8] != 5) goto code_r0x001104c6;
            auStack960[(ulong)uStack1000 & 0xffffffff] = (puVar18 + (long)unaff_R13[8] * 8)[4];
            uStack1000 = (uint *)((ulong)uStack1000 & 0xffffffff00000000 |
                                 (ulong)((int)uStack1000 + 1));
          }
          bVar20 = false;
          puVar14 = (uint *)((long)puVar15 + 2);
          if ((uint *)0xfffffffffffffffd < puVar15) goto code_r0x0011069c;
          if (param_4 < puVar14) break;
          goto code_r0x0010fa8b;
        }
        if (puVar18[(long)unaff_R13[5] * 8] == 5) {
          uStack1000 = (uint *)CONCAT44(uStack1000._4_4_,1);
          auStack960[0] = (puVar18 + (long)unaff_R13[5] * 8)[4];
          goto code_r0x0010f9f7;
        }
code_r0x001104c6:
        *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1104cb;
        func_0x00102770();
code_r0x001104d0:
        if (ppuStack704 != (uint **)(plStack1040 + 4)) {
          *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x1104ec;
          func_0x00102750();
        }
        if (puStack944 != puStack1048 + 4) {
          *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x110508;
          func_0x00102750();
        }
        *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x11050d;
        puVar12 = (undefined4 *)func_0x00102780();
        lVar11 = 0;
        *puVar12 = 0x16;
        goto code_r0x0010f77f;
      }
    }
code_r0x0010f705:
    lVar11 = lVar13;
    *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10f70a;
    puStack976 = (uint *)func_0x00102780();
code_r0x0010f711:
    if ((lVar11 != lStack1008) && (lVar11 != 0)) {
code_r0x00110200:
      *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x110208;
      func_0x00102750(lVar11);
    }
    puVar6 = puStack1064;
    if (puStack1064 != (undefined *)0x0) {
      *(undefined8 *)((undefined *)ppuVar17 + -8) = 0x10f737;
      func_0x00102750(puVar6);
    }
  } while( true );
  if (param_4 == (uint *)0x0) {
    if ((uint *)0xc < puVar14) goto code_r0x00110280;
    param_4 = (uint *)0xc;
  }
  else {
    if ((long)param_4 < 0) goto code_r0x0010f705;
    param_4 = (uint *)((long)param_4 * 2);
    if (param_4 < puVar14) goto code_r0x00110280;
  }
  bVar20 = lVar11 == lStack1008;
  goto joined_r0x001102a3;
}

