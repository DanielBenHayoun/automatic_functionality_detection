
undefined1 *
quotearg_buffer_restyled
          (undefined *param_1,ulong param_2,long param_3,uint *param_4,uint param_5,uint param_6,
          long param_7,char *param_8,char *param_9)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined auVar8 [16];
  int iVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined4 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  char cVar17;
  uint *puVar18;
  uint *puVar19;
  char *pcVar20;
  undefined8 extraout_RDX;
  byte bVar21;
  undefined4 *puVar22;
  ulong *puVar23;
  undefined1 *puVar24;
  uint *puVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  undefined4 uVar34;
  undefined *puVar35;
  uint uStack224;
  ulong uStack208;
  char *pcStack160;
  ulong uStack152;
  char *pcStack136;
  char *pcStack128;
  bool bStack108;
  uint uStack76;
  undefined8 uStack72;
  long lStack64;
  
  pcStack128 = param_8;
  pcStack136 = param_9;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puVar35 = &UNK_00108a01;
  puVar18 = param_4;
  uVar28 = param_2;
  puVar24 = param_1;
  lVar11 = func_0x001021a0();
  uStack224 = param_5;
  switch(param_5) {
  case 0:
    bVar7 = true;
    bStack108 = false;
    bVar4 = false;
    uStack152 = 0;
    bVar33 = false;
    uVar28 = 0;
    bVar5 = false;
    uStack208 = 0;
    pcStack160 = (char *)0x0;
    break;
  case 2:
    if ((param_6 & 2) == 0) goto code_r0x00109b88;
    bVar7 = true;
    bStack108 = false;
    bVar4 = false;
    uStack152 = 0;
    bVar33 = true;
    bVar5 = false;
    uStack208 = 1;
    uVar28 = 0;
    pcStack160 = "\'";
    break;
  case 3:
    bVar5 = true;
code_r0x00108a43:
    bStack108 = false;
    uStack152 = 0;
    bVar33 = true;
    bVar7 = true;
    bVar4 = false;
    uStack208 = 1;
    uVar28 = 0;
    uStack224 = 2;
    pcStack160 = "\'";
    break;
  case 4:
    if ((param_6 & 2) == 0) {
      bVar5 = true;
      goto code_r0x00109601;
    }
  case 1:
    bVar5 = false;
    goto code_r0x00108a43;
  case 5:
    if ((param_6 & 2) == 0) {
      if (param_2 != 0) {
        *param_1 = 0x22;
      }
      bStack108 = false;
      uStack152 = 0;
      bVar7 = true;
      bVar4 = false;
      bVar33 = false;
      bVar5 = true;
      uStack208 = 1;
      uVar28 = 1;
      pcStack160 = "\"";
    }
    else {
      bVar7 = true;
      bStack108 = false;
      bVar4 = false;
      uStack152 = 0;
      bVar33 = true;
      bVar5 = true;
      uStack208 = 1;
      uVar28 = 0;
      pcStack160 = "\"";
    }
    break;
  case 6:
    bVar7 = true;
    bStack108 = false;
    bVar4 = false;
    uStack152 = 0;
    bVar33 = true;
    bVar5 = true;
    uStack208 = 1;
    uVar28 = 0;
    pcStack160 = "\"";
    uStack224 = 5;
    break;
  case 7:
    bVar7 = true;
    bStack108 = false;
    bVar4 = false;
    uStack152 = 0;
    bVar33 = false;
    uVar28 = 0;
    bVar5 = true;
    uStack208 = 0;
    pcStack160 = (char *)0x0;
    break;
  case 8:
  case 9:
  case 10:
    if (param_5 != 10) {
      pcStack128 = (char *)func_0x00102190(0,&UNK_001100d3,5);
      if (pcStack128 == "`") {
        pcStack128 = (char *)gettext_quote_part_1(&UNK_001100d3,(ulong)param_5);
      }
      pcStack136 = (char *)func_0x00102190(0,&UNK_00110adf,5);
      if (pcStack136 == "\'") {
        pcStack136 = (char *)gettext_quote_part_1(&UNK_00110adf);
      }
    }
    uVar28 = 0;
    if ((param_6 & 2) == 0) {
      cVar17 = *pcStack128;
      while (cVar17 != '\0') {
        if (uVar28 < param_2) {
          param_1[uVar28] = cVar17;
        }
        uVar28 = uVar28 + 1;
        cVar17 = pcStack128[uVar28];
      }
    }
    bVar33 = (param_6 & 2) != 0;
    pcStack160 = pcStack136;
    bVar4 = false;
    puVar35 = &UNK_001097a3;
    uStack208 = func_0x001021b0(pcStack136);
    bVar7 = true;
    bStack108 = false;
    uStack152 = 0;
    bVar5 = true;
    break;
  default:
    func_0x001020a0();
    iVar9 = (int)puVar24;
    puVar35 = &UNK_00109bf1;
    puVar14 = (undefined4 *)func_0x001020b0();
    uVar34 = *puVar14;
    if (-1 < iVar9) {
      puVar22 = slotvec;
      if (nslots <= iVar9) {
        if (iVar9 == 0x7fffffff) goto code_r0x00109d76;
        iVar27 = iVar9 + 1;
        if (slotvec == (undefined4 *)slotvec0) {
          puVar22 = (undefined4 *)xrealloc(0,(long)iVar27 << 4);
          auVar8 = slotvec0;
          slotvec = puVar22;
          *puVar22 = SUB164(slotvec0,0);
          puVar22[1] = SUB164(auVar8 >> 0x20,0);
          puVar22[2] = SUB164(auVar8 >> 0x40,0);
          puVar22[3] = SUB164(auVar8 >> 0x60,0);
        }
        else {
          puVar22 = (undefined4 *)xrealloc(slotvec,(long)iVar27 << 4);
          slotvec = puVar22;
        }
        puVar35 = &UNK_00109c6e;
        func_0x001022a0(puVar22 + (long)nslots * 4,0,(long)(iVar27 - nslots) << 4);
        nslots = iVar27;
      }
      puVar23 = (ulong *)(puVar22 + (long)iVar9 * 4);
      uVar26 = *puVar23;
      puVar24 = (undefined1 *)puVar23[1];
      uVar10 = puVar18[1] | 1;
      uVar15 = quotearg_buffer_restyled
                         (puVar24,uVar26,uVar28,extraout_RDX,(ulong)*puVar18,(ulong)uVar10,
                          puVar18 + 2,*(undefined8 *)(puVar18 + 10),*(undefined8 *)(puVar18 + 0xc),
                          puVar35);
      if (uVar26 <= uVar15) {
        uVar15 = uVar15 + 1;
        *puVar23 = uVar15;
        if (puVar24 != slot0) {
          func_0x00102070(puVar24);
        }
        puVar35 = &UNK_00109cfc;
        puVar24 = (undefined1 *)xmalloc(uVar15);
        *(undefined1 **)(puVar23 + 1) = puVar24;
        quotearg_buffer_restyled
                  (puVar24,uVar15,uVar28,extraout_RDX,(ulong)*puVar18,(ulong)uVar10,puVar18 + 2,
                   *(undefined8 *)(puVar18 + 10),*(undefined8 *)(puVar18 + 0xc),puVar35);
      }
      *puVar14 = uVar34;
      return puVar24;
    }
    func_0x001020a0();
code_r0x00109d76:
    xalloc_die();
    puVar14 = (undefined4 *)func_0x001020b0();
    uVar34 = *puVar14;
    if (puVar24 == (undefined *)0x0) {
      puVar24 = default_quoting_options;
    }
    uVar16 = xmemdup(puVar24,0x38);
    *puVar14 = uVar34;
    return (undefined1 *)uVar16;
  }
  do {
    puVar18 = (uint *)0x0;
    bVar2 = bStack108;
code_r0x00108a78:
    bVar29 = param_4 != puVar18;
    if (param_4 == (uint *)0xffffffffffffffff) {
      bVar29 = *(char *)(param_3 + (long)puVar18) != '\0';
    }
    bVar3 = bVar5;
    if (bVar29) {
      pbVar1 = (byte *)(param_3 + (long)puVar18);
      bVar6 = (bool)(uStack224 != 2 & bVar5);
      bVar30 = bVar4;
      bVar32 = bVar33;
      if (bVar6) {
        if (uStack208 == 0) {
          uVar15 = (ulong)*pbVar1;
          switch(*pbVar1) {
          case 0:
            bVar6 = false;
            goto code_r0x00108f73;
          default:
            bVar6 = false;
            goto code_r0x00108e88;
          case 7:
            bVar21 = 0x61;
            break;
          case 8:
            bVar21 = 0x62;
            break;
          case 9:
            uVar15 = 9;
            bVar6 = false;
            bVar21 = 0x74;
            goto code_r0x00108cb2;
          case 10:
            uVar15 = 10;
            bVar6 = false;
            bVar21 = 0x6e;
            goto code_r0x00108cb2;
          case 0xb:
            bVar21 = 0x76;
            break;
          case 0xc:
            uVar15 = 0xc;
            bVar6 = false;
            bVar21 = 0x66;
            goto code_r0x00108cc4;
          case 0xd:
            uVar15 = 0xd;
            bVar6 = false;
            bVar21 = 0x72;
            goto code_r0x00108cb2;
          case 0x20:
            uVar15 = 0x20;
            bVar29 = bVar6;
            bVar6 = false;
            goto code_r0x00108e01;
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x3b:
          case 0x3c:
          case 0x3d:
          case 0x3e:
          case 0x5b:
          case 0x5e:
          case 0x60:
          case 0x7c:
            bVar29 = false;
            bVar6 = false;
            goto code_r0x00108e01;
          case 0x23:
          case 0x7e:
            bVar6 = false;
            goto code_r0x00108df8;
          case 0x25:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3a:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4a:
          case 0x4b:
          case 0x4c:
          case 0x4d:
          case 0x4e:
          case 0x4f:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5a:
          case 0x5d:
          case 0x5f:
          case 0x61:
          case 0x62:
          case 99:
          case 100:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x6e:
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7a:
            bVar32 = uStack224 == 2;
            bVar31 = false;
            bVar29 = bVar6;
            bVar6 = false;
            goto code_r0x00108bb8;
          case 0x27:
            bVar6 = false;
            goto code_r0x00108c83;
          case 0x3f:
            bVar6 = false;
            goto code_r0x00108c53;
          case 0x5c:
            bVar6 = false;
            goto joined_r0x00108f18;
          case 0x7b:
          case 0x7d:
            bVar6 = false;
            goto code_r0x00108b83;
          }
          goto code_r0x00108d30;
        }
        if ((param_4 == (uint *)0xffffffffffffffff) && (1 < uStack208)) {
          puVar35 = &UNK_00108aec;
          param_4 = (uint *)func_0x001021b0();
        }
        if ((uint *)((long)puVar18 + uStack208) <= param_4) {
          puVar35 = &UNK_00108b2f;
          iVar9 = func_0x00102300(pbVar1,pcStack160,uStack208);
          if (iVar9 == 0) {
            if (!bVar33) goto code_r0x00108b60;
            bVar3 = bVar33;
            bVar32 = uStack224 == 2;
            goto code_r0x00109519;
          }
        }
        bVar6 = false;
      }
code_r0x00108b60:
      uVar15 = (ulong)*pbVar1;
      switch(*pbVar1) {
      case 0:
        if (bVar5) {
code_r0x00108f73:
          bVar32 = uStack224 == 2;
          bVar3 = bVar33;
          if (!bVar33) {
            bVar3 = (bool)((bVar4 ^ 1U) & bVar32);
            if (bVar3) {
              if (uVar28 < param_2) {
                param_1[uVar28] = 0x27;
              }
              if (uVar28 + 1 < param_2) {
                param_1[uVar28 + 1] = 0x24;
              }
              if (uVar28 + 2 < param_2) {
                param_1[uVar28 + 2] = 0x27;
              }
              uVar28 = uVar28 + 3;
              bVar4 = bVar3;
            }
            if (uVar28 < param_2) {
              param_1[uVar28] = 0x5c;
            }
            uVar26 = uVar28 + 1;
            bVar31 = bVar29;
            if (uStack224 == 2) {
              bVar21 = 0x30;
              bVar29 = false;
              uVar28 = uVar26;
              bVar30 = bVar4;
              goto code_r0x00108be9;
            }
            if (((uint *)((long)puVar18 + 1U) < param_4) &&
               ((byte)(*(char *)(param_3 + 1 + (long)puVar18) - 0x30U) < 10)) {
              if (uVar26 < param_2) {
                param_1[uVar26] = 0x30;
              }
              if (uVar28 + 2 < param_2) {
                param_1[uVar28 + 2] = 0x30;
              }
              uVar28 = uVar28 + 3;
              uVar15 = 0x30;
              bVar29 = false;
            }
            else {
              uVar15 = 0x30;
              uVar28 = uVar26;
              bVar29 = false;
            }
            goto code_r0x00108bb8;
          }
          goto code_r0x00109519;
        }
        uVar15 = 0;
        if ((param_6 & 1) == 0) goto code_r0x00108ccb;
        puVar18 = (uint *)((long)puVar18 + 1);
        goto code_r0x00108a78;
      default:
code_r0x00108e88:
        bVar31 = bVar5;
        if (lVar11 != 1) {
          uStack72 = 0;
          if (param_4 == (uint *)0xffffffffffffffff) {
            param_4 = (uint *)func_0x001021b0(param_3);
          }
          uVar26 = 0;
          do {
            puVar25 = (uint *)((long)puVar18 + uVar26);
            puVar35 = &UNK_001092eb;
            lVar13 = rpl_mbrtowc(&uStack76,(char *)(param_3 + (long)puVar25),
                                 (uint *)((long)param_4 - (long)puVar25));
            if (lVar13 == 0) break;
            if (lVar13 == -1) {
              bVar29 = false;
              goto code_r0x00109376;
            }
            if (lVar13 == -2) {
              if ((param_4 <= puVar25) || (*(char *)(param_3 + (long)puVar25) == '\0'))
              goto code_r0x00109908;
              goto code_r0x001098f7;
            }
            bVar32 = (bool)(uStack224 == 2 & bVar33);
            if ((bVar32) && (lVar13 != 1)) {
              pcVar20 = (char *)(param_3 + 1 + (long)puVar25);
              do {
                if (((byte)(*pcVar20 + 0xa5U) < 0x22) &&
                   ((1 << (*pcVar20 + 0xa5U & 0x3f) & 0x20000002bU) != 0)) {
                  uStack224 = 2;
                  goto code_r0x00109519;
                }
                pcVar20 = pcVar20 + 1;
              } while ((char *)(param_3 + lVar13 + (long)puVar25) != pcVar20);
            }
            iVar9 = func_0x00102560((ulong)uStack76);
            if (iVar9 == 0) {
              bVar29 = false;
            }
            uVar26 = uVar26 + lVar13;
            puVar35 = &UNK_0010933d;
            iVar9 = func_0x00102550(&uStack72);
          } while (iVar9 == 0);
          bVar31 = (bool)((bVar29 ^ 1U) & bVar5);
          goto code_r0x00109376;
        }
        puVar35 = &UNK_00108ea8;
        plVar12 = (long *)func_0x00102590();
        uVar26 = 1;
        bVar31 = (*(ushort *)(*plVar12 + uVar15 * 2) & 0x4000) == 0;
        bVar29 = !bVar31;
        bVar31 = (bool)(bVar31 & bVar5);
        goto code_r0x00108ed7;
      case 7:
        uVar15 = 7;
        bVar21 = 0x61;
        break;
      case 8:
        uVar15 = 8;
        bVar21 = 0x62;
        break;
      case 9:
        uVar15 = 9;
        bVar21 = 0x74;
        goto code_r0x00108cb2;
      case 10:
        uVar15 = 10;
        bVar21 = 0x6e;
        goto code_r0x00108cb2;
      case 0xb:
        uVar15 = 0xb;
        bVar21 = 0x76;
        break;
      case 0xc:
        uVar15 = 0xc;
        bVar21 = 0x66;
        break;
      case 0xd:
        uVar15 = 0xd;
        bVar21 = 0x72;
code_r0x00108cb2:
        bVar31 = (bool)(uStack224 == 2 & bVar33);
        if (bVar31) {
code_r0x00108e0e:
          uStack224 = 2;
          bVar32 = bVar31;
          goto code_r0x00109519;
        }
        break;
      case 0x20:
        uVar15 = 0x20;
        goto code_r0x00108e01;
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x5b:
      case 0x5e:
      case 0x60:
      case 0x7c:
        bVar29 = false;
        goto code_r0x00108e01;
      case 0x23:
      case 0x7e:
code_r0x00108df8:
        if (puVar18 != (uint *)0x0) goto code_r0x00108bac;
code_r0x00108e01:
        bVar32 = uStack224 == 2;
        bVar31 = (bool)(bVar33 & bVar32);
        if (!bVar31) goto code_r0x00108bb8;
        goto code_r0x00108e0e;
      case 0x25:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5d:
      case 0x5f:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
        bVar32 = uStack224 == 2;
        bVar31 = false;
        goto code_r0x00108bb8;
      case 0x27:
code_r0x00108c83:
        bVar2 = bVar29;
        if (uStack224 != 2) {
          bVar32 = false;
          uVar15 = 0x27;
          bVar31 = false;
          goto code_r0x00108bb8;
        }
        if (!bVar33) {
          if ((param_2 == 0) || (uVar15 = 0, uVar26 = param_2, uStack152 != 0)) {
            if (uVar28 < param_2) {
              param_1[uVar28] = 0x27;
            }
            if (uVar28 + 1 < param_2) {
              param_1[uVar28 + 1] = 0x5c;
            }
            uVar15 = param_2;
            uVar26 = uStack152;
            if (uVar28 + 2 < param_2) {
              param_1[uVar28 + 2] = 0x27;
            }
          }
          bVar21 = 0x27;
          param_2 = uVar15;
          uVar28 = uVar28 + 3;
          uStack152 = uVar26;
          bVar31 = false;
          bVar30 = false;
          goto code_r0x00108be9;
        }
        goto code_r0x00109519;
      case 0x3f:
code_r0x00108c53:
        if (uStack224 == 2) {
          if (!bVar33) {
            bVar21 = 0x3f;
            bVar31 = false;
            bVar29 = false;
            goto code_r0x00108be9;
          }
          goto code_r0x00109519;
        }
        if (uStack224 == 5) {
          if (((((param_6 & 4) != 0) && (puVar25 = (uint *)((long)puVar18 + 2), puVar25 < param_4))
              && (*(char *)(param_3 + 1 + (long)puVar18) == '?')) &&
             ((uVar15 = (ulong)*(byte *)(param_3 + (long)puVar25),
              *(byte *)(param_3 + (long)puVar25) < 0x3f &&
              ((0x7000a38200000000U >> (uVar15 & 0x1f) & 1) != 0)))) {
            uVar10 = uStack224;
            if (!bVar33) {
              if (uVar28 < param_2) {
                param_1[uVar28] = 0x3f;
              }
              if (uVar28 + 1 < param_2) {
                param_1[uVar28 + 1] = 0x22;
              }
              if (uVar28 + 2 < param_2) {
                param_1[uVar28 + 2] = 0x22;
              }
              if (uVar28 + 3 < param_2) {
                param_1[uVar28 + 3] = 0x3f;
              }
              bVar32 = false;
              puVar18 = puVar25;
              uVar28 = uVar28 + 4;
              bVar31 = false;
              bVar29 = false;
              goto code_r0x00108bb8;
            }
            goto code_r0x00109530;
          }
          bVar32 = false;
          uVar15 = 0x3f;
          bVar31 = false;
          bVar29 = false;
        }
        else {
          bVar32 = uStack224 == 2;
          uVar15 = 0x3f;
          bVar31 = false;
          bVar29 = false;
        }
        goto code_r0x00108bb8;
      case 0x5c:
        if (uStack224 == 2) {
          if (bVar33) goto code_r0x00109519;
        }
        else {
joined_r0x00108f18:
          if ((!bVar5) || (!bVar33)) {
            uVar15 = 0x5c;
            bVar21 = 0x5c;
            break;
          }
          if (uStack208 == 0) {
            bVar21 = 0x5c;
            goto code_r0x00108d30;
          }
        }
        puVar18 = (uint *)((long)puVar18 + 1);
        bVar29 = false;
        bVar21 = 0x5c;
        goto code_r0x00108bfc;
      case 0x7b:
      case 0x7d:
code_r0x00108b83:
        bVar30 = param_4 != (uint *)0x1;
        if (param_4 == (uint *)0xffffffffffffffff) {
          bVar30 = *(char *)(param_3 + 1) != '\0';
        }
        if (!bVar30) goto code_r0x00108df8;
code_r0x00108bac:
        bVar32 = uStack224 == 2;
        bVar31 = false;
        bVar29 = false;
        goto code_r0x00108bb8;
      }
code_r0x00108cc4:
      if (!bVar5) {
code_r0x00108ccb:
        bVar29 = false;
        bVar31 = false;
        goto code_r0x00108cd2;
      }
code_r0x00108d30:
      bVar29 = false;
      goto code_r0x00108d33;
    }
    bVar32 = (bool)(bVar33 & uStack224 == 2 & uVar28 == 0);
    if (!bVar32) {
      bVar29 = (bool)(uStack224 == 2 & (bVar33 ^ 1U));
      bVar33 = (bool)(bVar33 ^ 1U);
      if ((bVar29) && (bVar33 = bVar29, bVar2)) {
        if (bVar7) {
          uVar15 = quotearg_buffer_restyled
                             (param_1,uStack152,param_3,param_4,5,(ulong)param_6,param_7,pcStack128,
                              pcStack136,puVar35);
          goto code_r0x00109569;
        }
        bStack108 = param_2 == 0 && uStack152 != 0;
        uVar15 = uStack152;
        bVar33 = bVar2;
        if (bStack108) goto code_r0x00109154;
      }
      uVar15 = uVar28;
      if (((pcStack160 != (char *)0x0) && (bVar33)) && (cVar17 = *pcStack160, cVar17 != '\0')) {
        do {
          if (uVar15 < param_2) {
            param_1[uVar15] = cVar17;
          }
          uVar15 = uVar15 + 1;
          cVar17 = pcStack160[uVar15 - uVar28];
        } while (cVar17 != '\0');
      }
      if (uVar15 < param_2) {
        param_1[uVar15] = 0;
      }
      goto code_r0x00109569;
    }
    uStack224 = 2;
code_r0x00109519:
    uVar10 = uStack224;
    if ((bVar3) && (uVar10 = 4, !bVar32)) {
      uVar10 = uStack224;
    }
code_r0x00109530:
    uStack224 = uVar10;
    uVar15 = quotearg_buffer_restyled
                       (param_1,param_2,param_3,param_4,(ulong)uStack224,
                        (ulong)(param_6 & 0xfffffffd),0,pcStack128,pcStack136,puVar35);
code_r0x00109569:
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (undefined1 *)uVar15;
    }
    puVar35 = &UNK_00109b88;
    func_0x001021f0();
