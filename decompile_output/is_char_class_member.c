
long * is_char_class_member(long *param_1,ulong param_2)

{
  char **ppcVar1;
  char *pcVar2;
  char **ppcVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  char **ppcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 *puVar20;
  uint uVar21;
  byte *pbVar22;
  long lVar23;
  byte *extraout_RDX;
  ulong unaff_RBX;
  char **ppcVar24;
  char **ppcVar25;
  long lVar26;
  ulong uVar27;
  char **ppcVar28;
  byte *pbVar29;
  undefined *puVar30;
  byte bVar31;
  uint uVar32;
  undefined *puVar33;
  long lVar34;
  ulong unaff_R13;
  char **ppcVar35;
  ulong unaff_R15;
  long in_FS_OFFSET;
  bool bVar36;
  ulong uStack384;
  long lStack296;
  char *pcStack288;
  long lStack280;
  long lStack272;
  char **ppcStack264;
  long lStack256;
  long lStack240;
  ulong uStack232;
  long lStack224;
  ulong uStack216;
  long *plStack208;
  undefined *puStack200;
  byte *pbStack184;
  undefined1 *puStack176;
  undefined *puStack168;
  undefined8 uStack160;
  uint *puStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined *puStack128;
  ulong uStack120;
  uint *puStack112;
  undefined *puStack104;
  ulong uStack96;
  undefined *puStack88;
  long *plStack72;
  
  if ((uint)param_1 < 0xc) {
    switch((ulong)param_1 & 0xffffffff) {
    case 0:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 8);
      break;
    case 1:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 0x400);
      break;
    case 2:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)((uint)*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 1);
      break;
    case 3:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 2);
      break;
    case 4:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 0x800);
      break;
    case 5:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 0x8000);
      break;
    case 6:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 0x200);
      break;
    case 7:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 0x4000);
      break;
    case 8:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 4);
      break;
    case 9:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 0x2000);
      break;
    case 10:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 0x100);
      break;
    case 0xb:
      plVar9 = (long *)func_0x001018e0();
      uVar14 = (ulong)(*(ushort *)(*plVar9 + (param_2 & 0xff) * 2) & 0x1000);
    }
    return (long *)(uVar14 & 0xffffffffffffff00 | (ulong)((int)uVar14 != 0));
  }
  func_0x00101600();
  uVar14 = 0;
  param_1[4] = 0;
  *(undefined *)(param_1 + 6) = 0;
  *(undefined *)((long)param_1 + 0x32) = 0;
  *(undefined *)((long)param_1 + 0x31) = 0;
  puStack112 = *(uint **)(*param_1 + 8);
  plStack72 = param_1;
  if (puStack112 != (uint *)0x0) {
    puVar33 = &UNK_00107290;
    do {
      if (4 < *puStack112) {
        puStack88 = &UNK_00102d65;
        func_0x00101600();
code_r0x00102d65:
        puStack88 = &UNK_00102d84;
        func_0x00101720(&UNK_00107388,&UNK_00107021,0x4ee,__PRETTY_FUNCTION___7281);
code_r0x00102d84:
        puStack88 = &UNK_00102d97;
        uVar11 = func_0x00101690(0,&UNK_0010702a,5);
        puVar20 = (undefined4 *)0x0;
        plStack208 = (long *)0x1;
        puStack88 = &UNK_00102da8;
        func_0x00101850(1,0,uVar11);
        puStack104 = &UNK_00107290;
        lVar13 = plStack208[2];
        goto code_r0x00102dcd;
      }
      switch(*puStack112) {
      case 0:
        unaff_RBX = 1;
        break;
      case 1:
        if (*(byte *)((long)puStack112 + 0x11) < *(byte *)(puStack112 + 4)) goto code_r0x00102d65;
        unaff_RBX = SEXT48((int)(((uint)*(byte *)((long)puStack112 + 0x11) -
                                 (uint)*(byte *)(puStack112 + 4)) + 1));
        break;
      case 2:
        uVar7 = puStack112[4];
        unaff_R15 = (ulong)uVar7;
        unaff_R13 = 0;
        unaff_RBX = 0;
        *(undefined *)((long)plStack72 + 0x31) = 1;
        do {
          puStack88 = &UNK_00102cdb;
          cVar4 = is_char_class_member(unaff_R15,unaff_R13);
          unaff_RBX = (unaff_RBX + 1) - (ulong)(cVar4 == '\0');
          uVar21 = (int)unaff_R13 + 1;
          unaff_R13 = (ulong)uVar21;
        } while (uVar21 != 0x100);
        if ((uVar7 != 6) && (uVar7 != 10)) {
          *(undefined *)((long)plStack72 + 0x32) = 1;
        }
        break;
      case 3:
        uVar10 = 0;
        unaff_RBX = 0;
        do {
          cVar4 = (char)uVar10;
          uVar7 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar7;
          unaff_RBX = unaff_RBX + (*(char *)(puStack112 + 4) == cVar4);
        } while (uVar7 != 0x100);
        *(undefined *)(plStack72 + 6) = 1;
        break;
      case 4:
        unaff_RBX = *(ulong *)(puStack112 + 6);
        if (unaff_RBX != 0) break;
        *(uint **)(plStack72 + 5) = puStack112;
        plStack72[4] = plStack72[4] + 1;
        goto code_r0x00102c93;
      }
      bVar36 = CARRY8(unaff_RBX,uVar14);
      unaff_RBX = unaff_RBX + uVar14;
      uVar14 = unaff_RBX;
      if ((bVar36) || (unaff_RBX == 0xffffffffffffffff)) goto code_r0x00102d84;
code_r0x00102c93:
      puStack112 = *(uint **)(puStack112 + 2);
    } while (puStack112 != (uint *)0x0);
  }
  plStack72[3] = uVar14;
  return plStack72;
