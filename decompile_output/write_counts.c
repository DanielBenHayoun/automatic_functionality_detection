
ulong write_counts(undefined8 param_1,undefined5 *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  ushort uVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long *plVar10;
  uint *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *extraout_RDX;
  ulong uVar14;
  undefined5 *puVar15;
  undefined5 *puVar16;
  byte bVar17;
  undefined5 *puVar18;
  uint uVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  byte *pbVar23;
  long in_FS_OFFSET;
  long lStack16640;
  bool bStack16624;
  ulong uStack16616;
  long lStack16608;
  ulong uStack16600;
  undefined5 *puStack16576;
  byte bStack16562;
  int iStack16556;
  undefined8 uStack16552;
  byte abStack16544 [16392];
  long lStack152;
  long lStack136;
  undefined5 *puStack128;
  undefined8 uStack120;
  long lStack112;
  undefined8 uStack104;
  undefined5 *puStack96;
  undefined auStack88 [24];
  long lStack64;
  
  puVar15 = (undefined5 *)0x1072b9;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  lVar20 = param_4;
  puVar18 = param_2;
  if (print_lines != '\0') {
    puStack96 = (undefined5 *)&UNK_00102b18;
    lVar20 = umaxtostr(param_1,auStack88);
    puVar18 = (undefined5 *)0x1072b9;
    puVar15 = &format_sp_int_7975;
    puStack96 = (undefined5 *)&UNK_00102b34;
    func_0x00101c90(1,0x1072b9,(ulong)number_width);
  }
  puVar16 = puVar15;
  if (print_words != '\0') {
    puStack96 = (undefined5 *)&UNK_00102aeb;
    lVar20 = umaxtostr(param_2,auStack88);
    puVar16 = &format_sp_int_7975;
    puStack96 = (undefined5 *)&UNK_00102b0a;
    func_0x00101c90(1,puVar15,(ulong)number_width);
    puVar18 = puVar15;
  }
  puVar15 = puVar16;
  if (print_chars != 0) {
    puStack96 = (undefined5 *)&UNK_00102abb;
    lVar20 = umaxtostr(param_3,auStack88);
    puVar15 = &format_sp_int_7975;
    puStack96 = (undefined5 *)&UNK_00102ada;
    func_0x00101c90(1,puVar16,(ulong)number_width);
    puVar18 = puVar16;
  }
  puStack128 = puVar15;
  if (print_bytes != 0) {
    puStack96 = (undefined5 *)&UNK_00102a8b;
    lVar20 = umaxtostr(param_4,auStack88);
    puStack128 = &format_sp_int_7975;
    puStack96 = (undefined5 *)&UNK_00102aaa;
    func_0x00101c90(1,puVar15,(ulong)number_width);
    puVar18 = puVar15;
  }
  if (print_linelength != 0) {
    puStack96 = (undefined5 *)&UNK_00102a5b;
    lVar20 = umaxtostr(param_5,auStack88);
    puStack96 = (undefined5 *)&UNK_00102a73;
    puVar18 = puStack128;
    func_0x00101c90(1,puStack128,(ulong)number_width);
  }
  if (param_6 != 0) {
    puStack96 = (undefined5 *)&UNK_001029d7;
    lVar7 = func_0x00101ae0(param_6,10);
    if (lVar7 != 0) {
      puStack96 = (undefined5 *)&UNK_001029eb;
      param_6 = quotearg_n_style_colon(0,3,param_6);
    }
    puVar18 = (undefined5 *)&UNK_0010787c;
    puStack96 = (undefined5 *)&UNK_00102a04;
    func_0x00101c90(1,&UNK_0010787c,param_6);
  }
  uVar19 = (uint)stdout;
  puVar2 = *(undefined **)(stdout + 0x28);
  if (puVar2 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar2 + 1;
    *puVar2 = 10;
  }
  else {
    puVar18 = (undefined5 *)0xa;
    puStack96 = (undefined5 *)&UNK_00102b4a;
    func_0x00101af0();
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  puStack96 = (undefined5 *)&UNK_00102b54;
  func_0x00101ab0();
  lStack152 = *(long *)(in_FS_OFFSET + 0x28);
  puStack16576 = puVar18;
  lStack136 = param_6;
  uStack120 = param_5;
  lStack112 = param_4;
  uStack104 = param_3;
  puStack96 = param_2;
  if (puVar18 == (undefined5 *)0x0) {
    puStack16576 = (undefined5 *)func_0x00101a80(0,&UNK_00106fe4,5);
  }
  uVar8 = func_0x00101a90();
  bVar17 = print_bytes;
  if (uVar8 < 2) {
    bStack16562 = 0;
    bVar4 = print_bytes;
    if (print_bytes == 0) {
      bVar17 = print_chars;
      bVar4 = print_chars;
    }
  }
  else {
    bStack16562 = print_chars;
    bVar4 = (print_chars ^ 1) & print_bytes;
  }
  if ((print_words != '\0') || (uVar8 = (ulong)print_linelength, print_linelength != 0)) {
    fdadvise((ulong)uVar19,0,0);
code_r0x00102cf2:
    uVar8 = func_0x00101a90();
    if (uVar8 < 2) {
      uVar22 = 0;
      uVar14 = 0;
      uStack16616 = 0;
      lStack16608 = 0;
      lStack16640 = 0;
      uVar13 = uVar22;
      while (lVar20 = safe_read((ulong)uVar19,abStack16544,0x4000), lVar20 != 0) {
        if (lVar20 == -1) {
          uVar8 = 0;
          uVar12 = quotearg_n_style_colon(0,3,puStack16576);
          puVar11 = (uint *)func_0x001019f0();
          func_0x00101cd0(0,(ulong)*puVar11,&UNK_0010787d,uVar12);
          goto code_r0x0010353f;
        }
        uStack16616 = uStack16616 + lVar20;
        pbVar21 = abStack16544;
        do {
          pbVar23 = pbVar21 + 1;
          bVar17 = *pbVar21;
          switch(bVar17) {
          case 9:
            uVar22 = (uVar22 & 0xfffffffffffffff8) + 8;
            break;
          case 10:
            lStack16640 = lStack16640 + 1;
          case 0xc:
          case 0xd:
            if (uVar13 < uVar22) {
              uVar13 = uVar22;
            }
            uVar22 = 0;
            break;
          case 0xb:
            break;
          default:
            plVar10 = (long *)func_0x00101db0();
            uVar1 = *(ushort *)(*plVar10 + (ulong)bVar17 * 2);
            if ((uVar1 & 0x4000) != 0) {
              uVar22 = uVar22 + 1;
              if ((uVar1 & 0x2000) != 0) break;
              iVar5 = func_0x00101cc0();
              if (posixly_correct == 0) {
                if (((iVar5 == 0xa0) || (iVar5 == 0x2007)) ||
                   ((iVar5 == 0x202f || (iVar5 == 0x2060)))) break;
                uVar14 = 1;
              }
              else {
                uVar14 = (ulong)posixly_correct;
              }
            }
            goto code_r0x001031b4;
          case 0x20:
            uVar22 = uVar22 + 1;
          }
          lStack16608 = lStack16608 + uVar14;
          uVar14 = 0;
code_r0x001031b4:
          pbVar21 = pbVar23;
        } while (abStack16544 + lVar20 != pbVar23);
      }
      uVar8 = 1;
code_r0x0010353f:
      if (uVar22 <= uVar13) {
        uVar22 = uVar13;
      }
      lStack16608 = lStack16608 + uVar14;
      uVar13 = 0;
    }
    else {
      lVar20 = 0;
      uStack16552 = 0;
      bStack16624 = false;
      uVar22 = 0;
      uVar14 = 0;
      uStack16600 = 0;
      uStack16616 = 0;
      uVar13 = 0;
      lStack16608 = 0;
      lStack16640 = 0;
code_r0x00102d50:
      lVar7 = safe_read((ulong)uVar19,abStack16544 + lVar20,0x4000 - lVar20);
      if (lVar7 != 0) {
        if (lVar7 == -1) {
          uVar8 = 0;
          uVar12 = quotearg_n_style_colon(0,3,puStack16576);
          puVar11 = (uint *)func_0x001019f0();
          func_0x00101cd0(0,(ulong)*puVar11,&UNK_0010787d,uVar12);
          goto code_r0x001034ce;
        }
        lVar20 = lVar20 + lVar7;
        uStack16616 = uStack16616 + lVar7;
        pbVar21 = abStack16544;
        do {
          uVar12 = uStack16552;
          if ((bStack16624) ||
             (bVar17 = *pbVar21,
             (*(uint *)(is_basic_table + (ulong)(bVar17 >> 5) * 4) >> ((uint)bVar17 & 0x1f) & 1) ==
             0)) {
            lVar7 = rpl_mbrtowc(&iStack16556,pbVar21,lVar20);
            if (lVar7 != -2) {
              if (lVar7 != -1) {
                iVar5 = func_0x00101d80();
                bStack16624 = iVar5 == 0;
                bVar3 = bStack16624;
                if (lVar7 == 0) {
                  iStack16556 = 0;
                  lVar7 = 1;
                }
                else {
                  switch(iStack16556) {
                  case 9:
                    goto code_r0x001030c5;
                  case 10:
                    goto code_r0x001030b5;
                  case 0xb:
                    goto code_r0x00103058;
                  case 0xc:
                  case 0xd:
                    goto code_r0x00103085;
                  case 0x20:
                    goto code_r0x0010304d;
                  }
                }
                iVar5 = func_0x00101d90();
                if (iVar5 == 0) goto code_r0x0010305f;
                if (print_linelength != 0) {
                  iVar5 = func_0x00101c20();
                  if (0 < iVar5) {
                    uVar22 = (long)iVar5 + uVar22;
                  }
                }
                iVar5 = iStack16556;
                iVar6 = func_0x00101cb0();
                if (iVar6 == 0) {
                  if (posixly_correct != 0) {
                    uVar14 = (ulong)posixly_correct;
                    goto code_r0x0010305f;
                  }
                  if ((((iVar5 != 0xa0) && (iVar5 != 0x2007)) && (iVar5 != 0x202f)) &&
                     (iVar5 != 0x2060)) goto code_r0x00103105;
                }
                goto code_r0x00103058;
              }
              pbVar21 = pbVar21 + 1;
              lVar7 = -1;
              bStack16624 = true;
              goto code_r0x00103069;
            }
            uStack16552 = uVar12;
            if (lVar20 != 0) {
              if (lVar20 == 0x4000) {
                pbVar21 = pbVar21 + 1;
                lVar20 = 0x3fff;
              }
              func_0x00101bd0(abStack16544,pbVar21,lVar20,0x4001);
            }
            bStack16624 = true;
            break;
          }
          iStack16556 = (int)(char)bVar17;
          switch(bVar17) {
          case 9:
            lVar7 = 1;
code_r0x001030c5:
            uVar22 = (uVar22 & 0xfffffffffffffff8) + 8;
            bVar3 = bStack16624;
            break;
          case 10:
            lVar7 = 1;
code_r0x001030b5:
            lStack16640 = lStack16640 + 1;
            goto code_r0x00103085;
          case 0xb:
            lVar7 = 1;
            bVar3 = bStack16624;
            break;
          case 0xc:
          case 0xd:
            lVar7 = 1;
code_r0x00103085:
            uVar8 = uVar22;
            if (uVar22 <= uStack16600) {
              uVar8 = uStack16600;
            }
            uVar22 = 0;
            uStack16600 = uVar8;
            bVar3 = bStack16624;
            break;
          default:
            plVar10 = (long *)func_0x00101db0();
            lVar7 = 1;
            bStack16624 = false;
            uVar1 = *(ushort *)(*plVar10 + (ulong)bVar17 * 2);
            bVar3 = false;
            if ((uVar1 & 0x4000) != 0) {
              uVar22 = uVar22 + 1;
              if ((uVar1 & 0x2000) != 0) break;
code_r0x00103105:
              uVar14 = 1;
              bVar3 = bStack16624;
            }
            goto code_r0x0010305f;
          case 0x20:
            lVar7 = 1;
code_r0x0010304d:
            uVar22 = uVar22 + 1;
            bVar3 = bStack16624;
          }
code_r0x00103058:
          lStack16608 = lStack16608 + uVar14;
          uVar14 = 0;
code_r0x0010305f:
          pbVar21 = pbVar21 + lVar7;
          lVar7 = -lVar7;
          uVar13 = uVar13 + 1;
          bStack16624 = bVar3;
code_r0x00103069:
          lVar20 = lVar20 + lVar7;
        } while (lVar20 != 0);
        goto code_r0x00102d50;
      }
      uVar8 = 1;
code_r0x001034ce:
      if (uVar22 <= uStack16600) {
        uVar22 = uStack16600;
      }
      lStack16608 = uVar14 + lStack16608;
    }
    goto code_r0x00102f5e;
  }
  if (((bVar17 == 1) && (bStack16562 == 0)) && (print_lines == '\0')) {
    if (bVar4 == 0) {
code_r0x00102e28:
      uStack16616 = 0;
      bVar3 = false;
      lStack16640 = 0;
      while (uVar8 = safe_read((ulong)uVar19,abStack16544,0x4000), uVar8 != 0) {
        if (uVar8 == 0xffffffffffffffff) {
          uVar8 = 0;
          uVar22 = 0;
          uVar13 = 0;
          lStack16608 = 0;
          uVar12 = quotearg_n_style_colon(0,3,puStack16576);
          puVar11 = (uint *)func_0x001019f0();
          func_0x00101cd0(0,(ulong)*puVar11,&UNK_0010787d,uVar12);
          goto code_r0x00102f5e;
        }
        uStack16616 = uStack16616 + uVar8;
        pbVar21 = abStack16544 + uVar8;
        pbVar23 = abStack16544;
        lVar20 = lStack16640;
        if (bVar3) {
          while (lVar7 = func_0x00101b70(pbVar23,10,pbVar21 + -(long)pbVar23), lVar7 != 0) {
            pbVar23 = (byte *)(lVar7 + 1);
            lVar20 = lVar20 + 1;
          }
          bVar3 = (ulong)(lVar20 - lStack16640) <= uVar8 / 0xf;
          lStack16640 = lVar20;
        }
        else {
          if (pbVar21 == abStack16544) {
            bVar3 = true;
          }
          else {
            do {
              pbVar9 = pbVar23 + 1;
              lVar20 = lVar20 + (ulong)(*pbVar23 == 10);
              pbVar23 = pbVar9;
            } while (pbVar21 != pbVar9);
            bVar3 = (ulong)(lVar20 - lStack16640) <= uVar8 / 0xf;
            lStack16640 = lVar20;
          }
        }
      }
      uVar22 = 0;
      uVar13 = 0;
      lStack16608 = 0;
      uVar8 = 1;
      goto code_r0x00102f5e;
    }
  }
  else {
    fdadvise((ulong)uVar19,0,0);
    if ((bVar4 == 0) || (print_lines != '\0')) {
      if (bStack16562 != 0) goto code_r0x00102cf2;
      goto code_r0x00102e28;
    }
  }
  iVar5 = *extraout_RDX;
  if (0 < iVar5) {
    iVar5 = func_0x00101c50(1,(ulong)uVar19,extraout_RDX + 2);
    *extraout_RDX = iVar5;
  }
  uVar22 = page_size;
  if (((iVar5 == 0) && ((extraout_RDX[8] & 0xd000U) == 0x8000)) &&
     (uStack16616 = *(ulong *)(extraout_RDX + 0xe), -1 < (long)uStack16616)) {
    if (lVar20 == -1) {
      uVar13 = func_0x00101b10((ulong)uVar19,0,1);
      if (uStack16616 % uVar22 != 0) {
        if (uVar13 <= uStack16616) goto code_r0x0010362b;
        uVar22 = 0;
        uStack16616 = 0;
        uVar13 = 0;
        lStack16608 = 0;
        lStack16640 = 0;
        uVar8 = 1;
        goto code_r0x00102f5e;
      }
      bVar17 = ~(byte)(uVar13 >> 0x38) >> 7;
    }
    else {
      if (uStack16616 % page_size != 0) goto code_r0x001032d6;
      bVar17 = 1;
      uVar13 = 0;
    }
    uVar22 = 0x201;
    if (*(long *)(extraout_RDX + 0x10) - 1U < 0x2000000000000000) {
      uVar22 = *(long *)(extraout_RDX + 0x10) + 1;
    }
    lVar20 = uStack16616 - uStack16616 % uVar22;
    if (((lVar20 <= (long)uVar13) || (bVar17 == 0)) ||
       (lVar7 = func_0x00101b10((ulong)uVar19,lVar20,1), lVar7 < 0)) goto code_r0x00103282;
    uStack16616 = lVar20 - uVar13;
  }
  else {
code_r0x00103282:
    uStack16616 = 0;
  }
  fdadvise((ulong)uVar19,0,0,2);
  while( true ) {
    lVar20 = safe_read((ulong)uVar19,abStack16544,0x4000);
    if (lVar20 == 0) goto code_r0x001032d6;
    if (lVar20 == -1) break;
    uStack16616 = uStack16616 + lVar20;
  }
  uVar22 = 0;
  uVar13 = 0;
  lStack16608 = 0;
  uVar12 = quotearg_n_style_colon(0,3,puStack16576);
  puVar11 = (uint *)func_0x001019f0();
  func_0x00101cd0(0,(ulong)*puVar11,&UNK_0010787d,uVar12);
  lStack16640 = 0;
code_r0x00102f5e:
  while( true ) {
    if (bStack16562 < print_chars) {
      uVar13 = uStack16616;
    }
    write_counts(lStack16640,lStack16608,uVar13,uStack16616,uVar22,puVar18);
    total_lines = total_lines + lStack16640;
    total_words = total_words + lStack16608;
    total_chars = total_chars + uVar13;
    total_bytes = total_bytes + uStack16616;
    if (max_line_length < uVar22) {
      max_line_length = uVar22;
    }
    if (lStack152 == *(long *)(in_FS_OFFSET + 0x28)) break;
    func_0x00101ab0();
code_r0x0010362b:
    uStack16616 = uStack16616 - uVar13;
code_r0x001032d6:
    uVar22 = 0;
    uVar13 = 0;
    lStack16608 = 0;
    lStack16640 = 0;
    uVar8 = 1;
  }
  return uVar8;
}

