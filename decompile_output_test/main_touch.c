
ulong touch(uint param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  long lVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  undefined *puVar19;
  byte *pbVar20;
  char cVar21;
  byte bVar22;
  uint uVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  byte bVar27;
  ulong uStack264;
  long lStack256;
  ulong uStack248;
  long lStack240;
  ulong uStack232;
  long lStack224;
  undefined auStack216 [72];
  ulong uStack144;
  long lStack136;
  ulong uStack128;
  long lStack120;
  long lStack64;
  
  bVar27 = 0;
  uVar24 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00102a30(6,&UNK_00110366);
  func_0x001027e0(&UNK_0010f7bb,&UNK_0010f7e4);
  func_0x001027c0(&UNK_0010f7bb);
  atexit(close_stdout);
  change_times = 0;
  use_ref = '\0';
  no_create = '\0';
  lVar16 = 0;
code_r0x00102c58:
  do {
    while( true ) {
      do {
        uVar7 = func_0x00102840((ulong)param_1,param_2,&UNK_0010f845,longopts,0);
        lVar11 = ref_file;
        if (uVar7 == 0xffffffff) {
          if (change_times == 0) {
            change_times = 3;
          }
          if ((char)uVar24 == '\0') {
            if (use_ref == '\0') {
              if (lVar16 != 0) {
                gettime(&uStack264);
                get_reldate(newtime,lVar16,&uStack264);
                newtime._16_8_ = newtime._0_8_;
                newtime._24_8_ = newtime._8_8_;
                if (change_times != 3) goto code_r0x00102e66;
                if (newtime._0_8_ != uStack264) goto code_r0x00102e66;
                if (newtime._8_8_ != lStack256) goto code_r0x00102e66;
                lStack240 = newtime._8_8_;
                uStack248 = newtime._0_8_ ^ 1;
                get_reldate(newtime._0_8_,&uStack232,lVar16,&uStack248);
                if (uStack232 != uStack248) goto code_r0x00102e66;
                if (lStack224 != lStack240) goto code_r0x00102e66;
              }
              if (((1 < (int)(param_1 - optind)) && (iVar9 = posix2_version(), iVar9 < 0x30db0)) &&
                 (cVar21 = posixtime(newtime,param_2[(int)optind],9), cVar21 != '\0')) {
                newtime._8_8_ = 0;
                newtime._16_8_ =
                     newtime._0_8_ & 0xffffffff |
                     (ulong)SUB164(ZEXT816(newtime._0_8_) >> 0x20,0) << 0x20;
                newtime._24_8_ = 0;
                lVar16 = func_0x001026f0(newtime._0_8_,&UNK_0010f851);
                if (lVar16 == 0) goto code_r0x0010343a;
                goto code_r0x0010339a;
              }
              if (change_times == 3) {
                amtime_now = '\x01';
                goto code_r0x00102e66;
              }
              newtime._8_8_ = 0x3fffffff;
              newtime._24_8_ = 0x3fffffff;
              goto code_r0x00102e66;
            }
            if (no_dereference == 0) {
              iVar9 = func_0x001029c0(1,ref_file,auStack216);
            }
            else {
              iVar9 = func_0x00102820();
            }
            if (iVar9 == 0) {
              newtime._0_8_ = uStack144;
              newtime._8_8_ = lStack136;
              newtime._16_8_ = uStack128;
              newtime._24_8_ = lStack120;
              if (lVar16 == 0) goto code_r0x00102e66;
              if ((change_times & 1) != 0) {
                get_reldate(newtime,lVar16,newtime);
              }
              if ((change_times & 2) == 0) goto code_r0x00102e66;
              get_reldate(0x315130,lVar16,0x315130);
              goto code_r0x00102e66;
            }
            param_2 = (undefined8 *)quotearg_style(4,lVar11);
            uVar13 = func_0x001027f0(0,&UNK_0010ffa0,5);
            puVar15 = (uint *)func_0x00102750();
            func_0x00102a70(1,(ulong)*puVar15,uVar13,param_2);
          }
          else {
            if ((lVar16 == 0) && (use_ref == '\0')) goto code_r0x00102e66;
          }
          puVar19 = &UNK_0010ff70;
          goto code_r0x001033c1;
        }
      } while (uVar7 == 0x66);
      if ((int)uVar7 < 0x67) break;
      if (uVar7 == 0x72) {
        ref_file = optarg;
        use_ref = '\x01';
      }
      else {
        if ((int)uVar7 < 0x73) {
          if (uVar7 == 0x68) {
code_r0x00102da0:
            no_dereference = 1;
          }
          else {
            if (uVar7 != 0x6d) goto code_r0x001033d6;
            change_times = change_times | 2;
          }
        }
        else {
          if (uVar7 == 0x74) {
            uVar7 = posixtime(newtime,optarg,6);
            uVar24 = (ulong)uVar7;
            if ((char)uVar7 == '\0') goto code_r0x00103404;
            newtime._8_8_ = 0;
            newtime._16_8_ =
                 newtime._0_8_ & 0xffffffff |
                 (ulong)SUB164(ZEXT816(newtime._0_8_) >> 0x20,0) << 0x20;
            newtime._24_8_ = 0;
          }
          else {
            if (uVar7 != 0x80) goto code_r0x001033d6;
            lVar11 = __xargmatch_internal(&UNK_0010f7fc,optarg,time_args,time_masks);
            change_times = change_times | *(uint *)(time_masks + lVar11 * 4);
          }
        }
      }
    }
    if (uVar7 == 0x61) {
      change_times = change_times | 1;
      goto code_r0x00102c58;
    }
    if ((int)uVar7 < 0x62) {
      if (uVar7 == 0xffffff7d) {
        version_etc(stdout,&UNK_0010f73b,&UNK_0010f7b7,Version,&UNK_0010f812,&UNK_0010f803,
                    &UNK_0010f839,&UNK_0010f829,&UNK_0010f81d,0);
        func_0x00102ad0();
        goto code_r0x00102da0;
      }
      if (uVar7 == 0xffffff7e) {
        usage(0);
        goto code_r0x001033b5;
      }
      break;
    }
    if (uVar7 == 99) {
      no_create = '\x01';
      goto code_r0x00102c58;
    }
    lVar16 = optarg;
  } while (uVar7 == 100);
code_r0x001033d6:
  usage(1);
  do {
    func_0x00102830();
code_r0x001033e5:
    func_0x001028d0(&UNK_0010f882,&UNK_0010f876,0x99,&__PRETTY_FUNCTION___6981);
code_r0x00103404:
    uVar13 = quote(optarg);
    uVar7 = (uint)uVar13;
    uVar14 = func_0x001027f0(0,&UNK_0010f724,5);
    func_0x00102a70(1,0,uVar14,uVar13);
code_r0x0010343a:
    puVar15 = (uint *)func_0x00102730(newtime);
    if (puVar15 != (uint *)0x0) {
      uVar23 = *puVar15;
      uVar10 = puVar15[1];
      uVar2 = puVar15[2];
      uVar3 = puVar15[3];
      uVar4 = puVar15[4];
      uVar5 = puVar15[5];
      uVar13 = param_2[(int)optind];
      uVar14 = func_0x001027f0(0,&UNK_0010ffc0,5);
      func_0x00102a70(0,0,uVar14,uVar13,(long)(int)uVar5 + 0x76c,(ulong)(uVar4 + 1),(ulong)uVar3,
                      (ulong)uVar2,(ulong)uVar10,(ulong)uVar23);
    }
code_r0x0010339a:
    optind = optind + 1;
code_r0x00102e66:
    bVar26 = optind == param_1;
    if (bVar26) break;
    bVar1 = 1;
    if ((int)optind < (int)param_1) {
      do {
        bVar25 = optind < param_1;
        lVar16 = 2;
        pbVar6 = (byte *)param_2[(int)optind];
        uVar24 = 1;
        pbVar18 = pbVar6;
        pbVar20 = &UNK_00110232;
        do {
          if (lVar16 == 0) break;
          lVar16 = lVar16 + -1;
          bVar25 = *pbVar18 < *pbVar20;
          bVar26 = *pbVar18 == *pbVar20;
          pbVar18 = pbVar18 + (ulong)bVar27 * -2 + 1;
          pbVar20 = pbVar20 + (ulong)bVar27 * -2 + 1;
        } while (bVar26);
        cVar21 = (!bVar25 && !bVar26) - bVar25;
        uVar23 = SEXT14(cVar21);
        if (cVar21 != '\0') {
          if ((no_create == '\0') && (no_dereference == 0)) {
            uVar23 = 0;
            uVar10 = fd_reopen(0,pbVar6,0x941,0x1b6);
            uVar24 = (ulong)uVar10;
            if (uVar10 == 0xffffffff) {
              puVar15 = (uint *)func_0x00102750();
              uVar23 = *puVar15;
              if ((uVar23 - 0x15 < 2) || (uVar23 == 1)) goto code_r0x00102f95;
            }
          }
          else {
code_r0x00102f95:
            uVar24 = (ulong)uVar7;
            uVar23 = 0;
          }
        }
        if (change_times != 3) {
          if (change_times == 2) {
            newtime._8_8_ = 0x3ffffffe;
          }
          else {
            if (change_times != 1) goto code_r0x001033e5;
            newtime._24_8_ = 0x3ffffffe;
          }
        }
        puVar17 = (undefined1 *)0x0;
        if (amtime_now == '\0') {
          puVar17 = newtime;
        }
        iVar9 = (int)uVar24;
        if ((iVar9 == -1 & no_dereference) != 0) {
          iVar8 = fdutimensat(uVar24,0xffffff9c,pbVar6,puVar17,0x100);
          goto code_r0x00102ecc;
        }
        if (iVar9 == 1) {
          iVar9 = fdutimensat(1,0xffffff9c,0,puVar17,0);
          if (iVar9 == 0) {
code_r0x00103160:
            bVar22 = 1;
          }
          else {
            piVar12 = (int *)func_0x00102750();
            if (*piVar12 == 9) {
              if (no_create != '\0') goto code_r0x00103160;
              if (uVar23 == 0) {
code_r0x00102ef4:
                uVar13 = quotearg_style(4,pbVar6);
                uVar14 = func_0x001027f0(0,&UNK_0010f8be,5);
                puVar15 = (uint *)func_0x00102750();
                func_0x00102a70(0,(ulong)*puVar15,uVar14,uVar13);
                bVar22 = 0;
                goto code_r0x00102f33;
              }
            }
            else {
code_r0x00102ed4:
              if (uVar23 == 0) {
                piVar12 = (int *)func_0x00102750();
                if ((no_create == '\0') || (*piVar12 != 2)) goto code_r0x00102ef4;
                goto code_r0x00103160;
              }
            }
            uVar13 = quotearg_style(4,pbVar6);
            uVar14 = func_0x001027f0(0,&UNK_0010f8ae,5);
            func_0x00102a70(0,(ulong)uVar23,uVar14,uVar13);
            bVar22 = 0;
          }
        }
        else {
          iVar8 = fdutimensat(uVar24,0xffffff9c,pbVar6,puVar17,0);
          if (iVar9 != 0) {
code_r0x00102ecc:
            if (iVar8 != 0) goto code_r0x00102ed4;
            goto code_r0x00103160;
          }
          bVar22 = 0;
          iVar9 = func_0x00102900(0);
          if (iVar9 == 0) goto code_r0x00102ecc;
          uVar13 = quotearg_style(4,pbVar6);
          uVar14 = func_0x001027f0(0,&UNK_0010f89b,5);
          puVar15 = (uint *)func_0x00102750();
          func_0x00102a70(0,(ulong)*puVar15,uVar14,uVar13);
        }
code_r0x00102f33:
        bVar1 = bVar1 & bVar22;
        optind = optind + 1;
        bVar26 = optind == param_1;
        if ((int)param_1 <= (int)optind) break;
      } while( true );
    }
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)(bVar1 ^ 1);
    }
  } while( true );
code_r0x001033b5:
  puVar19 = &UNK_0010f861;
code_r0x001033c1:
  uVar13 = func_0x001027f0(0,puVar19,5);
  func_0x00102a70(0,0,uVar13);
  goto code_r0x001033d6;
}