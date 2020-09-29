
/* WARNING: Possible PIC construction at 0x00101caf: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00101cb4) */

long * logical_getcwd(undefined8 param_1,long *param_2)

{
  undefined2 *puVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  ulong extraout_RDX;
  ulong uVar13;
  undefined8 extraout_RDX_00;
  byte **ppbVar14;
  undefined *unaff_RBX;
  undefined *puVar15;
  byte *pbVar16;
  long *plVar17;
  byte *pbVar18;
  long unaff_R15;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  byte *pbStack1160;
  undefined *puStack1152;
  byte *apbStack1144 [5];
  undefined *puStack1104;
  undefined *puStack1096;
  undefined *puStack1088;
  undefined *puStack1080;
  undefined *puStack1072;
  undefined8 uStack1064;
  undefined8 uStack1056;
  undefined8 uStack1040;
  long *plStack1024;
  long *plStack1016;
  ulong uStack1008;
  undefined *puStack1000;
  long *plStack992;
  long lStack984;
  long lStack976;
  long *plStack968;
  ulong *puStack960;
  long *plStack952;
  undefined auStack944 [16];
  undefined4 uStack928;
  undefined4 uStack924;
  undefined4 uStack920;
  undefined4 uStack916;
  undefined4 uStack912;
  undefined4 uStack908;
  undefined4 uStack904;
  undefined4 uStack900;
  undefined4 uStack896;
  undefined4 uStack892;
  undefined4 uStack888;
  undefined4 uStack884;
  undefined4 uStack880;
  undefined4 uStack876;
  undefined4 uStack872;
  undefined4 uStack868;
  undefined4 uStack864;
  undefined4 uStack860;
  undefined4 uStack856;
  undefined4 uStack852;
  undefined4 uStack848;
  undefined4 uStack844;
  undefined4 uStack840;
  undefined4 uStack836;
  undefined4 uStack832;
  undefined4 uStack828;
  undefined4 uStack824;
  undefined4 uStack820;
  undefined4 uStack816;
  undefined4 uStack812;
  undefined4 uStack808;
  undefined4 uStack804;
  undefined4 uStack800;
  undefined4 uStack796;
  undefined4 uStack792;
  undefined4 uStack788;
  ulong uStack784;
  undefined8 uStack776;
  undefined auStack768 [16];
  undefined auStack752 [16];
  undefined auStack736 [16];
  undefined auStack720 [16];
  undefined auStack704 [16];
  undefined auStack688 [16];
  undefined auStack672 [16];
  undefined auStack656 [16];
  long lStack640;
  long lStack632;
  long lStack488;
  long *plStack472;
  long *plStack464;
  ulong uStack456;
  ulong uStack448;
  long *plStack440;
  long lStack416;
  undefined *puStack400;
  long *plStack392;
  undefined *puStack344;
  long *plStack336;
  long lStack328;
  long lStack320;
  long lStack184;
  long lStack176;
  long lStack32;
  
  bVar21 = 0;
  plStack1016 = (long *)&UNK_001050c4;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  plStack336 = (long *)&UNK_00101ac8;
  plVar17 = (long *)func_0x00101480();
  if ((plVar17 == (long *)0x0) || (*(char *)plVar17 != '/')) {
code_r0x00101b20:
    plVar17 = (long *)0x0;
  }
  else {
    unaff_RBX = &UNK_001050c8;
    plStack1016 = plVar17;
    while( true ) {
      param_2 = (long *)&UNK_001050c8;
      plStack336 = (long *)&UNK_00101af4;
      lVar7 = func_0x001017a0();
      if (lVar7 == 0) break;
      cVar2 = *(char *)(lVar7 + 2);
      if (((cVar2 == '\0') || (cVar2 == '/')) ||
         ((cVar2 == '.' && ((*(char *)(lVar7 + 3) == '\0' || (*(char *)(lVar7 + 3) == '/'))))))
      goto code_r0x00101b20;
      plStack1016 = (long *)(lVar7 + 1);
    }
    plStack1016 = (long *)0x1;
    plStack336 = (long *)&UNK_00101b52;
    param_2 = plVar17;
    iVar4 = func_0x00101670(1,plVar17,&lStack328);
    if (iVar4 != 0) goto code_r0x00101b20;
    param_2 = (long *)&UNK_001050de;
    plStack1016 = (long *)0x1;
    plStack336 = (long *)&UNK_00101b6f;
    iVar4 = func_0x00101670(1,&UNK_001050de,&lStack184);
    if (((iVar4 != 0) || (lStack320 != lStack176)) || (lStack328 != lStack184))
    goto code_r0x00101b20;
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar17;
  }
  plStack336 = (long *)&UNK_00101b97;
  func_0x00101590();
  puStack344 = unaff_RBX;
  plStack336 = plVar17;
  if (SUB168(ZEXT816(3) * ZEXT816(plStack1016) >> 0x40,0) == 0) {
    puVar8 = (undefined2 *)xmalloc((long)plStack1016 * 3);
    if (plStack1016 == (long *)0x0) {
      *(undefined *)((long)puVar8 + -1) = 0;
      return (long *)puVar8;
    }
    puVar1 = (undefined2 *)((long)puVar8 + (long)plStack1016 * 3);
    puVar11 = puVar8;
    do {
      *(undefined *)(puVar11 + 1) = 0x2f;
      puVar12 = (undefined2 *)((long)puVar11 + 3);
      *puVar11 = 0x2e2e;
      puVar11 = puVar12;
    } while (puVar12 != puVar1);
    *(undefined *)((long)puVar1 + -1) = 0;
    return (long *)puVar8;
  }
  plStack1024 = plStack1016;
  xalloc_die();
  plStack392 = plStack1016;
  puStack400 = unaff_RBX;
  uStack1008 = plStack1024[2] - *plStack1024;
  if (extraout_RDX + 1 <= uStack1008) {
    puVar15 = (undefined *)(plStack1024[2] + ~extraout_RDX);
    *(undefined **)(plStack1024 + 2) = puVar15;
    *puVar15 = 0x2f;
    lVar7 = plStack1024[2] + 1;
    uVar13 = extraout_RDX;
code_r0x00101650:
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)PTR_memcpy_00307f08)(lVar7,param_2,uVar13);
    return (long *)uVar6;
  }
  plStack952 = (long *)(extraout_RDX + 1 + plStack1024[1]);
  if (SUB168(ZEXT816(2) * ZEXT816(plStack952) >> 0x40,0) == 0) {
    lVar7 = xmalloc((long)plStack952 * 2);
    uVar13 = plStack1024[1] - uStack1008;
    param_2 = (long *)(*plStack1024 + uStack1008);
    lStack416 = *plStack1024;
    lVar7 = ((long)plStack952 * 2 - uVar13) + lVar7;
    plStack1024[2] = lVar7;
    goto code_r0x00101650;
  }
  xalloc_die();
  lStack488 = *(long *)(in_FS_OFFSET + 0x28);
  puStack1000 = &UNK_00101d43;
  plStack472 = plStack1024;
  plStack464 = plStack1016;
  uStack456 = uStack1008;
  uStack448 = extraout_RDX;
  plStack440 = param_2;
  plStack968 = (long *)get_root_dev_ino(auStack944);
  uVar13 = extraout_RDX;
  if (plStack968 == (long *)0x0) goto code_r0x001021e5;
  plVar17 = (long *)0x1;
  puStack1000 = &UNK_00101d67;
  iVar4 = func_0x00101670(1,&UNK_001050de,&uStack928);
  if (-1 < iVar4) {
    puStack960 = &uStack784;
    lStack984 = 1;
    plStack992 = &lStack640;
    do {
      if ((CONCAT44(uStack916,uStack920) == *plStack968) &&
         (CONCAT44(uStack924,uStack928) == plStack968[1])) {
        if (*(char *)plStack952[2] == '\0') {
          puStack1000 = &UNK_0010206b;
          plVar17 = plStack952;
          file_name_prepend(plStack952,&UNK_0010513e,0);
        }
        if (lStack488 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (long *)0x0;
        }
        goto code_r0x00102228;
      }
      lStack976 = lStack984 + 1;
      puStack1000 = &UNK_00101dd0;
      plStack1024 = (long *)func_0x00101520(&UNK_001050dd);
      if (plStack1024 == (long *)0x0) goto code_r0x001021a1;
      puStack1000 = &UNK_00101de4;
      uVar5 = func_0x00101640(plStack1024);
      if ((int)uVar5 < 0) {
        puStack1000 = &UNK_00102021;
        iVar4 = func_0x00101580(&UNK_001050dd);
        if (iVar4 < 0) goto code_r0x001020dd;
        puStack1000 = &UNK_0010203f;
        uVar5 = func_0x00101670(1,&UNK_001050de,puStack960);
      }
      else {
        puStack1000 = &UNK_00101df5;
        iVar4 = func_0x001016e0((ulong)uVar5);
        if (iVar4 < 0) goto code_r0x001020dd;
        puStack1000 = &UNK_00101e0e;
        uVar5 = func_0x001016c0(1,(ulong)uVar5,puStack960);
      }
      uStack1008 = (ulong)(uVar5 >> 0x1f);
      puStack1000 = &UNK_00101e19;
      plStack1016 = (long *)func_0x001014b0();
      uVar3 = uStack784;
      if ((int)uVar5 < 0) goto code_r0x00102121;
      uVar13 = CONCAT44(uStack924,uStack928);
      uStack1008 = (ulong)(uStack784 != uVar13);
      do {
        while( true ) {
          *(uint *)plStack1016 = 0;
          do {
            puStack1000 = &UNK_00101e58;
            plVar17 = (long *)func_0x00101680(plStack1024);
            if (plVar17 == (long *)0x0) {
              uVar5 = *(uint *)plStack1016;
              uStack1008 = (ulong)uVar5;
              if (uVar5 != 0) {
                puStack1000 = &UNK_0010209c;
                func_0x00101600(plStack1024);
                *(uint *)plStack1016 = uVar5;
                goto code_r0x001020a0;
              }
              puStack1000 = &UNK_00101f7d;
              iVar4 = func_0x00101600(plStack1024);
              if (iVar4 != 0) goto code_r0x001020a0;
              puStack1000 = &UNK_00101f8f;
              uVar6 = nth_parent(lStack984);
              puStack1000 = &UNK_00101f97;
              plStack1024 = (long *)quote(uVar6);
              puStack1000 = &UNK_00101fad;
              uVar6 = func_0x00101540(0,&UNK_00105278,5);
              puStack1000 = &UNK_00101fc1;
              func_0x00101720(1,0,uVar6,plStack1024);
              goto code_r0x00101fc8;
            }
            unaff_R15 = (long)plVar17 + 0x13;
          } while ((*(char *)((long)plVar17 + 0x13) == '.') &&
                  ((cVar2 = *(char *)((long)plVar17 +
                                     (ulong)(*(char *)((long)plVar17 + 0x14) == '.') + 0x14),
                   cVar2 == '\0' || (cVar2 == '/'))));
          if ((*plVar17 != 0) && ((char)uStack1008 == '\0')) break;
code_r0x00101fc8:
          puStack1000 = &UNK_00101fd9;
          iVar4 = func_0x00101570(1,unaff_R15,plStack992);
          if (((-1 < iVar4) && (lStack632 == CONCAT44(uStack916,uStack920))) &&
             ((uVar3 == uVar13 || (lStack640 == CONCAT44(uStack924,uStack928)))))
          goto code_r0x00101e9e;
        }
      } while (*plVar17 != CONCAT44(uStack916,uStack920));
code_r0x00101e9e:
      puStack1000 = &UNK_00101ea6;
      uVar6 = func_0x00101560(unaff_R15);
      puStack1000 = &UNK_00101eb6;
      file_name_prepend(plStack952,unaff_R15,uVar6);
      puStack1000 = &UNK_00101ebe;
      plVar17 = plStack1024;
      iVar4 = func_0x00101600();
      if (iVar4 != 0) goto code_r0x001020a0;
      lStack984 = lStack976;
      uStack928 = (undefined4)uStack784;
      uStack924 = (undefined4)(uStack784 >> 0x20);
      uStack920 = (undefined4)uStack776;
      uStack916 = (undefined4)((ulong)uStack776 >> 0x20);
      uStack912 = SUB164(auStack768,0);
      uStack908 = SUB164(auStack768 >> 0x20,0);
      uStack904 = SUB164(auStack768 >> 0x40,0);
      uStack900 = SUB164(auStack768 >> 0x60,0);
      uStack896 = SUB164(auStack752,0);
      uStack892 = SUB164(auStack752 >> 0x20,0);
      uStack888 = SUB164(auStack752 >> 0x40,0);
      uStack884 = SUB164(auStack752 >> 0x60,0);
      uStack880 = SUB164(auStack736,0);
      uStack876 = SUB164(auStack736 >> 0x20,0);
      uStack872 = SUB164(auStack736 >> 0x40,0);
      uStack868 = SUB164(auStack736 >> 0x60,0);
      uStack864 = SUB164(auStack720,0);
      uStack860 = SUB164(auStack720 >> 0x20,0);
      uStack856 = SUB164(auStack720 >> 0x40,0);
      uStack852 = SUB164(auStack720 >> 0x60,0);
      uStack848 = SUB164(auStack704,0);
      uStack844 = SUB164(auStack704 >> 0x20,0);
      uStack840 = SUB164(auStack704 >> 0x40,0);
      uStack836 = SUB164(auStack704 >> 0x60,0);
      uStack832 = SUB164(auStack688,0);
      uStack828 = SUB164(auStack688 >> 0x20,0);
      uStack824 = SUB164(auStack688 >> 0x40,0);
      uStack820 = SUB164(auStack688 >> 0x60,0);
      uStack816 = SUB164(auStack672,0);
      uStack812 = SUB164(auStack672 >> 0x20,0);
      uStack808 = SUB164(auStack672 >> 0x40,0);
      uStack804 = SUB164(auStack672 >> 0x60,0);
      uStack800 = SUB164(auStack656,0);
      uStack796 = SUB164(auStack656 >> 0x20,0);
      uStack792 = SUB164(auStack656 >> 0x40,0);
      uStack788 = SUB164(auStack656 >> 0x60,0);
    } while( true );
  }
  goto code_r0x0010215e;
