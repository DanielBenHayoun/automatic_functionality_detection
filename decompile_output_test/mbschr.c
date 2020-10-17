
byte * mbschr(byte *param_1,ulong param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *unaff_RBP;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  undefined8 *unaff_R13;
  byte *unaff_R14;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  undefined8 uStack236;
  undefined uStack228;
  byte *pbStack224;
  long lStack216;
  undefined uStack208;
  int aiStack204 [9];
  long lStack168;
  char *pcStack160;
  undefined *puStack152;
  undefined1 *puStack144;
  undefined8 *puStack136;
  byte *pbStack128;
  char acStack120 [4];
  undefined8 uStack116;
  undefined uStack108;
  byte *pbStack104;
  long lStack96;
  undefined uStack88;
  int aiStack84 [9];
  long lStack48;
  
  bVar17 = 0;
  puStack152 = (undefined *)(param_2 & 0xffffffff);
  pcVar13 = acStack120;
  pcVar9 = acStack120;
  pcVar10 = acStack120;
  pcStack160 = acStack120;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  pbStack128 = &UNK_00104126;
  uVar4 = func_0x001017a0();
  if ((uVar4 < 2) || (unaff_RBP = puStack152, (byte)puStack152 < 0x30)) {
    pcVar13 = puStack152;
    puStack144 = param_1;
    if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)PTR_strchr_0031ae80)(param_1,puStack152);
      return (byte *)uVar3;
    }
code_r0x00104343:
    pbStack128 = &UNK_00104348;
    func_0x001017c0();
    pcVar9 = pcVar13;
    puStack152 = unaff_RBP;
code_r0x00104348:
    pbStack128 = &UNK_00104367;
    func_0x00101830(&UNK_00115bd1,&UNK_00115b09,0x96,__PRETTY_FUNCTION___5021);
    pcVar10 = pcVar9;
code_r0x00104367:
    pbStack128 = &UNK_00104386;
    func_0x00101830(&UNK_00115be8,&UNK_00115b09,0xb2,__PRETTY_FUNCTION___5021);
    pcStack160 = pcVar10;
code_r0x00104386:
    pbVar11 = &UNK_00115b17;
    pbStack128 = &UNK_001043a5;
    func_0x00101830(&UNK_00115b17,&UNK_00115b09,0xb3,__PRETTY_FUNCTION___5021);
    lStack168 = *(long *)(in_FS_OFFSET + 0x28);
    puStack136 = unaff_R13;
    pbStack128 = unaff_R14;
    uVar4 = func_0x001017a0();
    if (1 < uVar4) {
      bVar14 = false;
      uStack236 = 0;
      lVar5 = 0;
      pbStack224 = pbVar11;
      do {
        uStack228 = 0;
        if (bVar14) {
code_r0x0010449c:
          uVar3 = func_0x001017a0();
          pbVar11 = pbStack224;
          uVar3 = strnlen1(pbStack224,uVar3);
          lStack216 = rpl_mbrtowc(aiStack204,pbVar11,uVar3,&uStack236);
          if (lStack216 == -1) {
            lStack216 = 1;
            uStack208 = 0;
          }
          else {
            if (lStack216 != -2) {
              if (lStack216 == 0) {
                lStack216 = 1;
                if (*pbStack224 != 0) goto code_r0x0010459e;
                if (aiStack204[0] != 0) goto code_r0x001045bd;
              }
              uStack208 = 1;
              iVar2 = func_0x00101a40(&uStack236);
              if (iVar2 != 0) {
                bVar14 = false;
              }
              goto code_r0x00104477;
            }
            lStack216 = func_0x001017b0(pbStack224);
            uStack208 = 0;
          }
        }
        else {
          if ((*(uint *)(is_basic_table + (ulong)(*pbStack224 >> 5) * 4) >>
               ((uint)*pbStack224 & 0x1f) & 1) == 0) {
            iVar2 = func_0x00101a40(&uStack236);
            if (iVar2 != 0) {
              bVar14 = true;
              goto code_r0x0010449c;
            }
            func_0x00101830(&UNK_00115bd1,&UNK_00115b09,0x96,__PRETTY_FUNCTION___5021);
            goto code_r0x00104599;
          }
          lStack216 = 1;
          aiStack204[0] = (int)(char)*pbStack224;
          uStack208 = 1;
code_r0x00104477:
          uStack228 = 1;
          if (aiStack204[0] == 0) goto code_r0x001043e5;
        }
        pbStack224 = pbStack224 + lStack216;
        lVar5 = lVar5 + 1;
      } while( true );
    }
    lVar5 = func_0x001017b0(pbVar11);
code_r0x001043e5:
    if (lStack168 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (byte *)lVar5;
    }
code_r0x00104599:
    func_0x001017c0();
code_r0x0010459e:
    func_0x00101830(&UNK_00115be8,&UNK_00115b09,0xb2,__PRETTY_FUNCTION___5021);
