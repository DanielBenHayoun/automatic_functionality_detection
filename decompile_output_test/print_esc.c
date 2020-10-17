
uint * print_esc(long param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  char *pcVar15;
  char *pcVar16;
  undefined *puVar17;
  byte *pbVar18;
  ulong uVar19;
  
  bVar14 = *(byte *)(param_1 + 1);
  iVar2 = (int)param_1;
  if (bVar14 == 0x78) {
    pbVar18 = (byte *)(param_1 + 2);
    iVar13 = (int)(byte *)(param_1 + 4);
    plVar4 = (long *)func_0x00101730();
    bVar14 = 0;
    iVar3 = (int)pbVar18;
    do {
      iVar12 = (int)pbVar18;
      bVar9 = *pbVar18;
      if ((*(byte *)(*plVar4 + 1 + (ulong)bVar9 * 2) & 0x10) == 0) {
        if (iVar3 == iVar12) goto code_r0x00102a68;
        break;
      }
      if ((byte)(bVar9 + 0x9f) < 6) {
        cVar1 = bVar9 + 0xa9;
      }
      else {
        cVar1 = bVar9 - 0x37;
        if (5 < (byte)(bVar9 + 0xbf)) {
          cVar1 = bVar9 - 0x30;
        }
      }
      pbVar18 = pbVar18 + 1;
      bVar14 = bVar14 * '\x10' + cVar1;
      iVar12 = iVar13;
    } while (pbVar18 != (byte *)(param_1 + 4));
    pbVar18 = *(byte **)(stdout + 0x28);
    if (pbVar18 < *(byte **)(stdout + 0x30)) {
      *(byte **)(stdout + 0x28) = pbVar18 + 1;
      *pbVar18 = bVar14;
    }
    else {
      func_0x00101560(stdout,(ulong)bVar14);
    }
    goto code_r0x00102698;
  }
  iVar12 = (int)(param_1 + 1);
  if ((byte)(bVar14 - 0x30) < 8) {
    bVar9 = 0;
    pcVar15 = (char *)((param_2 & bVar14 == 0x30) + param_1 + 1);
    pcVar16 = pcVar15 + 3;
    do {
      iVar12 = (int)pcVar15;
      cVar1 = *pcVar15;
      if (7 < (byte)(cVar1 - 0x30U)) break;
      pcVar15 = pcVar15 + 1;
      bVar9 = cVar1 + -0x30 + bVar9 * '\b';
      iVar12 = (int)pcVar16;
    } while (pcVar15 != pcVar16);
    pbVar18 = *(byte **)(stdout + 0x28);
    if (pbVar18 < *(byte **)(stdout + 0x30)) {
      *(byte **)(stdout + 0x28) = pbVar18 + 1;
      *pbVar18 = bVar9;
    }
    else {
      func_0x00101560(stdout,(ulong)bVar9);
    }
    goto code_r0x00102698;
  }
  if (bVar14 != 0) {
    lVar5 = func_0x00101540(&UNK_00108b85,(ulong)(uint)(int)(char)bVar14);
    if (lVar5 != 0) {
      iVar12 = iVar2 + 2;
      switch(bVar14) {
      case 0x61:
        puVar17 = *(undefined **)(stdout + 0x28);
        if (puVar17 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar17 + 1;
          *puVar17 = 7;
        }
        else {
          func_0x00101560(stdout,7);
        }
        break;
      case 0x62:
        puVar17 = *(undefined **)(stdout + 0x28);
        if (puVar17 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar17 + 1;
          *puVar17 = 8;
        }
        else {
          func_0x00101560(stdout,8);
        }
        break;
      case 99:
        func_0x001016e0(0);
      case 0x66:
        puVar17 = *(undefined **)(stdout + 0x28);
        if (puVar17 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar17 + 1;
          *puVar17 = 0xc;
        }
        else {
          func_0x00101560(stdout,0xc);
        }
        break;
      default:
        pbVar18 = *(byte **)(stdout + 0x28);
        if (pbVar18 < *(byte **)(stdout + 0x30)) {
          *(byte **)(stdout + 0x28) = pbVar18 + 1;
          *pbVar18 = bVar14;
        }
        else {
          func_0x00101560(stdout,(ulong)bVar14);
        }
        break;
      case 0x65:
        puVar17 = *(undefined **)(stdout + 0x28);
        if (puVar17 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar17 + 1;
          *puVar17 = 0x1b;
        }
        else {
          func_0x00101560(stdout,0x1b);
        }
        break;
      case 0x6e:
        puVar17 = *(undefined **)(stdout + 0x28);
        if (puVar17 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar17 + 1;
          *puVar17 = 10;
        }
        else {
          func_0x00101560(stdout,10);
        }
        break;
      case 0x72:
        puVar17 = *(undefined **)(stdout + 0x28);
        if (puVar17 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar17 + 1;
          *puVar17 = 0xd;
        }
        else {
          func_0x00101560(stdout,0xd);
        }
        break;
      case 0x74:
        puVar17 = *(undefined **)(stdout + 0x28);
        if (puVar17 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar17 + 1;
          *puVar17 = 9;
          break;
        }
        goto code_r0x00102a8c;
      case 0x76:
        puVar17 = *(undefined **)(stdout + 0x28);
        if (puVar17 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar17 + 1;
          *puVar17 = 0xb;
        }
        else {
          func_0x00101560(stdout,0xb);
        }
      }
      goto code_r0x00102698;
    }
    if ((bVar14 & 0xdf) == 0x55) {
      pcVar15 = (char *)(param_1 + 2);
      iVar3 = (uint)(bVar14 != 0x75) * 4;
      plVar4 = (long *)func_0x00101730();
      uVar19 = 0;
      pcVar16 = (char *)(param_1 + 3 + (ulong)(iVar3 + 3));
      do {
        while( true ) {
          iVar13 = (int)pcVar15;
          cVar1 = *pcVar15;
          uVar10 = SEXT14(cVar1);
          if ((*(byte *)(*plVar4 + 1 + ((ulong)uVar10 & 0xff) * 2) & 0x10) == 0)
          goto code_r0x00102a68;
          iVar12 = (int)uVar19 * 0x10;
          if ((byte)(cVar1 + 0x9fU) < 6) break;
          iVar11 = uVar10 - 0x37;
          if (5 < (byte)(cVar1 + 0xbfU)) {
            iVar11 = uVar10 - 0x30;
          }
          pcVar15 = pcVar15 + 1;
          uVar19 = (ulong)(uint)(iVar12 + iVar11);
          if (pcVar15 == pcVar16) goto code_r0x00102864;
        }
        pcVar15 = pcVar15 + 1;
        uVar19 = (ulong)(iVar12 + (uVar10 - 0x57));
      } while (pcVar15 != pcVar16);
code_r0x00102864:
      iVar12 = iVar13 + 1;
      uVar10 = (uint)uVar19;
      if ((((uVar10 < 0xa0) && (uVar10 != 0x24)) && ((uVar10 & 0xffffffdf) != 0x40)) ||
         (uVar10 - 0xd800 < 0x800)) {
        uVar6 = func_0x001014f0(0,&UNK_001083f0,5);
        pcVar16 = (char *)0x0;
        pcVar15 = (char *)0x1;
        func_0x001016b0(1,0,uVar6,(ulong)(uint)(int)(char)bVar14,(ulong)(iVar3 + 4),uVar19);
        puVar8 = (uint *)func_0x00101450();
        if (*puVar8 == 0) {
          if (*pcVar16 != '\0') {
            if (pcVar16 == pcVar15) {
              uVar6 = quote(pcVar16);
              puVar17 = &UNK_00108b91;
            }
            else {
              uVar6 = quote(pcVar15);
              puVar17 = &UNK_00108420;
            }
            uVar7 = func_0x001014f0(0,puVar17,5);
            puVar8 = (uint *)func_0x001016b0(0,0,uVar7,uVar6);
            exit_status = 1;
          }
          return puVar8;
        }
        uVar6 = quote(pcVar15);
        uVar6 = func_0x001016b0(0,(ulong)*puVar8,&UNK_00108cce,uVar6);
        exit_status = 1;
        return (uint *)uVar6;
      }
      print_unicode_char(stdout,uVar19,0);
      goto code_r0x00102698;
    }
  }
  puVar17 = *(undefined **)(stdout + 0x28);
  if (puVar17 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar17 + 1;
    *puVar17 = 0x5c;
  }
  else {
    func_0x00101560(stdout,0x5c);
  }
  bVar14 = *(byte *)(param_1 + 1);
  if (bVar14 != 0) {
    pbVar18 = *(byte **)(stdout + 0x28);
    if (pbVar18 < *(byte **)(stdout + 0x30)) {
      *(byte **)(stdout + 0x28) = pbVar18 + 1;
      *pbVar18 = bVar14;
    }
    else {
      func_0x00101560(stdout,(ulong)bVar14);
    }
    iVar12 = iVar2 + 2;
  }
  goto code_r0x00102698;
code_r0x00102a68:
  iVar12 = iVar13;
  uVar6 = func_0x001014f0(0,&UNK_001083c8,5);
  func_0x001016b0(1,0,uVar6);
code_r0x00102a8c:
  func_0x00101560();
code_r0x00102698:
  return (uint *)(ulong)((iVar12 - iVar2) - 1);
}

