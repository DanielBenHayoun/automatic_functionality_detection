
/* WARNING: Possible PIC construction at 0x00105418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00105947: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00105a0a: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00105ab9: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00105c1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00105abe) */
/* WARNING: Removing unreachable block (ram,0x00105a0f) */
/* WARNING: Removing unreachable block (ram,0x00105a27) */
/* WARNING: Removing unreachable block (ram,0x00105aca) */
/* WARNING: Removing unreachable block (ram,0x00105adc) */
/* WARNING: Removing unreachable block (ram,0x0010594c) */
/* WARNING: Removing unreachable block (ram,0x00105956) */
/* WARNING: Removing unreachable block (ram,0x0010541d) */
/* WARNING: Removing unreachable block (ram,0x0010542d) */
/* WARNING: Removing unreachable block (ram,0x00105680) */
/* WARNING: Removing unreachable block (ram,0x00105c21) */
/* WARNING: Removing unreachable block (ram,0x00105ba9) */
/* WARNING: Removing unreachable block (ram,0x00105bb0) */

char * decode_output_arg(void)

{
  undefined auVar1 [16];
  uint uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined4 *puVar14;
  uint uVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  undefined8 *puVar26;
  char *pcVar27;
  char *pcVar28;
  long in_FS_OFFSET;
  long lStack712;
  char *pcStack688;
  undefined auStack664 [24];
  uint uStack640;
  undefined8 uStack616;
  long lStack512;
  undefined8 uStack496;
  undefined **ppuStack488;
  undefined *puStack480;
  char *pcStack472;
  uint *puStack464;
  undefined *puStack456;
  char acStack448 [16];
  undefined4 uStack432;
  undefined4 uStack428;
  undefined4 uStack424;
  undefined4 uStack420;
  undefined4 uStack416;
  undefined4 uStack412;
  undefined4 uStack408;
  undefined4 uStack404;
  undefined4 uStack400;
  undefined4 uStack396;
  undefined4 uStack392;
  undefined4 uStack388;
  undefined4 uStack384;
  undefined4 uStack380;
  undefined4 uStack376;
  undefined4 uStack372;
  undefined4 uStack368;
  undefined4 uStack364;
  undefined4 uStack360;
  undefined4 uStack356;
  undefined4 uStack352;
  undefined4 uStack348;
  undefined4 uStack344;
  undefined4 uStack340;
  undefined4 uStack336;
  undefined4 uStack332;
  undefined4 uStack328;
  undefined4 uStack324;
  undefined4 uStack320;
  undefined4 uStack316;
  undefined4 uStack312;
  undefined4 uStack308;
  undefined4 uStack304;
  undefined4 uStack300;
  undefined4 uStack296;
  undefined4 uStack292;
  long lStack288;
  long lStack280;
  undefined auStack272 [16];
  undefined auStack256 [16];
  undefined auStack240 [16];
  undefined auStack224 [16];
  undefined auStack208 [16];
  undefined auStack192 [16];
  undefined auStack176 [16];
  undefined auStack160 [16];
  long lStack136;
  ulong uStack120;
  char *pcStack112;
  char *pcStack104;
  undefined1 *puStack96;
  undefined8 *puStack88;
  undefined *apuStack80 [2];
  char *pcStack64;
  
  apuStack80[0] = &UNK_0010522a;
  pcStack64 = (char *)xstrdup();
  pcVar22 = pcStack64;
  do {
    pcVar17 = (char *)0x0;
    apuStack80[0] = &UNK_00105248;
    puVar20 = (undefined *)func_0x00102220(pcVar22,0x2c);
    if (puVar20 != (undefined *)0x0) {
      pcVar17 = puVar20 + 1;
      *puVar20 = 0;
    }
    puVar26 = (undefined8 *)(field_data + 8);
    uVar5 = 0;
    do {
      puVar20 = (undefined *)*puVar26;
      apuStack80[0] = &UNK_0010526e;
      iVar4 = func_0x00102340(puVar20,pcVar22);
      if (iVar4 == 0) goto code_r0x001052c0;
      uVar15 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar15;
      puVar26 = puVar26 + 6;
    } while (uVar15 != 0xc);
    apuStack80[0] = &UNK_00105286;
    uVar5 = quote(pcVar22);
    puVar19 = &UNK_0010fd60;
    while( true ) {
      apuStack80[0] = &UNK_0010529c;
      uVar6 = func_0x00102190(0,puVar19,5);
      apuStack80[0] = &UNK_001052ad;
      func_0x001024a0(0,0,uVar6);
      apuStack80[0] = &UNK_001052b7;
      usage(1);
code_r0x001052c0:
      if (field_data[(uVar5 & 0xffffffff) * 0x30 + 0x2c] == '\0') break;
      apuStack80[0] = &UNK_00105348;
      uVar5 = quote();
      puVar19 = &UNK_0010fd30;
    }
    uVar7 = 1 << ((byte)uVar5 & 0x3f);
    if ((uVar7 & 0xfeb) == 0) {
      if ((uVar7 & 0x10) == 0) {
        if ((uVar7 & 4) == 0) {
          puVar19 = &UNK_0010eff1;
          puVar21 = &UNK_0010f10e;
          apuStack80[0] = &UNK_0010537b;
          func_0x00102280(&UNK_0010f10e,&UNK_0010eff1,0x1dd,__PRETTY_FUNCTION___8857);
          puStack96 = field_data;
          lStack136 = *(long *)(in_FS_OFFSET + 0x28);
          puStack456 = &UNK_001053b8;
          uStack120 = uVar5;
          pcStack112 = pcVar22;
          pcStack104 = pcVar17;
          puStack88 = puVar26;
          apuStack80[0] = puVar20;
          uVar15 = save_cwd();
          puStack456 = &UNK_001053c0;
          puVar8 = (uint *)func_0x001020b0();
          if (uVar15 != 0) {
            uStack496 = 0;
            puStack456 = &UNK_001056fa;
            uVar6 = func_0x00102190(0,&UNK_0010fec0,5);
            uVar18 = *puVar8;
            pcVar22 = (char *)0x0;
            puStack456 = &UNK_00105709;
            func_0x001024a0(0,(ulong)uVar18,uVar6);
            goto code_r0x00105584;
          }
          if ((*(uint *)(puVar19 + 0x18) & 0xf000) == 0x4000) {
                    /* WARNING: Load size is inaccurate */
            auVar1 = *(undefined *)puVar19;
            uStack432 = SUB164(auVar1,0);
            uStack428 = SUB164(auVar1 >> 0x20,0);
            uStack424 = SUB164(auVar1 >> 0x40,0);
            uStack420 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
            auVar1 = *(undefined *)(puVar19 + 0x10);
            uStack416 = SUB164(auVar1,0);
            uStack412 = SUB164(auVar1 >> 0x20,0);
            uStack408 = SUB164(auVar1 >> 0x40,0);
            uStack404 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
            auVar1 = *(undefined *)(puVar19 + 0x20);
            uStack400 = SUB164(auVar1,0);
            uStack396 = SUB164(auVar1 >> 0x20,0);
            uStack392 = SUB164(auVar1 >> 0x40,0);
            uStack388 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
            auVar1 = *(undefined *)(puVar19 + 0x30);
            uStack384 = SUB164(auVar1,0);
            uStack380 = SUB164(auVar1 >> 0x20,0);
            uStack376 = SUB164(auVar1 >> 0x40,0);
            uStack372 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
            auVar1 = *(undefined *)(puVar19 + 0x40);
            uStack368 = SUB164(auVar1,0);
            uStack364 = SUB164(auVar1 >> 0x20,0);
            uStack360 = SUB164(auVar1 >> 0x40,0);
            uStack356 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
            auVar1 = *(undefined *)(puVar19 + 0x50);
            uStack352 = SUB164(auVar1,0);
            uStack348 = SUB164(auVar1 >> 0x20,0);
            uStack344 = SUB164(auVar1 >> 0x40,0);
            uStack340 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
            auVar1 = *(undefined *)(puVar19 + 0x60);
            uStack336 = SUB164(auVar1,0);
            uStack332 = SUB164(auVar1 >> 0x20,0);
            uStack328 = SUB164(auVar1 >> 0x40,0);
            uStack324 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
            auVar1 = *(undefined *)(puVar19 + 0x70);
            uStack320 = SUB164(auVar1,0);
            uStack316 = SUB164(auVar1 >> 0x20,0);
            uStack312 = SUB164(auVar1 >> 0x40,0);
            uStack308 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
            auVar1 = *(undefined *)(puVar19 + 0x80);
            uStack304 = SUB164(auVar1,0);
            uStack300 = SUB164(auVar1 >> 0x20,0);
            uStack296 = SUB164(auVar1 >> 0x40,0);
            uStack292 = SUB164(auVar1 >> 0x60,0);
            puStack456 = &UNK_00105636;
            iVar4 = func_0x001021e0(SUB168(auVar1,0),puVar21);
            if (-1 < iVar4) {
              goto code_r0x00105513;
            }
            puStack456 = &UNK_0010564b;
            uVar6 = quotearg_style(4,puVar21);
            puStack456 = &UNK_00105661;
            uVar10 = func_0x00102190(0,&UNK_0010fedd,5);
            uVar18 = *puVar8;
            pcVar22 = (char *)0x0;
            uStack496 = 0;
            puStack456 = &UNK_00105675;
            func_0x001024a0(0,(ulong)uVar18,uVar10,uVar6);
            goto code_r0x00105584;
          }
          puStack456 = &UNK_001053e7;
          pcStack688 = (char *)dir_name(puVar21);
          puStack456 = &UNK_001053f2;
          lVar9 = func_0x001021b0(pcStack688);
          lVar12 = -(lVar9 + 0x1fU & 0xfffffffffffffff0);
          *(undefined **)((long)&puStack456 + lVar12) = 0x105412;
          func_0x00102360(acStack448 + lVar12,pcStack688,lVar9 + 1);
          *(undefined **)((long)&puStack456 + lVar12) = 0x10541d;
          break;
        }
        apuStack80[0] = &UNK_001052f9;
        alloc_field(uVar5 & 0xffffffff,&UNK_0010f103);
      }
      else {
        apuStack80[0] = &UNK_0010533e;
        alloc_field(uVar5 & 0xffffffff,&UNK_0010f108);
      }
    }
    else {
      apuStack80[0] = &UNK_00105329;
      alloc_field(uVar5 & 0xffffffff,0);
    }
    pcStack688 = pcStack64;
    pcVar22 = pcVar17;
  } while (pcVar17 != (char *)0x0);
  goto code_r0x00102070;
code_r0x00105513:
  uVar18 = 0x10fefb;
  puStack456 = &UNK_00105523;
  iVar4 = func_0x00102390(1,&UNK_0010fefb,&lStack288);
  if (iVar4 < 0) goto code_r0x0010552b;
  if ((lStack288 != CONCAT44(uStack428,uStack432)) || (lStack280 == CONCAT44(uStack420,uStack424)))
  {
    puStack456 = &UNK_001055b5;
    uStack496 = xgetcwd();
    goto code_r0x00105566;
  }
  puStack456 = &UNK_00105490;
  iVar4 = func_0x001021e0(&UNK_0010fefb);
  if (iVar4 < 0) {
    puStack456 = &UNK_001056d1;
    uVar6 = quotearg_style(4,&UNK_0010fefb);
    puVar20 = &UNK_0010fedd;
    goto code_r0x0010554b;
  }
  uStack432 = (undefined4)lStack288;
  uStack428 = (undefined4)((ulong)lStack288 >> 0x20);
  uStack424 = (undefined4)lStack280;
  uStack420 = (undefined4)((ulong)lStack280 >> 0x20);
  uStack416 = SUB164(auStack272,0);
  uStack412 = SUB164(auStack272 >> 0x20,0);
  uStack408 = SUB164(auStack272 >> 0x40,0);
  uStack404 = SUB164(auStack272 >> 0x60,0);
  uStack400 = SUB164(auStack256,0);
  uStack396 = SUB164(auStack256 >> 0x20,0);
  uStack392 = SUB164(auStack256 >> 0x40,0);
  uStack388 = SUB164(auStack256 >> 0x60,0);
  uStack384 = SUB164(auStack240,0);
  uStack380 = SUB164(auStack240 >> 0x20,0);
  uStack376 = SUB164(auStack240 >> 0x40,0);
  uStack372 = SUB164(auStack240 >> 0x60,0);
  uStack368 = SUB164(auStack224,0);
  uStack364 = SUB164(auStack224 >> 0x20,0);
  uStack360 = SUB164(auStack224 >> 0x40,0);
  uStack356 = SUB164(auStack224 >> 0x60,0);
  uStack352 = SUB164(auStack208,0);
  uStack348 = SUB164(auStack208 >> 0x20,0);
  uStack344 = SUB164(auStack208 >> 0x40,0);
  uStack340 = SUB164(auStack208 >> 0x60,0);
  uStack336 = SUB164(auStack192,0);
  uStack332 = SUB164(auStack192 >> 0x20,0);
  uStack328 = SUB164(auStack192 >> 0x40,0);
  uStack324 = SUB164(auStack192 >> 0x60,0);
  uStack320 = SUB164(auStack176,0);
  uStack316 = SUB164(auStack176 >> 0x20,0);
  uStack312 = SUB164(auStack176 >> 0x40,0);
  uStack308 = SUB164(auStack176 >> 0x60,0);
  uStack304 = SUB164(auStack160,0);
  uStack300 = SUB164(auStack160 >> 0x20,0);
  uStack296 = SUB164(auStack160 >> 0x40,0);
  uStack292 = SUB164(auStack160 >> 0x60,0);
  goto code_r0x00105513;
code_r0x00105c55:
  xalloc_die();
code_r0x00105c60:
  pcVar17 = (char *)xmalloc(0x1000);
  pcVar27 = pcVar17 + 0x1000;
  pcVar24 = pcVar17 + 1;
  *pcVar17 = '/';
  pcVar23 = pcVar22;
  goto code_r0x001057d1;
code_r0x0010552b:
  puStack456 = &UNK_0010553c;
  uVar6 = quotearg_style(4,&UNK_0010fefb);
  puVar20 = &UNK_0010fefe;
code_r0x0010554b:
  puStack456 = &UNK_00105552;
  uVar10 = func_0x00102190(0,puVar20,5);
  uVar18 = *puVar8;
  uStack496 = 0;
  puStack456 = &UNK_00105566;
  func_0x001024a0(0,(ulong)uVar18,uVar10,uVar6);
code_r0x00105566:
  uVar2 = *puVar8;
  puVar21 = (undefined *)(ulong)uVar2;
  puStack456 = &UNK_00105571;
  iVar4 = restore_cwd(acStack448);
  if (iVar4 == 0) {
    puStack456 = &UNK_00105581;
    pcVar22 = acStack448;
    free_cwd();
    *puVar8 = uVar2;
code_r0x00105584:
    if (lStack136 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (char *)uStack496;
    }
  }
  else {
    puStack456 = &UNK_00105721;
    uVar6 = func_0x00102190(0,&UNK_0010ff38,5);
    uVar18 = *puVar8;
    pcVar22 = (char *)0x1;
    puStack456 = &UNK_00105733;
    func_0x001024a0(1,(ulong)uVar18,uVar6);
  }
  puStack456 = &UNK_00105738;
  func_0x001021f0();
  puStack456 = (undefined *)(ulong)uVar15;
  lStack512 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = uVar18 & 3;
  puStack480 = puVar21;
  pcStack472 = acStack448;
  puStack464 = puVar8;
  if (((uVar15 & uVar15 - 1) == 0) && (pcVar22 != (char *)0x0)) {
    if (*pcVar22 == '\0') {
      ppuStack488 = apuStack80;
      puVar14 = (undefined4 *)func_0x001020b0();
      pcVar17 = (char *)0x0;
      *puVar14 = 2;
      pcVar23 = pcVar22;
    }
    else {
      ppuStack488 = apuStack80;
      if (*pcVar22 == '/') goto code_r0x00105c60;
      pcVar23 = pcVar22;
      ppuStack488 = apuStack80;
      pcVar17 = (char *)xgetcwd();
      if (pcVar17 != (char *)0x0) {
        uVar5 = func_0x001021b0(pcVar17);
        pcVar23 = pcVar22;
        if (uVar5 < 0x1000) {
          pcVar17 = (char *)xrealloc(pcVar17,0x1000);
          pcVar24 = pcVar17 + uVar5;
          pcVar27 = pcVar17 + 0x1000;
        }
        else {
          pcVar27 = pcVar17 + uVar5;
          pcVar24 = pcVar27;
        }
code_r0x001057d1:
        lStack712 = 0;
        pcStack688 = (char *)0x0;
        pcVar25 = pcVar23;
code_r0x001057fb:
        cVar3 = *pcVar25;
        pcVar28 = pcVar24;
joined_r0x00105801:
        if (cVar3 == '\0') {
code_r0x0010590f:
          if ((pcVar17 + 1 < pcVar28) && (pcVar28[-1] == '/')) {
            pcVar28 = pcVar28 + -1;
          }
          *pcVar28 = '\0';
          if (pcVar27 != pcVar28 + 1) {
            xrealloc(pcVar17,pcVar28 + (1 - (long)pcVar17));
          }
          goto code_r0x00102070;
        }
        pcVar22 = pcVar25;
        if (cVar3 == '/') {
          do {
            pcVar25 = pcVar25 + 1;
            cVar3 = *pcVar25;
          } while (cVar3 == '/');
          pcVar22 = pcVar25;
          if (cVar3 != '\0') goto code_r0x0010583d;
        }
        else {
code_r0x0010583d:
          do {
            pcVar25 = pcVar25 + 1;
            if (*pcVar25 == '\0') break;
          } while (*pcVar25 != '/');
        }
        if (pcVar25 == pcVar22) goto code_r0x0010590f;
        pcVar24 = pcVar25 + -(long)pcVar22;
        if (pcVar24 == (char *)0x1) {
          if (cVar3 != '.') goto code_r0x00105871;
          goto code_r0x00105900;
        }
        if (((pcVar24 == (char *)0x2) && (cVar3 == '.')) && (pcVar22[1] == '.')) {
          pcVar24 = pcVar28;
          if (((pcVar28 <= pcVar17 + 1) || (pcVar24 = pcVar28 + -1, pcVar24 <= pcVar17)) ||
             (pcVar28[-2] == '/')) goto code_r0x001057fb;
          do {
            pcVar28 = pcVar24 + -1;
            if (pcVar17 == pcVar28) break;
            pcVar22 = pcVar24 + -2;
            pcVar24 = pcVar28;
          } while (*pcVar22 != '/');
        }
        else {
code_r0x00105871:
          if (pcVar28[-1] != '/') {
            *pcVar28 = '/';
            pcVar28 = pcVar28 + 1;
          }
          if (pcVar27 <= pcVar28 + (long)pcVar24) {
            lVar12 = -(long)pcVar17;
            pcVar16 = pcVar27 + -(long)pcVar17 + 0x1000;
            if (0xfff < (long)pcVar24) {
              pcVar16 = pcVar24 + 1 + (long)(pcVar27 + -(long)pcVar17);
            }
            pcVar17 = (char *)xrealloc(pcVar17,pcVar16);
            pcVar27 = pcVar16 + (long)pcVar17;
            pcVar28 = pcVar28 + lVar12 + (long)pcVar17;
          }
          func_0x00102360(pcVar28,pcVar22,pcVar24);
          pcVar28 = pcVar28 + (long)pcVar24;
          *pcVar28 = '\0';
          if ((uVar15 == 2) && ((uVar18 & 4) != 0)) {
code_r0x001058e6:
            uStack640 = 0;
code_r0x001058ee:
            if ((*pcVar25 != '\0') && (uVar15 != 2)) {
              func_0x001020b0();
              goto code_r0x00102070;
            }
            goto code_r0x00105900;
          }
          if ((uVar18 & 4) == 0) {
            iVar4 = func_0x001021c0(1,pcVar17,auStack664);
          }
          else {
            iVar4 = func_0x00102390();
          }
          if (iVar4 == 0) {
            if ((uStack640 & 0xf000) == 0xa000) {
              if ((lStack712 == 0) &&
                 (lStack712 = hash_initialize(7,0,triple_hash,triple_compare_ino_str,triple_free),
                 lStack712 == 0)) goto code_r0x00105c55;
              cVar3 = seen_file(lStack712,pcVar23,auStack664);
              if (cVar3 == '\0') {
                record_file(lStack712,pcVar23,auStack664);
                pcVar22 = (char *)areadlink_with_size(pcVar17,uStack616);
                if (pcVar22 != (char *)0x0) {
                  lVar12 = func_0x001021b0(pcVar22);
                  lVar9 = func_0x001021b0(pcVar25);
                  uVar5 = lVar12 + 1 + lVar9;
                  uVar7 = 0x1000;
                  if (0xfff < uVar5) {
                    uVar7 = uVar5;
                  }
                  lVar13 = xmalloc(uVar7);
                  func_0x00102490(lVar12 + lVar13,pcVar25,lVar9 + 1);
                  func_0x00102360(lVar13,pcVar22,lVar12);
                  pcStack688 = pcVar22;
                  if (*pcVar22 == '/') {
                    *pcVar17 = '/';
                    goto code_r0x00102070;
                  }
                  if (((pcVar28 <= pcVar17 + 1) || (pcVar28 + -1 <= pcVar17)) ||
                     (pcVar22 = pcVar28 + -1, pcVar28[-2] == '/')) goto code_r0x00102070;
                  goto code_r0x00105d3d;
                }
                piVar11 = (int *)func_0x001020b0();
                if ((uVar15 != 2) || (*piVar11 == 0xc)) goto code_r0x00105ab0;
              }
              else {
                if (uVar15 != 2) {
                  func_0x001020b0();
code_r0x00105ab0:
                  pcStack688 = (char *)0x0;
                  goto code_r0x00102070;
                }
              }
            }
            else {
              if ((uStack640 & 0xf000) != 0x4000) goto code_r0x001058ee;
            }
          }
          else {
            piVar11 = (int *)func_0x001020b0();
            iVar4 = *piVar11;
            if (uVar15 == 0) goto code_r0x00102070;
            if (uVar15 != 1) goto code_r0x001058e6;
            lVar12 = func_0x001022e0(pcVar25,&UNK_001100be);
            if ((pcVar25[lVar12] != '\0') || (iVar4 != 2)) goto code_r0x00102070;
          }
        }
code_r0x00105900:
        cVar3 = *pcVar25;
        goto joined_r0x00105801;
      }
    }
  }
  else {
    ppuStack488 = apuStack80;
    puVar14 = (undefined4 *)func_0x001020b0();
    pcVar17 = (char *)0x0;
    *puVar14 = 0x16;
    pcVar23 = pcVar22;
  }
  if (lStack512 != *(long *)(in_FS_OFFSET + 0x28)) {
    uVar6 = func_0x001021f0();
    file_name = pcVar23;
    return (char *)uVar6;
  }
  return pcVar17;
  while (pcVar23 = pcVar22 + -2, pcVar22 = pcVar22 + -1, *pcVar23 != '/') {
code_r0x00105d3d:
    if (pcVar17 == pcVar22 + -1) break;
  }
code_r0x00102070:
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)PTR_free_00313d30)(pcStack688);
  return (char *)uVar6;
}

