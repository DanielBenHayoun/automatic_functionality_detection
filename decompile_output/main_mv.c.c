
ulong main(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  uint *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  undefined auVar17 [16];
  undefined8 auStack352 [3];
  undefined auStack328 [8];
  ulong uStack320;
  long lStack312;
  undefined *puStack304;
  int aiStack296 [5];
  undefined uStack276;
  undefined uStack275;
  undefined uStack274;
  undefined uStack273;
  undefined uStack272;
  undefined uStack271;
  undefined uStack268;
  undefined uStack267;
  undefined uStack266;
  undefined uStack265;
  undefined uStack264;
  undefined uStack263;
  undefined uStack262;
  undefined uStack261;
  undefined uStack260;
  undefined uStack259;
  undefined uStack258;
  undefined uStack257;
  undefined uStack256;
  undefined uStack255;
  undefined uStack254;
  undefined uStack253;
  undefined uStack252;
  bool abStack251 [7];
  int aiStack244 [3];
  undefined8 uStack232;
  undefined8 uStack224;
  undefined auStack216 [24];
  uint auStack192 [32];
  long alStack64 [2];
  
  puVar12 = (undefined8 *)auStack328;
  alStack64[0] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00102aa0(6,&UNK_00116764);
  func_0x00102700(&UNK_00114fa0,&UNK_00114fc9);
  func_0x001026c0(&UNK_00114fa0);
  atexit(close_stdin);
  cp_options_default(aiStack296);
  uStack276 = 0;
  aiStack244[1] = 1;
  aiStack296[1] = 2;
  uStack275 = 0;
  uStack274 = 0;
  uStack273 = 0;
  aiStack296[2] = 4;
  uStack272 = 1;
  uStack271 = 0;
  uStack268 = 0;
  uStack267 = 1;
  uStack262 = 1;
  uStack266 = 1;
  uStack265 = 1;
  uStack264 = 0;
  uStack259 = 0;
  uStack263 = 0;
  uStack255 = 0;
  uStack261 = 1;
  uStack260 = 0;
  uStack258 = 0;
  uStack257 = 1;
  uStack256 = 0;
  uStack254 = 1;
  aiStack296[3] = 2;
  uStack252 = 0;
  uStack253 = 0;
  aiStack296[4] = 0;
  iVar2 = func_0x00102640(0);
  abStack251[3] = 0;
  abStack251[2] = iVar2 != 0;
  abStack251[0] = 0;
  abStack251[1] = 0;
  uStack232 = 0;
  uStack224 = 0;
  lStack312._0_1_ = 0;
  bVar1 = false;
  uStack320 = 0;
  puStack304 = auStack216;
  lVar15 = 0;
  lVar16 = 0;
code_r0x00102e48:
  iVar2 = 0;
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x102e63;
  iVar3 = func_0x001027a0((ulong)param_1,param_2,&UNK_0011503b,long_options);
  if (iVar3 == -1) {
    param_1 = param_1 - optind;
    param_2 = param_2 + optind;
    if ((int)(uint)(lVar15 == 0) < (int)param_1) {
      if (((undefined *)puVar12)[0x10] == '\0') {
        if (lVar15 == 0) {
          if (param_1 == 1) {
code_r0x00103380:
            *(undefined8 *)((undefined *)puVar12 + -8) = 0x10339f;
            func_0x00102820(&UNK_0011506e,&UNK_00114f04,0x1c9,&__PRETTY_FUNCTION___7244);
            goto code_r0x0010339f;
          }
          if (param_1 == 2) {
            uVar7 = param_2[1];
            uVar9 = *param_2;
            iVar2 = 1;
            *(undefined8 *)((undefined *)puVar12 + -8) = 0x10329d;
            iVar3 = renameatu(0xffffff9c,uVar9,0xffffff9c,uVar7);
            if (iVar3 != 0) goto code_r0x001032bd;
            *(undefined4 *)((undefined *)puVar12 + 0x54) = 0;
code_r0x00103250:
            param_1 = 2;
            goto code_r0x0010307e;
          }
          lVar11 = (long)(int)param_1;
          if (*(int *)((undefined *)puVar12 + 0x54) == 0) {
code_r0x00103347:
            uVar7 = param_2[lVar11 + -1];
            *(undefined8 *)((undefined *)puVar12 + -8) = 0x103356;
            uVar7 = quotearg_style(4,uVar7);
            *(undefined8 *)((undefined *)puVar12 + -8) = 0x10336c;
            uVar9 = func_0x00102730(0,&UNK_00114ff5,5);
            *(undefined8 *)((undefined *)puVar12 + -8) = 0x103380;
            func_0x00102b10(1,0,uVar9,uVar7);
            goto code_r0x00103380;
          }
code_r0x001031fe:
          uVar7 = param_2[(long)(int)param_1 + -1];
          *(long *)((undefined *)puVar12 + 0x10) = (long)(int)param_1;
          *(undefined8 *)((undefined *)puVar12 + 0x18) = uVar7;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x103222;
          iVar3 = func_0x001029e0(1,uVar7,(undefined *)puVar12 + 0x70);
          lVar11 = *(long *)((undefined *)puVar12 + 0x10);
          if (iVar3 == 0) {
code_r0x0010325a:
            if ((*(uint *)((undefined *)puVar12 + 0x88) & 0xf000) == 0x4000) {
              param_1 = param_1 - 1;
              *(undefined4 *)((undefined *)puVar12 + 0x54) = 0xffffffff;
              lVar15 = param_2[(int)param_1];
              goto code_r0x0010307e;
            }
code_r0x00103247:
            if (param_1 == 2) goto code_r0x00103250;
            goto code_r0x00103347;
          }
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x103230;
          piVar8 = (int *)func_0x001025a0();
          iVar2 = *piVar8;
          lVar11 = *(long *)((undefined *)puVar12 + 0x10);
          if (iVar2 == 0) goto code_r0x0010325a;
          if (iVar2 == 2) goto code_r0x00103247;
          goto code_r0x001033c3;
        }
      }
      else {
        if (lVar15 != 0) goto code_r0x0010344a;
        if (2 < (int)param_1) {
          uVar7 = param_2[2];
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x103141;
          param_2 = (undefined8 *)quotearg_style(4,uVar7);
          puVar14 = &UNK_0011505d;
          goto code_r0x001032f6;
        }
      }
code_r0x0010307e:
      if (*(int *)((undefined *)puVar12 + 0x28) == 2) {
        ((undefined *)puVar12)[0x4d] = 0;
        if (bVar1) {
          puVar14 = &UNK_00115a38;
          goto code_r0x0010331f;
        }
code_r0x00103163:
        uVar4 = 0;
      }
      else {
        if (!bVar1) goto code_r0x00103163;
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x1030a5;
        uVar7 = func_0x00102730(0,&UNK_0011507b,5);
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x1030b0;
        uVar4 = xget_version(uVar7,lVar16);
      }
      *(undefined4 *)((undefined *)puVar12 + 0x20) = uVar4;
      *(undefined8 *)((undefined *)puVar12 + -8) = 0x1030be;
      set_simple_backup_suffix(*(undefined8 *)((undefined *)puVar12 + 8));
      *(undefined8 *)((undefined *)puVar12 + -8) = 0x1030c3;
      hash_init();
      if (lVar15 == 0) {
        uVar7 = param_2[1];
        uVar9 = *param_2;
        ((undefined *)puVar12)[0x51] = 1;
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x1031d6;
        uVar5 = movefile(uVar9,uVar7,0,aiStack296);
      }
      else {
        if (param_1 == 1) {
          uVar7 = *param_2;
          ((undefined *)puVar12)[0x51] = 1;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x1030ed;
          uVar5 = movefile(uVar7,lVar15,1,aiStack296);
        }
        else {
          uVar5 = 1;
          *(undefined8 *)((undefined *)puVar12 + -8) = 0x10317c;
          dest_info_init(aiStack296);
          lVar16 = 1;
          *(ulong *)((undefined *)puVar12 + 8) = (ulong)(param_1 - 1) + 2;
          do {
            uVar7 = param_2[lVar16 + -1];
            *(bool *)((undefined *)puVar12 + 0x51) = param_1 == (uint)lVar16;
            lVar16 = lVar16 + 1;
            *(undefined8 *)((undefined *)puVar12 + -8) = 0x1031b1;
            uVar6 = movefile(uVar7,lVar15,1,aiStack296);
            uVar5 = uVar5 & uVar6;
          } while (lVar16 != *(long *)((undefined *)puVar12 + 8));
        }
      }
      if (*(long *)((undefined *)puVar12 + 0x108) == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)(uVar5 ^ 1) & 0xff;
      }
      goto code_r0x0010346e;
    }
    param_1 = param_1 - 1;
    if (param_1 == 0) {
      uVar7 = *param_2;
      *(undefined8 *)((undefined *)puVar12 + -8) = 0x1032e7;
      param_2 = (undefined8 *)quotearg_style(4,uVar7);
      puVar14 = &UNK_001159c0;
code_r0x001032f6:
      *(undefined8 *)((undefined *)puVar12 + -8) = 0x1032fd;
      uVar7 = func_0x00102730(0,puVar14,5);
      *(undefined8 *)((undefined *)puVar12 + -8) = 0x10330e;
      func_0x00102b10(0,0,uVar7,param_2);
      goto code_r0x00102ebe;
    }
    puVar14 = &UNK_00115048;
code_r0x0010331f:
    *(undefined8 *)((undefined *)puVar12 + -8) = 0x103326;
    uVar7 = func_0x00102730(0,puVar14,5);
    *(undefined8 *)((undefined *)puVar12 + -8) = 0x103334;
    func_0x00102b10(0,0,uVar7);
  }
  else {
    if (iVar3 == 0x66) {
      *(undefined4 *)((undefined *)puVar12 + 0x28) = 1;
      goto code_r0x00102e48;
    }
    if (iVar3 < 0x67) {
      if (iVar3 == 0x53) {
        bVar1 = true;
        *(long *)((undefined *)puVar12 + 8) = optarg;
      }
      else {
        if (iVar3 < 0x54) {
          if (iVar3 == -0x83) {
            *(undefined8 *)((undefined *)puVar12 + -8) = 0;
            iVar2 = 0x115022;
            *(undefined8 *)((undefined *)puVar12 + -0x10) = 0x11502e;
            *(undefined8 *)((undefined *)puVar12 + -0x18) = 0x102f46;
            version_etc(stdout,&UNK_00114f23,&UNK_00114f9c,Version,&UNK_00115022,&UNK_00115012);
            *(undefined8 *)((undefined *)puVar12 + -0x18) = 0x102f4d;
            func_0x00102c00(0);
            puVar12 = (undefined8 *)((undefined *)puVar12 + -0x10);
            goto code_r0x00102f50;
          }
          if (iVar3 == -0x82) {
            *(undefined8 *)((undefined *)puVar12 + -8) = 0x1032bd;
            usage(0);
code_r0x001032bd:
            *(undefined8 *)((undefined *)puVar12 + -8) = 0x1032c2;
            piVar8 = (int *)func_0x001025a0();
            iVar3 = *piVar8;
            *(int *)((undefined *)puVar12 + 0x54) = iVar3;
            if (iVar3 != 0) goto code_r0x001031fe;
            goto code_r0x00103250;
          }
          goto code_r0x00102ebe;
        }
        if (iVar3 != 0x5a) {
          if (iVar3 == 0x62) {
            bVar1 = true;
            if (optarg != 0) {
              lVar16 = optarg;
            }
          }
          else {
            if (iVar3 != 0x54) goto code_r0x00102ebe;
code_r0x00102ed0:
            ((undefined *)puVar12)[0x10] = 1;
          }
        }
      }
      goto code_r0x00102e48;
    }
    if (iVar3 == 0x74) {
code_r0x00102f50:
      if (lVar15 != 0) {
code_r0x0010339f:
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x1033b2;
        uVar7 = func_0x00102730(0,&UNK_00115998,5);
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x1033c3;
        func_0x00102b10(1,0,uVar7);
code_r0x001033c3:
        *(int *)((undefined *)puVar12 + 8) = iVar2;
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x1033d7;
        uVar7 = quotearg_style(4,*(undefined8 *)((undefined *)puVar12 + 0x18));
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x1033ed;
        uVar9 = func_0x00102730(0,&UNK_00114fe1,5);
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x103407;
        func_0x00102b10(1,(ulong)*(uint *)((undefined *)puVar12 + 8),uVar9,uVar7);
code_r0x00103407:
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x103418;
        uVar7 = quotearg_style(4,optarg);
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x10342e;
        uVar9 = func_0x00102730(0,&UNK_00114fe1,5);
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x103436;
        puVar10 = (uint *)func_0x001025a0();
        uVar5 = *puVar10;
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x10344a;
        func_0x00102b10(1,(ulong)uVar5,uVar9,uVar7);
code_r0x0010344a:
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x10345d;
        uVar7 = func_0x00102730(0,&UNK_001159f0,5);
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x10346e;
        func_0x00102b10(1,0,uVar7);
code_r0x0010346e:
        puVar12[-1] = 0x103473;
        auVar17 = func_0x00102780();
        uVar7 = *puVar12;
        uVar13 = (ulong)(puVar12 + 1) & 0xfffffffffffffff0;
        *(undefined8 *)(uVar13 - 8) = SUB168(auVar17,0);
        *(ulong *)(uVar13 - 0x10) = uVar13 - 8;
        *(undefined8 *)(uVar13 - 0x18) = 0x1034aa;
        (*(code *)PTR___libc_start_main_0031bfd8)
                  (main,uVar7,puVar12 + 1,__libc_csu_init,__libc_csu_fini,SUB168(auVar17 >> 0x40,0))
        ;
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      *(undefined8 *)((undefined *)puVar12 + -8) = 0x102f6f;
      iVar2 = func_0x001029e0(1,optarg,*(undefined8 *)((undefined *)puVar12 + 0x18));
      lVar15 = optarg;
      if (iVar2 != 0) goto code_r0x00103407;
      if ((*(uint *)((undefined *)puVar12 + 0x88) & 0xf000) != 0x4000) {
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x102fa2;
        param_2 = (undefined8 *)quotearg_style(4,optarg);
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x102fb8;
        uVar7 = func_0x00102730(0,&UNK_00114ff5,5);
        *(undefined8 *)((undefined *)puVar12 + -8) = 0x102fcc;
        func_0x00102b10(1,0,uVar7,param_2);
code_r0x00102fd0:
        ((undefined *)puVar12)[0x4d] = 1;
      }
      goto code_r0x00102e48;
    }
    if (iVar3 < 0x75) {
      if (iVar3 == 0x69) {
        *(undefined4 *)((undefined *)puVar12 + 0x28) = 3;
      }
      else {
        if (iVar3 != 0x6e) goto code_r0x00102ebe;
        *(undefined4 *)((undefined *)puVar12 + 0x28) = 2;
      }
      goto code_r0x00102e48;
    }
    if (iVar3 == 0x76) {
      ((undefined *)puVar12)[0x4e] = 1;
      goto code_r0x00102e48;
    }
    if (iVar3 < 0x76) goto code_r0x00102fd0;
    if (iVar3 == 0x80) {
      remove_trailing_slashes = 1;
      goto code_r0x00102e48;
    }
  }
code_r0x00102ebe:
  *(undefined8 *)((undefined *)puVar12 + -8) = 0x102ec8;
  usage();
  goto code_r0x00102ed0;
}

