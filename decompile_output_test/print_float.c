
/* WARNING: Could not reconcile some variable overlaps */

undefined8
print_float(int *param_1,int *param_2,uint *param_3,undefined8 param_4,int param_5,ulong param_6)

{
  undefined auVar1 [16];
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char **ppcVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  uint *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  byte *extraout_RDX;
  undefined *puVar15;
  uint *unaff_RBX;
  byte *pbVar16;
  int *unaff_RBP;
  char cVar17;
  byte *pbVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  uint uVar23;
  int *piVar24;
  ulong unaff_R12;
  ulong unaff_R13;
  ulong unaff_R14;
  ulong unaff_R15;
  byte *pbVar25;
  long in_FS_OFFSET;
  bool bVar26;
  bool bVar27;
  byte bVar28;
  undefined auStack292 [4];
  long lStack288;
  uint *puStack272;
  int *piStack264;
  ulong uStack256;
  ulong uStack248;
  ulong uStack240;
  undefined *puStack232;
  int *piStack224;
  undefined8 uStack216;
  uint *puStack200;
  int *piStack192;
  ulong uStack184;
  ulong uStack176;
  ulong uStack168;
  undefined *puStack160;
  undefined *puStack144;
  int *piStack136;
  long lStack128;
  int *piStack120;
  int iStack112;
  uint uStack108;
  undefined auStack104 [40];
  long lStack64;
  
  bVar28 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar18 = (byte *)0x0;
  piStack136 = param_2;
  iStack112 = param_5;
  if (param_2 < param_1) {
    lStack128 = (long)(int)param_6;
    unaff_R12 = (ulong)unaff_RBP & 0xffffffff;
    uVar21 = ((long)param_1 + -1) * lStack128;
    puStack144 = auStack104;
    unaff_R13 = param_6 & 0xffffffff;
    unaff_RBX = param_3;
    unaff_RBP = param_1;
    unaff_R15 = uVar21;
    piStack120 = param_1;
    do {
      unaff_RBP = (int *)((long)unaff_RBP + -1);
      unaff_R14 = SUB168(ZEXT816(unaff_R15) / ZEXT816(piStack120),0);
      pbVar18 = (byte *)(ulong)(uint)(((int)unaff_R13 -
                                      SUB164(ZEXT816(unaff_R15) / ZEXT816(piStack120),0)) +
                                     iStack112);
      if (input_swap == '\0') {
        uVar23 = *unaff_RBX;
      }
      else {
        uVar23 = CONCAT13(*(undefined *)unaff_RBX,
                          CONCAT12(*(undefined *)((long)unaff_RBX + 1),
                                   CONCAT11(*(undefined *)((long)unaff_RBX + 2),
                                            *(undefined *)((long)unaff_RBX + 3))));
        unaff_R12 = (ulong)uVar23;
        uStack108 = uVar23;
      }
      unaff_RBX = unaff_RBX + 1;
      puStack160 = &UNK_001039f3;
      ftoastr(uVar23,puStack144,0x1f,0,0);
      param_1 = (int *)&UNK_0010acdc;
      unaff_R13 = unaff_R14 & 0xffffffff;
      puStack160 = &UNK_00103a0c;
      xprintf(&UNK_0010acdc,pbVar18,puStack144);
      param_5 = (int)uVar21;
      unaff_R15 = unaff_R15 - lStack128;
    } while (unaff_RBP != piStack136);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  puStack160 = &UNK_00103a94;
  func_0x001018e0();
  piStack224 = param_1;
  puStack200 = unaff_RBX;
  piStack192 = unaff_RBP;
  uStack184 = unaff_R12;
  uStack176 = unaff_R13;
  uStack168 = unaff_R14;
  puStack160 = (undefined *)unaff_R15;
  if (param_1 != (int *)0x0) {
    bVar28 = *(byte *)param_1;
    do {
      if (bVar28 == 0) {
        return 1;
      }
      if (n_specs_allocated <= n_specs) {
        if (spec == 0) {
          puVar13 = n_specs_allocated;
          if (n_specs_allocated == (undefined1 *)0x0) {
            puVar13 = (undefined1 *)0x3;
          }
          pbVar18 = (byte *)0x0;
          lVar9 = SUB168(ZEXT816(0x28) * ZEXT816(puVar13),0);
          if (SUB168(ZEXT816(0x28) * ZEXT816(puVar13) >> 0x40,0) != 0) goto code_r0x0010429b;
          goto code_r0x00103def;
        }
        if ((undefined1 *)0x222222222222221 < n_specs_allocated) goto code_r0x00103df9;
        puVar13 = n_specs_allocated + ((ulong)n_specs_allocated >> 1) + 1;
        goto code_r0x00103d9f;
      }
code_r0x00103aef:
      unaff_RBP = (int *)(spec + (long)n_specs * 0x28);
      if (unaff_RBP == (int *)0x0) goto code_r0x0010425d;
      bVar28 = *(byte *)param_1;
      pbVar18 = (byte *)(ulong)bVar28;
      switch(bVar28) {
      case 0x61:
        pbVar25 = (byte *)((long)param_1 + 1);
        uVar23 = 3;
        pcVar8 = print_named_ascii;
        uStack216._0_4_ = 5;
        iVar4 = 1;
        break;
      default:
        puStack232 = &UNK_00103d41;
        uVar5 = quote(piStack224);
        bVar28 = *(byte *)param_1;
        puStack232 = &UNK_00103d5c;
        uVar6 = func_0x001018b0(0,&UNK_0010b008,5);
        puStack232 = &UNK_00103d6f;
        func_0x00101aa0(0,0,uVar6,(ulong)(uint)(int)(char)bVar28,uVar5);
        return 0;
      case 99:
        pbVar25 = (byte *)((long)param_1 + 1);
        pcVar8 = print_ascii;
        uVar23 = 3;
        uStack216._0_4_ = 6;
        iVar4 = 1;
        break;
      case 100:
      case 0x6f:
      case 0x75:
      case 0x78:
        bVar2 = *(byte *)((long)param_1 + 1);
        if (bVar2 == 0x49) {
          pbVar25 = (byte *)((long)param_1 + 2);
          uVar21 = 4;
          iVar4 = integral_type_size._16_4_;
          goto code_r0x00103e1a;
        }
        if ((char)bVar2 < 'J') goto code_r0x00103e00;
        if (bVar2 == 0x4c) {
          pbVar25 = (byte *)((long)param_1 + 2);
          uVar21 = 8;
          iVar4 = integral_type_size._32_4_;
          goto code_r0x00103e1a;
        }
        if (bVar2 != 0x53) goto code_r0x00103f40;
        bVar26 = bVar28 == 0x6f;
        pbVar25 = (byte *)((long)param_1 + 2);
        uVar21 = 2;
        iVar4 = integral_type_size._8_4_;
        if (!bVar26) goto code_r0x00103e24;
        goto code_r0x00103c30;
      case 0x66:
        bVar28 = *(byte *)((long)param_1 + 1);
        if (bVar28 == 0x46) {
          pbVar25 = (byte *)((long)param_1 + 2);
          iVar4 = fp_type_size._16_4_;
        }
        else {
          if (bVar28 == 0x4c) {
            pbVar25 = (byte *)((long)param_1 + 2);
            iVar4 = fp_type_size._64_4_;
          }
          else {
            iVar4 = fp_type_size._32_4_;
            if (bVar28 == 0x44) {
              pbVar25 = (byte *)((long)param_1 + 2);
            }
            else {
              pbVar18 = (byte *)((long)param_1 + 1);
              pbVar25 = pbVar18;
              if ((int)(char)bVar28 - 0x30U < 10) {
                pbVar25 = (byte *)((long)param_1 + 2);
                uVar12 = SEXT48((int)((int)(char)bVar28 - 0x30U));
                uVar21 = 0;
                while( true ) {
                  uVar21 = uVar12 + uVar21 * 10;
                  if (9 < (int)(char)*pbVar25 - 0x30U) break;
                  uVar12 = SEXT48((int)((int)(char)*pbVar25 - 0x30U));
                  pbVar25 = pbVar25 + 1;
                  if (SUB168(ZEXT816(0xcccccccccccccccd) * ZEXT816(~uVar12) >> 0x43,0) < uVar21) {
code_r0x001041a0:
                    puStack232 = &UNK_001041a9;
                    uVar5 = quote(piStack224);
                    puStack232 = &UNK_001041bf;
                    uVar6 = func_0x001018b0(0,&UNK_0010ad26,5);
                    puStack232 = &UNK_001041d0;
                    func_0x00101aa0(0,0,uVar6,uVar5);
                    return 0;
                  }
                }
                if ((pbVar18 != pbVar25) &&
                   ((0x10 < uVar21 ||
                    (iVar4 = *(int *)(fp_type_size + uVar21 * 4),
                    *(int *)(fp_type_size + uVar21 * 4) == 0)))) {
                  puStack232 = &UNK_00103bd2;
                  uStack216 = (int *)uVar21;
                  uVar5 = quote(piStack224);
                  puVar22 = &UNK_0010afb0;
code_r0x00103fe2:
                  puStack232 = &UNK_00103fe9;
                  uVar6 = func_0x001018b0(0,puVar22,5);
                  puStack232 = &UNK_00103fff;
                  func_0x00101aa0(0,0,uVar6,uVar5,uStack216);
                  return 0;
                }
              }
            }
          }
        }
        puStack232 = &UNK_00104025;
        ppcVar7 = (char **)func_0x00101860();
        iVar3 = 1;
        if (**ppcVar7 != '\0') {
          puStack232 = &UNK_00104037;
          iVar3 = func_0x001018d0();
        }
        if (iVar4 == 7) goto code_r0x00104050;
        if (iVar4 == 8) {
          uVar23 = iVar3 + 0x1c;
          uStack216._0_4_ = 4;
          pcVar8 = print_long_double;
        }
        else {
          if (iVar4 != 6) goto code_r0x00104049;
          uVar23 = iVar3 + 0xe;
          uStack216._0_4_ = 4;
          pcVar8 = print_float;
        }
      }
      while( true ) {
        *(code **)(unaff_RBP + 2) = pcVar8;
        unaff_RBP[1] = iVar4;
        *unaff_RBP = (int)uStack216;
        unaff_RBP[7] = uVar23;
        bVar28 = *pbVar25;
        *(bool *)(unaff_RBP + 6) = bVar28 == 0x7a;
        piVar24 = (int *)(pbVar25 + (bVar28 == 0x7a));
        if (param_1 != piVar24) break;
        puStack232 = &UNK_0010425d;
        func_0x00101950(&UNK_0010ad1c,&UNK_0010acec,0x3e4,__PRETTY_FUNCTION___7462);
code_r0x0010425d:
        puStack232 = &UNK_0010427c;
        func_0x00101950(&UNK_0010acff,&UNK_0010acec,0x286,__PRETTY_FUNCTION___7407);
        do {
          puVar13 = __PRETTY_FUNCTION___7407;
          puStack232 = &UNK_0010429b;
          lVar9 = func_0x00101950(&UNK_0010af78,&UNK_0010acec,0x2e9);
code_r0x0010429b:
          pbVar18 = (byte *)0x1;
code_r0x00103def:
          if ((-1 < lVar9) && (pbVar18 == (byte *)0x0)) goto code_r0x00103d9f;
code_r0x00103df9:
          puStack232 = &UNK_00103dfe;
          bVar2 = xalloc_die();
code_r0x00103e00:
          if (bVar2 == 0x43) {
            uVar21 = 1;
            pbVar25 = (byte *)((long)param_1 + 2);
            iVar4 = integral_type_size._4_4_;
          }
          else {
code_r0x00103f40:
            pbVar25 = (byte *)((long)param_1 + 1);
            iVar4 = integral_type_size._16_4_;
            if ((int)(char)bVar2 - 0x30U < 10) {
              pbVar16 = (byte *)((long)param_1 + 2);
              uVar12 = SEXT48((int)((int)(char)bVar2 - 0x30U));
              uVar21 = 0;
              while( true ) {
                uVar21 = uVar12 + uVar21 * 10;
                if (9 < (int)(char)*pbVar16 - 0x30U) break;
                uVar12 = SEXT48((int)((int)(char)*pbVar16 - 0x30U));
                pbVar16 = pbVar16 + 1;
                if (SUB168(ZEXT816(0xcccccccccccccccd) * ZEXT816(~uVar12) >> 0x43,0) < uVar21)
                goto code_r0x001041a0;
              }
              if (pbVar25 == pbVar16) {
                uVar21 = 4;
                pbVar25 = pbVar16;
              }
              else {
                if ((8 < uVar21) ||
                   (iVar4 = *(int *)(integral_type_size + uVar21 * 4), pbVar25 = pbVar16, iVar4 == 0
                   )) {
                  puStack232 = &UNK_00103fd3;
                  uStack216 = (int *)uVar21;
                  uVar5 = quote(piStack224);
                  puVar22 = &UNK_0010af28;
                  goto code_r0x00103fe2;
                }
              }
            }
            else {
              uVar21 = 4;
            }
          }
code_r0x00103e1a:
          bVar28 = (byte)pbVar18;
          bVar26 = bVar28 == 0x6f;
          if (bVar26) {
code_r0x00103c30:
            puVar22 = &UNK_0010ad43;
            uStack216 = unaff_RBP + 4;
            if (iVar4 - 4U < 2) {
              puVar22 = &UNK_0010ace3;
            }
            uVar23 = *(uint *)(bytes_to_oct_digits + uVar21 * 4);
            puStack232 = &UNK_00103c7b;
            func_0x00101b50(uStack216,1,8,&UNK_0010ad13,(ulong)uVar23,puVar22);
            uVar14 = 2;
            piVar24 = uStack216;
          }
          else {
code_r0x00103e24:
            cVar17 = (char)pbVar18;
            if (bVar26 || (char)bVar28 < 'o') {
              if (cVar17 != 'd') goto code_r0x00104049;
              uStack216 = unaff_RBP + 4;
              uVar23 = *(uint *)(bytes_to_signed_dec_digits + uVar21 * 4);
              puStack232 = &UNK_00104132;
              func_0x00101b50(uStack216,1,8);
              uVar14 = 0;
              piVar24 = uStack216;
            }
            else {
              if (cVar17 == 'u') {
                uStack216 = unaff_RBP + 4;
                uVar23 = *(uint *)(bytes_to_unsigned_dec_digits + uVar21 * 4);
                puStack232 = &UNK_00104188;
                func_0x00101b50(uStack216,1,8);
                uVar14 = 1;
                piVar24 = uStack216;
              }
              else {
                if (cVar17 != 'x') goto code_r0x00104049;
                puVar22 = &UNK_0010aece;
                uStack216 = unaff_RBP + 4;
                if (iVar4 - 4U < 2) {
                  puVar22 = &UNK_0010ace9;
                }
                uVar23 = *(uint *)(bytes_to_hex_digits + uVar21 * 4);
                puStack232 = &UNK_00103e89;
                func_0x00101b50(uStack216,1,8,&UNK_0010ad13,(ulong)uVar23,puVar22);
                uVar14 = 3;
                piVar24 = uStack216;
              }
            }
          }
          uStack216 = (int *)CONCAT44(uStack216._4_4_,uVar14);
          puStack232 = &UNK_00103e9f;
          uVar21 = func_0x001018d0(piVar24);
        } while (7 < uVar21);
        pbVar18 = &UNK_0010c020;
        switch(iVar4) {
        default:
code_r0x00104049:
          puStack232 = &UNK_0010404e;
          iVar3 = func_0x001017e0();
code_r0x00104050:
          uVar23 = iVar3 + 0x17;
          uStack216._0_4_ = 4;
          pcVar8 = print_double;
          break;
        case 1:
          pcVar8 = print_char;
          if ((int)uStack216 == 0) {
            pcVar8 = print_s_char;
          }
          break;
        case 2:
          pcVar8 = print_short;
          if ((int)uStack216 == 0) {
            pcVar8 = print_s_short;
          }
          break;
        case 3:
          pcVar8 = print_int;
          break;
        case 4:
          pcVar8 = print_long;
          break;
        case 5:
          pcVar8 = print_long_long;
        }
      }
      n_specs = n_specs + 1;
      bVar28 = *(byte *)piVar24;
      param_1 = piVar24;
    } while( true );
  }
  puVar19 = &UNK_0010acec;
  puVar20 = &UNK_0010acf5;
  puStack232 = &UNK_001042c4;
  func_0x00101950(&UNK_0010acf5,&UNK_0010acec,0x3d8,__PRETTY_FUNCTION___7462);
  lStack288 = *(long *)(in_FS_OFFSET + 0x28);
  puVar22 = puVar20;
  puStack272 = unaff_RBX;
  piStack264 = unaff_RBP;
  uStack256 = unaff_R12;
  uStack248 = unaff_R13;
  uStack240 = unaff_R14;
  puStack232 = (undefined *)unaff_R15;
  if (puVar19 < puVar20) {
    iVar4 = (int)param_6;
    uVar21 = (long)(puVar20 + -1) * (long)iVar4;
    pbVar18 = extraout_RDX;
    do {
      pbVar25 = pbVar18 + 1;
      bVar2 = *pbVar18;
      auVar1 = ZEXT816(uVar21);
      switch(bVar2) {
      case 0:
        puVar15 = &UNK_0010ad45;
        break;
      default:
        plVar10 = (long *)func_0x00101b40();
        puVar15 = auStack292;
        puVar22 = &UNK_0010ad3d;
        if ((*(byte *)(*plVar10 + 1 + (ulong)bVar2 * 2) & 0x40) == 0) {
          puVar22 = &UNK_0010ad40;
        }
        func_0x00101b50(puVar15,1,4,puVar22);
        break;
      case 7:
        puVar15 = &UNK_0010ad48;
        break;
      case 8:
        puVar15 = &UNK_0010ad4b;
        break;
      case 9:
        puVar15 = &UNK_0010ad57;
        break;
      case 10:
        puVar15 = &UNK_0010ad51;
        break;
      case 0xb:
        puVar15 = &UNK_0010ad5a;
        break;
      case 0xc:
        puVar15 = &UNK_0010ad4e;
        break;
      case 0xd:
        puVar15 = &UNK_0010ad54;
      }
      puVar22 = &UNK_0010acdc;
      uVar21 = uVar21 - (long)iVar4;
      xprintf(&UNK_0010acdc,
              (ulong)(uint)(((int)param_6 - SUB164(auVar1 / ZEXT816(puVar20),0)) + param_5),puVar15)
      ;
      param_6 = SUB168(auVar1 / ZEXT816(puVar20),0) & 0xffffffff;
      pbVar18 = pbVar25;
    } while (pbVar25 != extraout_RDX + (long)(puVar20 + -(long)puVar19));
  }
  if (lStack288 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x001018e0();
  uVar5 = 1;
  if (in_stream != (byte *)0x0) {
    bVar26 = false;
    bVar27 = (*in_stream & 0x20) == 0;
    if (bVar27) {
      lVar9 = 2;
      pbVar18 = *(byte **)(file_list + -8);
      pbVar25 = &UNK_0010d139;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar26 = *pbVar18 < *pbVar25;
        bVar27 = *pbVar18 == *pbVar25;
        pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
        pbVar25 = pbVar25 + (ulong)bVar28 * -2 + 1;
      } while (bVar27);
      if (((!bVar26 && !bVar27) == bVar26) || (iVar4 = rpl_fclose(in_stream), iVar4 == 0)) {
        uVar5 = 1;
      }
      else {
        uVar6 = quotearg_n_style_colon(0,3,input_filename);
        puVar11 = (uint *)func_0x001017f0();
        uVar5 = 0;
        func_0x00101aa0(0,(ulong)*puVar11,&UNK_0010c7e0,uVar6);
      }
    }
    else {
      uVar5 = quotearg_n_style_colon(0,3,input_filename);
      uVar6 = func_0x001018b0(0,&UNK_0010ad5d,5);
      bVar26 = false;
      bVar27 = true;
      func_0x00101aa0(0,(ulong)puVar22 & 0xffffffff,uVar6,uVar5);
      lVar9 = 2;
      pbVar18 = *(byte **)(file_list + -8);
      pbVar25 = &UNK_0010d139;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar26 = *pbVar18 < *pbVar25;
        bVar27 = *pbVar18 == *pbVar25;
        pbVar18 = pbVar18 + (ulong)bVar28 * -2 + 1;
        pbVar25 = pbVar25 + (ulong)bVar28 * -2 + 1;
      } while (bVar27);
      uVar5 = 0;
      if ((!bVar26 && !bVar27) != bVar26) {
        rpl_fclose(in_stream);
      }
    }
    in_stream = (byte *)0x0;
  }
  if ((*stdout & 0x20) != 0) {
    uVar5 = 0;
    uVar6 = func_0x001018b0(0,&UNK_0010ad6c,5);
    func_0x00101aa0(0,0,uVar6);
  }
  return uVar5;
code_r0x00103d9f:
  puStack232 = &UNK_00103db3;
  n_specs_allocated = puVar13;
  spec = xrealloc();
  goto code_r0x00103aef;
}