code_r0x00109b88:
    bVar5 = false;
code_r0x00109601:
    if (param_2 == 0) {
      uStack152 = 0;
      bVar7 = true;
      bStack108 = false;
      bVar4 = false;
      bVar33 = false;
      uStack208 = 1;
      pcStack160 = "\'";
      uVar28 = 1;
      uStack224 = 2;
    }
    else {
      bVar7 = true;
      bStack108 = false;
      bVar4 = false;
      uStack152 = 0;
      uVar15 = param_2;
code_r0x00109154:
      *param_1 = 0x27;
      uStack224 = 2;
      uVar28 = 1;
      uStack208 = 1;
      bVar33 = false;
      pcStack160 = "\'";
      param_2 = uVar15;
    }
  } while( true );
  while (pbVar1[uVar26] != 0) {
code_r0x001098f7:
    uVar26 = uVar26 + 1;
    if (param_4 <= (uint *)((long)puVar18 + uVar26)) break;
  }
code_r0x00109908:
  bVar29 = false;
code_r0x00109376:
  if (1 < uVar26) {
code_r0x00109380:
    bVar3 = false;
    puVar19 = (uint *)(uVar26 + (long)puVar18);
    puVar25 = puVar18;
    do {
      bVar21 = (byte)uVar15;
      if (bVar31) {
        bVar32 = uStack224 == 2;
        bVar3 = bVar33;
        if (bVar33) goto code_r0x00109519;
        bVar32 = (bool)(bVar32 & (bVar30 ^ 1U));
        if (bVar32) {
          if (uVar28 < param_2) {
            param_1[uVar28] = 0x27;
          }
          if (uVar28 + 1 < param_2) {
            param_1[uVar28 + 1] = 0x24;
          }
          if (uVar28 + 2 < param_2) {
            param_1[uVar28 + 2] = 0x27;
          }
          uVar28 = uVar28 + 3;
          bVar30 = bVar32;
        }
        if (uVar28 < param_2) {
          param_1[uVar28] = 0x5c;
        }
        if (uVar28 + 1 < param_2) {
          param_1[uVar28 + 1] = (char)(uVar15 >> 6) + '0';
        }
        if (uVar28 + 2 < param_2) {
          param_1[uVar28 + 2] = ((byte)(uVar15 >> 3) & 7) + 0x30;
        }
        puVar18 = (uint *)((long)puVar25 + 1);
        uVar28 = uVar28 + 3;
        bVar21 = (bVar21 & 7) + 0x30;
        bVar3 = bVar31;
        if (puVar19 <= puVar18) goto code_r0x00108c20;
      }
      else {
        bVar4 = (bool)((bVar3 ^ 1U) & bVar30);
        if (bVar6) {
          if (uVar28 < param_2) {
            param_1[uVar28] = 0x5c;
          }
          uVar28 = uVar28 + 1;
        }
        puVar18 = (uint *)((long)puVar25 + 1);
        if (puVar19 <= puVar18) goto code_r0x00108bfc;
        if (bVar4) {
          if (uVar28 < param_2) {
            param_1[uVar28] = 0x27;
          }
          if (uVar28 + 1 < param_2) {
            param_1[uVar28 + 1] = 0x27;
          }
          uVar28 = uVar28 + 2;
          bVar6 = false;
          bVar30 = false;
        }
        else {
          bVar6 = false;
        }
      }
      puVar25 = (uint *)((long)puVar25 + 1);
      if (uVar28 < param_2) {
        param_1[uVar28] = bVar21;
      }
      uVar15 = (ulong)*(byte *)(param_3 + (long)puVar25);
      uVar28 = uVar28 + 1;
    } while( true );
  }
