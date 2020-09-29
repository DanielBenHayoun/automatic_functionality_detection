
long extract_varname(long *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 extraout_RDX;
  byte **ppbVar9;
  char *pcVar10;
  undefined *puVar11;
  long *unaff_RBP;
  byte *pbVar12;
  undefined *puVar13;
  undefined *unaff_R12;
  byte *pbVar14;
  undefined *unaff_R13;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte *pbStack600;
  undefined *puStack592;
  byte *apbStack584 [5];
  undefined *puStack544;
  undefined *puStack536;
  undefined *puStack528;
  undefined *puStack520;
  undefined *puStack512;
  undefined8 uStack504;
  undefined8 uStack496;
  undefined8 uStack480;
  undefined *puStack464;
  long *plStack456;
  undefined *puStack448;
  undefined *puStack440;
  undefined *puStack424;
  undefined auStack416 [128];
  long alStack288 [20];
  undefined auStack128 [24];
  long lStack104;
  long *plStack80;
  char *pcStack32;
  
  bVar17 = 0;
  if ((param_1 == (long *)0x0) || (unaff_RBP = param_1, *(char *)param_1 != '$')) {
    func_0x00101a00(&UNK_00106b4e,&UNK_00106b44,0xdd,__PRETTY_FUNCTION___7616);
    lStack104 = *(long *)(in_FS_OFFSET + 0x28);
    puStack440 = &UNK_00103356;
    puStack424 = auStack416;
    plStack80 = unaff_RBP;
    func_0x00101a80();
    puStack440 = &UNK_00103362;
    iVar3 = func_0x00101890(0,0,auStack416);
    if (iVar3 == 0) {
      puStack464 = (undefined *)0x1;
      unaff_RBP = alStack288;
      do {
        puStack440 = &UNK_001033e9;
        puVar13 = puStack464;
        iVar3 = func_0x00101910(puStack464,0,unaff_RBP);
        if (iVar3 == 0) {
          if (alStack288[0] == 1) {
            puStack440 = &UNK_00103404;
            iVar3 = func_0x00101bc0();
            unaff_R13 = &UNK_00106b61;
            unaff_R12 = &UNK_00106b68;
            puVar11 = &UNK_00106c56;
            if (iVar3 == 0) {
              unaff_R12 = &UNK_00106c9f;
              puVar11 = unaff_R12;
            }
          }
          else {
            puStack440 = &UNK_00103385;
            puVar13 = puStack424;
            iVar3 = func_0x00101bc0();
            if (iVar3 == 0) goto code_r0x001033d5;
            unaff_R13 = &UNK_00106c9f;
            puVar11 = &UNK_00106c56;
            unaff_R12 = &UNK_00106c9f;
          }
          puStack440 = &UNK_001033ac;
          sig2str(puStack464,auStack128);
          plStack456 = (long *)&UNK_001033d3;
          puVar13 = stderr;
          puStack448 = unaff_R12;
          puStack440 = unaff_R13;
          func_0x00101bf0(stderr,1,&UNK_00106b6a,auStack128,puStack464,puVar11);
        }
code_r0x001033d5:
        uVar2 = (int)puStack464 + 1;
        puStack464 = (undefined *)(ulong)uVar2;
      } while (uVar2 != 0x41);
      if (lStack104 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
    }
    else {
      puStack440 = &UNK_00103468;
      puStack464 = (undefined *)func_0x00101960(0,&UNK_00106e68,5);
      puStack440 = &UNK_00103470;
      puVar5 = (uint *)func_0x001018c0();
      puVar13 = (undefined *)0x7d;
      puStack440 = &UNK_00103481;
      func_0x00101b40(0x7d,(ulong)*puVar5,puStack464);
    }
    puStack440 = &UNK_00103486;
    func_0x001019a0();
    puVar11 = program_name;
    uVar8 = 5;
    uStack480 = *(undefined8 *)(in_FS_OFFSET + 0x28);
    plStack456 = unaff_RBP;
    puStack448 = unaff_R12;
    puStack440 = unaff_R13;
    if ((int)puVar13 == 0) goto code_r0x001034ed;
    uVar8 = func_0x00101960(0,&UNK_00106e90,5);
    func_0x00101bf0(stderr,1,uVar8,puVar11);
    do {
      func_0x00101bd0((ulong)puVar13 & 0xffffffff);
      uVar8 = extraout_RDX;
code_r0x001034ed:
      uVar8 = func_0x00101960(0,&UNK_00106eb8,uVar8);
      func_0x00101b30(1,uVar8,puVar11);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00106ef8,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00106f38,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00106f88,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00107048,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00107080,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00107110,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00107160,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_001071b0,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00107200,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00107250,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_001072a0,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_001072d0,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00107308,5);
      func_0x00101a40(uVar6,uVar8);
      uVar8 = stdout;
      uVar6 = func_0x00101960(0,&UNK_00107350,5);
      func_0x00101a40(uVar6,uVar8);
      uStack504 = 0;
      uStack496 = 0;
      pbStack600 = &UNK_00106b83;
      apbStack584[4] = &UNK_00106bc4;
      puStack592 = &UNK_00106b85;
      puStack536 = &UNK_00106bce;
      apbStack584[0] = &UNK_00106bfd;
      puStack520 = &UNK_00106bd8;
      apbStack584[1] = &UNK_00106b95;
      apbStack584[2] = &UNK_00106bab;
      apbStack584[3] = &UNK_00106bb5;
      puStack544 = &UNK_00106bb5;
      puStack528 = &UNK_00106bb5;
      puStack512 = &UNK_00106bb5;
      ppbVar9 = &pbStack600;
      do {
        ppbVar9 = ppbVar9;
        ppbVar9 = ppbVar9 + 2;
        pbVar14 = *ppbVar9;
        bVar15 = false;
        bVar16 = pbVar14 == (byte *)0x0;
        if (bVar16) break;
        lVar4 = 4;
        pbVar12 = &UNK_00106b7f;
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          bVar15 = *pbVar12 < *pbVar14;
          bVar16 = *pbVar12 == *pbVar14;
          pbVar12 = pbVar12 + (ulong)bVar17 * -2 + 1;
          pbVar14 = pbVar14 + (ulong)bVar17 * -2 + 1;
        } while (bVar16);
      } while ((!bVar15 && !bVar16) != bVar15);
      pbVar14 = ppbVar9[3];
      if (pbVar14 == (byte *)0x0) {
        uVar8 = func_0x00101960(0,&UNK_00106be2,5);
        func_0x00101b30(1,uVar8,&UNK_00106bf9,&UNK_001073f0);
        lVar4 = func_0x00101b20(5,0);
        if ((lVar4 != 0) && (iVar3 = func_0x001018d0(lVar4,&UNK_00106c07,3), iVar3 != 0)) {
          pbVar14 = &UNK_00106b7f;
          goto code_r0x00103940;
        }
        pbVar14 = &UNK_00106b7f;
        puVar11 = &UNK_00106b9f;
        uVar8 = func_0x00101960(0,&UNK_00106c0b,5);
        func_0x00101b30(1,uVar8,&UNK_001073f0,&UNK_00106b7f);
      }
      else {
        uVar8 = func_0x00101960(0,&UNK_00106be2,5);
        func_0x00101b30(1,uVar8,&UNK_00106bf9,&UNK_001073f0);
        lVar4 = func_0x00101b20(5,0);
        if ((lVar4 != 0) && (iVar3 = func_0x001018d0(lVar4,&UNK_00106c07,3), iVar3 != 0)) {
code_r0x00103940:
          uVar8 = stdout;
          uVar6 = func_0x00101960(0,&UNK_00107418,5);
          func_0x00101a40(uVar6,uVar8);
        }
        uVar8 = func_0x00101960(0,&UNK_00106c0b,5);
        func_0x00101b30(1,uVar8,&UNK_001073f0,&UNK_00106b7f);
        puVar11 = &UNK_00106c9f;
        if (pbVar14 == &UNK_00106b7f) {
          puVar11 = &UNK_00106b9f;
        }
      }
      uVar8 = func_0x00101960(0,&UNK_00107460,5);
      func_0x00101b30(1,uVar8,pbVar14,puVar11);
    } while( true );
  }
  if (*(char *)((long)param_1 + 1) == '{') {
    uVar2 = (int)*(char *)((long)param_1 + 2) - 0x41;
    if (((uVar2 < 0x3a) && ((0x3ffffff03ffffffU >> ((ulong)uVar2 & 0x1f) & 1) != 0)) ||
       (*(char *)((long)param_1 + 2) == '_')) {
      pcVar10 = (char *)((long)param_1 + 3);
      do {
        cVar1 = *pcVar10;
        if (cVar1 < '[') {
          if ((cVar1 < 'A') && (9 < (byte)(cVar1 - 0x30U))) goto joined_r0x00103246;
        }
        else {
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
joined_r0x00103246:
            if (cVar1 != '_') {
              if (cVar1 != '}') {
                return 0;
              }
              pcVar10 = pcVar10 + -(long)param_1;
              pcVar7 = pcVar10 + -2;
              if (vnlen <= pcVar7) {
                vnlen = pcVar10 + -1;
                pcStack32 = pcVar7;
                varname = xrealloc(varname,vnlen,pcVar7,varname);
                pcVar7 = pcStack32;
              }
              lVar4 = func_0x00101ab0(varname,(char *)((long)param_1 + 2),pcVar7,varname);
              pcVar10[lVar4 + -2] = '\0';
              return lVar4;
            }
          }
        }
        pcVar10 = pcVar10 + 1;
      } while( true );
    }
  }
  return 0;
}