code_r0x001045bd:
    pbVar11 = &UNK_00115b17;
    func_0x00101830(&UNK_00115b17,&UNK_00115b09,0xb3,__PRETTY_FUNCTION___5021);
    if (pbVar11 == (byte *)0x0) {
      pcVar13 = "A NULL argv[0] was passed through an exec system call.\n";
      iVar2 = 1;
      func_0x00101a20(&UNK_00116718,1,0x37,stderr);
      func_0x001016d0();
      pbVar11 = (byte *)locale_charset();
      if ((*pbVar11 & 0xdf) == 0x55) {
        if (((((pbVar11[1] & 0xdf) == 0x54) && ((pbVar11[2] & 0xdf) == 0x46)) &&
            (pbVar11[3] == 0x2d)) && ((pbVar11[4] == 0x38 && (pbVar11[5] == 0)))) {
          puVar6 = &UNK_0011675c;
          if (*pcVar13 != '`') {
            puVar6 = &UNK_00116760;
          }
          return puVar6;
        }
      }
      else {
        if ((((*pbVar11 & 0xdf) == 0x47) && ((pbVar11[1] & 0xdf) == 0x42)) &&
           ((pbVar11[2] == 0x31 &&
            ((((pbVar11[3] == 0x38 && (pbVar11[4] == 0x30)) && (pbVar11[5] == 0x33)) &&
             ((pbVar11[6] == 0x30 && (pbVar11[7] == 0)))))))) {
          puVar6 = &UNK_00116764;
          if (*pcVar13 != '`') {
            puVar6 = &UNK_00116768;
          }
          return puVar6;
        }
      }
      puVar6 = &UNK_0011676b;
      if (iVar2 != 9) {
        puVar6 = &UNK_00115c38;
      }
      return puVar6;
    }
    lVar5 = func_0x00101810();
    if (lVar5 != 0) {
      pbVar1 = (byte *)(lVar5 + 1);
      pbVar8 = pbVar1 + -(long)pbVar11;
      bVar14 = pbVar8 < (byte *)0x6;
      bVar16 = pbVar8 == (byte *)0x6;
      if (6 < (long)pbVar8) {
        lVar7 = 7;
        pbVar8 = (byte *)(lVar5 + -6);
        pbVar12 = &UNK_00116750;
        do {
          if (lVar7 == 0) break;
          lVar7 = lVar7 + -1;
          bVar14 = *pbVar8 < *pbVar12;
          bVar16 = *pbVar8 == *pbVar12;
          pbVar8 = pbVar8 + (ulong)bVar17 * -2 + 1;
          pbVar12 = pbVar12 + (ulong)bVar17 * -2 + 1;
        } while (bVar16);
        bVar15 = false;
        bVar14 = (!bVar14 && !bVar16) == bVar14;
        if (bVar14) {
          lVar7 = 3;
          pbVar11 = pbVar1;
          pbVar8 = &UNK_00116758;
          do {
            if (lVar7 == 0) break;
            lVar7 = lVar7 + -1;
            bVar15 = *pbVar11 < *pbVar8;
            bVar14 = *pbVar11 == *pbVar8;
            pbVar11 = pbVar11 + (ulong)bVar17 * -2 + 1;
            pbVar8 = pbVar8 + (ulong)bVar17 * -2 + 1;
          } while (bVar14);
          pbVar11 = pbVar1;
          if ((!bVar15 && !bVar14) == bVar15) {
            pbVar11 = (byte *)(lVar5 + 4);
            program_invocation_short_name = pbVar11;
          }
        }
      }
    }
    program_invocation_name = pbVar11;
    program_name = pbVar11;
    return (byte *)lVar5;
  }
  acStack120[0] = '\0';
  uStack116 = 0;
  puStack144 = is_basic_table;
  unaff_R13 = &uStack116;
  pbStack104 = param_1;
code_r0x001041ee:
  uStack108 = 0;
  if (acStack120[0] == '\0') {
    if ((*(uint *)(is_basic_table + (ulong)(*pbStack104 >> 5) * 4) >> ((uint)*pbStack104 & 0x1f) & 1
        ) == 0) {
      pbStack128 = &UNK_001042b0;
      iVar2 = func_0x00101a40(unaff_R13);
      if (iVar2 != 0) {
        acStack120[0] = '\x01';
        goto code_r0x001041f4;
      }
      goto code_r0x00104348;
    }
    lStack96 = 1;
    aiStack84[0] = (int)(char)*pbStack104;
    uStack88 = 1;
    unaff_R14 = pbStack104;
    if (aiStack84[0] == 0) {
code_r0x00104320:
      unaff_R14 = (byte *)0x0;
code_r0x00104323:
      uStack108 = 1;
      if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
        return unaff_R14;
      }
      goto code_r0x00104343;
    }
code_r0x001041d7:
    if ((byte)puStack152 == *unaff_R14) goto code_r0x00104323;
  }
  else {
code_r0x001041f4:
    pbStack128 = &UNK_001041f9;
    uVar3 = func_0x001017a0();
    pbVar11 = pbStack104;
    pbStack128 = &UNK_00104209;
    uVar3 = strnlen1(pbStack104,uVar3);
    pbStack128 = &UNK_0010421c;
    lStack96 = rpl_mbrtowc(aiStack84,pbVar11,uVar3);
    unaff_R14 = pbStack104;
    if (lStack96 == -1) {
      lStack96 = 1;
      uStack88 = 0;
      goto code_r0x001041d7;
    }
    if (lStack96 == -2) {
      pbStack128 = &UNK_001042fd;
      lStack96 = func_0x001017b0(pbStack104);
      uStack88 = 0;
    }
    else {
      if (lStack96 == 0) {
        lStack96 = 1;
        if (*pbStack104 != 0) goto code_r0x00104367;
        if (aiStack84[0] != 0) goto code_r0x00104386;
      }
      uStack88 = 1;
      pbStack128 = &UNK_0010426c;
      iVar2 = func_0x00101a40(&uStack116);
      if (iVar2 != 0) {
        acStack120[0] = '\0';
      }
      unaff_R14 = pbStack104;
      if (aiStack84[0] == 0) goto code_r0x00104320;
    }
    if (lStack96 == 1) goto code_r0x001041d7;
  }
  pbStack104 = unaff_R14 + lStack96;
  goto code_r0x001041ee;
}

