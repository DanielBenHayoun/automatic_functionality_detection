
/* WARNING: Could not reconcile some variable overlaps */

undefined8
decode_format_string
          (byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,int param_5,
          ulong param_6)

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
  byte *pbVar16;
  byte *pbVar17;
  int *unaff_RBP;
  char cVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined *puVar22;
  int *piVar23;
  uint uVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  byte bVar27;
  undefined auStack140 [4];
  long lStack136;
  byte *pbStack72;
  undefined8 uStack64;
  
  bVar27 = 0;
  pbStack72 = param_1;
  if (param_1 != (byte *)0x0) {
    bVar27 = *param_1;
    do {
      if (bVar27 == 0) {
        return 1;
      }
      if (n_specs_allocated <= n_specs) {
        if (spec == 0) {
          puVar13 = n_specs_allocated;
          if (n_specs_allocated == (undefined1 *)0x0) {
            puVar13 = (undefined1 *)0x3;
          }
          param_2 = (byte *)0x0;
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
      bVar27 = *param_1;
      param_2 = (byte *)(ulong)bVar27;
      switch(bVar27) {
      case 0x61:
        pbVar16 = param_1 + 1;
        uVar24 = 3;
        pcVar8 = print_named_ascii;
        uStack64._0_4_ = 5;
        iVar4 = 1;
        break;
      default:
        uVar5 = quote(pbStack72);
        bVar27 = *param_1;
        uVar6 = func_0x001018b0(0,&UNK_0010b008,5);
        func_0x00101aa0(0,0,uVar6,(ulong)(uint)(int)(char)bVar27,uVar5);
        return 0;
      case 99:
        pbVar16 = param_1 + 1;
        pcVar8 = print_ascii;
        uVar24 = 3;
        uStack64._0_4_ = 6;
        iVar4 = 1;
        break;
      case 100:
      case 0x6f:
      case 0x75:
      case 0x78:
        bVar2 = param_1[1];
        if (bVar2 == 0x49) {
          pbVar16 = param_1 + 2;
          uVar21 = 4;
          iVar4 = integral_type_size._16_4_;
          goto code_r0x00103e1a;
        }
        if ((char)bVar2 < 'J') goto code_r0x00103e00;
        if (bVar2 == 0x4c) {
          pbVar16 = param_1 + 2;
          uVar21 = 8;
          iVar4 = integral_type_size._32_4_;
          goto code_r0x00103e1a;
        }
        if (bVar2 != 0x53) goto code_r0x00103f40;
        bVar25 = bVar27 == 0x6f;
        pbVar16 = param_1 + 2;
        uVar21 = 2;
        iVar4 = integral_type_size._8_4_;
        if (!bVar25) goto code_r0x00103e24;
        goto code_r0x00103c30;
      case 0x66:
        bVar27 = param_1[1];
        if (bVar27 == 0x46) {
          pbVar16 = param_1 + 2;
          iVar4 = fp_type_size._16_4_;
        }
        else {
          if (bVar27 == 0x4c) {
            pbVar16 = param_1 + 2;
            iVar4 = fp_type_size._64_4_;
          }
          else {
            iVar4 = fp_type_size._32_4_;
            if (bVar27 == 0x44) {
              pbVar16 = param_1 + 2;
            }
            else {
              param_2 = param_1 + 1;
              pbVar16 = param_2;
              if ((int)(char)bVar27 - 0x30U < 10) {
                pbVar16 = param_1 + 2;
                uVar12 = SEXT48((int)((int)(char)bVar27 - 0x30U));
                uVar21 = 0;
                while( true ) {
                  uVar21 = uVar12 + uVar21 * 10;
                  if (9 < (int)(char)*pbVar16 - 0x30U) break;
                  uVar12 = SEXT48((int)((int)(char)*pbVar16 - 0x30U));
                  pbVar16 = pbVar16 + 1;
                  if (SUB168(ZEXT816(0xcccccccccccccccd) * ZEXT816(~uVar12) >> 0x43,0) < uVar21) {
code_r0x001041a0:
                    uVar5 = quote(pbStack72);
                    uVar6 = func_0x001018b0(0,&UNK_0010ad26,5);
                    func_0x00101aa0(0,0,uVar6,uVar5);
                    return 0;
                  }
                }
                if ((param_2 != pbVar16) &&
                   ((0x10 < uVar21 ||
                    (iVar4 = *(int *)(fp_type_size + uVar21 * 4),
                    *(int *)(fp_type_size + uVar21 * 4) == 0)))) {
                  uStack64 = (int *)uVar21;
                  uVar5 = quote(pbStack72);
                  puVar22 = &UNK_0010afb0;
code_r0x00103fe2:
                  uVar6 = func_0x001018b0(0,puVar22,5);
                  func_0x00101aa0(0,0,uVar6,uVar5,uStack64);
                  return 0;
                }
              }
            }
          }
        }
        ppcVar7 = (char **)func_0x00101860();
        iVar3 = 1;
        if (**ppcVar7 != '\0') {
          iVar3 = func_0x001018d0();
        }
        if (iVar4 == 7) goto code_r0x00104050;
        if (iVar4 == 8) {
          uVar24 = iVar3 + 0x1c;
          uStack64._0_4_ = 4;
          pcVar8 = print_long_double;
        }
        else {
          if (iVar4 != 6) goto code_r0x00104049;
          uVar24 = iVar3 + 0xe;
          uStack64._0_4_ = 4;
          pcVar8 = print_float;
        }
      }
      while( true ) {
        *(code **)(unaff_RBP + 2) = pcVar8;
        unaff_RBP[1] = iVar4;
        *unaff_RBP = (int)uStack64;
        unaff_RBP[7] = uVar24;
        bVar27 = *pbVar16;
        *(bool *)(unaff_RBP + 6) = bVar27 == 0x7a;
        pbVar16 = pbVar16 + (bVar27 == 0x7a);
        if (param_1 != pbVar16) break;
        func_0x00101950(&UNK_0010ad1c,&UNK_0010acec,0x3e4,__PRETTY_FUNCTION___7462);
code_r0x0010425d:
        func_0x00101950(&UNK_0010acff,&UNK_0010acec,0x286,__PRETTY_FUNCTION___7407);
        do {
          puVar13 = __PRETTY_FUNCTION___7407;
          lVar9 = func_0x00101950(&UNK_0010af78,&UNK_0010acec,0x2e9);
code_r0x0010429b:
          param_2 = (byte *)0x1;
code_r0x00103def:
          if ((-1 < lVar9) && (param_2 == (byte *)0x0)) goto code_r0x00103d9f;
code_r0x00103df9:
          bVar2 = xalloc_die();
code_r0x00103e00:
          if (bVar2 == 0x43) {
            uVar21 = 1;
            pbVar16 = param_1 + 2;
            iVar4 = integral_type_size._4_4_;
          }
          else {
code_r0x00103f40:
            pbVar16 = param_1 + 1;
            iVar4 = integral_type_size._16_4_;
            if ((int)(char)bVar2 - 0x30U < 10) {
              pbVar17 = param_1 + 2;
              uVar12 = SEXT48((int)((int)(char)bVar2 - 0x30U));
              uVar21 = 0;
              while( true ) {
                uVar21 = uVar12 + uVar21 * 10;
                if (9 < (int)(char)*pbVar17 - 0x30U) break;
                uVar12 = SEXT48((int)((int)(char)*pbVar17 - 0x30U));
                pbVar17 = pbVar17 + 1;
                if (SUB168(ZEXT816(0xcccccccccccccccd) * ZEXT816(~uVar12) >> 0x43,0) < uVar21)
                goto code_r0x001041a0;
              }
              if (pbVar16 == pbVar17) {
                uVar21 = 4;
                pbVar16 = pbVar17;
              }
              else {
                if ((8 < uVar21) ||
                   (iVar4 = *(int *)(integral_type_size + uVar21 * 4), pbVar16 = pbVar17, iVar4 == 0
                   )) {
                  uStack64 = (int *)uVar21;
                  uVar5 = quote(pbStack72);
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
          bVar27 = (byte)param_2;
          bVar25 = bVar27 == 0x6f;
          if (bVar25) {
code_r0x00103c30:
            puVar22 = &UNK_0010ad43;
            uStack64 = unaff_RBP + 4;
            if (iVar4 - 4U < 2) {
              puVar22 = &UNK_0010ace3;
            }
            uVar24 = *(uint *)(bytes_to_oct_digits + uVar21 * 4);
            func_0x00101b50(uStack64,1,8,&UNK_0010ad13,(ulong)uVar24,puVar22);
            uVar14 = 2;
            piVar23 = uStack64;
          }
          else {
code_r0x00103e24:
            cVar18 = (char)param_2;
            if (bVar25 || (char)bVar27 < 'o') {
              if (cVar18 != 'd') goto code_r0x00104049;
              uStack64 = unaff_RBP + 4;
              uVar24 = *(uint *)(bytes_to_signed_dec_digits + uVar21 * 4);
              func_0x00101b50(uStack64,1,8);
              uVar14 = 0;
              piVar23 = uStack64;
            }
            else {
              if (cVar18 == 'u') {
                uStack64 = unaff_RBP + 4;
                uVar24 = *(uint *)(bytes_to_unsigned_dec_digits + uVar21 * 4);
                func_0x00101b50(uStack64,1,8);
                uVar14 = 1;
                piVar23 = uStack64;
              }
              else {
                if (cVar18 != 'x') goto code_r0x00104049;
                puVar22 = &UNK_0010aece;
                uStack64 = unaff_RBP + 4;
                if (iVar4 - 4U < 2) {
                  puVar22 = &UNK_0010ace9;
                }
                uVar24 = *(uint *)(bytes_to_hex_digits + uVar21 * 4);
                func_0x00101b50(uStack64,1,8,&UNK_0010ad13,(ulong)uVar24,puVar22);
                uVar14 = 3;
                piVar23 = uStack64;
              }
            }
          }
          uStack64 = (int *)CONCAT44(uStack64._4_4_,uVar14);
          uVar21 = func_0x001018d0(piVar23);
        } while (7 < uVar21);
        param_2 = &UNK_0010c020;
        switch(iVar4) {
        default:
code_r0x00104049:
          iVar3 = func_0x001017e0();
code_r0x00104050:
          uVar24 = iVar3 + 0x17;
          uStack64._0_4_ = 4;
          pcVar8 = print_double;
          break;
        case 1:
          pcVar8 = print_char;
          if ((int)uStack64 == 0) {
            pcVar8 = print_s_char;
          }
          break;
        case 2:
          pcVar8 = print_short;
          if ((int)uStack64 == 0) {
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
      bVar27 = *pbVar16;
      param_1 = pbVar16;
    } while( true );
  }
  puVar19 = &UNK_0010acec;
  puVar20 = &UNK_0010acf5;
  func_0x00101950(&UNK_0010acf5,&UNK_0010acec,0x3d8,__PRETTY_FUNCTION___7462);
  lStack136 = *(long *)(in_FS_OFFSET + 0x28);
  puVar22 = puVar20;
  if (puVar19 < puVar20) {
    iVar4 = (int)param_6;
    uVar21 = (long)(puVar20 + -1) * (long)iVar4;
    pbVar16 = extraout_RDX;
    do {
      pbVar17 = pbVar16 + 1;
      bVar2 = *pbVar16;
      auVar1 = ZEXT816(uVar21);
      switch(bVar2) {
      case 0:
        puVar15 = &UNK_0010ad45;
        break;
      default:
        plVar10 = (long *)func_0x00101b40();
        puVar15 = auStack140;
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
      pbVar16 = pbVar17;
    } while (pbVar17 != extraout_RDX + (long)(puVar20 + -(long)puVar19));
  }
  if (lStack136 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x001018e0();
  uVar5 = 1;
  if (in_stream != (byte *)0x0) {
    bVar25 = false;
    bVar26 = (*in_stream & 0x20) == 0;
    if (bVar26) {
      lVar9 = 2;
      pbVar16 = *(byte **)(file_list + -8);
      pbVar17 = &UNK_0010d139;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar25 = *pbVar16 < *pbVar17;
        bVar26 = *pbVar16 == *pbVar17;
        pbVar16 = pbVar16 + (ulong)bVar27 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
      } while (bVar26);
      if (((!bVar25 && !bVar26) == bVar25) || (iVar4 = rpl_fclose(in_stream), iVar4 == 0)) {
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
      bVar25 = false;
      bVar26 = true;
      func_0x00101aa0(0,(ulong)puVar22 & 0xffffffff,uVar6,uVar5);
      lVar9 = 2;
      pbVar16 = *(byte **)(file_list + -8);
      pbVar17 = &UNK_0010d139;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar25 = *pbVar16 < *pbVar17;
        bVar26 = *pbVar16 == *pbVar17;
        pbVar16 = pbVar16 + (ulong)bVar27 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar27 * -2 + 1;
      } while (bVar26);
      uVar5 = 0;
      if ((!bVar25 && !bVar26) != bVar25) {
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
  n_specs_allocated = puVar13;
  spec = xrealloc();
  goto code_r0x00103aef;
}

