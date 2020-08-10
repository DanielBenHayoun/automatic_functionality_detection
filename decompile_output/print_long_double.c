
/* WARNING: Could not reconcile some variable overlaps */

undefined8
print_long_double(int *param_1,int *param_2,unkbyte10 *param_3,undefined8 param_4,int param_5,
                 ulong param_6)

{
  undefined uVar1;
  undefined auVar2 [16];
  byte bVar3;
  int iVar4;
  int iVar5;
  unkbyte10 *pVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char **ppcVar10;
  code *pcVar11;
  long *plVar12;
  uint *puVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined *puVar16;
  unkbyte10 *extraout_RDX;
  unkbyte10 *extraout_RDX_00;
  byte *extraout_RDX_01;
  undefined *puVar17;
  unkbyte10 *unaff_RBX;
  byte *pbVar18;
  ulong unaff_RBP;
  char cVar19;
  byte *pbVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  int *piVar25;
  uint uVar26;
  unkbyte10 *unaff_R13;
  unkbyte10 *pVar27;
  ulong unaff_R14;
  int *unaff_R15;
  int *piVar28;
  byte *pbVar29;
  long in_FS_OFFSET;
  bool bVar30;
  bool bVar31;
  byte bVar32;
  unkbyte10 Var33;
  undefined auStack612 [4];
  long lStack608;
  unkbyte10 *pStack592;
  int *piStack584;
  int *piStack576;
  unkbyte10 *pStack568;
  ulong uStack560;
  int *piStack552;
  int *piStack544;
  undefined8 uStack536;
  unkbyte10 *pStack520;
  int *piStack512;
  int *piStack504;
  unkbyte10 *pStack496;
  ulong uStack488;
  int *piStack480;
  undefined *puStack464;
  int *piStack456;
  long lStack448;
  int *piStack440;
  int iStack432;
  uint uStack428;
  undefined auStack424 [40];
  long lStack384;
  unkbyte10 *pStack368;
  int *piStack360;
  int *piStack352;
  unkbyte10 *pStack344;
  ulong uStack336;
  int *piStack328;
  int *piStack312;
  uint uStack304;
  int iStack300;
  long lStack296;
  undefined8 uStack280;
  int aiStack272 [10];
  long lStack232;
  unkbyte10 *pStack216;
  ulong uStack208;
  int *piStack200;
  unkbyte10 *pStack192;
  ulong uStack184;
  undefined uStack176;
  undefined uStack175;
  undefined6 uStack174;
  int *piStack160;
  uint uStack152;
  int iStack148;
  long lStack144;
  unkbyte10 Stack136;
  unkbyte10 aStack120 [5];
  long lStack64;
  
  bVar32 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  piStack584 = (int *)0x0;
  piStack160 = param_2;
  iStack148 = param_5;
  iStack300 = param_5;
  if (param_2 < param_1) {
    lStack144 = (long)(int)param_6;
    unaff_R13 = aStack120;
    uVar23 = ((long)param_1 + -1) * lStack144;
    unaff_RBX = param_3;
    unaff_R14 = uVar23;
    unaff_R15 = param_1;
    do {
      unaff_R15 = (int *)((long)unaff_R15 + -1);
      unaff_RBP = SUB168(ZEXT816(unaff_R14) / ZEXT816(param_1),0);
      uStack152 = ((int)param_6 - SUB164(ZEXT816(unaff_R14) / ZEXT816(param_1),0)) + iStack148;
      if (input_swap == '\0') {
        Var33 = *unaff_RBX;
      }
      else {
        puVar16 = (undefined *)((long)unaff_RBX + 0xf);
        pVar6 = &Stack136;
        do {
          uVar1 = *puVar16;
          pVar27 = (unkbyte10 *)((long)pVar6 + 1);
          puVar16 = puVar16 + -1;
          *(undefined *)pVar6 = uVar1;
          pVar6 = pVar27;
          Var33 = Stack136;
        } while (aStack120 != pVar27);
      }
      unaff_RBX = (unkbyte10 *)((long)unaff_RBX + 0x10);
      uStack184 = (ulong)Var33;
      uStack176 = (undefined)((unkuint10)Var33 >> 0x40);
      uStack175 = (undefined)((unkuint10)Var33 >> 0x48);
      pStack192 = (unkbyte10 *)&UNK_001037a6;
      ldtoastr(unaff_R13,0x2d,0);
      piStack584 = (int *)&UNK_0010acdc;
      param_2 = (int *)(ulong)uStack152;
      pStack192 = (unkbyte10 *)&UNK_001037bb;
      xprintf(&UNK_0010acdc,param_2,unaff_R13);
      iStack300 = (int)uVar23;
      unaff_R14 = unaff_R14 - lStack144;
      param_6 = unaff_RBP & 0xffffffff;
    } while (unaff_R15 != piStack160);
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  uStack176 = 0x44;
  uStack175 = 0x38;
  uStack174 = 0x10;
  func_0x001018e0();
  uStack176 = SUB81(unaff_R15,0);
  uStack175 = (undefined)((ulong)unaff_R15 >> 8);
  uStack174 = (undefined6)((ulong)unaff_R15 >> 0x10);
  lStack232 = *(long *)(in_FS_OFFSET + 0x28);
  piStack544 = (int *)0x0;
  piStack576 = param_1;
  piStack312 = param_2;
  pStack216 = unaff_RBX;
  uStack208 = unaff_RBP;
  piStack200 = param_1;
  pStack192 = unaff_R13;
  uStack184 = unaff_R14;
  iStack432 = iStack300;
  if (param_2 < piStack584) {
    lStack296 = (long)(int)param_6;
    piStack576 = aiStack272;
    uVar24 = ((long)piStack584 + -1) * lStack296;
    pVar6 = extraout_RDX;
    uVar23 = uVar24;
    unaff_R15 = piStack584;
    do {
      unaff_R15 = (int *)((long)unaff_R15 + -1);
      unaff_RBX = SUB168(ZEXT816(uVar23) / ZEXT816(piStack584),0);
      uStack304 = ((int)param_6 - SUB164(ZEXT816(uVar23) / ZEXT816(piStack584),0)) + iStack300;
      if (input_swap == '\0') {
        uVar8 = *(undefined8 *)pVar6;
      }
      else {
        puVar16 = (undefined *)((long)pVar6 + 7);
        lVar7 = 0;
        do {
          uVar1 = *puVar16;
          puVar16 = puVar16 + -1;
          *(undefined *)((long)&uStack280 + lVar7) = uVar1;
          lVar7 = lVar7 + 1;
          uVar8 = uStack280;
        } while (lVar7 != 8);
      }
      unaff_R13 = (unkbyte10 *)((long)pVar6 + 8);
      piStack328 = (int *)&UNK_001038c3;
      dtoastr(uVar8,piStack576,0x28,0);
      param_2 = (int *)(ulong)uStack304;
      piStack544 = (int *)&UNK_0010acdc;
      piStack328 = (int *)&UNK_001038d8;
      xprintf(&UNK_0010acdc,param_2,piStack576);
      iStack432 = (int)uVar24;
      unaff_R14 = uVar23 - lStack296;
      param_6 = (ulong)unaff_RBX & 0xffffffff;
      pVar6 = unaff_R13;
      uVar23 = unaff_R14;
    } while (unaff_R15 != piStack312);
  }
  if (lStack232 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  piStack328 = (int *)&UNK_00103964;
  func_0x001018e0();
  lStack384 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar20 = (byte *)0x0;
  piStack456 = param_2;
  pStack368 = unaff_RBX;
  piStack360 = piStack584;
  piStack352 = piStack576;
  pStack344 = unaff_R13;
  uStack336 = unaff_R14;
  piStack328 = unaff_R15;
  iVar5 = iStack432;
  if (param_2 < piStack544) {
    lStack448 = (long)(int)param_6;
    piVar25 = (int *)(((long)piStack544 + -1) * lStack448);
    puStack464 = auStack424;
    pVar6 = extraout_RDX_00;
    piStack584 = piStack544;
    piStack576 = (int *)((ulong)piStack584 & 0xffffffff);
    pVar27 = (unkbyte10 *)(param_6 & 0xffffffff);
    piVar28 = piVar25;
    piStack440 = piStack544;
    do {
      piStack584 = (int *)((long)piStack584 + -1);
      unaff_R14 = SUB168(ZEXT816(piVar28) / ZEXT816(piStack440),0);
      pbVar20 = (byte *)(ulong)(uint)(((int)pVar27 -
                                      SUB164(ZEXT816(piVar28) / ZEXT816(piStack440),0)) + iStack432)
      ;
      if (input_swap == '\0') {
        uVar26 = *(uint *)pVar6;
      }
      else {
        uVar26 = CONCAT13(*(undefined *)pVar6,
                          CONCAT12(*(undefined *)((long)pVar6 + 1),
                                   CONCAT11(*(undefined *)((long)pVar6 + 2),
                                            *(undefined *)((long)pVar6 + 3))));
        piStack576 = (int *)(ulong)uVar26;
        uStack428 = uVar26;
      }
      unaff_RBX = (unkbyte10 *)((long)pVar6 + 4);
      piStack480 = (int *)&UNK_001039f3;
      ftoastr((ulong)uVar26,puStack464,0x1f,0,0);
      piStack544 = (int *)&UNK_0010acdc;
      unaff_R13 = (unkbyte10 *)(unaff_R14 & 0xffffffff);
      piStack480 = (int *)&UNK_00103a0c;
      xprintf(&UNK_0010acdc,pbVar20,puStack464);
      iVar5 = (int)piVar25;
      unaff_R15 = (int *)((long)piVar28 - lStack448);
      pVar6 = unaff_RBX;
      pVar27 = unaff_R13;
      piVar28 = unaff_R15;
    } while (piStack584 != piStack456);
  }
  if (lStack384 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  piStack480 = (int *)&UNK_00103a94;
  func_0x001018e0();
  pStack520 = unaff_RBX;
  piStack512 = piStack584;
  piStack504 = piStack576;
  pStack496 = unaff_R13;
  uStack488 = unaff_R14;
  piStack480 = unaff_R15;
  if (piStack544 != (int *)0x0) {
    bVar32 = *(byte *)piStack544;
    piVar28 = piStack544;
    do {
      if (bVar32 == 0) {
        return 1;
      }
      if (n_specs_allocated <= n_specs) {
        if (spec == 0) {
          puVar14 = n_specs_allocated;
          if (n_specs_allocated == (undefined1 *)0x0) {
            puVar14 = (undefined1 *)0x3;
          }
          pbVar20 = (byte *)0x0;
          lVar7 = SUB168(ZEXT816(0x28) * ZEXT816(puVar14),0);
          if (SUB168(ZEXT816(0x28) * ZEXT816(puVar14) >> 0x40,0) != 0) goto code_r0x0010429b;
          goto code_r0x00103def;
        }
        if ((undefined1 *)0x222222222222221 < n_specs_allocated) goto code_r0x00103df9;
        puVar14 = n_specs_allocated + ((ulong)n_specs_allocated >> 1) + 1;
        goto code_r0x00103d9f;
      }
code_r0x00103aef:
      piStack584 = (int *)(spec + (long)n_specs * 0x28);
      if (piStack584 == (int *)0x0) goto code_r0x0010425d;
      bVar32 = *(byte *)piVar28;
      pbVar20 = (byte *)(ulong)bVar32;
      switch(bVar32) {
      case 0x61:
        pbVar29 = (byte *)((long)piVar28 + 1);
        uVar26 = 3;
        pcVar11 = print_named_ascii;
        uStack536._0_4_ = 5;
        iVar5 = 1;
        break;
      default:
        piStack552 = (int *)&UNK_00103d41;
        uVar8 = quote(piStack544);
        bVar32 = *(byte *)piVar28;
        piStack552 = (int *)&UNK_00103d5c;
        uVar9 = func_0x001018b0(0,&UNK_0010b008,5);
        piStack552 = (int *)&UNK_00103d6f;
        func_0x00101aa0(0,0,uVar9,(ulong)(uint)(int)(char)bVar32,uVar8);
        return 0;
      case 99:
        pbVar29 = (byte *)((long)piVar28 + 1);
        pcVar11 = print_ascii;
        uVar26 = 3;
        uStack536._0_4_ = 6;
        iVar5 = 1;
        break;
      case 100:
      case 0x6f:
      case 0x75:
      case 0x78:
        bVar3 = *(byte *)((long)piVar28 + 1);
        if (bVar3 == 0x49) {
          pbVar29 = (byte *)((long)piVar28 + 2);
          uVar23 = 4;
          iVar5 = integral_type_size._16_4_;
          goto code_r0x00103e1a;
        }
        if ((char)bVar3 < 'J') goto code_r0x00103e00;
        if (bVar3 == 0x4c) {
          pbVar29 = (byte *)((long)piVar28 + 2);
          uVar23 = 8;
          iVar5 = integral_type_size._32_4_;
          goto code_r0x00103e1a;
        }
        if (bVar3 != 0x53) goto code_r0x00103f40;
        bVar30 = bVar32 == 0x6f;
        pbVar29 = (byte *)((long)piVar28 + 2);
        uVar23 = 2;
        iVar5 = integral_type_size._8_4_;
        if (!bVar30) goto code_r0x00103e24;
        goto code_r0x00103c30;
      case 0x66:
        bVar32 = *(byte *)((long)piVar28 + 1);
        if (bVar32 == 0x46) {
          pbVar29 = (byte *)((long)piVar28 + 2);
          iVar5 = fp_type_size._16_4_;
        }
        else {
          if (bVar32 == 0x4c) {
            pbVar29 = (byte *)((long)piVar28 + 2);
            iVar5 = fp_type_size._64_4_;
          }
          else {
            iVar5 = fp_type_size._32_4_;
            if (bVar32 == 0x44) {
              pbVar29 = (byte *)((long)piVar28 + 2);
            }
            else {
              pbVar20 = (byte *)((long)piVar28 + 1);
              pbVar29 = pbVar20;
              if ((int)(char)bVar32 - 0x30U < 10) {
                pbVar29 = (byte *)((long)piVar28 + 2);
                uVar24 = SEXT48((int)((int)(char)bVar32 - 0x30U));
                uVar23 = 0;
                while( true ) {
                  uVar23 = uVar24 + uVar23 * 10;
                  if (9 < (int)(char)*pbVar29 - 0x30U) break;
                  uVar24 = SEXT48((int)((int)(char)*pbVar29 - 0x30U));
                  pbVar29 = pbVar29 + 1;
                  if (SUB168(ZEXT816(0xcccccccccccccccd) * ZEXT816(~uVar24) >> 0x43,0) < uVar23) {
code_r0x001041a0:
                    piStack552 = (int *)&UNK_001041a9;
                    uVar8 = quote(piStack544);
                    piStack552 = (int *)&UNK_001041bf;
                    uVar9 = func_0x001018b0(0,&UNK_0010ad26,5);
                    piStack552 = (int *)&UNK_001041d0;
                    func_0x00101aa0(0,0,uVar9,uVar8);
                    return 0;
                  }
                }
                if ((pbVar20 != pbVar29) &&
                   ((0x10 < uVar23 ||
                    (iVar5 = *(int *)(fp_type_size + uVar23 * 4),
                    *(int *)(fp_type_size + uVar23 * 4) == 0)))) {
                  piStack552 = (int *)&UNK_00103bd2;
                  uStack536 = (int *)uVar23;
                  uVar8 = quote(piStack544);
                  puVar16 = &UNK_0010afb0;
code_r0x00103fe2:
                  piStack552 = (int *)&UNK_00103fe9;
                  uVar9 = func_0x001018b0(0,puVar16,5);
                  piStack552 = (int *)&UNK_00103fff;
                  func_0x00101aa0(0,0,uVar9,uVar8,uStack536);
                  return 0;
                }
              }
            }
          }
        }
        piStack552 = (int *)&UNK_00104025;
        ppcVar10 = (char **)func_0x00101860();
        iVar4 = 1;
        if (**ppcVar10 != '\0') {
          piStack552 = (int *)&UNK_00104037;
          iVar4 = func_0x001018d0();
        }
        if (iVar5 == 7) goto code_r0x00104050;
        if (iVar5 == 8) {
          uVar26 = iVar4 + 0x1c;
          uStack536._0_4_ = 4;
          pcVar11 = print_long_double;
        }
        else {
          if (iVar5 != 6) goto code_r0x00104049;
          uVar26 = iVar4 + 0xe;
          uStack536._0_4_ = 4;
          pcVar11 = print_float;
        }
      }
      while( true ) {
        *(code **)(piStack584 + 2) = pcVar11;
        piStack584[1] = iVar5;
        *piStack584 = (int)uStack536;
        piStack584[7] = uVar26;
        bVar32 = *pbVar29;
        *(bool *)(piStack584 + 6) = bVar32 == 0x7a;
        piVar25 = (int *)(pbVar29 + (bVar32 == 0x7a));
        if (piVar28 != piVar25) break;
        piStack552 = (int *)&UNK_0010425d;
        func_0x00101950(&UNK_0010ad1c,&UNK_0010acec,0x3e4,__PRETTY_FUNCTION___7462);
code_r0x0010425d:
        piStack552 = (int *)&UNK_0010427c;
        func_0x00101950(&UNK_0010acff,&UNK_0010acec,0x286,__PRETTY_FUNCTION___7407);
        do {
          puVar14 = __PRETTY_FUNCTION___7407;
          piStack552 = (int *)&UNK_0010429b;
          lVar7 = func_0x00101950(&UNK_0010af78,&UNK_0010acec,0x2e9);
code_r0x0010429b:
          pbVar20 = (byte *)0x1;
code_r0x00103def:
          if ((-1 < lVar7) && (pbVar20 == (byte *)0x0)) goto code_r0x00103d9f;
code_r0x00103df9:
          piStack552 = (int *)&UNK_00103dfe;
          bVar3 = xalloc_die();
code_r0x00103e00:
          if (bVar3 == 0x43) {
            uVar23 = 1;
            pbVar29 = (byte *)((long)piVar28 + 2);
            iVar5 = integral_type_size._4_4_;
          }
          else {
code_r0x00103f40:
            pbVar29 = (byte *)((long)piVar28 + 1);
            iVar5 = integral_type_size._16_4_;
            if ((int)(char)bVar3 - 0x30U < 10) {
              pbVar18 = (byte *)((long)piVar28 + 2);
              uVar24 = SEXT48((int)((int)(char)bVar3 - 0x30U));
              uVar23 = 0;
              while( true ) {
                uVar23 = uVar24 + uVar23 * 10;
                if (9 < (int)(char)*pbVar18 - 0x30U) break;
                uVar24 = SEXT48((int)((int)(char)*pbVar18 - 0x30U));
                pbVar18 = pbVar18 + 1;
                if (SUB168(ZEXT816(0xcccccccccccccccd) * ZEXT816(~uVar24) >> 0x43,0) < uVar23)
                goto code_r0x001041a0;
              }
              if (pbVar29 == pbVar18) {
                uVar23 = 4;
                pbVar29 = pbVar18;
              }
              else {
                if ((8 < uVar23) ||
                   (iVar5 = *(int *)(integral_type_size + uVar23 * 4), pbVar29 = pbVar18, iVar5 == 0
                   )) {
                  piStack552 = (int *)&UNK_00103fd3;
                  uStack536 = (int *)uVar23;
                  uVar8 = quote(piStack544);
                  puVar16 = &UNK_0010af28;
                  goto code_r0x00103fe2;
                }
              }
            }
            else {
              uVar23 = 4;
            }
          }
code_r0x00103e1a:
          bVar32 = (byte)pbVar20;
          bVar30 = bVar32 == 0x6f;
          if (bVar30) {
code_r0x00103c30:
            puVar16 = &UNK_0010ad43;
            uStack536 = piStack584 + 4;
            if (iVar5 - 4U < 2) {
              puVar16 = &UNK_0010ace3;
            }
            uVar26 = *(uint *)(bytes_to_oct_digits + uVar23 * 4);
            piStack552 = (int *)&UNK_00103c7b;
            func_0x00101b50(uStack536,1,8,&UNK_0010ad13,(ulong)uVar26,puVar16);
            uVar15 = 2;
            piVar25 = uStack536;
          }
          else {
code_r0x00103e24:
            cVar19 = (char)pbVar20;
            if (bVar30 || (char)bVar32 < 'o') {
              if (cVar19 != 'd') goto code_r0x00104049;
              uStack536 = piStack584 + 4;
              uVar26 = *(uint *)(bytes_to_signed_dec_digits + uVar23 * 4);
              piStack552 = (int *)&UNK_00104132;
              func_0x00101b50(uStack536,1,8);
              uVar15 = 0;
              piVar25 = uStack536;
            }
            else {
              if (cVar19 == 'u') {
                uStack536 = piStack584 + 4;
                uVar26 = *(uint *)(bytes_to_unsigned_dec_digits + uVar23 * 4);
                piStack552 = (int *)&UNK_00104188;
                func_0x00101b50(uStack536,1,8);
                uVar15 = 1;
                piVar25 = uStack536;
              }
              else {
                if (cVar19 != 'x') goto code_r0x00104049;
                puVar16 = &UNK_0010aece;
                uStack536 = piStack584 + 4;
                if (iVar5 - 4U < 2) {
                  puVar16 = &UNK_0010ace9;
                }
                uVar26 = *(uint *)(bytes_to_hex_digits + uVar23 * 4);
                piStack552 = (int *)&UNK_00103e89;
                func_0x00101b50(uStack536,1,8,&UNK_0010ad13,(ulong)uVar26,puVar16);
                uVar15 = 3;
                piVar25 = uStack536;
              }
            }
          }
          uStack536 = (int *)CONCAT44(uStack536._4_4_,uVar15);
          piStack552 = (int *)&UNK_00103e9f;
          uVar23 = func_0x001018d0(piVar25);
        } while (7 < uVar23);
        pbVar20 = &UNK_0010c020;
        switch(iVar5) {
        default:
code_r0x00104049:
          piStack552 = (int *)&UNK_0010404e;
          iVar4 = func_0x001017e0();
code_r0x00104050:
          uVar26 = iVar4 + 0x17;
          uStack536._0_4_ = 4;
          pcVar11 = print_double;
          break;
        case 1:
          pcVar11 = print_char;
          if ((int)uStack536 == 0) {
            pcVar11 = print_s_char;
          }
          break;
        case 2:
          pcVar11 = print_short;
          if ((int)uStack536 == 0) {
            pcVar11 = print_s_short;
          }
          break;
        case 3:
          pcVar11 = print_int;
          break;
        case 4:
          pcVar11 = print_long;
          break;
        case 5:
          pcVar11 = print_long_long;
        }
      }
      n_specs = n_specs + 1;
      bVar32 = *(byte *)piVar25;
      piVar28 = piVar25;
    } while( true );
  }
  puVar21 = &UNK_0010acec;
  puVar22 = &UNK_0010acf5;
  piStack552 = (int *)&UNK_001042c4;
  func_0x00101950(&UNK_0010acf5,&UNK_0010acec,0x3d8,__PRETTY_FUNCTION___7462);
  lStack608 = *(long *)(in_FS_OFFSET + 0x28);
  puVar16 = puVar22;
  pStack592 = unaff_RBX;
  pStack568 = unaff_R13;
  uStack560 = unaff_R14;
  piStack552 = unaff_R15;
  if (puVar21 < puVar22) {
    iVar4 = (int)param_6;
    uVar23 = (long)(puVar22 + -1) * (long)iVar4;
    pbVar20 = extraout_RDX_01;
    do {
      pbVar29 = pbVar20 + 1;
      bVar3 = *pbVar20;
      auVar2 = ZEXT816(uVar23);
      switch(bVar3) {
      case 0:
        puVar17 = &UNK_0010ad45;
        break;
      default:
        plVar12 = (long *)func_0x00101b40();
        puVar17 = auStack612;
        puVar16 = &UNK_0010ad3d;
        if ((*(byte *)(*plVar12 + 1 + (ulong)bVar3 * 2) & 0x40) == 0) {
          puVar16 = &UNK_0010ad40;
        }
        func_0x00101b50(puVar17,1,4,puVar16);
        break;
      case 7:
        puVar17 = &UNK_0010ad48;
        break;
      case 8:
        puVar17 = &UNK_0010ad4b;
        break;
      case 9:
        puVar17 = &UNK_0010ad57;
        break;
      case 10:
        puVar17 = &UNK_0010ad51;
        break;
      case 0xb:
        puVar17 = &UNK_0010ad5a;
        break;
      case 0xc:
        puVar17 = &UNK_0010ad4e;
        break;
      case 0xd:
        puVar17 = &UNK_0010ad54;
      }
      puVar16 = &UNK_0010acdc;
      uVar23 = uVar23 - (long)iVar4;
      xprintf(&UNK_0010acdc,
              (ulong)(uint)(((int)param_6 - SUB164(auVar2 / ZEXT816(puVar22),0)) + iVar5),puVar17);
      param_6 = SUB168(auVar2 / ZEXT816(puVar22),0) & 0xffffffff;
      pbVar20 = pbVar29;
    } while (pbVar29 != extraout_RDX_01 + (long)(puVar22 + -(long)puVar21));
  }
  if (lStack608 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x001018e0();
  uVar8 = 1;
  if (in_stream != (byte *)0x0) {
    bVar30 = false;
    bVar31 = (*in_stream & 0x20) == 0;
    if (bVar31) {
      lVar7 = 2;
      pbVar20 = *(byte **)(file_list + -8);
      pbVar29 = &UNK_0010d139;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar30 = *pbVar20 < *pbVar29;
        bVar31 = *pbVar20 == *pbVar29;
        pbVar20 = pbVar20 + (ulong)bVar32 * -2 + 1;
        pbVar29 = pbVar29 + (ulong)bVar32 * -2 + 1;
      } while (bVar31);
      if (((!bVar30 && !bVar31) == bVar30) || (iVar5 = rpl_fclose(in_stream), iVar5 == 0)) {
        uVar8 = 1;
      }
      else {
        uVar9 = quotearg_n_style_colon(0,3,input_filename);
        puVar13 = (uint *)func_0x001017f0();
        uVar8 = 0;
        func_0x00101aa0(0,(ulong)*puVar13,&UNK_0010c7e0,uVar9);
      }
    }
    else {
      uVar8 = quotearg_n_style_colon(0,3,input_filename);
      uVar9 = func_0x001018b0(0,&UNK_0010ad5d,5);
      bVar30 = false;
      bVar31 = true;
      func_0x00101aa0(0,(ulong)puVar16 & 0xffffffff,uVar9,uVar8);
      lVar7 = 2;
      pbVar20 = *(byte **)(file_list + -8);
      pbVar29 = &UNK_0010d139;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar30 = *pbVar20 < *pbVar29;
        bVar31 = *pbVar20 == *pbVar29;
        pbVar20 = pbVar20 + (ulong)bVar32 * -2 + 1;
        pbVar29 = pbVar29 + (ulong)bVar32 * -2 + 1;
      } while (bVar31);
      uVar8 = 0;
      if ((!bVar30 && !bVar31) != bVar30) {
        rpl_fclose(in_stream);
      }
    }
    in_stream = (byte *)0x0;
  }
  if ((*stdout & 0x20) != 0) {
    uVar8 = 0;
    uVar9 = func_0x001018b0(0,&UNK_0010ad6c,5);
    func_0x00101aa0(0,0,uVar9);
  }
  return uVar8;
code_r0x00103d9f:
  piStack552 = (int *)&UNK_00103db3;
  n_specs_allocated = puVar14;
  spec = xrealloc();
  goto code_r0x00103aef;
}

