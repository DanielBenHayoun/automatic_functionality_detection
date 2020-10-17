
/* WARNING: Could not reconcile some variable overlaps */

ulong truncate(uint param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar8;
  undefined8 extraout_RDX_01;
  undefined8 uVar9;
  ulong *puVar10;
  undefined *puVar11;
  char cVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  uint *unaff_R14;
  uint *puVar16;
  uint *unaff_R15;
  uint *puVar17;
  long in_FS_OFFSET;
  undefined auVar18 [16];
  uint *puStack256;
  uint uStack248;
  uint uStack244;
  uint *puStack240;
  undefined *puStack232;
  undefined auStack216 [24];
  uint uStack192;
  uint *puStack168;
  uint *puStack160;
  long lStack64;
  
  uVar14 = (ulong)param_1;
  uVar9 = 0;
  puVar13 = (uint *)0x0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101610(6,&UNK_00105849);
  func_0x00101470(&UNK_001058c4,&UNK_001058ed);
  func_0x00101440(&UNK_001058c4);
  atexit(close_stdout);
code_r0x00101753:
  do {
    while( true ) {
      iVar3 = func_0x001014c0(uVar14 & 0xffffffff,param_2,&UNK_00105941,longopts,0);
      puVar16 = ref_file;
      if (iVar3 != -1) break;
      uVar15 = (int)uVar14 - optind;
      uVar14 = (ulong)uVar15;
      param_2 = param_2 + optind;
      cVar12 = (char)puVar13;
      if (ref_file == (uint *)0x0) {
        if (cVar12 != '\0') {
          puVar17 = unaff_R15;
          if ((int)uVar15 < 1) {
code_r0x00101f26:
            puVar11 = &UNK_00105967;
            uVar7 = 5;
            goto code_r0x00101f32;
          }
code_r0x00101abc:
          puStack240 = (uint *)0xffffffffffffffff;
          unaff_R15 = puVar17;
code_r0x00101ac5:
          uStack248 = 0;
          uStack244 = (-(uint)(no_create == '\0') & 0x40) + 0x801;
          puStack232 = auStack216;
          puStack256 = unaff_R15;
          while( true ) {
            puVar10 = param_2 + 1;
            uVar14 = *param_2;
            if (uVar14 == 0) break;
            uVar15 = func_0x00101640(uVar14,(ulong)uStack244,0x1b6);
            unaff_R15 = (uint *)(ulong)uVar15;
            if (uVar15 == 0xffffffff) {
code_r0x00101c4c:
              puVar13 = (uint *)func_0x00101400();
              param_2 = puVar10;
              if ((no_create == '\0') || (*puVar13 != 2)) {
                uVar7 = quotearg_style(4,uVar14);
                uVar6 = func_0x00101480(0,&UNK_001059a5,5);
                func_0x00101630(0,(ulong)*puVar13,uVar6,uVar7);
                uStack248 = 1;
              }
            }
            else {
              iVar3 = (int)uVar9;
              param_2 = puVar10;
              if (block_mode == '\0') {
                uVar8 = extraout_RDX;
                puVar13 = puStack256;
                if ((iVar3 == 0) || (-1 < (long)puStack240)) {
code_r0x00101cab:
                  if (iVar3 != 0) goto code_r0x00101de7;
                  goto code_r0x00101cb3;
                }
                iVar4 = func_0x001015e0(1,(ulong)uVar15,puStack232);
                uVar8 = extraout_RDX_00;
                if (iVar4 != 0) goto code_r0x00101b5a;
code_r0x00101de7:
                auVar18 = CONCAT88(uVar8,puStack240);
                if (puStack240 == (uint *)0xffffffffffffffff) {
                  if ((uStack192 & 0xd000) != 0x8000) {
                    auVar18 = func_0x00101510(unaff_R15,0,2);
                    if (SUB168(auVar18,0) < 0) {
                      puVar13 = (uint *)quotearg_style(4,uVar14);
                      puVar11 = &UNK_0010598b;
                      goto code_r0x00101b76;
                    }
                    goto code_r0x00101df6;
                  }
                  auVar18 = CONCAT88(uVar8,puStack168);
                  if (-1 < (long)puStack168) goto code_r0x00101df6;
                  puVar13 = (uint *)quotearg_style(4,uVar14);
                  puVar11 = &UNK_00105ff0;
                  goto code_r0x00101ee8;
                }
code_r0x00101df6:
                uVar8 = SUB168(auVar18 >> 0x40,0);
                puVar16 = SUB168(auVar18,0);
                if (iVar3 == 2) {
                  if (puVar13 < puVar16) {
                    puVar13 = puVar16;
                  }
code_r0x00101cb3:
                  if ((long)puVar13 < 0) {
                    puVar13 = (uint *)0x0;
                  }
                }
                else {
                  if (iVar3 != 3) {
                    if (iVar3 != 4) {
                      if (iVar3 == 5) {
                        uVar1 = (long)puVar13 + -1 + (long)puVar16;
                        uVar8 = uVar1 % (ulong)puVar13;
                        puVar13 = (uint *)((long)puVar13 * (uVar1 / (ulong)puVar13));
                        if (-1 < (long)puVar13) goto code_r0x00101cbf;
                        puVar13 = (uint *)quotearg_style(4,uVar14);
                        puVar11 = &UNK_00106020;
                      }
                      else {
                        uVar8 = 0x7fffffffffffffff - (long)puVar16;
                        if ((long)puVar13 <= (long)uVar8) {
                          puVar13 = (uint *)((long)puVar13 + (long)puVar16);
                          goto code_r0x00101cb3;
                        }
                        puVar13 = (uint *)quotearg_style(4,uVar14);
                        puVar11 = &UNK_00106048;
                      }
code_r0x00101ee8:
                      puVar16 = (uint *)0x0;
                      uVar7 = func_0x00101480(0,puVar11,5);
                      func_0x00101630(0,0,uVar7,puVar13);
                      goto code_r0x00101b99;
                    }
                    uVar8 = (ulong)puVar16 % (ulong)puVar13;
                    puVar13 = (uint *)((long)puVar13 * ((ulong)puVar16 / (ulong)puVar13));
                    goto code_r0x00101cb3;
                  }
code_r0x00101f51:
                  uVar8 = SUB168(auVar18 >> 0x40,0);
                  if (SUB168(auVar18,0) < puVar13) {
                    puVar13 = SUB168(auVar18,0);
                  }
                }
code_r0x00101cbf:
                puVar16 = (uint *)0x1;
                iVar3 = func_0x00101500((ulong)unaff_R15 & 0xffffffff,puVar13,uVar8);
                param_2 = puVar10;
                if (iVar3 == -1) {
                  uVar7 = quotearg_style(4,uVar14);
                  uVar6 = func_0x00101480(0,&UNK_00106070,5);
                  puVar17 = (uint *)func_0x00101400();
                  puVar16 = (uint *)0x0;
                  func_0x00101630(0,(ulong)*puVar17,uVar6,uVar7,puVar13);
                }
              }
              else {
                iVar4 = func_0x001015e0(1,(ulong)uVar15,puStack232);
                if (iVar4 == 0) {
                  puVar13 = puStack160;
                  if (0x1fffffffffffffff < (long)puStack160 - 1U) {
                    puVar13 = (uint *)0x200;
                  }
                  auVar18 = (undefined  [16])0x0 << 0x40 | ZEXT816(0x8000000000000000);
                  uVar8 = SUB168(auVar18 % SEXT816((long)puVar13),0);
                  if ((SUB168(auVar18 / SEXT816((long)puVar13),0) <= (long)puStack256) &&
                     (auVar18 = (undefined  [16])0x0 << 0x40 | ZEXT816(0x7fffffffffffffff),
                     uVar8 = SUB168(auVar18 % SEXT816((long)puVar13),0),
                     (long)puStack256 <= SUB168(auVar18 / SEXT816((long)puVar13),0))) {
                    puVar13 = (uint *)((long)puVar13 * (long)puStack256);
                    goto code_r0x00101cab;
                  }
                  quotearg_style(4,uVar14,uVar8);
                  uVar7 = func_0x00101480(0,&UNK_00105fc0,5);
                  puVar16 = (uint *)0x0;
                  func_0x00101630(0,0,uVar7,puStack256,puVar13);
                }
                else {
code_r0x00101b5a:
                  puVar13 = (uint *)quotearg_style(4,uVar14);
                  puVar11 = &UNK_001059c0;
code_r0x00101b76:
                  uVar7 = func_0x00101480(0,puVar11,5);
                  puVar17 = (uint *)func_0x00101400();
                  puVar16 = (uint *)0x0;
                  func_0x00101630(0,(ulong)*puVar17,uVar7,puVar13);
                }
              }
code_r0x00101b99:
              iVar3 = func_0x00101540((ulong)unaff_R15 & 0xffffffff);
              if (iVar3 == 0) {
                uVar15 = (uint)puVar16 ^ 1;
                puVar16 = (uint *)(ulong)uVar15;
                uStack248 = (uint)(byte)((byte)uStack248 | (byte)uVar15);
              }
              else {
                uVar7 = quotearg_style(4,uVar14);
                puVar13 = (uint *)func_0x00101480(0,&UNK_001059d0,5);
                puVar17 = (uint *)func_0x00101400();
                func_0x00101630(0,(ulong)*puVar17,puVar13,uVar7);
                uStack248 = 1;
              }
            }
          }
          unaff_R14 = puVar16;
          if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
            return (ulong)(byte)uStack248;
          }
code_r0x0010200f:
          func_0x001014b0();
          puVar16 = unaff_R14;
        }
        param_2 = (ulong *)quote_n(1,&UNK_00105948);
        uVar9 = quote_n(0,&UNK_00105954);
        puVar11 = &UNK_00105f50;
      }
      else {
        if (((int)uVar9 == 0) && (cVar12 != '\0')) {
          param_2 = (ulong *)quote_n(1,&UNK_00105948);
          uVar9 = quote_n(0,&UNK_00105954);
          puVar11 = &UNK_00105f78;
        }
        else {
          if ((block_mode != '\x01') || (cVar12 != '\0')) {
            if ((int)uVar15 < 1) goto code_r0x00101f26;
            iVar3 = func_0x001015a0(1,ref_file,auStack216);
            if (iVar3 == 0) {
              if ((uStack192 & 0xd000) == 0x8000) {
                puStack240 = puStack168;
                if ((long)puStack168 < 0) goto code_r0x00101c09;
              }
              else {
                uVar15 = func_0x00101640(puVar16,0);
                uVar14 = (ulong)uVar15;
                puVar16 = (uint *)func_0x00101400();
                if ((int)uVar15 < 0) {
code_r0x00101c09:
                  puVar10 = (ulong *)quotearg_style(4,ref_file);
                  uVar9 = func_0x00101480(0,&UNK_0010598b,5);
                  puVar13 = (uint *)func_0x00101400();
                  func_0x00101630(1,(ulong)*puVar13,uVar9,puVar10);
                  goto code_r0x00101c4c;
                }
                puStack240 = (uint *)func_0x00101510(uVar14,0,2);
                uStack248 = *puVar16;
                func_0x00101540((ulong)uVar15);
                if ((long)puStack240 < 0) {
                  *puVar16 = uStack248;
                  goto code_r0x00101c09;
                }
              }
              puVar17 = puStack240;
              if (cVar12 == '\0') goto code_r0x00101abc;
              goto code_r0x00101ac5;
            }
            goto code_r0x0010206e;
          }
          param_2 = (ulong *)quote_n(1,&UNK_00105954);
          uVar9 = quote_n(0,&UNK_0010595b);
          puVar11 = &UNK_00105fa0;
        }
      }
      uVar7 = func_0x00101480(0,puVar11,5);
      func_0x00101630(0,0,uVar7,uVar9);
      unaff_R14 = puVar16;
code_r0x00101792:
      usage();
code_r0x001017a0:
      block_mode = '\x01';
    }
    if (iVar3 == 99) {
code_r0x001017f0:
      no_create = '\x01';
      goto code_r0x00101753;
    }
    if (iVar3 < 100) {
      if (iVar3 != -0x83) {
        if (iVar3 == -0x82) {
          usage(0);
          goto code_r0x0010200f;
        }
        goto code_r0x00101792;
      }
      version_etc(stdout,&UNK_00105824,&UNK_001058c0,Version,&UNK_00105933,0);
      func_0x00101670();
      goto code_r0x001017f0;
    }
    if (iVar3 == 0x72) {
      ref_file = optarg;
    }
    else {
      if (iVar3 != 0x73) {
        if (iVar3 != 0x6f) goto code_r0x00101792;
        goto code_r0x001017a0;
      }
      plVar5 = (long *)func_0x001016c0();
      puVar16 = optarg;
      do {
        optarg = puVar16;
        bVar2 = *(byte *)optarg;
        puVar16 = (uint *)((long)optarg + 1);
      } while ((*(byte *)(*plVar5 + 1 + (ulong)bVar2 * 2) & 0x20) != 0);
      if (bVar2 == 0x2f) {
        uVar9 = 4;
        puVar16 = (uint *)((long)optarg + 1);
      }
      else {
        if ((char)bVar2 < '0') {
          puVar16 = optarg;
          if (bVar2 == 0x25) {
            uVar9 = 5;
            puVar16 = (uint *)((long)optarg + 1);
          }
        }
        else {
          if (bVar2 == 0x3c) {
            uVar9 = 3;
            puVar16 = (uint *)((long)optarg + 1);
          }
          else {
            puVar16 = optarg;
            if (bVar2 == 0x3e) {
              uVar9 = 2;
              puVar16 = (uint *)((long)optarg + 1);
            }
          }
        }
      }
      do {
        optarg = puVar16;
        puVar16 = (uint *)((long)optarg + 1);
      } while ((*(byte *)(*plVar5 + 1 + (ulong)*(byte *)optarg * 2) & 0x20) != 0);
      uVar7 = 5;
      if ((*(byte *)optarg - 0x2b & 0xfd) == 0) {
        if ((int)uVar9 != 0) goto code_r0x001020ad;
        uVar9 = 1;
        puVar13 = (uint *)0x1;
        func_0x00101480(0,&UNK_00105905,5);
        unaff_R15 = (uint *)xdectoimax(optarg,0x8000000000000000,0x7fffffffffffffff,&UNK_00105914);
      }
      else {
        func_0x00101480(0,&UNK_00105905,5);
        unaff_R15 = (uint *)xdectoimax(optarg,0x8000000000000000,0x7fffffffffffffff,&UNK_00105914);
        if (((int)uVar9 - 4U < 2) && (unaff_R15 == (uint *)0x0)) {
          uVar9 = func_0x00101480(0,&UNK_00105922,5);
          func_0x00101630(1,0,uVar9);
          puVar16 = unaff_R14;
code_r0x0010206e:
          param_2 = (ulong *)quotearg_style(4,puVar16);
          uVar9 = func_0x00101480(0,&UNK_0010597c,5);
          puVar16 = (uint *)func_0x00101400();
          func_0x00101630(1,(ulong)*puVar16,uVar9,param_2);
          uVar7 = extraout_RDX_01;
code_r0x001020ad:
          puVar11 = &UNK_00105f28;
code_r0x00101f32:
          uVar7 = func_0x00101480(0,puVar11,uVar7);
          func_0x00101630(0,0,uVar7);
          auVar18 = usage(1);
          puVar10 = param_2;
          goto code_r0x00101f51;
        }
        puVar13 = (uint *)0x1;
      }
    }
  } while( true );
}