
/* WARNING: Could not reconcile some variable overlaps */

ulong do_wipefd(ulong param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_RDX;
  byte **ppbVar9;
  long *plVar10;
  int *piVar11;
  int *piVar12;
  undefined *puVar13;
  byte *pbVar14;
  ulong unaff_R12;
  byte *pbVar15;
  ulong unaff_R13;
  undefined1 *puVar16;
  int *piVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  bool bVar22;
  byte bVar23;
  byte *pbStack496;
  undefined *puStack488;
  byte *apbStack480 [5];
  undefined *puStack440;
  undefined *puStack432;
  undefined *puStack424;
  undefined *puStack416;
  undefined *puStack408;
  undefined8 uStack400;
  undefined8 uStack392;
  undefined8 uStack376;
  long *plStack360;
  undefined *puStack352;
  ulong uStack344;
  undefined *puStack336;
  undefined8 uStack328;
  undefined *puStack320;
  int *piStack312;
  undefined8 uStack304;
  bool bStack289;
  ulong uStack288;
  undefined8 uStack280;
  ulong uStack272;
  long lStack264;
  long lStack256;
  undefined8 uStack248;
  long *plStack240;
  long lStack224;
  undefined auStack216 [24];
  uint uStack192;
  long lStack168;
  long lStack160;
  long lStack64;
  
  bVar23 = 0;
  param_1 = param_1 & 0xffffffff;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uStack288 = 0;
  if (*(char *)((long)param_4 + 0x1c) != '\0') {
    uStack288 = (ulong)*(byte *)((long)param_4 + 0x1e) + param_4[1];
  }
  puStack320 = auStack216;
  puStack336 = &UNK_00103577;
  uStack328 = param_2;
  uStack280 = param_3;
  iVar1 = func_0x00101f80(1,param_1,puStack320);
  if (iVar1 == 0) {
    uVar2 = uStack192 & 0xf000;
    if (uVar2 == 0x2000) {
      puStack336 = &UNK_0010385f;
      iVar1 = func_0x00101ce0();
      if (iVar1 == 0) {
        uVar2 = uStack192 & 0xf000;
        goto code_r0x00103596;
      }
    }
    else {
code_r0x00103596:
      bStack289 = uVar2 == 0xc000 || uVar2 == 0x1000;
      if (uVar2 != 0xc000 && uVar2 != 0x1000) {
        if ((uVar2 == 0x8000) && (lStack168 < 0)) {
          puStack336 = &UNK_001038a2;
          uVar3 = func_0x00101d70(0,&UNK_00109648,5);
          piVar12 = (int *)0x0;
          puStack336 = &UNK_001038b4;
          func_0x00102020(0,0,uVar3,uStack328);
          goto code_r0x001035d8;
        }
        piVar12 = (int *)param_4[1];
        if (SUB168(ZEXT816(4) * ZEXT816(piVar12) >> 0x40,0) != 0) goto code_r0x00103c16;
        puStack336 = &UNK_0010364d;
        piStack312 = (int *)xmalloc((long)piVar12 << 2);
        lStack264 = param_4[2];
        plVar10 = param_4;
        if (lStack264 != -1) {
          uStack272 = param_4[1];
          if ((uStack192 & 0xf000) == 0x8000) {
            lStack256 = lStack168;
            if (0x1fffffffffffffff < lStack160 - 1U) {
              lStack160 = 0x200;
            }
            if (lStack264 < lStack160) {
              lStack160 = lStack264;
            }
            if (lStack168 < lStack160) goto code_r0x0010380e;
          }
          lStack256 = 0;
          if (uStack272 == 0) {
            puStack336 = &UNK_001038c3;
            uVar3 = randint_get_source(uStack280);
            uStack304 = CONCAT71(uStack304._1_7_,1);
            goto code_r0x001038d0;
          }
code_r0x0010369a:
          uVar6 = 0;
          iVar1 = -2;
          puVar16 = patterns;
          piVar12 = piStack312;
          uVar18 = uStack272;
          uStack248 = param_4;
          do {
            plStack240 = uStack248;
            if (iVar1 == 0) {
              puVar16 = patterns + 4;
              iVar1 = -2;
code_r0x001036cc:
              uVar19 = SEXT48(-iVar1);
              if (uVar18 <= uVar19) {
                uStack304 = uVar6 + uVar18;
                goto code_r0x00103a25;
              }
              uVar6 = uVar6 + uVar19;
            }
            else {
              piVar17 = (int *)puVar16 + 1;
              puVar16 = (undefined1 *)piVar17;
              if (iVar1 < 0) goto code_r0x001036cc;
              uVar19 = SEXT48(iVar1);
              if (uVar18 < uVar19) goto code_r0x00103af8;
              puVar16 = (undefined1 *)(piVar17 + uVar19);
              puStack336 = &UNK_00103717;
              lVar8 = func_0x00101f00(piVar12,piVar17,uVar19 * 4);
              piVar12 = (int *)(lVar8 + uVar19 * 4);
            }
            uVar18 = uVar18 - uVar19;
            iVar1 = *(int *)puVar16;
          } while( true );
        }
        if ((uStack192 & 0xf000) != 0x8000) {
          puStack336 = &UNK_00103b7b;
          lVar8 = func_0x00101e30(param_1,0,2);
          uStack272 = param_4[1];
          if (lVar8 < 1) {
            lVar8 = lStack264;
            if (uStack272 == 0) {
              puStack336 = &UNK_00103bcc;
              uVar3 = randint_get_source(uStack280);
              goto code_r0x00103bcf;
            }
          }
          else {
            if (uStack272 == 0) {
              puStack336 = &UNK_00103be5;
              uVar3 = randint_get_source(uStack280);
              lStack264 = lVar8;
code_r0x00103bcf:
              uVar18 = 0;
              uStack304 = CONCAT71(uStack304._1_7_,1);
              goto code_r0x001038e0;
            }
          }
          lStack264 = lVar8;
          lStack256 = 0;
          goto code_r0x0010369a;
        }
        uStack272 = param_4[1];
        lStack264 = lStack168;
        uStack304 = uStack304 & 0xffffffffffffff00 | (ulong)*(byte *)((long)param_4 + 0x1d);
        if (*(byte *)((long)param_4 + 0x1d) != 0) {
          lStack256 = 0;
          if (uStack272 == 0) {
            puStack336 = &UNK_00103aed;
            uVar3 = randint_get_source(uStack280);
            goto code_r0x001038d0;
          }
          goto code_r0x0010369a;
        }
        if (0x1fffffffffffffff < lStack160 - 1U) {
          lStack160 = 0x200;
        }
        if ((lStack160 <= lStack168) || (lStack256 = lStack168, lStack168 == 0)) {
          lStack256 = 0;
        }
        if (lStack168 % lStack160 != 0) {
          lStack160 = lStack160 - lStack168 % lStack160;
          if (0x7fffffffffffffff - lStack168 <= lStack160) {
            lStack160 = 0x7fffffffffffffff - lStack168;
          }
          lStack264 = lStack168 + lStack160;
        }
code_r0x0010380e:
        if (uStack272 != 0) goto code_r0x0010369a;
        goto code_r0x00103820;
      }
    }
    puStack336 = &UNK_001035c1;
    uVar3 = func_0x00101d70(0,&UNK_00109632,5);
    piVar12 = (int *)0x0;
    puStack336 = &UNK_001035d3;
    func_0x00102020(0,0,uVar3,uStack328);
    bStack289 = false;
  }
  else {
    puStack336 = &UNK_00103733;
    param_4 = (long *)func_0x00101d70(0,&UNK_00109621,5);
    puStack336 = &UNK_0010373b;
    puVar4 = (uint *)func_0x00101c70();
    piVar12 = (int *)0x0;
    puStack336 = &UNK_0010374d;
    func_0x00102020(0,(ulong)*puVar4,param_4,uStack328);
    bStack289 = false;
  }
  goto code_r0x001035d8;
code_r0x00103af8:
  if ((1 < uVar18) && (uStack304 = uVar6, uVar19 <= uVar18 * 3)) {
    do {
      if (uVar18 == uVar19) {
code_r0x00103b49:
        uVar18 = uVar18 - 1;
        piVar11 = piVar12 + 1;
        *piVar12 = *piVar17;
        plStack240 = uStack248;
        if (uVar18 == 0) goto code_r0x00103a25;
      }
      else {
        puStack336 = &UNK_00103b44;
        uVar6 = randint_genmax(uStack280,uVar19 - 1);
        piVar11 = piVar12;
        if (uVar6 < uVar18) goto code_r0x00103b49;
      }
      uVar19 = uVar19 - 1;
      piVar12 = piVar11;
      piVar17 = piVar17 + 1;
    } while( true );
  }
  uStack304 = uVar6 + uVar18;
code_r0x00103a25:
  piVar12 = piStack312;
  uStack248 = (long *)(param_1 | (ulong)uStack248._4_4_ << 0x20);
  uVar18 = uStack304 - 1;
  lVar8 = uStack272 - 1;
  lVar20 = uStack272 - uStack304;
  uVar6 = 0;
  unaff_R13 = uVar18;
  do {
    while (uVar19 = uVar6, uVar18 < unaff_R13) {
      uStack304 = uStack304 & 0xffffffff00000000 | (ulong)(uint)piVar12[uVar19];
      unaff_R13 = unaff_R13 - uVar18;
      puStack336 = &UNK_00103aa3;
      lVar5 = randint_genmax(uStack280);
      piVar12[uVar19] = piVar12[lVar5 + uVar19];
      piVar12[lVar5 + uVar19] = (int)uStack304;
      uVar6 = uVar19 + 1;
      if (uVar19 + 1 == uStack272) goto code_r0x00103ac3;
    }
    piVar12[lVar20] = piVar12[uVar19];
    piVar12[uVar19] = -1;
    lVar20 = lVar20 + 1;
    unaff_R13 = (unaff_R13 + lVar8) - uVar18;
    uVar6 = uVar19 + 1;
  } while (uVar19 + 1 != uStack272);
code_r0x00103ac3:
  unaff_R12 = uVar19 + 1;
  param_1 = (ulong)uStack248 & 0xffffffff;
  param_4 = plStack240;
code_r0x00103820:
  puStack336 = &UNK_0010382a;
  uVar3 = randint_get_source(uStack280);
  plVar10 = param_4;
  if (lStack256 == 0) {
    uStack304 = CONCAT71(uStack304._1_7_,1);
    goto code_r0x001038d0;
  }
  lStack224 = lStack256;
  uVar18 = param_4[1];
  uStack304 = CONCAT71(uStack304._1_7_,1);
  unaff_R13 = 0;
  while( true ) {
    param_4 = &lStack224;
    unaff_R12 = 0;
    while (unaff_R12 < *(byte *)((long)plVar10 + 0x1e) + uVar18) {
      uVar6 = 0;
      if (unaff_R12 < uVar18) {
        uVar6 = (ulong)(uint)piStack312[unaff_R12];
      }
      unaff_R12 = unaff_R12 + 1;
      puStack352 = &UNK_00103940;
      uStack344 = unaff_R12;
      puStack336 = (undefined *)unaff_R13;
      iVar1 = dopass(param_1,puStack320,uStack328,param_4,uVar6,uVar3);
      if (iVar1 != 0) {
        if (iVar1 < 0) goto code_r0x001039c0;
        uStack304 = uStack304 & 0xffffffffffffff00;
      }
      uVar18 = plVar10[1];
    }
code_r0x001038d0:
    param_4 = plVar10;
    if (lStack264 == 0) break;
    uVar18 = param_4[1];
code_r0x001038e0:
    lStack224 = lStack264;
    lStack264 = 0;
    plVar10 = param_4;
    unaff_R13 = uStack288;
  }
  if (*(int *)(param_4 + 3) == 0) {
code_r0x00103baf:
    bStack289 = (bool)(undefined)uStack304;
  }
  else {
    puStack336 = &UNK_0010396f;
    iVar1 = func_0x00101e20(param_1,0);
    if ((iVar1 == 0) || ((uStack192 & 0xf000) != 0x8000)) goto code_r0x00103baf;
    puStack336 = &UNK_001039a1;
    param_4 = (long *)func_0x00101d70(0,&UNK_00109663,5);
    puStack336 = &UNK_001039a9;
    puVar4 = (uint *)func_0x00101c70();
    puStack336 = &UNK_001039bb;
    func_0x00102020(0,(ulong)*puVar4,param_4,uStack328);
  }
code_r0x001039c0:
  puStack336 = &UNK_001039ca;
  piVar12 = piStack312;
  func_0x00101c50();
code_r0x001035d8:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)bStack289;
  }
  puStack336 = &UNK_00103c16;
  func_0x00101da0();