code_r0x00108ed7:
  if (bVar31) {
    bVar29 = false;
    bVar31 = bVar5;
    goto code_r0x00109380;
  }
  bVar32 = uStack224 == 2;
code_r0x00108bb8:
  bVar30 = bVar4;
  if ((!bVar5) || (bVar32)) {
code_r0x00108cd2:
    bVar21 = (byte)uVar15;
    if (bVar33) goto code_r0x00108bcb;
code_r0x00108be9:
    bVar4 = bVar30;
    if (!bVar6) {
      puVar18 = (uint *)((long)puVar18 + 1);
      bVar4 = (bool)((bVar31 ^ 1U) & bVar30);
code_r0x00108bfc:
      if (bVar4) {
        if (uVar28 < param_2) {
          param_1[uVar28] = 0x27;
        }
        if (uVar28 + 1 < param_2) {
          param_1[uVar28 + 1] = 0x27;
        }
        uVar28 = uVar28 + 2;
        bVar30 = false;
      }
      goto code_r0x00108c20;
    }
  }
  else {
code_r0x00108bcb:
    bVar21 = (byte)uVar15;
    if ((param_7 == 0) ||
       (bVar4 = bVar30, (*(uint *)(param_7 + (uVar15 >> 5) * 4) >> ((uint)uVar15 & 0x1f) & 1) == 0))
    goto code_r0x00108be9;
  }
code_r0x00108d33:
  bVar32 = uStack224 == 2;
  bVar3 = bVar5;
  if (bVar33) goto code_r0x00109519;
  bVar32 = (bool)((bVar4 ^ 1U) & bVar32);
  bVar30 = bVar4;
  if (bVar32) {
    if (uVar28 < param_2) {
      param_1[uVar28] = 0x27;
    }
    if (uVar28 + 1 < param_2) {
      param_1[uVar28 + 1] = 0x24;
    }
    if (uVar28 + 2 < param_2) {
      param_1[uVar28 + 2] = 0x27;
    }
    uVar28 = uVar28 + 3;
    bVar30 = bVar32;
  }
  if (uVar28 < param_2) {
    param_1[uVar28] = 0x5c;
  }
  uVar28 = uVar28 + 1;
  puVar18 = (uint *)((long)puVar18 + 1);
code_r0x00108c20:
  if (uVar28 < param_2) {
    param_1[uVar28] = bVar21;
  }
  uVar28 = uVar28 + 1;
  bVar4 = bVar30;
  if (!bVar29) {
    bVar7 = false;
  }
  goto code_r0x00108a78;
}

