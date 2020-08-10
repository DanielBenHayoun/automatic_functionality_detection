
undefined8 main(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  byte bVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte **ppbVar12;
  undefined auVar13 [16];
  undefined *puVar14;
  undefined8 uStack72;
  undefined auStack64 [6];
  char cStack58;
  byte bStack57;
  
  lVar5 = func_0x001011b0(&UNK_00104bd0);
  if ((lVar5 == 0) ||
     ((1 < param_1 && (iVar3 = func_0x00101320(param_2[1],&UNK_00104be0), iVar3 == 0)))) {
    set_program_name(*param_2);
    func_0x001013a0(6,&UNK_00105641);
    func_0x00101240(&UNK_00104ba7,&UNK_00104be3);
    func_0x00101220(&UNK_00104ba7);
    atexit(close_stdout);
    if (param_1 == 2) {
      uVar1 = param_2[1];
      iVar3 = func_0x00101320(uVar1,&UNK_00104bfb);
      if (iVar3 == 0) {
        auVar13 = usage(0);
        uVar1 = uStack72;
        uStack72 = SUB168(auVar13,0);
        (*(code *)PTR___libc_start_main_00306fd8)
                  (main,uVar1,auStack64,__libc_csu_init,__libc_csu_fini,SUB168(auVar13 >> 0x40,0),
                   &uStack72);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      puVar14 = &UNK_001015f1;
      iVar3 = func_0x00101320(uVar1,&UNK_00104c02);
      if (iVar3 == 0) {
        version_etc(stdout,&UNK_00104b06,&UNK_00104ba3,Version,&UNK_00104c17,&UNK_00104c0c,0,puVar14
                   );
        return 0;
      }
    }
    cStack58 = '\x01';
    ppbVar12 = (byte **)(param_2 + 1);
    bVar2 = false;
    while( true ) {
      param_1 = param_1 + -1;
      if (param_1 < 1) goto code_r0x001016d2;
      pbVar10 = *ppbVar12;
      if (*pbVar10 != 0x2d) break;
      bVar9 = pbVar10[1];
      pbVar11 = pbVar10 + 1;
      if (((bVar9 == 0) || (0x29 < (byte)(bVar9 + 0xbb))) ||
         ((1 << (bVar9 + 0xbb & 0x3f) & 0x20100000001U) == 0)) break;
      lVar6 = 0;
      while( true ) {
        if (pbVar10[lVar6 + 2] == 0) break;
        bVar8 = pbVar10[lVar6 + 2] + 0xbb;
        if ((0x29 < bVar8) || (lVar6 = lVar6 + 1, (1 << (bVar8 & 0x3f) & 0x20100000001U) == 0))
        goto code_r0x00101862;
      }
      do {
        pbVar11 = pbVar11 + 1;
        if (bVar9 == 0x65) {
          bVar2 = true;
        }
        else {
          if (bVar9 == 0x6e) {
            cStack58 = '\0';
          }
          else {
            if (bVar9 == 0x45) {
              bVar2 = false;
            }
          }
        }
        bVar9 = *pbVar11;
      } while (bVar9 != 0);
      ppbVar12 = ppbVar12 + 1;
    }
code_r0x00101862:
    if ((bVar2) || (lVar5 != 0)) goto code_r0x00101510;
    while( true ) {
      pbVar10 = *ppbVar12;
      ppbVar12 = ppbVar12 + 1;
      func_0x00101300(pbVar10,stdout);
      param_1 = param_1 + -1;
      if (param_1 == 0) break;
      puVar14 = *(undefined **)(stdout + 0x28);
      if (puVar14 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar14 + 1;
        *puVar14 = 0x20;
      }
      else {
        func_0x001012a0(stdout,0x20);
      }
    }
  }
  else {
    param_1 = param_1 + -1;
    ppbVar12 = (byte **)(param_2 + 1);
    set_program_name(*param_2);
    func_0x001013a0(6,&UNK_00105641);
    func_0x00101240(&UNK_00104ba7,&UNK_00104be3);
    func_0x00101220(&UNK_00104ba7);
    atexit();
    cStack58 = '\x01';
    if (param_1 < 1) goto code_r0x001016d9;
code_r0x00101510:
    pbVar10 = *ppbVar12;
    while( true ) {
      bVar9 = *pbVar10;
      uVar4 = (uint)bVar9;
      pbVar11 = pbVar10 + 1;
      if (bVar9 == 0) break;
      if (bVar9 != 0x5c) {
code_r0x00101518:
        bVar9 = (byte)uVar4;
        uVar4 = uVar4 & 0xff;
        pbVar10 = pbVar11;
        goto code_r0x0010151b;
      }
      bVar8 = pbVar10[1];
      if (bVar8 == 0) {
code_r0x001016c8:
        uVar4 = 0x5c;
        pbVar10 = pbVar11;
      }
      else {
        pbVar11 = pbVar10 + 2;
        switch(bVar8) {
        case 0x30:
          bVar8 = pbVar10[2];
          if ((byte)(bVar8 - 0x30) < 8) {
            pbVar11 = pbVar10 + 3;
            bVar9 = pbVar10[3];
            goto code_r0x0010173b;
          }
          uVar4 = 0;
          bVar9 = 0;
          pbVar10 = pbVar11;
          break;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
          bVar9 = pbVar10[2];
code_r0x0010173b:
          uVar4 = (uint)bVar8 - 0x30;
          if ((byte)((uint)bVar9 - 0x30) < 8) {
            uVar4 = ((uint)bVar9 - 0x30) + uVar4 * 8;
            pbVar11 = pbVar11 + 1;
          }
          bVar9 = *pbVar11;
          if ((byte)(bVar9 - 0x30) < 8) {
            pbVar11 = pbVar11 + 1;
            uVar4 = ((uint)bVar9 - 0x30) + uVar4 * 8;
          }
          goto code_r0x00101518;
        default:
code_r0x001017a6:
          uVar4 = (uint)bVar8;
          puVar14 = *(undefined **)(stdout + 0x28);
          bVar9 = bVar8;
          if (*(undefined **)(undefined8 *)(stdout + 0x30) < puVar14 ||
              *(undefined **)(undefined8 *)(stdout + 0x30) == puVar14) {
            func_0x001012a0(stdout,0x5c);
            pbVar10 = pbVar11;
          }
          else {
            *(undefined **)(stdout + 0x28) = puVar14 + 1;
            *puVar14 = 0x5c;
            pbVar10 = pbVar11;
          }
          break;
        case 0x5c:
          goto code_r0x001016c8;
        case 0x61:
          uVar4 = 7;
          bVar9 = 7;
          pbVar10 = pbVar11;
          break;
        case 0x62:
          uVar4 = 8;
          bVar9 = 8;
          pbVar10 = pbVar11;
          break;
        case 99:
          goto code_r0x001016f9;
        case 0x65:
          uVar4 = 0x1b;
          bVar9 = 0x1b;
          pbVar10 = pbVar11;
          break;
        case 0x66:
          uVar4 = 0xc;
          bVar9 = 0xc;
          pbVar10 = pbVar11;
          break;
        case 0x6e:
          uVar4 = 10;
          bVar9 = 10;
          pbVar10 = pbVar11;
          break;
        case 0x72:
          uVar4 = 0xd;
          bVar9 = 0xd;
          pbVar10 = pbVar11;
          break;
        case 0x74:
          uVar4 = 9;
          bVar9 = 9;
          pbVar10 = pbVar11;
          break;
        case 0x76:
          uVar4 = 0xb;
          bVar9 = 0xb;
          pbVar10 = pbVar11;
          break;
        case 0x78:
          bStack57 = pbVar10[2];
          plVar7 = (long *)func_0x00101440();
          lVar5 = *plVar7;
          if ((*(byte *)(lVar5 + 1 + (ulong)bStack57 * 2) & 0x10) == 0) goto code_r0x001017a6;
          uVar4 = hextobin();
          bVar9 = (byte)uVar4;
          if ((*(byte *)(lVar5 + 1 + (ulong)pbVar10[3] * 2) & 0x10) != 0) {
            pbVar11 = pbVar10 + 4;
            iVar3 = hextobin((ulong)pbVar10[3]);
            uVar4 = uVar4 * 0x10 + iVar3;
            goto code_r0x00101518;
          }
          uVar4 = uVar4 & 0xff;
          pbVar10 = pbVar10 + 3;
        }
      }
code_r0x0010151b:
      pbVar11 = *(byte **)(stdout + 0x28);
      if (pbVar11 < *(byte **)(stdout + 0x30)) {
        *(byte **)(stdout + 0x28) = pbVar11 + 1;
        *pbVar11 = bVar9;
      }
      else {
        func_0x001012a0(stdout,(ulong)uVar4);
      }
    }
    ppbVar12 = ppbVar12 + 1;
    param_1 = param_1 + -1;
    if (param_1 != 0) {
      puVar14 = *(undefined **)(stdout + 0x28);
      if (puVar14 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar14 + 1;
        *puVar14 = 0x20;
      }
      else {
        func_0x001012a0(stdout,0x20);
      }
      goto code_r0x00101510;
    }
  }
code_r0x001016d2:
  if (cStack58 == '\0') {
    return 0;
  }
code_r0x001016d9:
  puVar14 = *(undefined **)(stdout + 0x28);
  if (puVar14 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar14 + 1;
    *puVar14 = 10;
  }
  else {
    func_0x001012a0(stdout,10);
  }
code_r0x001016f9:
  return 0;
}

