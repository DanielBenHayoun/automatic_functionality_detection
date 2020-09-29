
ulong wc(uint param_1,long param_2,int *param_3,long param_4)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  long in_FS_OFFSET;
  long lStack16552;
  bool bStack16536;
  ulong uStack16528;
  long lStack16520;
  ulong uStack16512;
  long lStack16488;
  byte bStack16474;
  int iStack16468;
  undefined8 uStack16464;
  byte abStack16456 [16392];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  lStack16488 = param_2;
  if (param_2 == 0) {
    lStack16488 = func_0x00101a80(0,&UNK_00106fe4,5);
  }
  uVar6 = func_0x00101a90();
  bVar14 = print_bytes;
  if (uVar6 < 2) {
    bStack16474 = 0;
    bVar3 = print_bytes;
    if (print_bytes == 0) {
      bVar14 = print_chars;
      bVar3 = print_chars;
    }
  }
  else {
    bStack16474 = print_chars;
    bVar3 = (print_chars ^ 1) & print_bytes;
  }
  if ((print_words != '\0') || (uVar6 = (ulong)print_linelength, print_linelength != 0)) {
    fdadvise((ulong)param_1,0,0);
code_r0x00102cf2:
    uVar6 = func_0x00101a90();
    if (uVar6 < 2) {
      uVar17 = 0;
      uVar13 = 0;
      uStack16528 = 0;
      lStack16520 = 0;
      lStack16552 = 0;
      uVar12 = uVar17;
      while (lVar15 = safe_read((ulong)param_1,abStack16456,0x4000), lVar15 != 0) {
        if (lVar15 == -1) {
          uVar6 = 0;
          uVar11 = quotearg_n_style_colon(0,3,lStack16488);
          puVar10 = (uint *)func_0x001019f0();
          func_0x00101cd0(0,(ulong)*puVar10,&UNK_0010787d,uVar11);
          goto code_r0x0010353f;
        }
        uStack16528 = uStack16528 + lVar15;
        pbVar16 = abStack16456;
        do {
          pbVar18 = pbVar16 + 1;
          bVar14 = *pbVar16;
          switch(bVar14) {
          case 9:
            uVar17 = (uVar17 & 0xfffffffffffffff8) + 8;
            break;
          case 10:
            lStack16552 = lStack16552 + 1;
          case 0xc:
          case 0xd:
            if (uVar12 < uVar17) {
              uVar12 = uVar17;
            }
            uVar17 = 0;
            break;
          case 0xb:
            break;
          default:
            plVar9 = (long *)func_0x00101db0();
            uVar1 = *(ushort *)(*plVar9 + (ulong)bVar14 * 2);
            if ((uVar1 & 0x4000) != 0) {
              uVar17 = uVar17 + 1;
              if ((uVar1 & 0x2000) != 0) break;
              iVar4 = func_0x00101cc0();
              if (posixly_correct == 0) {
                if (((iVar4 == 0xa0) || (iVar4 == 0x2007)) ||
                   ((iVar4 == 0x202f || (iVar4 == 0x2060)))) break;
                uVar13 = 1;
              }
              else {
                uVar13 = (ulong)posixly_correct;
              }
            }
            goto code_r0x001031b4;
          case 0x20:
            uVar17 = uVar17 + 1;
          }
          lStack16520 = lStack16520 + uVar13;
          uVar13 = 0;
code_r0x001031b4:
          pbVar16 = pbVar18;
        } while (abStack16456 + lVar15 != pbVar18);
      }
      uVar6 = 1;
code_r0x0010353f:
      if (uVar17 <= uVar12) {
        uVar17 = uVar12;
      }
      lStack16520 = lStack16520 + uVar13;
      uVar12 = 0;
    }
    else {
      lVar15 = 0;
      uStack16464 = 0;
      bStack16536 = false;
      uVar17 = 0;
      uVar13 = 0;
      uStack16512 = 0;
      uStack16528 = 0;
      uVar12 = 0;
      lStack16520 = 0;
      lStack16552 = 0;
code_r0x00102d50:
      lVar7 = safe_read((ulong)param_1,abStack16456 + lVar15,0x4000 - lVar15);
      if (lVar7 != 0) {
        if (lVar7 == -1) {
          uVar6 = 0;
          uVar11 = quotearg_n_style_colon(0,3,lStack16488);
          puVar10 = (uint *)func_0x001019f0();
          func_0x00101cd0(0,(ulong)*puVar10,&UNK_0010787d,uVar11);
          goto code_r0x001034ce;
        }
        lVar15 = lVar15 + lVar7;
        uStack16528 = uStack16528 + lVar7;
        pbVar16 = abStack16456;
        do {
          uVar11 = uStack16464;
          if ((bStack16536) ||
             (bVar14 = *pbVar16,
             (*(uint *)(is_basic_table + (ulong)(bVar14 >> 5) * 4) >> ((uint)bVar14 & 0x1f) & 1) ==
             0)) {
            lVar7 = rpl_mbrtowc(&iStack16468,pbVar16,lVar15);
            if (lVar7 != -2) {
              if (lVar7 != -1) {
                iVar4 = func_0x00101d80();
                bStack16536 = iVar4 == 0;
                bVar2 = bStack16536;
                if (lVar7 == 0) {
                  iStack16468 = 0;
                  lVar7 = 1;
                }
                else {
                  switch(iStack16468) {
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
                iVar4 = func_0x00101d90();
                if (iVar4 == 0) goto code_r0x0010305f;
                if (print_linelength != 0) {
                  iVar4 = func_0x00101c20();
                  if (0 < iVar4) {
                    uVar17 = (long)iVar4 + uVar17;
                  }
                }
                iVar4 = iStack16468;
                iVar5 = func_0x00101cb0();
                if (iVar5 == 0) {
                  if (posixly_correct != 0) {
                    uVar13 = (ulong)posixly_correct;
                    goto code_r0x0010305f;
                  }
                  if ((((iVar4 != 0xa0) && (iVar4 != 0x2007)) && (iVar4 != 0x202f)) &&
                     (iVar4 != 0x2060)) goto code_r0x00103105;
                }
                goto code_r0x00103058;
              }
              pbVar16 = pbVar16 + 1;
              lVar7 = -1;
              bStack16536 = true;
              goto code_r0x00103069;
            }
            uStack16464 = uVar11;
            if (lVar15 != 0) {
              if (lVar15 == 0x4000) {
                pbVar16 = pbVar16 + 1;
                lVar15 = 0x3fff;
              }
              func_0x00101bd0(abStack16456,pbVar16,lVar15,0x4001);
            }
            bStack16536 = true;
            break;
          }
          iStack16468 = (int)(char)bVar14;
          switch(bVar14) {
          case 9:
            lVar7 = 1;
code_r0x001030c5:
            uVar17 = (uVar17 & 0xfffffffffffffff8) + 8;
            bVar2 = bStack16536;
            break;
          case 10:
            lVar7 = 1;
code_r0x001030b5:
            lStack16552 = lStack16552 + 1;
            goto code_r0x00103085;
          case 0xb:
            lVar7 = 1;
            bVar2 = bStack16536;
            break;
          case 0xc:
          case 0xd:
            lVar7 = 1;
code_r0x00103085:
            uVar6 = uVar17;
            if (uVar17 <= uStack16512) {
              uVar6 = uStack16512;
            }
            uVar17 = 0;
            uStack16512 = uVar6;
            bVar2 = bStack16536;
            break;
          default:
            plVar9 = (long *)func_0x00101db0();
            lVar7 = 1;
            bStack16536 = false;
            uVar1 = *(ushort *)(*plVar9 + (ulong)bVar14 * 2);
            bVar2 = false;
            if ((uVar1 & 0x4000) != 0) {
              uVar17 = uVar17 + 1;
              if ((uVar1 & 0x2000) != 0) break;
code_r0x00103105:
              uVar13 = 1;
              bVar2 = bStack16536;
            }
            goto code_r0x0010305f;
          case 0x20:
            lVar7 = 1;
code_r0x0010304d:
            uVar17 = uVar17 + 1;
            bVar2 = bStack16536;
          }
code_r0x00103058:
          lStack16520 = lStack16520 + uVar13;
          uVar13 = 0;
code_r0x0010305f:
          pbVar16 = pbVar16 + lVar7;
          lVar7 = -lVar7;
          uVar12 = uVar12 + 1;
          bStack16536 = bVar2;
code_r0x00103069:
          lVar15 = lVar15 + lVar7;
        } while (lVar15 != 0);
        goto code_r0x00102d50;
      }
      uVar6 = 1;
code_r0x001034ce:
      if (uVar17 <= uStack16512) {
        uVar17 = uStack16512;
      }
      lStack16520 = uVar13 + lStack16520;
    }
    goto code_r0x00102f5e;
  }
  if (((bVar14 == 1) && (bStack16474 == 0)) && (print_lines == '\0')) {
    if (bVar3 == 0) {
code_r0x00102e28:
      uStack16528 = 0;
      bVar2 = false;
      lStack16552 = 0;
      while (uVar6 = safe_read((ulong)param_1,abStack16456,0x4000), uVar6 != 0) {
        if (uVar6 == 0xffffffffffffffff) {
          uVar6 = 0;
          uVar17 = 0;
          uVar12 = 0;
          lStack16520 = 0;
          uVar11 = quotearg_n_style_colon(0,3,lStack16488);
          puVar10 = (uint *)func_0x001019f0();
          func_0x00101cd0(0,(ulong)*puVar10,&UNK_0010787d,uVar11);
          goto code_r0x00102f5e;
        }
        uStack16528 = uStack16528 + uVar6;
        pbVar16 = abStack16456 + uVar6;
        pbVar18 = abStack16456;
        lVar15 = lStack16552;
        if (bVar2) {
          while (lVar7 = func_0x00101b70(pbVar18,10,pbVar16 + -(long)pbVar18), lVar7 != 0) {
            pbVar18 = (byte *)(lVar7 + 1);
            lVar15 = lVar15 + 1;
          }
          bVar2 = (ulong)(lVar15 - lStack16552) <= uVar6 / 0xf;
          lStack16552 = lVar15;
        }
        else {
          if (pbVar16 == abStack16456) {
            bVar2 = true;
          }
          else {
            do {
              pbVar8 = pbVar18 + 1;
              lVar15 = lVar15 + (ulong)(*pbVar18 == 10);
              pbVar18 = pbVar8;
            } while (pbVar16 != pbVar8);
            bVar2 = (ulong)(lVar15 - lStack16552) <= uVar6 / 0xf;
            lStack16552 = lVar15;
          }
        }
      }
      uVar17 = 0;
      uVar12 = 0;
      lStack16520 = 0;
      uVar6 = 1;
      goto code_r0x00102f5e;
    }
  }
  else {
    fdadvise((ulong)param_1,0,0);
    if ((bVar3 == 0) || (print_lines != '\0')) {
      if (bStack16474 != 0) goto code_r0x00102cf2;
      goto code_r0x00102e28;
    }
  }
  iVar4 = *param_3;
  if (0 < iVar4) {
    iVar4 = func_0x00101c50(1,(ulong)param_1,param_3 + 2);
    *param_3 = iVar4;
  }
  uVar17 = page_size;
  if (((iVar4 == 0) && ((param_3[8] & 0xd000U) == 0x8000)) &&
     (uStack16528 = *(ulong *)(param_3 + 0xe), -1 < (long)uStack16528)) {
    if (param_4 == -1) {
      uVar12 = func_0x00101b10((ulong)param_1,0,1);
      if (uStack16528 % uVar17 != 0) {
        if (uVar12 <= uStack16528) goto code_r0x0010362b;
        uVar17 = 0;
        uStack16528 = 0;
        uVar12 = 0;
        lStack16520 = 0;
        lStack16552 = 0;
        uVar6 = 1;
        goto code_r0x00102f5e;
      }
      bVar14 = ~(byte)(uVar12 >> 0x38) >> 7;
    }
    else {
      if (uStack16528 % page_size != 0) goto code_r0x001032d6;
      bVar14 = 1;
      uVar12 = 0;
    }
    uVar17 = 0x201;
    if (*(long *)(param_3 + 0x10) - 1U < 0x2000000000000000) {
      uVar17 = *(long *)(param_3 + 0x10) + 1;
    }
    lVar15 = uStack16528 - uStack16528 % uVar17;
    if (((lVar15 <= (long)uVar12) || (bVar14 == 0)) ||
       (lVar7 = func_0x00101b10((ulong)param_1,lVar15,1), lVar7 < 0)) goto code_r0x00103282;
    uStack16528 = lVar15 - uVar12;
  }
  else {
code_r0x00103282:
    uStack16528 = 0;
  }
  fdadvise((ulong)param_1,0,0,2);
  while( true ) {
    lVar15 = safe_read((ulong)param_1,abStack16456,0x4000);
    if (lVar15 == 0) goto code_r0x001032d6;
    if (lVar15 == -1) break;
    uStack16528 = uStack16528 + lVar15;
  }
  uVar17 = 0;
  uVar12 = 0;
  lStack16520 = 0;
  uVar11 = quotearg_n_style_colon(0,3,lStack16488);
  puVar10 = (uint *)func_0x001019f0();
  func_0x00101cd0(0,(ulong)*puVar10,&UNK_0010787d,uVar11);
  lStack16552 = 0;
code_r0x00102f5e:
  while( true ) {
    if (bStack16474 < print_chars) {
      uVar12 = uStack16528;
    }
    write_counts(lStack16552,lStack16520,uVar12,uStack16528,uVar17,param_2);
    total_lines = total_lines + lStack16552;
    total_words = total_words + lStack16520;
    total_chars = total_chars + uVar12;
    total_bytes = total_bytes + uStack16528;
    if (max_line_length < uVar17) {
      max_line_length = uVar17;
    }
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) break;
    func_0x00101ab0();
code_r0x0010362b:
    uStack16528 = uStack16528 - uVar12;
code_r0x001032d6:
    uVar17 = 0;
    uVar12 = 0;
    lStack16520 = 0;
    lStack16552 = 0;
    uVar6 = 1;
  }
  return uVar6;
}

