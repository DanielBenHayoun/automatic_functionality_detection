
/* WARNING: Could not reconcile some variable overlaps */

undefined8
print_double(int *param_1,int *param_2,undefined8 *param_3,undefined8 param_4,int param_5,
            ulong param_6)

{
  undefined uVar1;
  undefined auVar2 [16];
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char **ppcVar9;
  code *pcVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined *puVar15;
  uint *extraout_RDX;
  byte *extraout_RDX_00;
  undefined *puVar16;
  uint *unaff_RBX;
  uint *puVar17;
  byte *pbVar18;
  char cVar19;
  byte *pbVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong uVar23;
  int *piVar24;
  uint uVar25;
  undefined *unaff_R12;
  undefined8 *unaff_R13;
  undefined8 *puVar26;
  ulong unaff_R14;
  int *unaff_R15;
  int *piVar27;
  byte *pbVar28;
  long in_FS_OFFSET;
  bool bVar29;
  bool bVar30;
  byte bVar31;
  undefined auStack444 [4];
  long lStack440;
  uint *puStack424;
  int *piStack416;
  undefined *puStack408;
  undefined8 *puStack400;
  ulong uStack392;
  int *piStack384;
  int *piStack376;
  undefined8 uStack368;
  uint *puStack352;
  int *piStack344;
  undefined *puStack336;
  undefined8 *puStack328;
  ulong uStack320;
  int *piStack312;
  undefined *puStack296;
  int *piStack288;
  long lStack280;
  int *piStack272;
  int iStack264;
  uint uStack260;
  undefined auStack256 [40];
  long lStack216;
  uint *puStack200;
  int *piStack192;
  undefined *puStack184;
  undefined8 *puStack176;
  ulong uStack168;
  int *piStack160;
  int *piStack144;
  uint uStack136;
  int iStack132;
  long lStack128;
  undefined8 uStack112;
  undefined auStack104 [40];
  long lStack64;
  
  bVar31 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  piStack376 = (int *)0x0;
  piStack144 = param_2;
  iStack132 = param_5;
  iStack264 = param_5;
  if (param_2 < param_1) {
    lStack128 = (long)(int)param_6;
    unaff_R12 = auStack104;
    uVar23 = ((long)param_1 + -1) * lStack128;
    unaff_R13 = param_3;
    unaff_R14 = uVar23;
    unaff_R15 = param_1;
    do {
      unaff_R15 = (int *)((long)unaff_R15 + -1);
      unaff_RBX = SUB168(ZEXT816(unaff_R14) / ZEXT816(param_1),0);
      uStack136 = ((int)param_6 - SUB164(ZEXT816(unaff_R14) / ZEXT816(param_1),0)) + iStack132;
      if (input_swap == '\0') {
        uVar7 = *unaff_R13;
      }
      else {
        puVar15 = (undefined *)((long)unaff_R13 + 7);
        lVar6 = 0;
        do {
          uVar1 = *puVar15;
          puVar15 = puVar15 + -1;
          *(undefined *)((long)&uStack112 + lVar6) = uVar1;
          lVar6 = lVar6 + 1;
          uVar7 = uStack112;
        } while (lVar6 != 8);
      }
      unaff_R13 = unaff_R13 + 1;
      piStack160 = (int *)&UNK_001038c3;
      dtoastr(uVar7,unaff_R12,0x28,0);
      param_2 = (int *)(ulong)uStack136;
      piStack376 = (int *)&UNK_0010acdc;
      piStack160 = (int *)&UNK_001038d8;
      xprintf(&UNK_0010acdc,param_2,unaff_R12);
      iStack264 = (int)uVar23;
      unaff_R14 = unaff_R14 - lStack128;
      param_6 = (ulong)unaff_RBX & 0xffffffff;
    } while (unaff_R15 != piStack144);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  piStack160 = (int *)&UNK_00103964;
  func_0x001018e0();
  lStack216 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar20 = (byte *)0x0;
  piStack288 = param_2;
  puStack200 = unaff_RBX;
  piStack192 = param_1;
  puStack184 = unaff_R12;
  puStack176 = unaff_R13;
  uStack168 = unaff_R14;
  piStack160 = unaff_R15;
  iVar5 = iStack264;
  if (param_2 < piStack376) {
    lStack280 = (long)(int)param_6;
    piVar24 = (int *)(((long)piStack376 + -1) * lStack280);
    puStack296 = auStack256;
    puVar17 = extraout_RDX;
    param_1 = piStack376;
    puVar15 = (undefined *)((ulong)param_1 & 0xffffffff);
    puVar26 = (undefined8 *)(param_6 & 0xffffffff);
    piVar27 = piVar24;
    piStack272 = piStack376;
    do {
      unaff_R12 = puVar15;
      param_1 = (int *)((long)param_1 + -1);
      unaff_R14 = SUB168(ZEXT816(piVar27) / ZEXT816(piStack272),0);
      pbVar20 = (byte *)(ulong)(uint)(((int)puVar26 -
                                      SUB164(ZEXT816(piVar27) / ZEXT816(piStack272),0)) + iStack264)
      ;
      if (input_swap == '\0') {
        uVar25 = *puVar17;
      }
      else {
        uVar25 = CONCAT13(*(undefined *)puVar17,
                          CONCAT12(*(undefined *)((long)puVar17 + 1),
                                   CONCAT11(*(undefined *)((long)puVar17 + 2),
                                            *(undefined *)((long)puVar17 + 3))));
        unaff_R12 = (undefined *)(ulong)uVar25;
        uStack260 = uVar25;
      }
      unaff_RBX = puVar17 + 1;
      piStack312 = (int *)&UNK_001039f3;
      ftoastr((ulong)uVar25,puStack296,0x1f,0,0);
      piStack376 = (int *)&UNK_0010acdc;
      unaff_R13 = (undefined8 *)(unaff_R14 & 0xffffffff);
      piStack312 = (int *)&UNK_00103a0c;
      xprintf(&UNK_0010acdc,pbVar20,puStack296);
      iVar5 = (int)piVar24;
      unaff_R15 = (int *)((long)piVar27 - lStack280);
      puVar17 = unaff_RBX;
      puVar15 = unaff_R12;
      puVar26 = unaff_R13;
      piVar27 = unaff_R15;
    } while (param_1 != piStack288);
  }
  if (lStack216 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  piStack312 = (int *)&UNK_00103a94;
  func_0x001018e0();
  puStack352 = unaff_RBX;
  piStack344 = param_1;
  puStack336 = unaff_R12;
  puStack328 = unaff_R13;
  uStack320 = unaff_R14;
  piStack312 = unaff_R15;
  if (piStack376 != (int *)0x0) {
    bVar31 = *(byte *)piStack376;
    piVar27 = piStack376;
    do {
      if (bVar31 == 0) {
        return 1;
      }
      if (n_specs_allocated <= n_specs) {
        if (spec == 0) {
          puVar13 = n_specs_allocated;
          if (n_specs_allocated == (undefined1 *)0x0) {
            puVar13 = (undefined1 *)0x3;
          }
          pbVar20 = (byte *)0x0;
          lVar6 = SUB168(ZEXT816(0x28) * ZEXT816(puVar13),0);
          if (SUB168(ZEXT816(0x28) * ZEXT816(puVar13) >> 0x40,0) != 0) goto code_r0x0010429b;
          goto code_r0x00103def;
        }
        if ((undefined1 *)0x222222222222221 < n_specs_allocated) goto code_r0x00103df9;
        puVar13 = n_specs_allocated + ((ulong)n_specs_allocated >> 1) + 1;
        goto code_r0x00103d9f;
      }
code_r0x00103aef:
      param_1 = (int *)(spec + (long)n_specs * 0x28);
      if (param_1 == (int *)0x0) goto code_r0x0010425d;
      bVar31 = *(byte *)piVar27;
      pbVar20 = (byte *)(ulong)bVar31;
      switch(bVar31) {
      case 0x61:
        pbVar28 = (byte *)((long)piVar27 + 1);
        uVar25 = 3;
        pcVar10 = print_named_ascii;
        uStack368._0_4_ = 5;
        iVar5 = 1;
        break;
      default:
        piStack384 = (int *)&UNK_00103d41;
        uVar7 = quote(piStack376);
        bVar31 = *(byte *)piVar27;
        piStack384 = (int *)&UNK_00103d5c;
        uVar8 = func_0x001018b0(0,&UNK_0010b008,5);
        piStack384 = (int *)&UNK_00103d6f;
        func_0x00101aa0(0,0,uVar8,(ulong)(uint)(int)(char)bVar31,uVar7);
        return 0;
      case 99:
        pbVar28 = (byte *)((long)piVar27 + 1);
        pcVar10 = print_ascii;
        uVar25 = 3;
        uStack368._0_4_ = 6;
        iVar5 = 1;
        break;
      case 100:
      case 0x6f:
      case 0x75:
      case 0x78:
        bVar3 = *(byte *)((long)piVar27 + 1);
        if (bVar3 == 0x49) {
          pbVar28 = (byte *)((long)piVar27 + 2);
          uVar23 = 4;
          iVar5 = integral_type_size._16_4_;
          goto code_r0x00103e1a;
        }
        if ((char)bVar3 < 'J') goto code_r0x00103e00;
        if (bVar3 == 0x4c) {
          pbVar28 = (byte *)((long)piVar27 + 2);
          uVar23 = 8;
          iVar5 = integral_type_size._32_4_;
          goto code_r0x00103e1a;
        }
        if (bVar3 != 0x53) goto code_r0x00103f40;
        bVar29 = bVar31 == 0x6f;
        pbVar28 = (byte *)((long)piVar27 + 2);
        uVar23 = 2;
        iVar5 = integral_type_size._8_4_;
        if (!bVar29) goto code_r0x00103e24;
        goto code_r0x00103c30;
      case 0x66:
        bVar31 = *(byte *)((long)piVar27 + 1);
        if (bVar31 == 0x46) {
          pbVar28 = (byte *)((long)piVar27 + 2);
          iVar5 = fp_type_size._16_4_;
        }
        else {
          if (bVar31 == 0x4c) {
            pbVar28 = (byte *)((long)piVar27 + 2);
            iVar5 = fp_type_size._64_4_;
          }
          else {
            iVar5 = fp_type_size._32_4_;
            if (bVar31 == 0x44) {
              pbVar28 = (byte *)((long)piVar27 + 2);
            }
            else {
              pbVar20 = (byte *)((long)piVar27 + 1);
              pbVar28 = pbVar20;
              if ((int)(char)bVar31 - 0x30U < 10) {
                pbVar28 = (byte *)((long)piVar27 + 2);
                uVar12 = SEXT48((int)((int)(char)bVar31 - 0x30U));
                uVar23 = 0;
                while( true ) {
                  uVar23 = uVar12 + uVar23 * 10;
                  if (9 < (int)(char)*pbVar28 - 0x30U) break;
                  uVar12 = SEXT48((int)((int)(char)*pbVar28 - 0x30U));
                  pbVar28 = pbVar28 + 1;
                  if (SUB168(ZEXT816(0xcccccccccccccccd) * ZEXT816(~uVar12) >> 0x43,0) < uVar23) {
code_r0x001041a0:
                    piStack384 = (int *)&UNK_001041a9;
                    uVar7 = quote(piStack376);
                    piStack384 = (int *)&UNK_001041bf;
                    uVar8 = func_0x001018b0(0,&UNK_0010ad26,5);
                    piStack384 = (int *)&UNK_001041d0;
                    func_0x00101aa0(0,0,uVar8,uVar7);
                    return 0;
                  }
                }
                if ((pbVar20 != pbVar28) &&
                   ((0x10 < uVar23 ||
                    (iVar5 = *(int *)(fp_type_size + uVar23 * 4),
                    *(int *)(fp_type_size + uVar23 * 4) == 0)))) {
                  piStack384 = (int *)&UNK_00103bd2;
                  uStack368 = (int *)uVar23;
                  uVar7 = quote(piStack376);
                  puVar15 = &UNK_0010afb0;
code_r0x00103fe2:
                  piStack384 = (int *)&UNK_00103fe9;
                  uVar8 = func_0x001018b0(0,puVar15,5);
                  piStack384 = (int *)&UNK_00103fff;
                  func_0x00101aa0(0,0,uVar8,uVar7,uStack368);
                  return 0;
                }
              }
            }
          }
        }
        piStack384 = (int *)&UNK_00104025;
        ppcVar9 = (char **)func_0x00101860();
        iVar4 = 1;
        if (**ppcVar9 != '\0') {
          piStack384 = (int *)&UNK_00104037;
          iVar4 = func_0x001018d0();
        }
        if (iVar5 == 7) goto code_r0x00104050;
        if (iVar5 == 8) {
          uVar25 = iVar4 + 0x1c;
          uStack368._0_4_ = 4;
          pcVar10 = print_long_double;
        }
        else {
          if (iVar5 != 6) goto code_r0x00104049;
          uVar25 = iVar4 + 0xe;
          uStack368._0_4_ = 4;
          pcVar10 = print_float;
        }
      }
      while( true ) {
        *(code **)(param_1 + 2) = pcVar10;
        param_1[1] = iVar5;
        *param_1 = (int)uStack368;
        param_1[7] = uVar25;
        bVar31 = *pbVar28;
        *(bool *)(param_1 + 6) = bVar31 == 0x7a;
        piVar24 = (int *)(pbVar28 + (bVar31 == 0x7a));
        if (piVar27 != piVar24) break;
        piStack384 = (int *)&UNK_0010425d;
        func_0x00101950(&UNK_0010ad1c,&UNK_0010acec,0x3e4,__PRETTY_FUNCTION___7462);
code_r0x0010425d:
        piStack384 = (int *)&UNK_0010427c;
        func_0x00101950(&UNK_0010acff,&UNK_0010acec,0x286,__PRETTY_FUNCTION___7407);
        do {
          puVar13 = __PRETTY_FUNCTION___7407;
          piStack384 = (int *)&UNK_0010429b;
          lVar6 = func_0x00101950(&UNK_0010af78,&UNK_0010acec,0x2e9);
code_r0x0010429b:
          pbVar20 = (byte *)0x1;
code_r0x00103def:
          if ((-1 < lVar6) && (pbVar20 == (byte *)0x0)) goto code_r0x00103d9f;
code_r0x00103df9:
          piStack384 = (int *)&UNK_00103dfe;
          bVar3 = xalloc_die();
code_r0x00103e00:
          if (bVar3 == 0x43) {
            uVar23 = 1;
            pbVar28 = (byte *)((long)piVar27 + 2);
            iVar5 = integral_type_size._4_4_;
          }
          else {
code_r0x00103f40:
            pbVar28 = (byte *)((long)piVar27 + 1);
            iVar5 = integral_type_size._16_4_;
            if ((int)(char)bVar3 - 0x30U < 10) {
              pbVar18 = (byte *)((long)piVar27 + 2);
              uVar12 = SEXT48((int)((int)(char)bVar3 - 0x30U));
              uVar23 = 0;
              while( true ) {
                uVar23 = uVar12 + uVar23 * 10;
                if (9 < (int)(char)*pbVar18 - 0x30U) break;
                uVar12 = SEXT48((int)((int)(char)*pbVar18 - 0x30U));
                pbVar18 = pbVar18 + 1;
                if (SUB168(ZEXT816(0xcccccccccccccccd) * ZEXT816(~uVar12) >> 0x43,0) < uVar23)
                goto code_r0x001041a0;
              }
              if (pbVar28 == pbVar18) {
                uVar23 = 4;
                pbVar28 = pbVar18;
              }
              else {
                if ((8 < uVar23) ||
                   (iVar5 = *(int *)(integral_type_size + uVar23 * 4), pbVar28 = pbVar18, iVar5 == 0
                   )) {
                  piStack384 = (int *)&UNK_00103fd3;
                  uStack368 = (int *)uVar23;
                  uVar7 = quote(piStack376);
                  puVar15 = &UNK_0010af28;
                  goto code_r0x00103fe2;
                }
              }
            }
            else {
              uVar23 = 4;
            }
          }
code_r0x00103e1a:
          bVar31 = (byte)pbVar20;
          bVar29 = bVar31 == 0x6f;
          if (bVar29) {
code_r0x00103c30:
            puVar15 = &UNK_0010ad43;
            uStack368 = param_1 + 4;
            if (iVar5 - 4U < 2) {
              puVar15 = &UNK_0010ace3;
            }
            uVar25 = *(uint *)(bytes_to_oct_digits + uVar23 * 4);
            piStack384 = (int *)&UNK_00103c7b;
            func_0x00101b50(uStack368,1,8,&UNK_0010ad13,(ulong)uVar25,puVar15);
            uVar14 = 2;
            piVar24 = uStack368;
          }
          else {
code_r0x00103e24:
            cVar19 = (char)pbVar20;
            if (bVar29 || (char)bVar31 < 'o') {
              if (cVar19 != 'd') goto code_r0x00104049;
              uStack368 = param_1 + 4;
              uVar25 = *(uint *)(bytes_to_signed_dec_digits + uVar23 * 4);
              piStack384 = (int *)&UNK_00104132;
              func_0x00101b50(uStack368,1,8);
              uVar14 = 0;
              piVar24 = uStack368;
            }
            else {
              if (cVar19 == 'u') {
                uStack368 = param_1 + 4;
                uVar25 = *(uint *)(bytes_to_unsigned_dec_digits + uVar23 * 4);
                piStack384 = (int *)&UNK_00104188;
                func_0x00101b50(uStack368,1,8);
                uVar14 = 1;
                piVar24 = uStack368;
              }
              else {
                if (cVar19 != 'x') goto code_r0x00104049;
                puVar15 = &UNK_0010aece;
                uStack368 = param_1 + 4;
                if (iVar5 - 4U < 2) {
                  puVar15 = &UNK_0010ace9;
                }
                uVar25 = *(uint *)(bytes_to_hex_digits + uVar23 * 4);
                piStack384 = (int *)&UNK_00103e89;
                func_0x00101b50(uStack368,1,8,&UNK_0010ad13,(ulong)uVar25,puVar15);
                uVar14 = 3;
                piVar24 = uStack368;
              }
            }
          }
          uStack368 = (int *)CONCAT44(uStack368._4_4_,uVar14);
          piStack384 = (int *)&UNK_00103e9f;
          uVar23 = func_0x001018d0(piVar24);
        } while (7 < uVar23);
        pbVar20 = &UNK_0010c020;
        switch(iVar5) {
        default:
code_r0x00104049:
          piStack384 = (int *)&UNK_0010404e;
          iVar4 = func_0x001017e0();
code_r0x00104050:
          uVar25 = iVar4 + 0x17;
          uStack368._0_4_ = 4;
          pcVar10 = print_double;
          break;
        case 1:
          pcVar10 = print_char;
          if ((int)uStack368 == 0) {
            pcVar10 = print_s_char;
          }
          break;
        case 2:
          pcVar10 = print_short;
          if ((int)uStack368 == 0) {
            pcVar10 = print_s_short;
          }
          break;
        case 3:
          pcVar10 = print_int;
          break;
        case 4:
          pcVar10 = print_long;
          break;
        case 5:
          pcVar10 = print_long_long;
        }
      }
      n_specs = n_specs + 1;
      bVar31 = *(byte *)piVar24;
      piVar27 = piVar24;
    } while( true );
  }
  puVar21 = &UNK_0010acec;
  puVar22 = &UNK_0010acf5;
  piStack384 = (int *)&UNK_001042c4;
  func_0x00101950(&UNK_0010acf5,&UNK_0010acec,0x3d8,__PRETTY_FUNCTION___7462);
  lStack440 = *(long *)(in_FS_OFFSET + 0x28);
  puVar15 = puVar22;
  puStack424 = unaff_RBX;
  piStack416 = param_1;
  puStack408 = unaff_R12;
  puStack400 = unaff_R13;
  uStack392 = unaff_R14;
  piStack384 = unaff_R15;
  if (puVar21 < puVar22) {
    iVar4 = (int)param_6;
    uVar23 = (long)(puVar22 + -1) * (long)iVar4;
    pbVar20 = extraout_RDX_00;
    do {
      pbVar28 = pbVar20 + 1;
      bVar3 = *pbVar20;
      auVar2 = ZEXT816(uVar23);
      switch(bVar3) {
      case 0:
        puVar16 = &UNK_0010ad45;
        break;
      default:
        plVar11 = (long *)func_0x00101b40();
        puVar16 = auStack444;
        puVar15 = &UNK_0010ad3d;
        if ((*(byte *)(*plVar11 + 1 + (ulong)bVar3 * 2) & 0x40) == 0) {
          puVar15 = &UNK_0010ad40;
        }
        func_0x00101b50(puVar16,1,4,puVar15);
        break;
      case 7:
        puVar16 = &UNK_0010ad48;
        break;
      case 8:
        puVar16 = &UNK_0010ad4b;
        break;
      case 9:
        puVar16 = &UNK_0010ad57;
        break;
      case 10:
        puVar16 = &UNK_0010ad51;
        break;
      case 0xb:
        puVar16 = &UNK_0010ad5a;
        break;
      case 0xc:
        puVar16 = &UNK_0010ad4e;
        break;
      case 0xd:
        puVar16 = &UNK_0010ad54;
      }
      puVar15 = &UNK_0010acdc;
      uVar23 = uVar23 - (long)iVar4;
      xprintf(&UNK_0010acdc,
              (ulong)(uint)(((int)param_6 - SUB164(auVar2 / ZEXT816(puVar22),0)) + iVar5),puVar16);
      param_6 = SUB168(auVar2 / ZEXT816(puVar22),0) & 0xffffffff;
      pbVar20 = pbVar28;
    } while (pbVar28 != extraout_RDX_00 + (long)(puVar22 + -(long)puVar21));
  }
  if (lStack440 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x001018e0();
  uVar7 = 1;
  if (in_stream != (byte *)0x0) {
    bVar29 = false;
    bVar30 = (*in_stream & 0x20) == 0;
    if (bVar30) {
      lVar6 = 2;
      pbVar20 = *(byte **)(file_list + -8);
      pbVar28 = &UNK_0010d139;
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar29 = *pbVar20 < *pbVar28;
        bVar30 = *pbVar20 == *pbVar28;
        pbVar20 = pbVar20 + (ulong)bVar31 * -2 + 1;
        pbVar28 = pbVar28 + (ulong)bVar31 * -2 + 1;
      } while (bVar30);
      if (((!bVar29 && !bVar30) == bVar29) || (iVar5 = rpl_fclose(in_stream), iVar5 == 0)) {
        uVar7 = 1;
      }
      else {
        uVar8 = quotearg_n_style_colon(0,3,input_filename);
        puVar17 = (uint *)func_0x001017f0();
        uVar7 = 0;
        func_0x00101aa0(0,(ulong)*puVar17,&UNK_0010c7e0,uVar8);
      }
    }
    else {
      uVar7 = quotearg_n_style_colon(0,3,input_filename);
      uVar8 = func_0x001018b0(0,&UNK_0010ad5d,5);
      bVar29 = false;
      bVar30 = true;
      func_0x00101aa0(0,(ulong)puVar15 & 0xffffffff,uVar8,uVar7);
      lVar6 = 2;
      pbVar20 = *(byte **)(file_list + -8);
      pbVar28 = &UNK_0010d139;
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar29 = *pbVar20 < *pbVar28;
        bVar30 = *pbVar20 == *pbVar28;
        pbVar20 = pbVar20 + (ulong)bVar31 * -2 + 1;
        pbVar28 = pbVar28 + (ulong)bVar31 * -2 + 1;
      } while (bVar30);
      uVar7 = 0;
      if ((!bVar29 && !bVar30) != bVar29) {
        rpl_fclose(in_stream);
      }
    }
    in_stream = (byte *)0x0;
  }
  if ((*stdout & 0x20) != 0) {
    uVar7 = 0;
    uVar8 = func_0x001018b0(0,&UNK_0010ad6c,5);
    func_0x00101aa0(0,0,uVar8);
  }
  return uVar7;
code_r0x00103d9f:
  piStack384 = (int *)&UNK_00103db3;
  n_specs_allocated = puVar13;
  spec = xrealloc();
  goto code_r0x00103aef;
}