code_r0x001020a0:
  puStack1000 = &UNK_001020aa;
  uVar6 = nth_parent(lStack984);
  puStack1000 = &UNK_001020b2;
  uVar6 = quote(uVar6);
  puStack1000 = &UNK_001020c8;
  uVar9 = func_0x00101540(0,&UNK_0010510f,5);
  puStack1000 = &UNK_001020dd;
  func_0x00101720(1,(ulong)*(uint *)plStack1016,uVar9,uVar6);
code_r0x001020dd:
  puStack1000 = &UNK_001020e7;
  uVar6 = nth_parent(lStack984);
  puStack1000 = &UNK_001020ef;
  plStack1016 = (long *)quote(uVar6);
  puStack1000 = &UNK_00102105;
  uVar6 = func_0x00101540(0,&UNK_001050f9,5);
  puStack1000 = &UNK_0010210d;
  puVar10 = (uint *)func_0x001014b0();
  puStack1000 = &UNK_00102121;
  func_0x00101720(1,(ulong)*puVar10,uVar6,plStack1016);
code_r0x00102121:
  puStack1000 = &UNK_0010212b;
  uVar6 = nth_parent(lStack984);
  puStack1000 = &UNK_00102133;
  uVar6 = quote(uVar6);
  puStack1000 = &UNK_00102149;
  uVar9 = func_0x00101540(0,&UNK_001050cb,5);
  puStack1000 = &UNK_0010215e;
  func_0x00101720(1,(ulong)*(uint *)plStack1016,uVar9,uVar6);
