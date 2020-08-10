
ulong main(ulong param_1,undefined8 *param_2)

{
  long *plVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  undefined auVar22 [16];
  undefined *puVar23;
  undefined8 uStack136;
  undefined8 *puStack128;
  undefined *puStack120;
  undefined8 *puStack112;
  byte *pbStack104;
  uint uStack96;
  uint uStack92;
  undefined auStack88 [8];
  ulong uStack80;
  long lStack64;
  
  bVar21 = 0;
  param_1 = param_1 & 0xffffffff;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101620(6,&UNK_00105927);
  func_0x00101480(&UNK_001058c4,&UNK_001058ed);
  func_0x00101460(&UNK_001058c4);
  puVar23 = &UNK_00101757;
  atexit(close_stdout);
  uVar4 = (uint)param_1;
  puVar16 = Version;
  parse_gnu_standard_options_only
            (param_1,param_2,&UNK_00105844,&UNK_001058c0,Version,1,usage,&UNK_00105905,0,puVar23);
  lVar6 = (long)(int)optind;
  if (1 < (int)(uVar4 - optind)) {
code_r0x00101df6:
    uVar9 = quote(param_2[lVar6 + 1]);
    uVar11 = func_0x00101490(0,&UNK_00105913,5);
    func_0x00101640(0,0,uVar11,uVar9);
    usage(1);
code_r0x00101e31:
    auVar22 = func_0x00101520(&UNK_00105934,&UNK_00105928,0x1cd,&__PRETTY_FUNCTION___6982);
    uVar9 = uStack136;
    uStack136 = SUB168(auVar22,0);
    (*(code *)PTR___libc_start_main_00307fc8)
              (main,uVar9,&puStack128,__libc_csu_init,__libc_csu_fini,SUB168(auVar22 >> 0x40,0),
               &uStack136);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar19 = optind < uVar4;
  bVar20 = optind == uVar4;
  if (bVar20) {
    puVar18 = (undefined8 *)new_item(0);
    uStack92 = 0;
    pbStack104 = &UNK_00105c2a;
  }
  else {
    pbVar2 = (byte *)param_2[lVar6];
    lVar6 = 2;
    pbVar14 = pbVar2;
    pbVar15 = &UNK_00105c2a;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      bVar19 = *pbVar14 < *pbVar15;
      bVar20 = *pbVar14 == *pbVar15;
      pbVar14 = pbVar14 + (ulong)bVar21 * -2 + 1;
      pbVar15 = pbVar15 + (ulong)bVar21 * -2 + 1;
    } while (bVar20);
    uVar4 = SEXT14((char)((!bVar19 && !bVar20) - bVar19));
    param_2 = (undefined8 *)(ulong)uVar4;
    pbStack104 = pbVar2;
    uStack92 = uVar4;
    puVar18 = (undefined8 *)new_item(0);
    if ((uVar4 != 0) && (lVar6 = freopen_safer(pbVar2,&UNK_00105bc1,stdin), lVar6 == 0)) {
code_r0x00101ceb:
      uVar9 = quotearg_n_style_colon(0,3,pbStack104);
      puVar10 = (uint *)func_0x00101410();
      func_0x00101640(1,(ulong)*puVar10,&UNK_00105bc7,uVar9);
      uVar13 = param_1;
code_r0x00101d1c:
      uVar9 = quotearg_n_style_colon(0,3,pbStack104);
      uVar11 = func_0x00101490(0,&UNK_00105b70,5);
      func_0x00101640(1,0,uVar11,uVar9);
      param_1 = uVar13;
code_r0x00101d57:
      if (uStack92 == 0) {
        param_2 = (undefined8 *)func_0x00101490(0,&UNK_00105987,5);
      }
      else {
code_r0x00101dbc:
        param_2 = (undefined8 *)quotearg_n_style_colon(0,3,pbStack104);
      }
      puVar10 = (uint *)func_0x00101410();
      lVar6 = 1;
      puVar7 = param_2;
      func_0x00101640(1,(ulong)*puVar10,&UNK_00105bc7);
      head = puVar16;
      do {
        zeros = puVar7;
        do {
          do {
            puVar7 = (undefined8 *)head[5];
            puVar16 = head;
            while (head = puVar7, head == (undefined8 *)0x0) {
              if (lVar6 == 0) {
code_r0x00101b6d:
                iVar5 = rpl_fclose();
                if (iVar5 != 0) goto code_r0x00101d57;
                if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
                  return (ulong)((uint)param_1 ^ 1) & 0xff;
                }
                goto code_r0x00101df1;
              }
              while( true ) {
                param_1 = 0;
                param_2 = (undefined8 *)quotearg_n_style_colon(0,3,pbStack104);
                uVar9 = func_0x00101490(0,&UNK_0010596c,5);
                func_0x00101640(0,0,uVar9,param_2);
                do {
                  if (puVar18[2] != 0) {
                    recurse_tree();
                  }
                } while (loop != 0);
code_r0x00101ab2:
                if (n_strings == 0) goto code_r0x00101b6d;
                if (puVar18[2] != 0) break;
                if (head != (undefined8 *)0x0) goto code_r0x00101af0;
              }
              recurse_tree();
              puVar7 = head;
              lVar6 = n_strings;
            }
code_r0x00101af0:
            param_2 = (undefined8 *)head[6];
            func_0x00101450(*head);
            puVar7 = zeros;
            bVar19 = false;
            lVar6 = n_strings + -1;
            *head = 0;
            n_strings = lVar6;
          } while (param_2 == (undefined8 *)0x0);
          do {
            puVar16 = (undefined8 *)*param_2;
            plVar1 = puVar16 + 4;
            *plVar1 = *plVar1 + -1;
            if (*plVar1 == 0) {
              *(undefined8 **)(puVar7 + 5) = puVar16;
              bVar19 = true;
              puVar7 = puVar16;
            }
            param_2 = (undefined8 *)param_2[1];
          } while (param_2 != (undefined8 *)0x0);
        } while (!bVar19);
      } while( true );
    }
  }
  fadvise(stdin,2);
  puStack120 = auStack88;
  init_tokenbuffer();