code_r0x00102dcd:
  if (puVar20 != (undefined4 *)0x0) {
    *puVar20 = 2;
  }
  if (lVar13 == -2) {
    puStack152 = *(uint **)(*plStack208 + 8);
    plStack208[2] = -1;
    *(uint **)(plStack208 + 1) = puStack152;
  }
  else {
    puStack152 = (uint *)plStack208[1];
  }
  if (puStack152 == (uint *)0x0) {
    return (long *)0xffffffff;
  }
  uStack120 = unaff_RBX;
  uStack96 = unaff_R13;
  puStack88 = (undefined *)uVar14;
  if (4 < *puStack152) {
    puStack128 = &UNK_00102fe3;
    func_0x00101600();
    uVar14 = unaff_RBX;
    goto code_r0x00102fe3;
  }
  switch(*puStack152) {
  default:
    lVar13 = *(long *)(puStack152 + 2);
    bVar5 = *(byte *)(puStack152 + 4);
    plStack208[2] = -1;
    plStack208[1] = lVar13;
    return (long *)(ulong)bVar5;
  case 1:
    if (plStack208[2] == -1) {
      uVar14 = (ulong)*(byte *)(puStack152 + 4);
      plStack208[2] = uVar14;
    }
    else {
      uVar14 = plStack208[2] + 1;
      plStack208[2] = uVar14;
    }
    uVar10 = uVar14 & 0xffffffff;
    if ((ulong)*(byte *)((long)puStack152 + 0x11) != uVar14) {
      return (long *)uVar10;
    }
    goto code_r0x00102f02;
  case 2:
    uVar7 = puStack152[4];
    puVar33 = (undefined *)(ulong)uVar7;
    if (puVar20 != (undefined4 *)0x0) {
      if (uVar7 == 6) {
        *puVar20 = 0;
      }
      else {
        if (uVar7 == 10) {
          *puVar20 = 1;
        }
      }
    }
    uVar14 = plStack208[2];
    if (uVar14 != 0xffffffffffffffff) goto code_r0x00102e85;
    uVar21 = 0;
    goto code_r0x00102f4b;
  case 4:
    break;
  }
  lVar13 = *(long *)(puStack152 + 6);
  if (lVar13 != 0) goto code_r0x00102fb2;
  lVar13 = *(long *)(puStack152 + 2);
  plStack208[2] = -1;
  plStack208[1] = lVar13;
  lVar13 = -1;
  goto code_r0x00102dcd;
