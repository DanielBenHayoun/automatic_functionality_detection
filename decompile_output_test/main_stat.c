
ulong stat(ulong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char **ppcVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte bVar11;
  undefined *puVar12;
  byte *pbVar13;
  undefined *puVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  char cVar17;
  byte *pbVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  byte bStack241;
  byte **ppbStack240;
  long lStack232;
  undefined8 uStack224;
  undefined auStack216 [24];
  uint uStack192;
  ulong uStack64;
  
  bVar21 = 0;
  pbVar18 = (byte *)0x1;
  puVar16 = long_options;
  puVar12 = (undefined *)(param_1 & 0xffffffff);
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x001020e0(6,&UNK_0010fb81);
  func_0x00101e10(&UNK_0010deb0,&UNK_0010ded9);
  func_0x00101de0(&UNK_0010deb0);
  ppcVar5 = (char **)func_0x00101da0();
  decimal_point = *ppcVar5;
  if (*decimal_point == '\0') {
    decimal_point = ".";
  }
  decimal_point_len = func_0x00101e40();
  atexit(close_stdout);
  ppbStack240 = (byte **)0x0;
  bStack241 = 0;
  lVar8 = 0;
  cVar17 = follow_links;
code_r0x001022f0:
  do {
    follow_links = cVar17;
    uVar4 = (uint)puVar12;
    uVar2 = func_0x00101e90((ulong)puVar12 & 0xffffffff,param_2,&UNK_0010df00,puVar16,0);
    if (uVar2 == 0xffffffff) {
      if (optind != uVar4) {
        if (lVar8 == 0) {
          puVar16 = (undefined1 *)((ulong)ppbStack240 & 0xff);
          pbVar18 = (byte *)(ulong)bStack241;
          lVar8 = default_format(pbVar18,puVar16,0);
          lStack232 = default_format((ulong)bStack241,(ulong)ppbStack240 & 0xff,1);
        }
        else {
          lVar6 = func_0x001021f0(lVar8,&UNK_0010df16);
          lStack232 = lVar8;
          if (lVar6 != 0) {
            puVar16 = (undefined1 *)func_0x00101cf0(&UNK_0010df19);
            if ((byte **)puVar16 == (byte **)0x0) {
              set_quoting_style(0,4);
            }
            else {
              iVar3 = argmatch(puVar16,quoting_style_args,quoting_style_vals,4);
              if (iVar3 < 0) {
                set_quoting_style(0,4);
                puVar16 = (undefined1 *)quote(puVar16);
                uVar9 = func_0x00101e20(0,&UNK_0010f1b0,5);
                func_0x00102120(0,0,uVar9,puVar16);
              }
              else {
                set_quoting_style(0,(ulong)*(uint *)(quoting_style_vals + (long)iVar3 * 4));
              }
            }
          }
        }
        if ((int)optind < (int)uVar4) {
          uVar10 = SEXT48((int)optind);
          puVar16 = (undefined1 *)(param_2 + uVar10);
          puVar12 = auStack216;
          bVar19 = CARRY8((ulong)(~optind + uVar4),uVar10);
          lVar6 = (ulong)(~optind + uVar4) + uVar10;
          bVar20 = lVar6 == 0;
          ppbStack240 = (byte **)(param_2 + lVar6 + 1);
          bVar11 = 1;
          do {
            pbVar18 = *(byte **)puVar16;
            lVar6 = 2;
            pbVar13 = pbVar18;
            pbVar15 = &UNK_0010f642;
            do {
              if (lVar6 == 0) break;
              lVar6 = lVar6 + -1;
              bVar19 = *pbVar13 < *pbVar15;
              bVar20 = *pbVar13 == *pbVar15;
              pbVar13 = pbVar13 + (ulong)bVar21 * -2 + 1;
              pbVar15 = pbVar15 + (ulong)bVar21 * -2 + 1;
            } while (bVar20);
            if (bStack241 == 0) {
              if ((!bVar19 && !bVar20) == bVar19) {
                uVar4 = func_0x00102080(1,0,puVar12);
                if (uVar4 == 0) goto code_r0x00102575;
                pbVar18 = (byte *)func_0x00101e20(0,&UNK_0010df27,5);
                puVar7 = (uint *)func_0x00101d40();
                func_0x00102120(0,(ulong)*puVar7,pbVar18);
                bVar1 = 0;
              }
              else {
                if (follow_links == '\0') {
                  iVar3 = func_0x00101e50(1,pbVar18,puVar12);
                }
                else {
                  iVar3 = func_0x00102020(1,pbVar18,puVar12);
                }
                uVar4 = uVar2;
                if (iVar3 == 0) {
code_r0x00102575:
                  lVar6 = lStack232;
                  if ((uStack192 & 0xb000) != 0x2000) {
                    lVar6 = lVar8;
                  }
                  bVar1 = print_it(lVar6,(ulong)uVar4,pbVar18,print_stat);
                  bVar1 = bVar1 ^ 1;
                }
                else {
                  uStack224 = quotearg_style(4,pbVar18);
                  puVar14 = &UNK_0010df42;
code_r0x00102698:
                  pbVar18 = (byte *)func_0x00101e20(0,puVar14,5);
                  puVar7 = (uint *)func_0x00101d40();
                  func_0x00102120(0,(ulong)*puVar7,pbVar18,uStack224);
                  bVar1 = 0;
                }
              }
            }
            else {
              if ((!bVar19 && !bVar20) == bVar19) {
                pbVar18 = (byte *)quotearg_style(4,pbVar18);
                uVar9 = func_0x00101e20(0,&UNK_0010f1f8,5);
                func_0x00102120(0,0,uVar9,pbVar18);
                bVar1 = 0;
              }
              else {
                iVar3 = func_0x00102010(pbVar18,puVar12);
                if (iVar3 != 0) {
                  uStack224 = quotearg_style(4,pbVar18);
                  puVar14 = &UNK_0010f240;
                  goto code_r0x00102698;
                }
                bVar1 = print_it(lVar8,0xffffffff,pbVar18,print_statfs);
                bVar1 = bVar1 ^ 1;
              }
            }
            puVar16 = (undefined1 *)((byte **)puVar16 + 1);
            bVar11 = bVar11 & bVar1;
            bVar19 = ppbStack240 < puVar16;
            bVar20 = ppbStack240 == (byte **)puVar16;
          } while (!bVar20);
        }
        else {
          bVar11 = 1;
        }
        param_2 = (undefined8 *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
        if (param_2 == (undefined8 *)0x0) {
          return (ulong)(bVar11 ^ 1);
        }
code_r0x00102779:
        func_0x00101e80();
      }
      uVar9 = func_0x00101e20(0,&UNK_0010df06,5);
      func_0x00102120(0,0,uVar9);
      goto code_r0x0010233c;
    }
    if (uVar2 != 99) {
      cVar17 = (char)pbVar18;
      if ((int)uVar2 < 100) {
        if (uVar2 == 0xffffff7e) {
          usage(0);
          goto code_r0x00102779;
        }
        if (uVar2 != 0x4c) {
          if (uVar2 == 0xffffff7d) {
            version_etc(stdout,&UNK_0010de31,&UNK_0010deac,Version,&UNK_0010def1,0);
            func_0x00102190();
          }
          else {
code_r0x0010233c:
            usage();
code_r0x00102350:
            bStack241 = 1;
            cVar17 = follow_links;
          }
        }
      }
      else {
        if (uVar2 == 0x74) {
          ppbStack240 = (byte **)0x1;
          cVar17 = follow_links;
        }
        else {
          if (uVar2 != 0x80) {
            if (uVar2 != 0x66) goto code_r0x0010233c;
            goto code_r0x00102350;
          }
          trailing_delim = &UNK_0010fb81;
          lVar8 = optarg;
          interpret_backslash_escapes = cVar17;
          cVar17 = follow_links;
        }
      }
      goto code_r0x001022f0;
    }
    interpret_backslash_escapes = '\0';
    trailing_delim = &UNK_0010fb80;
    lVar8 = optarg;
    cVar17 = follow_links;
  } while( true );
}