code_r0x00101829:
  puStack128 = (undefined8 *)0x0;
  uVar13 = param_1;
  puVar7 = puStack128;
code_r0x00101838:
  puStack128 = puVar7;
  lVar6 = readtoken(stdin,&UNK_00105924,3,puStack120);
  param_1 = uStack80;
  if (lVar6 != -1) {
    if (lVar6 != 0) {
      if (puVar18 != (undefined8 *)0x0) {
        param_2 = (undefined8 *)puVar18[2];
        puVar17 = puVar18;
        puVar7 = param_2;
        if (param_2 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)new_item(uStack80);
          *(undefined8 **)(puVar18 + 2) = puVar7;
        }
        else {
          while( true ) {
            puVar8 = puVar7;
            uVar4 = func_0x001015a0(param_1,*puVar8);
            puVar7 = puVar8;
            if (uVar4 == 0) break;
            puVar7 = (undefined8 *)puVar8[2];
            if ((int)uVar4 < 0) {
              puVar7 = (undefined8 *)puVar8[1];
            }
            if (puVar7 == (undefined8 *)0x0) {
              uStack96 = uVar4;
              puVar7 = (undefined8 *)new_item(param_1);
              if ((int)uStack96 < 0) {
                *(undefined8 **)(puVar8 + 1) = puVar7;
              }
              else {
                *(undefined8 **)(puVar8 + 2) = puVar7;
              }
              iVar5 = func_0x001015a0();
              if (iVar5 == 0) {
                func_0x00101520(&UNK_00105942,&UNK_00105928,0xa8,__PRETTY_FUNCTION___6928);
                goto code_r0x00101dbc;
              }
              puStack112 = (undefined8 *)param_2[2];
              uStack96 = iVar5 >> 0x1f | 1;
              puVar8 = puStack112;
              if (iVar5 < 0) {
                puStack112 = (undefined8 *)param_2[1];
                puVar8 = puStack112;
              }
              goto joined_r0x00101928;
            }
            if (*(int *)(puVar7 + 3) != 0) {
              param_2 = puVar7;
              puVar17 = puVar8;
            }
          }
        }
        goto joined_r0x00101a18;
      }
      func_0x00101520(&UNK_0010593d,&UNK_00105928,0x84,__PRETTY_FUNCTION___6928);
code_r0x00101df1:
      lVar6 = func_0x001014c0();
      goto code_r0x00101df6;
    }
    goto code_r0x00101e31;
  }
  if (puStack128 == (undefined8 *)0x0) {
    if (puVar18[2] != 0) {
      recurse_tree();
    }
    param_1 = 1;
    goto code_r0x00101ab2;
  }
  goto code_r0x00101d1c;