code_r0x0010215e:
  puStack1000 = &UNK_0010216f;
  uVar6 = quotearg_style(4,&UNK_001050de);
  puStack1000 = &UNK_00102185;
  uVar9 = func_0x00101540(0,&UNK_001050cb,5);
  puStack1000 = &UNK_0010218d;
  puVar10 = (uint *)func_0x001014b0();
  puStack1000 = &UNK_001021a1;
  func_0x00101720(1,(ulong)*puVar10,uVar9,uVar6);
code_r0x001021a1:
  puStack1000 = &UNK_001021ab;
  uVar6 = nth_parent(lStack984);
  puStack1000 = &UNK_001021b3;
  uVar6 = quote(uVar6);
  puStack1000 = &UNK_001021c9;
  uVar9 = func_0x00101540(0,&UNK_001050e0,5);
  puStack1000 = &UNK_001021d1;
  puVar10 = (uint *)func_0x001014b0();
  puStack1000 = &UNK_001021e5;
  func_0x00101720(1,(ulong)*puVar10,uVar9,uVar6);
code_r0x001021e5:
  puStack1000 = &UNK_001021f6;
  plStack1016 = (long *)quotearg_style(4,&UNK_001055e6);
  puStack1000 = &UNK_0010220c;
  plStack1024 = (long *)func_0x00101540(0,&UNK_00105258,5);
  puStack1000 = &UNK_00102214;
  puVar10 = (uint *)func_0x001014b0();
  plVar17 = (long *)0x1;
  puStack1000 = &UNK_00102228;
  func_0x00101720(1,(ulong)*puVar10,plStack1024,plStack1016);
