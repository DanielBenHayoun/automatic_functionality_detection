
ulong main(int param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar7;
  ulong uVar8;
  undefined *puVar9;
  uint *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  undefined auVar16 [16];
  undefined *apuStack128 [3];
  undefined auStack104 [8];
  long lStack96;
  undefined uStack81;
  long alStack80 [4];
  
  uVar15 = 0;
  lVar13 = 0;
  puVar10 = (uint *)(long)param_1;
  puVar14 = (undefined *)0xffffffff;
  lVar12 = 0x10;
  puVar9 = auStack104;
  alStack80[2] = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101b70(6,&UNK_0010ae01);
  func_0x00101930(&UNK_00109c44,&UNK_00109c6d);
  func_0x00101910(&UNK_00109c44);
  atexit(close_stdout);
  lStack96 = 0;
code_r0x00101d28:
  *(undefined8 *)(puVar9 + -8) = 0x101d43;
  iVar3 = func_0x001019b0((ulong)puVar10 & 0xffffffff,param_2,&UNK_00109ca0,long_options,0);
  if (iVar3 == -1) {
    iVar3 = (int)puVar14;
    if (recurse == '\0') {
      affect_symlink_referent = iVar3 != 0;
      lVar12 = 0x10;
code_r0x00101ec3:
      puVar14 = (undefined *)(long)optind;
      iVar3 = (int)puVar10 - optind;
      bVar2 = *(long *)(puVar9 + 8) != 0 | (byte)lVar13;
      puVar9[0x17] = bVar2;
      if (bVar2 == 0) {
        if (1 < iVar3) {
code_r0x001026a9:
          lVar12 = param_2[(long)puVar14];
          optind = (int)puVar14 + 1;
          *(undefined8 *)(puVar9 + -8) = 0x1026c3;
          specified_context = lVar12;
          param_2 = (undefined8 *)func_0x001018a0();
          *(uint *)param_2 = 0x5f;
          *(undefined8 *)(puVar9 + -8) = 0x1026d4;
          puVar5 = (uint *)quote(lVar12);
          *(undefined8 *)(puVar9 + -8) = 0x1026ea;
          uVar6 = func_0x00101940(0,&UNK_00109cea,5);
          uVar1 = *(uint *)param_2;
          *(undefined8 *)(puVar9 + -8) = 0x1026fe;
          func_0x00101ba0(1,(ulong)uVar1,uVar6,puVar5);
          goto code_r0x001026fe;
        }
      }
      else {
        if (0 < iVar3) {
          puVar9[0x18] = recurse;
          *(undefined8 *)(puVar9 + -8) = 0x101ef6;
          puVar5 = (uint *)func_0x001018a0();
          puVar10 = puVar5;
          if (*(long *)(puVar9 + 8) != 0) {
code_r0x00102669:
            uVar6 = *(undefined8 *)(puVar9 + 8);
            *puVar5 = 0x5f;
            *(undefined8 *)(puVar9 + -8) = 0x10267e;
            param_2 = (undefined8 *)quotearg_style(4,uVar6);
            *(undefined8 *)(puVar9 + -8) = 0x102694;
            uVar6 = func_0x00101940(0,&UNK_0010a5f0,5);
            uVar1 = *puVar10;
            *(undefined8 *)(puVar9 + -8) = 0x1026a9;
            func_0x00101ba0(1,(ulong)uVar1,uVar6,param_2);
            goto code_r0x001026a9;
          }
          specified_context = 0;
          if ((puVar9[0x18] == '\0') || ((char)uVar15 == '\0')) {
            root_dev_ino = 0;
          }
          else {
            *(undefined8 *)(puVar9 + -8) = 0x102509;
            root_dev_ino = get_root_dev_ino(dev_ino_buf_7158);
            puVar14 = (undefined *)(long)optind;
            if (root_dev_ino == 0) {
              *(undefined8 *)(puVar9 + -8) = 0x102531;
              uVar6 = quotearg_style(4,&UNK_0010b3a8);
              uVar7 = (uint)uVar6;
              *(undefined8 *)(puVar9 + -8) = 0x102547;
              uVar4 = func_0x00101940(0,&UNK_0010a618,5);
              uVar1 = *puVar5;
              *(undefined8 *)(puVar9 + -8) = 0x10255c;
              func_0x00101ba0(1,(ulong)uVar1,uVar4,uVar6);
              goto code_r0x0010255c;
            }
          }
          param_2 = param_2 + (long)puVar14;
          puVar14 = &UNK_0010a850;
          *(undefined8 *)(puVar9 + -8) = 0x101f45;
          lVar12 = xfts_open(param_2,(ulong)((uint)lVar12 | 8),0);
          uVar8 = (ulong)(byte)puVar9[0x17];
          uVar7 = (uint)(byte)puVar9[0x17];
          *(undefined **)(puVar9 + 8) = puVar9 + 0x20;
          *(undefined8 *)(puVar9 + -8) = 0x101f5f;
          auVar16 = rpl_fts_read(lVar12);
          lVar13 = SUB168(auVar16,0);
          while (lVar13 != 0) {
            lVar13 = SUB168(auVar16,0);
            uVar7 = (uint)uVar8;
            uVar6 = *(undefined8 *)(lVar13 + 0x38);
            if (*(ushort *)(lVar13 + 0x70) < 0xb) {
                    /* WARNING: Could not recover jumptable at 0x00101f8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar6 = (*(code *)(puVar14 + *(int *)(puVar14 + (ulong)*(ushort *)(lVar13 + 0x70) * 4)
                                ))();
              return uVar6;
            }
            uVar15 = *(ulong *)(lVar13 + 0x30);
            if (verbose != '\0') {
              *(undefined8 *)(puVar9 + -8) = 0x1022a5;
              uVar6 = quotearg_style(4,uVar6,SUB168(auVar16 >> 0x40,0),uVar6);
              *(undefined8 *)(puVar9 + 0x18) = uVar6;
              *(undefined8 *)(puVar9 + -8) = 0x1022bd;
              uVar6 = func_0x00101940(0,&UNK_0010a7a0,5);
              *(undefined8 *)(puVar9 + -8) = 0x1022d1;
              func_0x00101b80(1,uVar6,*(undefined8 *)(puVar9 + 0x18));
            }
            uVar1 = *(uint *)(lVar12 + 0x2c);
            *(undefined8 *)(puVar9 + 0x20) = 0;
            if (specified_context == 0) {
              if (affect_symlink_referent == false) {
                *(undefined8 *)(puVar9 + -8) = 0x102402;
                iVar3 = lgetfileconat((ulong)uVar1,uVar15,*(undefined8 *)(puVar9 + 8));
              }
              else {
                *(undefined8 *)(puVar9 + -8) = 0x1022eb;
                iVar3 = getfileconat();
              }
              if ((iVar3 < 0) && (*puVar5 != 0x3d)) {
                *(undefined8 *)(puVar9 + -8) = 0x102447;
                uVar6 = quotearg_style(4,uVar15);
                puVar11 = &UNK_0010a5f0;
              }
              else {
                if (*(long *)(puVar9 + 0x20) == 0) {
code_r0x0010255c:
                  *(undefined8 *)(puVar9 + -8) = 0x102569;
                  uVar6 = quotearg_style(4,uVar15);
                  *(undefined8 *)(puVar9 + -8) = 0x10257f;
                  uVar4 = func_0x00101940(0,&UNK_0010a7c8,5);
                  uVar15 = 0;
                  *(undefined8 *)(puVar9 + -8) = 0x102593;
                  func_0x00101ba0(0,0,uVar4,uVar6);
                  goto code_r0x00101fd7;
                }
                *puVar5 = 0x5f;
                *(undefined8 *)(puVar9 + -8) = 0x10230d;
                uVar6 = quote();
                puVar11 = &UNK_0010a800;
              }
              *(undefined8 *)(puVar9 + -8) = 0x102323;
              uVar4 = func_0x00101940(0,puVar11,5);
              uVar1 = *puVar5;
              uVar15 = 0;
              *(undefined8 *)(puVar9 + -8) = 0x102338;
              func_0x00101ba0(0,(ulong)uVar1,uVar4,uVar6);
            }
            else {
              *(long *)(puVar9 + 0x18) = specified_context;
              if (affect_symlink_referent == false) {
                *(undefined8 *)(puVar9 + -8) = 0x102342;
                iVar3 = lsetfileconat((ulong)uVar1,uVar15,specified_context);
                uVar6 = *(undefined8 *)(puVar9 + 0x18);
                uVar4 = extraout_RDX_00;
              }
              else {
                *(undefined8 *)(puVar9 + -8) = 0x1020e6;
                iVar3 = setfileconat();
                uVar6 = *(undefined8 *)(puVar9 + 0x18);
                uVar4 = extraout_RDX;
              }
              if (iVar3 == 0) {
                uVar15 = (ulong)(byte)puVar9[0x17];
              }
              else {
                *(undefined8 *)(puVar9 + -8) = 0x1023b4;
                uVar6 = quote_n(1,uVar6,uVar4,uVar6);
                *(undefined8 *)(puVar9 + 0x18) = uVar6;
                *(undefined8 *)(puVar9 + -8) = 0x1023c8;
                uVar6 = quotearg_n_style(0,4,uVar15);
                *(undefined8 *)(puVar9 + -8) = 0x1023de;
                uVar4 = func_0x00101940(0,&UNK_0010a828,5);
                uVar1 = *puVar5;
                uVar15 = 0;
                *(undefined8 *)(puVar9 + -8) = 0x1023f8;
                func_0x00101ba0(0,(ulong)uVar1,uVar4,uVar6,*(undefined8 *)(puVar9 + 0x18));
              }
            }
code_r0x00101fd7:
            if (recurse == '\0') {
              *(undefined8 *)(puVar9 + -8) = 0x101ff0;
              rpl_fts_set(lVar12,lVar13,4);
            }
            uVar7 = uVar7 & (uint)uVar15;
            uVar8 = (ulong)uVar7;
            *(undefined8 *)(puVar9 + -8) = 0x101ffb;
            auVar16 = rpl_fts_read();
            lVar13 = SUB168(auVar16,0);
          }
          if (*puVar5 != 0) {
            uVar7 = 0;
            *(undefined8 *)(puVar9 + -8) = 0x10241c;
            uVar6 = func_0x00101940(0,&UNK_00109cfe,5);
            uVar1 = *puVar5;
            *(undefined8 *)(puVar9 + -8) = 0x10242b;
            func_0x00101ba0(0,(ulong)uVar1,uVar6);
          }
          *(undefined8 *)(puVar9 + -8) = 0x102019;
          iVar3 = rpl_fts_close(lVar12);
          if (iVar3 != 0) {
            uVar7 = 0;
            *(undefined8 *)(puVar9 + -8) = 0x102032;
            uVar6 = func_0x00101940(0,&UNK_00109d38,5);
            uVar1 = *puVar5;
            *(undefined8 *)(puVar9 + -8) = 0x102041;
            func_0x00101ba0(0,(ulong)uVar1,uVar6);
          }
          param_2 = (undefined8 *)(*(ulong *)(puVar9 + 0x28) ^ *(ulong *)(in_FS_OFFSET + 0x28));
          if (param_2 == (undefined8 *)0x0) {
            return (ulong)(uVar7 ^ 1);
          }
          goto code_r0x00102722;
        }
      }
      if ((int)puVar10 <= optind) {
        *(undefined8 *)(puVar9 + -8) = 0x102394;
        uVar6 = func_0x00101940(0,&UNK_00109cc1,5);
        *(undefined8 *)(puVar9 + -8) = 0x1023a2;
        func_0x00101ba0(0,0,uVar6);
        goto code_r0x00101df7;
      }
    }
    else {
      if ((int)lVar12 == 0x10) {
        puVar14 = (undefined *)(ulong)(iVar3 - 1U);
        puVar5 = puVar10;
        if (iVar3 - 1U != 0) {
          affect_symlink_referent = false;
          goto code_r0x00101ec3;
        }
code_r0x001026fe:
        *(undefined8 *)(puVar9 + -8) = 0x102711;
        uVar6 = func_0x00101940(0,&UNK_0010a5c0,5);
        *(undefined8 *)(puVar9 + -8) = 0x102722;
        func_0x00101ba0(1,0,uVar6);
code_r0x00102722:
        *(undefined8 *)(puVar9 + -8) = 0x102727;
        func_0x001019a0();
        puVar10 = puVar5;
      }
      else {
        if (iVar3 != 0) {
          affect_symlink_referent = true;
          goto code_r0x00101ec3;
        }
      }
      *(undefined8 *)(puVar9 + -8) = 0x10273a;
      uVar6 = func_0x00101940(0,&UNK_00109caf,5);
      *(undefined8 *)(puVar9 + -8) = 0x10274b;
      func_0x00101ba0(1,0,uVar6);
    }
    uVar6 = param_2[(long)puVar10 + -1];
    *(undefined8 *)(puVar9 + -8) = 0x102755;
    param_2 = (undefined8 *)quote(uVar6);
    *(undefined8 *)(puVar9 + -8) = 0x10276b;
    uVar6 = func_0x00101940(0,&UNK_00109cd1,5);
    *(undefined8 *)(puVar9 + -8) = 0x10277c;
    func_0x00101ba0(0,0,uVar6,param_2);
  }
  else {
    if (iVar3 == 0x6c) {
code_r0x00101dcc:
      lVar13 = 1;
      goto code_r0x00101d28;
    }
    if (iVar3 < 0x6d) {
      if (iVar3 == 0x4c) {
        lVar12 = 2;
        goto code_r0x00101d28;
      }
      if (iVar3 < 0x4d) {
        if (iVar3 == -0x82) {
          *(undefined8 *)(puVar9 + -8) = 0x102669;
          puVar5 = (uint *)usage(0);
          goto code_r0x00102669;
        }
        if (iVar3 != 0x48) {
          if (iVar3 != -0x83) goto code_r0x00101df7;
          goto code_r0x00101e01;
        }
        goto code_r0x00101e3f;
      }
      if (iVar3 == 0x52) {
        recurse = '\x01';
        goto code_r0x00101d28;
      }
      if (0x52 < iVar3) {
        if (iVar3 != 0x66) {
          if (iVar3 != 0x68) goto code_r0x00101df7;
          puVar14 = (undefined *)0x0;
        }
        goto code_r0x00101d28;
      }
      if (iVar3 == 0x50) {
        lVar12 = 0x10;
        goto code_r0x00101d28;
      }
    }
    else {
      if (iVar3 == 0x76) {
        verbose = '\x01';
        goto code_r0x00101d28;
      }
      if (iVar3 < 0x77) {
        if (((iVar3 == 0x74) || (0x74 < iVar3)) || (iVar3 == 0x72)) goto code_r0x00101dcc;
      }
      else {
        if (iVar3 == 0x81) {
          uVar15 = 0;
          goto code_r0x00101d28;
        }
        if (0x81 < iVar3) {
          if (iVar3 == 0x82) {
            uVar15 = 1;
          }
          else {
            if (iVar3 != 0x83) goto code_r0x00101df7;
            *(undefined8 *)(puVar9 + 8) = optarg;
          }
          goto code_r0x00101d28;
        }
        if (iVar3 == 0x80) {
          puVar14 = (undefined *)0x1;
          goto code_r0x00101d28;
        }
      }
    }
  }
code_r0x00101df7:
  *(undefined8 *)(puVar9 + -8) = 0x101e01;
  usage(1);
code_r0x00101e01:
  *(undefined8 *)(puVar9 + -0x10) = 0;
  *(undefined8 *)(puVar9 + -0x18) = 0x101e38;
  version_etc(stdout,&UNK_00109bc4,&UNK_00109c40,Version,&UNK_00109c92,&UNK_00109c85);
  *(undefined8 *)(puVar9 + -0x18) = 0x101e3f;
  func_0x00101c20();
  puVar9 = puVar9 + -0x10;
code_r0x00101e3f:
  lVar12 = 0x11;
  goto code_r0x00101d28;
}