code_r0x00102f4b:
  puStack128 = &UNK_00102f55;
  cVar4 = is_char_class_member((ulong)uVar7,(ulong)uVar21);
  if (cVar4 != '\0') {
    uVar14 = SEXT48((int)uVar21);
    plStack208[2] = uVar14;
code_r0x00102e85:
    puStack128 = &UNK_00102e90;
    cVar4 = is_char_class_member((ulong)uVar7,uVar14 & 0xff);
    if (cVar4 != '\0') {
      uVar10 = uVar14 & 0xffffffff;
      uVar21 = (int)uVar14 + 1;
      if ((int)uVar21 < 0x100) {
        do {
          puStack128 = &UNK_00102ec6;
          cVar4 = is_char_class_member((ulong)uVar7,(ulong)uVar21 & 0xff);
          if (cVar4 != '\0') {
            plStack208[2] = (long)(int)uVar21;
            return (long *)uVar10;
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != 0x100);
      }
      goto code_r0x00102f02;
    }
code_r0x00102fe3:
    puStack128 = &UNK_00103002;
    func_0x00101720(&UNK_001073b8,&UNK_00107021,0x437);
    puStack136 = &UNK_00103024;
    puStack128 = (undefined *)uVar14;
    uStack160 = func_0x00101690(0,&UNK_00107051,5);
    puStack136 = &UNK_0010302c;
    puVar12 = (uint *)func_0x00101610();
    uVar14 = (ulong)*puVar12;
    uVar11 = 1;
    puStack136 = &UNK_0010303d;
    func_0x00101850(1,uVar14,uStack160);
    lStack224 = 0;
    puStack144 = &UNK_00103051;
    lVar13 = safe_read(0,uVar11,uVar14);
    if (lVar13 != -1) {
      return (long *)lVar13;
    }
    puStack144 = &UNK_00103061;
    plain_read_part_5();
    puStack144 = puVar33;
    while( true ) {
      pbStack184 = (byte *)0x0;
      puStack168 = &UNK_00103095;
      lVar13 = lStack224;
      uVar14 = safe_read(0,lStack224,uVar11);
      if (uVar14 == 0xffffffffffffffff) break;
      if (uVar14 == 0) {
        return (long *)0;
      }
      uVar10 = 0;
      do {
        uVar27 = uVar10;
        uVar10 = uVar27 + 1;
        if (in_delete_set[*(byte *)(lStack224 + uVar27)] != '\0') {
          if (uVar10 < uVar14) goto code_r0x001030b7;
          goto code_r0x001030db;
        }
      } while (uVar14 != uVar10);
      uVar10 = uVar27 + 2;
      uVar27 = uVar14;
      if (uVar14 <= uVar10) {
        return (long *)uVar14;
      }
code_r0x001030b7:
      pbVar22 = (byte *)(uVar10 + lStack224);
      do {
        if (in_delete_set[*pbVar22] == '\0') {
          *(byte *)(lStack224 + uVar27) = *pbVar22;
          uVar27 = uVar27 + 1;
        }
        pbVar22 = pbVar22 + 1;
      } while ((byte *)(uVar14 + lStack224) != pbVar22);
code_r0x001030db:
      if (uVar27 != 0) {
        return (long *)uVar27;
      }
    }
    puStack168 = &UNK_00103116;
    plain_read_part_5();
    lStack240 = 0;
    puStack176 = &UNK_00103131;
    pbVar22 = pbStack184;
    puStack168 = (undefined *)uVar11;
    lVar13 = safe_read(0,pbStack184,lVar13);
    if (lVar13 != -1) {
      pbVar22 = pbStack184 + lVar13;
      if (lVar13 != 0) {
        do {
          pbVar29 = pbStack184 + 1;
          *pbStack184 = xlate[*pbStack184];
          pbStack184 = pbVar29;
        } while (pbVar22 != pbVar29);
      }
      return (long *)lVar13;
    }
    puStack176 = &UNK_0010316a;
    plain_read_part_5();
    puStack176 = in_delete_set;
    uStack232 = (ulong)pbVar22 & 0xffffffff;
    puStack200 = &UNK_00103185;
    puVar20 = (undefined4 *)xmalloc(0x20);
    lVar13 = *(long *)(lStack240 + 8);
    *(undefined8 *)(puVar20 + 2) = 0;
    *puVar20 = 0;
    *(char *)(puVar20 + 4) = (char)uStack232;
    if (lVar13 != 0) {
      *(undefined4 **)(lVar13 + 8) = puVar20;
      *(undefined4 **)(lStack240 + 8) = puVar20;
      return (long *)puVar20;
    }
    puVar33 = &UNK_00107021;
    pbVar22 = &UNK_0010705c;
    puStack200 = &UNK_001031ce;
    func_0x00101720(&UNK_0010705c,&UNK_00107021,0x287);
    lStack256 = *(long *)(in_FS_OFFSET + 0x28);
    uStack216 = unaff_R13;
    puStack200 = (undefined *)unaff_R15;
    uVar11 = func_0x001016b0();
    lVar15 = xmalloc(uVar11);
    ppcVar28 = (char **)0x1;
    lStack280 = lVar15;
    lVar13 = xcalloc(uVar11);
    bVar5 = *pbVar22;
    lStack272 = lVar13;
    if (bVar5 == 0) goto code_r0x001039e7;
    ppcVar24 = (char **)0x0;
    ppcVar35 = (char **)0x0;
    do {
      iVar8 = (int)ppcVar24;
      ppcVar24 = (char **)(ulong)(iVar8 + 1);
      ppcStack264 = (char **)(ulong)((int)ppcVar35 + 1);
      bVar31 = pbVar22[(long)ppcVar24];
      ppcVar28 = ppcVar24;
      if (bVar5 == 0x5c) {
        *(undefined *)(lVar13 + (long)ppcVar35) = 1;
        if (bVar31 == 0x62) {
          bVar31 = 8;
          uVar7 = iVar8 + 2;
        }
        else {
          if ((char)bVar31 < 'c') {
            if ((char)bVar31 < '8') {
              if ((char)bVar31 < '0') {
                if (bVar31 == 0) {
                  uVar11 = func_0x00101690(0,&UNK_00107458,5);
                  ppcVar28 = (char **)0x0;
                  func_0x00101850(0,0,uVar11);
                  uVar7 = iVar8 + 1;
                  *(undefined *)(lVar13 + (long)ppcVar35) = 0;
                  bVar31 = 0x5c;
                }
                else {
code_r0x0010391d:
                  uVar7 = iVar8 + 2;
                }
              }
              else {
                uVar7 = iVar8 + 2;
                uVar21 = (uint)bVar31;
                bVar31 = (byte)(uVar21 - 0x30);
                if ((int)(char)pbVar22[uVar7] - 0x30U < 8) {
                  uVar32 = ((int)(char)pbVar22[uVar7] - 0x30U) + (uVar21 - 0x30) * 8;
                  bVar31 = (byte)uVar32;
                  uVar7 = iVar8 + 3;
                  uVar21 = (int)(char)pbVar22[iVar8 + 3] - 0x30;
                  if (uVar21 < 8) {
                    if ((int)(uVar21 + (uVar32 & 0xff) * 8) < 0x100) {
                      bVar31 = (char)uVar21 + bVar31 * '\b';
                      uVar7 = iVar8 + 4;
                    }
                    else {
                      uVar11 = func_0x00101690(0,&UNK_001073f0,5);
                      ppcVar28 = (char **)0x0;
                      func_0x00101850(0,0,uVar11);
                      uVar7 = iVar8 + 3;
                    }
                  }
                }
              }
            }
            else {
              if (bVar31 == 0x5c) {
                bVar31 = 0x5c;
                uVar7 = iVar8 + 2;
              }
              else {
                if (bVar31 != 0x61) goto code_r0x0010391d;
                bVar31 = 7;
                uVar7 = iVar8 + 2;
              }
            }
          }
          else {
            if (bVar31 == 0x72) {
              bVar31 = 0xd;
              uVar7 = iVar8 + 2;
            }
            else {
              if ((char)bVar31 < 's') {
                if (bVar31 == 0x66) {
                  bVar31 = 0xc;
                  uVar7 = iVar8 + 2;
                }
                else {
                  if (bVar31 != 0x6e) goto code_r0x0010391d;
                  bVar31 = 10;
                  uVar7 = iVar8 + 2;
                }
              }
              else {
                if (bVar31 == 0x74) {
                  bVar31 = 9;
                  uVar7 = iVar8 + 2;
                }
                else {
                  if (bVar31 != 0x76) goto code_r0x0010391d;
                  bVar31 = 0xb;
                  uVar7 = iVar8 + 2;
                }
              }
            }
          }
        }
        ppcVar24 = (char **)(ulong)uVar7;
        *(byte *)(lVar15 + (long)ppcVar35) = bVar31;
        bVar5 = pbVar22[(long)ppcVar24];
      }
      else {
        *(byte *)(lVar15 + (long)ppcVar35) = bVar5;
        bVar5 = bVar31;
      }
      ppcVar35 = ppcStack264;
      if (bVar5 == 0) {
        do {
          ppcVar35 = (char **)0x0;
          lVar23 = lVar15;
          ppcVar24 = ppcStack264;
code_r0x001032e8:
          ppcVar3 = (char **)((long)ppcVar35 + 2);
joined_r0x001032ef:
          if (ppcVar24 <= ppcVar3) {
            if (ppcVar35 < ppcVar24) {
              pbVar22 = (byte *)((long)ppcVar35 + lVar15);
              do {
                bVar5 = *pbVar22;
                pbVar22 = pbVar22 + 1;
                append_normal_char(puVar33,(ulong)bVar5);
              } while ((byte *)(lVar15 + (long)ppcVar24) != pbVar22);
            }
            uStack384 = 1;
            goto code_r0x00103635;
          }
          ppcVar1 = (char **)((long)ppcVar35 + 1);
          cVar4 = *(char *)(lVar23 + 1 + (long)ppcVar35);
          if ((*(char *)(lVar23 + (long)ppcVar35) != '[') ||
             (uStack384 = (ulong)*(byte *)(lVar13 + (long)ppcVar35),
             *(byte *)(lVar13 + (long)ppcVar35) != 0)) goto code_r0x00103302;
          if (((cVar4 != ':') && (cVar4 != '=')) || (*(char *)(lVar13 + (long)ppcVar1) != '\0'))
          goto code_r0x00103391;
          bVar5 = *(byte *)(lVar15 + (long)ppcVar1);
          ppcVar28 = (char **)(ulong)bVar5;
          ppcVar25 = ppcVar3;
          do {
            ppcVar16 = ppcVar25;
            if ((char **)((long)ppcVar24 + -1) <= ppcVar16) goto code_r0x00103391;
            ppcVar25 = (char **)((long)ppcVar16 + 1);
          } while ((((bVar5 != *(byte *)(lVar23 + (long)ppcVar16)) ||
                    (*(char *)(lVar23 + 1 + (long)ppcVar16) != ']')) ||
                   (*(char *)(lVar13 + -1 + (long)ppcVar25) != '\0')) ||
                  (*(char *)(lVar13 + (long)ppcVar25) != '\0'));
          puVar30 = (undefined *)(lVar15 + (long)ppcVar3);
          lVar26 = (-2 - (long)ppcVar35) + (long)ppcVar16;
          if (lVar26 == 0) {
            if (bVar5 == 0x3a) {
              puVar33 = &UNK_001074a0;
            }
            else {
              puVar33 = &UNK_001074c8;
            }
            uVar11 = func_0x00101690(0,puVar33,5);
            func_0x00101850(0,0,uVar11);
            goto code_r0x00103635;
          }
          if (bVar5 == 0x3a) {
            lVar34 = 0;
            do {
              ppcVar25 = *(char ***)(char_class_name + lVar34 * 8);
              ppcVar28 = ppcVar25;
              iVar8 = func_0x00101620(puVar30,ppcVar25,lVar26);
              if ((iVar8 == 0) && (lVar19 = func_0x001016b0(ppcVar25), lVar26 == lVar19)) {
                puVar20 = (undefined4 *)xmalloc(0x20);
                *(undefined8 *)(puVar20 + 2) = 0;
                *puVar20 = 2;
                lVar23 = *(long *)(puVar33 + 8);
                puVar20[4] = (int)lVar34;
                if (lVar23 == 0) goto code_r0x00103aad;
                goto code_r0x00103981;
              }
              lVar34 = lVar34 + 1;
            } while (lVar34 != 0xc);
            ppcVar28 = ppcVar3;
            cVar6 = star_digits_closebracket(&lStack280);
            if (cVar6 != '\0') goto code_r0x00103391;
            uVar11 = make_printable_str(puVar30,lVar26);
            uVar17 = quote(uVar11);
            puVar33 = &UNK_00107067;
code_r0x00103794:
            uVar18 = func_0x00101690(0,puVar33,5);
code_r0x0010379e:
            func_0x00101850(0,0,uVar18,uVar17);
            func_0x001015f0(uVar11);
            goto code_r0x00103635;
          }
          if (lVar26 != 1) {
            ppcVar28 = ppcVar3;
            cVar6 = star_digits_closebracket(&lStack280);
            if (cVar6 == '\0') {
              uVar17 = make_printable_str(puVar30,lVar26);
              uVar18 = func_0x00101690(0,&UNK_001074f8,5);
              uVar11 = uVar17;
              goto code_r0x0010379e;
            }
code_r0x00103391:
            if (((*(char *)(lVar23 + (long)ppcVar3) == '*') &&
                (*(char *)(lVar13 + (long)ppcVar3) == '\0')) &&
               ((ppcVar25 = (char **)((long)ppcVar35 + 3), ppcVar25 < ppcVar24 &&
                (*(char *)(lVar13 + 3 + (long)ppcVar35) == '\0')))) {
              pcVar2 = (char *)(lVar23 + (long)ppcVar25);
              cVar6 = *pcVar2;
              if (cVar6 != ']') {
                while ((ppcVar16 = ppcVar25, ppcVar25 = (char **)((long)ppcVar16 + 1),
                       ppcVar25 < ppcVar24 && (*(char *)(lVar13 + 1 + (long)ppcVar16) == '\0'))) {
                  if (*(char *)(lVar23 + (long)ppcVar25) == ']') {
                    lVar26 = ~(ulong)ppcVar1 + (long)ppcVar16;
                    if (lVar26 == 0) goto code_r0x00103407;
                    ppcVar28 = &pcStack288;
                    iVar8 = xstrtoumax(pcVar2,&pcStack288,
                                       (ulong)((uint)(cVar6 != '0') + 8 + (uint)(cVar6 != '0')),
                                       &lStack296);
                    if (((iVar8 == 0) && (lStack296 != -1)) && (pcStack288 == pcVar2 + lVar26))
                    goto code_r0x00103410;
                    uVar11 = make_printable_str(pcVar2,lVar26);
                    uVar17 = quote(uVar11);
                    puVar33 = &UNK_00107538;
                    goto code_r0x00103794;
                  }
                }
                goto code_r0x00103302;
              }
code_r0x00103407:
              lStack296 = 0;
code_r0x00103410:
              lVar13 = lStack296;
              puVar20 = (undefined4 *)xmalloc(0x20);
              cVar6 = (char)ppcVar28;
              *(undefined8 *)(puVar20 + 2) = 0;
              *puVar20 = 4;
              *(long *)(puVar20 + 6) = lVar13;
              lVar13 = *(long *)(puVar33 + 8);
              *(char *)(puVar20 + 4) = cVar4;
              if (lVar13 == 0) goto code_r0x00103acc;
              ppcVar35 = (char **)((long)ppcVar25 + 1);
              *(undefined4 **)(lVar13 + 8) = puVar20;
              *(undefined4 **)(puVar33 + 8) = puVar20;
              lVar23 = lStack280;
              lVar13 = lStack272;
              ppcVar24 = ppcStack264;
              goto code_r0x001032e8;
            }
code_r0x00103302:
            bVar5 = *(byte *)(lVar15 + (long)ppcVar35);
            ppcVar28 = (char **)(ulong)bVar5;
            if ((cVar4 == '-') &&
               (uStack384 = (ulong)*(byte *)(lVar13 + (long)ppcVar1),
               *(byte *)(lVar13 + (long)ppcVar1) == 0)) goto code_r0x00103491;
            append_normal_char();
            ppcVar3 = (char **)((long)ppcVar35 + 3);
            ppcVar35 = ppcVar1;
            goto joined_r0x001032ef;
          }
          puVar20 = (undefined4 *)xmalloc(0x20);
          *(undefined8 *)(puVar20 + 2) = 0;
          *puVar20 = 3;
          *(undefined *)(puVar20 + 4) = *puVar30;
          lVar23 = *(long *)(puVar33 + 8);
          if (lVar23 != 0) {
code_r0x00103981:
            *(undefined4 **)(lVar23 + 8) = puVar20;
            ppcVar35 = (char **)((long)ppcVar16 + 2);
            *(undefined4 **)(puVar33 + 8) = puVar20;
            lVar23 = lStack280;
            lVar13 = lStack272;
            ppcVar24 = ppcStack264;
            goto code_r0x001032e8;
          }
          ppcVar28 = (char **)&UNK_00107021;
          func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2e5,__PRETTY_FUNCTION___7150);
code_r0x001039e7:
          ppcStack264 = (char **)0x0;
        } while( true );
      }
    } while( true );
  }
  uVar21 = uVar21 + 1;
  if (uVar21 == 0x100) {
    puStack128 = &UNK_00102fb2;
    lVar13 = func_0x00101720(&UNK_00107045,&UNK_00107021,0x434,__PRETTY_FUNCTION___7229);
code_r0x00102fb2:
    uVar10 = (ulong)*(byte *)(puStack152 + 4);
    lVar15 = plStack208[2] + 1;
    if (plStack208[2] == -1) {
      lVar15 = 1;
    }
    plStack208[2] = lVar15;
    if (lVar13 != lVar15) {
      return (long *)uVar10;
    }
code_r0x00102f02:
    lVar13 = *(long *)(puStack152 + 2);
    plStack208[2] = -1;
    plStack208[1] = lVar13;
    return (long *)uVar10;
  }
  goto code_r0x00102f4b;