joined_r0x00101928:
  if (puVar7 != puVar8) {
    iVar5 = func_0x001015a0();
    if (iVar5 == 0) {
      func_0x00101520(&UNK_00105957,&UNK_00105928,0xb6,__PRETTY_FUNCTION___6928);
      goto code_r0x00101ceb;
    }
    if (iVar5 < 0) {
      *(undefined4 *)(puVar8 + 3) = 0xffffffff;
      puVar8 = (undefined8 *)puVar8[1];
    }
    else {
      *(undefined4 *)(puVar8 + 3) = 1;
      puVar8 = (undefined8 *)puVar8[2];
    }
    goto joined_r0x00101928;
  }
  uVar4 = *(uint *)(param_2 + 3);
  if ((uVar4 == 0) || (uVar12 = -uStack96, uVar4 == uVar12)) {
    *(uint *)(param_2 + 3) = uVar4 + uStack96;
  }
  else {
    if (uStack96 == *(uint *)(puStack112 + 3)) {
      if ((int)uStack96 < 0) {
        param_2[1] = puStack112[2];
        *(undefined8 **)(puStack112 + 2) = param_2;
      }
      else {
        param_2[2] = puStack112[1];
        *(undefined8 **)(puStack112 + 1) = param_2;
      }
      puVar3 = (undefined8 *)puVar17[2];
      *(undefined4 *)(puStack112 + 3) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      puVar8 = puStack112;
    }
    else {
      puVar3 = (undefined8 *)puStack112[1];
      puVar8 = (undefined8 *)puStack112[2];
      if ((int)uStack96 < 0) {
        puStack112[2] = puVar8[1];
        *(undefined8 **)(puVar8 + 1) = puStack112;
        param_2[1] = puVar8[2];
        *(undefined8 **)(puVar8 + 2) = param_2;
      }
      else {
        puStack112[1] = puVar3[2];
        *(undefined8 **)(puVar3 + 2) = puStack112;
        param_2[2] = puVar3[1];
        *(undefined8 **)(puVar3 + 1) = param_2;
        puVar8 = puVar3;
      }
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)(puStack112 + 3) = 0;
      if (uStack96 == *(uint *)(puVar8 + 3)) {
        *(uint *)(param_2 + 3) = uVar12;
      }
      else {
        if (uVar12 == *(uint *)(puVar8 + 3)) {
          *(uint *)(puStack112 + 3) = uStack96;
        }
      }
      puVar3 = (undefined8 *)puVar17[2];
      *(undefined4 *)(puVar8 + 3) = 0;
    }
    if (puVar3 == param_2) {
      *(undefined8 **)(puVar17 + 2) = puVar8;
    }
    else {
      *(undefined8 **)(puVar17 + 1) = puVar8;
    }
  }
joined_r0x00101a18:
  uVar13 = param_1;
  if (puStack128 != (undefined8 *)0x0) goto code_r0x00101a1e;
  goto code_r0x00101838;
code_r0x00101a1e:
  iVar5 = func_0x001015a0(*puStack128,*puVar7);
  if (iVar5 != 0) {
    puVar7[4] = puVar7[4] + 1;
    puVar17 = (undefined8 *)xmalloc(0x10);
    *(undefined8 **)puVar17 = puVar7;
    puVar17[1] = puStack128[6];
    *(undefined8 **)(puStack128 + 6) = puVar17;
  }
  goto code_r0x00101829;
}