code_r0x00103c16:
  puStack336 = &UNK_00103c1b;
  xalloc_die();
  puVar13 = program_name;
  uVar3 = 5;
  uStack376 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  plStack360 = param_4;
  puStack352 = (undefined *)param_1;
  uStack344 = unaff_R12;
  puStack336 = (undefined *)unaff_R13;
  if ((int)piVar12 == 0) goto code_r0x00103c7d;
  uVar3 = func_0x00101d70(0,&UNK_001098b8,5);
  func_0x001020e0(stderr,1,uVar3,puVar13);
  do {
    func_0x001020c0((ulong)piVar12 & 0xffffffff);
    uVar3 = extraout_RDX;
code_r0x00103c7d:
    uVar3 = func_0x00101d70(0,&UNK_001098e0,uVar3);
    func_0x00101fe0(1,uVar3,puVar13);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_00109900,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_00109988,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_001099b0,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = func_0x00101d70(0,&UNK_00109a00,5);
    func_0x00101fe0(1,uVar3,3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_00109b08,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_00109c78,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_00109ca8,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_00109ce0,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_00109ec0,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_0010a030,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_0010a170,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_0010a1e0,5);
    func_0x00101eb0(uVar7,uVar3);
    uVar3 = stdout;
    uVar7 = func_0x00101d70(0,&UNK_0010a3b8,5);
    func_0x00101eb0(uVar7,uVar3);
    uStack400 = 0;
    uStack392 = 0;
    pbStack496 = &UNK_0010967e;
    apbStack480[4] = &UNK_001096bf;
    puStack488 = &UNK_00109680;
    puStack432 = &UNK_001096c9;
    apbStack480[0] = &UNK_001096f8;
    puStack416 = &UNK_001096d3;
    apbStack480[1] = &UNK_00109690;
    apbStack480[2] = &UNK_001096a6;
    apbStack480[3] = &UNK_001096b0;
    puStack440 = &UNK_001096b0;
    puStack424 = &UNK_001096b0;
    puStack408 = &UNK_001096b0;
    ppbVar9 = &pbStack496;
    do {
      ppbVar9 = ppbVar9;
      ppbVar9 = ppbVar9 + 2;
      pbVar15 = *ppbVar9;
      bVar21 = false;
      bVar22 = pbVar15 == (byte *)0x0;
      if (bVar22) break;
      lVar8 = 6;
      pbVar14 = &UNK_00109678;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar21 = *pbVar14 < *pbVar15;
        bVar22 = *pbVar14 == *pbVar15;
        pbVar14 = pbVar14 + (ulong)bVar23 * -2 + 1;
        pbVar15 = pbVar15 + (ulong)bVar23 * -2 + 1;
      } while (bVar22);
    } while ((!bVar21 && !bVar22) != bVar21);
    pbVar15 = ppbVar9[3];
    if (pbVar15 == (byte *)0x0) {
      uVar3 = func_0x00101d70(0,&UNK_001096dd,5);
      func_0x00101fe0(1,uVar3,&UNK_001096f4,&UNK_0010a460);
      lVar8 = func_0x00101fd0(5,0);
      if ((lVar8 != 0) && (iVar1 = func_0x00101ca0(lVar8,&UNK_00109702,3), iVar1 != 0)) {
        pbVar15 = &UNK_00109678;
        goto code_r0x001040b0;
      }
      pbVar15 = &UNK_00109678;
      puVar13 = &UNK_0010969a;
      uVar3 = func_0x00101d70(0,&UNK_00109706,5);
      func_0x00101fe0(1,uVar3,&UNK_0010a460,&UNK_00109678);
    }
    else {
      uVar3 = func_0x00101d70(0,&UNK_001096dd,5);
      func_0x00101fe0(1,uVar3,&UNK_001096f4,&UNK_0010a460);
      lVar8 = func_0x00101fd0(5,0);
      if ((lVar8 != 0) && (iVar1 = func_0x00101ca0(lVar8,&UNK_00109702,3), iVar1 != 0)) {
code_r0x001040b0:
        uVar3 = stdout;
        uVar7 = func_0x00101d70(0,&UNK_0010a488,5);
        func_0x00101eb0(uVar7,uVar3);
      }
      uVar3 = func_0x00101d70(0,&UNK_00109706,5);
      func_0x00101fe0(1,uVar3,&UNK_0010a460,&UNK_00109678);
      puVar13 = &UNK_0010ad90;
      if (pbVar15 == &UNK_00109678) {
        puVar13 = &UNK_0010969a;
      }
    }
    uVar3 = func_0x00101d70(0,&UNK_0010a4d0,5);
    func_0x00101fe0(1,uVar3,pbVar15,puVar13);
  } while( true );
}