code_r0x00103491:
  bVar31 = *(byte *)(lVar15 + (long)ppcVar3);
  if (bVar31 < bVar5) {
    uVar11 = make_printable_char((ulong)bVar5);
    uVar17 = make_printable_char((ulong)bVar31);
    uVar18 = func_0x00101690(0,&UNK_00107568,5);
    func_0x00101850(0,0,uVar18,uVar11,uVar17);
    func_0x001015f0(uVar11);
    func_0x001015f0(uVar17);
code_r0x00103635:
    func_0x001015f0(lVar23);
    func_0x001015f0(lVar13);
    if (lStack256 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (long *)uStack384;
    }
code_r0x00103aa8:
    func_0x001016c0();
code_r0x00103aad:
    cVar6 = '!';
    puVar33 = &UNK_0010705c;
    func_0x00101720(&UNK_0010705c,&UNK_00107021,699,__PRETTY_FUNCTION___7136);
code_r0x00103acc:
    append_repeated_char_part_8();
    *(undefined8 *)(puVar33 + 0x10) = 0xfffffffffffffffe;
    while( true ) {
      pbVar22 = (byte *)get_next(puVar33,0);
      if ((int)pbVar22 == -1) break;
      extraout_RDX[(int)pbVar22] = 1;
    }
    if (cVar6 != '\0') {
      pbVar22 = extraout_RDX + 0x100;
      pbVar29 = extraout_RDX;
      do {
        *pbVar29 = *pbVar29 ^ 1;
        pbVar29 = pbVar29 + 1;
      } while (pbVar29 != pbVar22);
    }
    return (long *)pbVar22;
  }
  puVar20 = (undefined4 *)xmalloc(0x20);
  *(undefined8 *)(puVar20 + 2) = 0;
  *puVar20 = 1;
  *(byte *)(puVar20 + 4) = bVar5;
  *(byte *)((long)puVar20 + 0x11) = bVar31;
  if (*(long *)(puVar33 + 8) == 0) {
    func_0x00101720(&UNK_0010705c,&UNK_00107021,0x2a5,__PRETTY_FUNCTION___7128);
    goto code_r0x00103aa8;
  }
  *(undefined4 **)(*(long *)(puVar33 + 8) + 8) = puVar20;
  ppcVar35 = (char **)((long)ppcVar35 + 3);
  *(undefined4 **)(puVar33 + 8) = puVar20;
  goto code_r0x001032e8;
}