code_r0x00102228:
  puStack1000 = &UNK_0010222d;
  func_0x00101590();
  puVar15 = program_name;
  uVar6 = 5;
  uStack1040 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack1000 = (undefined *)uVar13;
  if ((int)plVar17 == 0) goto code_r0x0010228d;
  uVar6 = func_0x00101540(0,&UNK_001052b8,5);
  func_0x00101770(stderr,1,uVar6,puVar15);
  do {
    func_0x00101750((ulong)plVar17 & 0xffffffff);
    uVar6 = extraout_RDX_00;
code_r0x0010228d:
    uVar6 = func_0x00101540(0,&UNK_00105128,uVar6);
    func_0x00101710(1,uVar6,puVar15);
    uVar6 = stdout;
    uVar9 = func_0x00101540(0,&UNK_001052e0,5);
    func_0x00101620(uVar9,uVar6);
    uVar6 = stdout;
    uVar9 = func_0x00101540(0,&UNK_00105320,5);
    func_0x00101620(uVar9,uVar6);
    uVar6 = stdout;
    uVar9 = func_0x00101540(0,&UNK_00105390,5);
    func_0x00101620(uVar9,uVar6);
    uVar6 = stdout;
    uVar9 = func_0x00101540(0,&UNK_001053c0,5);
    func_0x00101620(uVar9,uVar6);
    uVar6 = stdout;
    uVar9 = func_0x00101540(0,&UNK_001053f8,5);
    func_0x00101620(uVar9,uVar6);
    uVar6 = func_0x00101540(0,&UNK_00105428,5);
    func_0x00101710(1,uVar6,&UNK_00105124);
    uStack1064 = 0;
    uStack1056 = 0;
    pbStack1160 = &UNK_0010513f;
    apbStack1144[4] = &UNK_00105180;
    puStack1152 = &UNK_00105141;
    puStack1096 = &UNK_0010518a;
    apbStack1144[0] = &UNK_001051b9;
    puStack1080 = &UNK_00105194;
    apbStack1144[1] = &UNK_00105151;
    apbStack1144[2] = &UNK_00105167;
    apbStack1144[3] = &UNK_00105171;
    puStack1104 = &UNK_00105171;
    puStack1088 = &UNK_00105171;
    puStack1072 = &UNK_00105171;
    ppbVar14 = &pbStack1160;
    do {
      ppbVar14 = ppbVar14;
      ppbVar14 = ppbVar14 + 2;
      pbVar18 = *ppbVar14;
      bVar19 = false;
      bVar20 = pbVar18 == (byte *)0x0;
      if (bVar20) break;
      lVar7 = 4;
      pbVar16 = &UNK_00105124;
      do {
        if (lVar7 == 0) break;
        lVar7 = lVar7 + -1;
        bVar19 = *pbVar16 < *pbVar18;
        bVar20 = *pbVar16 == *pbVar18;
        pbVar16 = pbVar16 + (ulong)bVar21 * -2 + 1;
        pbVar18 = pbVar18 + (ulong)bVar21 * -2 + 1;
      } while (bVar20);
    } while ((!bVar19 && !bVar20) != bVar19);
    pbVar18 = ppbVar14[3];
    if (pbVar18 == (byte *)0x0) {
      uVar6 = func_0x00101540(0,&UNK_0010519e,5);
      func_0x00101710(1,uVar6,&UNK_001051b5,&UNK_001054e8);
      lVar7 = func_0x00101700(5,0);
      if ((lVar7 != 0) && (iVar4 = func_0x001014c0(lVar7,&UNK_001051c3,3), iVar4 != 0)) {
        pbVar18 = &UNK_00105124;
        goto code_r0x001025b8;
      }
      pbVar18 = &UNK_00105124;
      puVar15 = &UNK_0010515b;
      uVar6 = func_0x00101540(0,&UNK_001051c7,5);
      func_0x00101710(1,uVar6,&UNK_001054e8,&UNK_00105124);
    }
    else {
      uVar6 = func_0x00101540(0,&UNK_0010519e,5);
      func_0x00101710(1,uVar6,&UNK_001051b5,&UNK_001054e8);
      lVar7 = func_0x00101700(5,0);
      if ((lVar7 != 0) && (iVar4 = func_0x001014c0(lVar7,&UNK_001051c3,3), iVar4 != 0)) {
code_r0x001025b8:
        uVar6 = stdout;
        uVar9 = func_0x00101540(0,&UNK_00105510,5);
        func_0x00101620(uVar9,uVar6);
      }
      uVar6 = func_0x00101540(0,&UNK_001051c7,5);
      func_0x00101710(1,uVar6,&UNK_001054e8,&UNK_00105124);
      puVar15 = &UNK_0010513e;
      if (pbVar18 == &UNK_00105124) {
        puVar15 = &UNK_0010515b;
      }
    }
    uVar6 = func_0x00101540(0,&UNK_00105558,5);
    func_0x00101710(1,uVar6,pbVar18,puVar15);
  } while( true );
}

