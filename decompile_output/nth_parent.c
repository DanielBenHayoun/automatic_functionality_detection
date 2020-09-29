
/* WARNING: Possible PIC construction at 0x00101caf: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00101cb4) */

void nth_parent(long *param_1,long param_2)

{
  undefined2 *puVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  ulong extraout_RDX;
  ulong uVar12;
  undefined8 extraout_RDX_00;
  byte **ppbVar13;
  undefined *puVar14;
  byte *pbVar15;
  long *plVar16;
  byte *pbVar17;
  long unaff_R15;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte *pbStack832;
  undefined *puStack824;
  byte *apbStack816 [5];
  undefined *puStack776;
  undefined *puStack768;
  undefined *puStack760;
  undefined *puStack752;
  undefined *puStack744;
  undefined8 uStack736;
  undefined8 uStack728;
  undefined8 uStack712;
  long *plStack696;
  long *plStack688;
  ulong uStack680;
  undefined *puStack672;
  long *plStack664;
  long lStack656;
  long lStack648;
  long *plStack640;
  ulong *puStack632;
  long *plStack624;
  undefined auStack616 [16];
  undefined4 uStack600;
  undefined4 uStack596;
  undefined4 uStack592;
  undefined4 uStack588;
  undefined4 uStack584;
  undefined4 uStack580;
  undefined4 uStack576;
  undefined4 uStack572;
  undefined4 uStack568;
  undefined4 uStack564;
  undefined4 uStack560;
  undefined4 uStack556;
  undefined4 uStack552;
  undefined4 uStack548;
  undefined4 uStack544;
  undefined4 uStack540;
  undefined4 uStack536;
  undefined4 uStack532;
  undefined4 uStack528;
  undefined4 uStack524;
  undefined4 uStack520;
  undefined4 uStack516;
  undefined4 uStack512;
  undefined4 uStack508;
  undefined4 uStack504;
  undefined4 uStack500;
  undefined4 uStack496;
  undefined4 uStack492;
  undefined4 uStack488;
  undefined4 uStack484;
  undefined4 uStack480;
  undefined4 uStack476;
  undefined4 uStack472;
  undefined4 uStack468;
  undefined4 uStack464;
  undefined4 uStack460;
  ulong uStack456;
  undefined8 uStack448;
  undefined auStack440 [16];
  undefined auStack424 [16];
  undefined auStack408 [16];
  undefined auStack392 [16];
  undefined auStack376 [16];
  undefined auStack360 [16];
  undefined auStack344 [16];
  undefined auStack328 [16];
  long lStack312;
  long lStack304;
  long lStack160;
  long *plStack144;
  long *plStack136;
  ulong uStack128;
  ulong uStack120;
  long lStack112;
  long lStack88;
  long *plStack64;
  
  bVar20 = 0;
  if (SUB168(ZEXT816(3) * ZEXT816(param_1) >> 0x40,0) == 0) {
    puVar10 = (undefined2 *)xmalloc((long)param_1 * 3);
    if (param_1 == (long *)0x0) {
      *(undefined *)((long)puVar10 + -1) = 0;
      return;
    }
    puVar1 = (undefined2 *)((long)puVar10 + (long)param_1 * 3);
    do {
      *(undefined *)(puVar10 + 1) = 0x2f;
      puVar11 = (undefined2 *)((long)puVar10 + 3);
      *puVar10 = 0x2e2e;
      puVar10 = puVar11;
    } while (puVar11 != puVar1);
    *(undefined *)((long)puVar1 + -1) = 0;
    return;
  }
  plStack696 = param_1;
  xalloc_die();
  plStack64 = param_1;
  uStack680 = plStack696[2] - *plStack696;
  if (extraout_RDX + 1 <= uStack680) {
    puVar14 = (undefined *)(plStack696[2] + ~extraout_RDX);
    *(undefined **)(plStack696 + 2) = puVar14;
    *puVar14 = 0x2f;
    lVar6 = plStack696[2] + 1;
    uVar12 = extraout_RDX;
code_r0x00101650:
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_memcpy_00307f08)(lVar6,param_2,uVar12);
    return;
  }
  plStack624 = (long *)(extraout_RDX + 1 + plStack696[1]);
  if (SUB168(ZEXT816(2) * ZEXT816(plStack624) >> 0x40,0) == 0) {
    lVar6 = xmalloc((long)plStack624 * 2);
    uVar12 = plStack696[1] - uStack680;
    param_2 = *plStack696 + uStack680;
    lStack88 = *plStack696;
    lVar6 = ((long)plStack624 * 2 - uVar12) + lVar6;
    plStack696[2] = lVar6;
    goto code_r0x00101650;
  }
  xalloc_die();
  lStack160 = *(long *)(in_FS_OFFSET + 0x28);
  puStack672 = &UNK_00101d43;
  plStack144 = plStack696;
  plStack136 = param_1;
  uStack128 = uStack680;
  uStack120 = extraout_RDX;
  lStack112 = param_2;
  plStack640 = (long *)get_root_dev_ino(auStack616);
  uVar12 = extraout_RDX;
  if (plStack640 == (long *)0x0) goto code_r0x001021e5;
  plVar16 = (long *)0x1;
  puStack672 = &UNK_00101d67;
  iVar4 = func_0x00101670(1,&UNK_001050de,&uStack600);
  if (-1 < iVar4) {
    puStack632 = &uStack456;
    lStack656 = 1;
    plStack664 = &lStack312;
    do {
      if ((CONCAT44(uStack588,uStack592) == *plStack640) &&
         (CONCAT44(uStack596,uStack600) == plStack640[1])) {
        if (*(char *)plStack624[2] == '\0') {
          puStack672 = &UNK_0010206b;
          plVar16 = plStack624;
          file_name_prepend(plStack624,&UNK_0010513e,0);
        }
        if (lStack160 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto code_r0x00102228;
      }
      lStack648 = lStack656 + 1;
      puStack672 = &UNK_00101dd0;
      plStack696 = (long *)func_0x00101520(&UNK_001050dd);
      if (plStack696 == (long *)0x0) goto code_r0x001021a1;
      puStack672 = &UNK_00101de4;
      uVar5 = func_0x00101640(plStack696);
      if ((int)uVar5 < 0) {
        puStack672 = &UNK_00102021;
        iVar4 = func_0x00101580(&UNK_001050dd);
        if (iVar4 < 0) goto code_r0x001020dd;
        puStack672 = &UNK_0010203f;
        uVar5 = func_0x00101670(1,&UNK_001050de,puStack632);
      }
      else {
        puStack672 = &UNK_00101df5;
        iVar4 = func_0x001016e0((ulong)uVar5);
        if (iVar4 < 0) goto code_r0x001020dd;
        puStack672 = &UNK_00101e0e;
        uVar5 = func_0x001016c0(1,(ulong)uVar5,puStack632);
      }
      uStack680 = (ulong)(uVar5 >> 0x1f);
      puStack672 = &UNK_00101e19;
      param_1 = (long *)func_0x001014b0();
      uVar3 = uStack456;
      if ((int)uVar5 < 0) goto code_r0x00102121;
      uVar12 = CONCAT44(uStack596,uStack600);
      uStack680 = (ulong)(uStack456 != uVar12);
      do {
        while( true ) {
          *(uint *)param_1 = 0;
          do {
            puStack672 = &UNK_00101e58;
            plVar16 = (long *)func_0x00101680(plStack696);
            if (plVar16 == (long *)0x0) {
              uVar5 = *(uint *)param_1;
              uStack680 = (ulong)uVar5;
              if (uVar5 != 0) {
                puStack672 = &UNK_0010209c;
                func_0x00101600(plStack696);
                *(uint *)param_1 = uVar5;
                goto code_r0x001020a0;
              }
              puStack672 = &UNK_00101f7d;
              iVar4 = func_0x00101600(plStack696);
              if (iVar4 != 0) goto code_r0x001020a0;
              puStack672 = &UNK_00101f8f;
              uVar7 = nth_parent(lStack656);
              puStack672 = &UNK_00101f97;
              plStack696 = (long *)quote(uVar7);
              puStack672 = &UNK_00101fad;
              uVar7 = func_0x00101540(0,&UNK_00105278,5);
              puStack672 = &UNK_00101fc1;
              func_0x00101720(1,0,uVar7,plStack696);
              goto code_r0x00101fc8;
            }
            unaff_R15 = (long)plVar16 + 0x13;
          } while ((*(char *)((long)plVar16 + 0x13) == '.') &&
                  ((cVar2 = *(char *)((long)plVar16 +
                                     (ulong)(*(char *)((long)plVar16 + 0x14) == '.') + 0x14),
                   cVar2 == '\0' || (cVar2 == '/'))));
          if ((*plVar16 != 0) && ((char)uStack680 == '\0')) break;
code_r0x00101fc8:
          puStack672 = &UNK_00101fd9;
          iVar4 = func_0x00101570(1,unaff_R15,plStack664);
          if (((-1 < iVar4) && (lStack304 == CONCAT44(uStack588,uStack592))) &&
             ((uVar3 == uVar12 || (lStack312 == CONCAT44(uStack596,uStack600)))))
          goto code_r0x00101e9e;
        }
      } while (*plVar16 != CONCAT44(uStack588,uStack592));
code_r0x00101e9e:
      puStack672 = &UNK_00101ea6;
      uVar7 = func_0x00101560(unaff_R15);
      puStack672 = &UNK_00101eb6;
      file_name_prepend(plStack624,unaff_R15,uVar7);
      puStack672 = &UNK_00101ebe;
      plVar16 = plStack696;
      iVar4 = func_0x00101600();
      if (iVar4 != 0) goto code_r0x001020a0;
      lStack656 = lStack648;
      uStack600 = (undefined4)uStack456;
      uStack596 = (undefined4)(uStack456 >> 0x20);
      uStack592 = (undefined4)uStack448;
      uStack588 = (undefined4)((ulong)uStack448 >> 0x20);
      uStack584 = SUB164(auStack440,0);
      uStack580 = SUB164(auStack440 >> 0x20,0);
      uStack576 = SUB164(auStack440 >> 0x40,0);
      uStack572 = SUB164(auStack440 >> 0x60,0);
      uStack568 = SUB164(auStack424,0);
      uStack564 = SUB164(auStack424 >> 0x20,0);
      uStack560 = SUB164(auStack424 >> 0x40,0);
      uStack556 = SUB164(auStack424 >> 0x60,0);
      uStack552 = SUB164(auStack408,0);
      uStack548 = SUB164(auStack408 >> 0x20,0);
      uStack544 = SUB164(auStack408 >> 0x40,0);
      uStack540 = SUB164(auStack408 >> 0x60,0);
      uStack536 = SUB164(auStack392,0);
      uStack532 = SUB164(auStack392 >> 0x20,0);
      uStack528 = SUB164(auStack392 >> 0x40,0);
      uStack524 = SUB164(auStack392 >> 0x60,0);
      uStack520 = SUB164(auStack376,0);
      uStack516 = SUB164(auStack376 >> 0x20,0);
      uStack512 = SUB164(auStack376 >> 0x40,0);
      uStack508 = SUB164(auStack376 >> 0x60,0);
      uStack504 = SUB164(auStack360,0);
      uStack500 = SUB164(auStack360 >> 0x20,0);
      uStack496 = SUB164(auStack360 >> 0x40,0);
      uStack492 = SUB164(auStack360 >> 0x60,0);
      uStack488 = SUB164(auStack344,0);
      uStack484 = SUB164(auStack344 >> 0x20,0);
      uStack480 = SUB164(auStack344 >> 0x40,0);
      uStack476 = SUB164(auStack344 >> 0x60,0);
      uStack472 = SUB164(auStack328,0);
      uStack468 = SUB164(auStack328 >> 0x20,0);
      uStack464 = SUB164(auStack328 >> 0x40,0);
      uStack460 = SUB164(auStack328 >> 0x60,0);
    } while( true );
  }
  goto code_r0x0010215e;
code_r0x001020a0:
  puStack672 = &UNK_001020aa;
  uVar7 = nth_parent(lStack656);
  puStack672 = &UNK_001020b2;
  uVar7 = quote(uVar7);
  puStack672 = &UNK_001020c8;
  uVar8 = func_0x00101540(0,&UNK_0010510f,5);
  puStack672 = &UNK_001020dd;
  func_0x00101720(1,(ulong)*(uint *)param_1,uVar8,uVar7);
code_r0x001020dd:
  puStack672 = &UNK_001020e7;
  uVar7 = nth_parent(lStack656);
  puStack672 = &UNK_001020ef;
  param_1 = (long *)quote(uVar7);
  puStack672 = &UNK_00102105;
  uVar7 = func_0x00101540(0,&UNK_001050f9,5);
  puStack672 = &UNK_0010210d;
  puVar9 = (uint *)func_0x001014b0();
  puStack672 = &UNK_00102121;
  func_0x00101720(1,(ulong)*puVar9,uVar7,param_1);
code_r0x00102121:
  puStack672 = &UNK_0010212b;
  uVar7 = nth_parent(lStack656);
  puStack672 = &UNK_00102133;
  uVar7 = quote(uVar7);
  puStack672 = &UNK_00102149;
  uVar8 = func_0x00101540(0,&UNK_001050cb,5);
  puStack672 = &UNK_0010215e;
  func_0x00101720(1,(ulong)*(uint *)param_1,uVar8,uVar7);
code_r0x0010215e:
  puStack672 = &UNK_0010216f;
  uVar7 = quotearg_style(4,&UNK_001050de);
  puStack672 = &UNK_00102185;
  uVar8 = func_0x00101540(0,&UNK_001050cb,5);
  puStack672 = &UNK_0010218d;
  puVar9 = (uint *)func_0x001014b0();
  puStack672 = &UNK_001021a1;
  func_0x00101720(1,(ulong)*puVar9,uVar8,uVar7);
code_r0x001021a1:
  puStack672 = &UNK_001021ab;
  uVar7 = nth_parent(lStack656);
  puStack672 = &UNK_001021b3;
  uVar7 = quote(uVar7);
  puStack672 = &UNK_001021c9;
  uVar8 = func_0x00101540(0,&UNK_001050e0,5);
  puStack672 = &UNK_001021d1;
  puVar9 = (uint *)func_0x001014b0();
  puStack672 = &UNK_001021e5;
  func_0x00101720(1,(ulong)*puVar9,uVar8,uVar7);
code_r0x001021e5:
  puStack672 = &UNK_001021f6;
  param_1 = (long *)quotearg_style(4,&UNK_001055e6);
  puStack672 = &UNK_0010220c;
  plStack696 = (long *)func_0x00101540(0,&UNK_00105258,5);
  puStack672 = &UNK_00102214;
  puVar9 = (uint *)func_0x001014b0();
  plVar16 = (long *)0x1;
  puStack672 = &UNK_00102228;
  func_0x00101720(1,(ulong)*puVar9,plStack696,param_1);
code_r0x00102228:
  puStack672 = &UNK_0010222d;
  func_0x00101590();
  puVar14 = program_name;
  uVar7 = 5;
  uStack712 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  plStack688 = param_1;
  puStack672 = (undefined *)uVar12;
  if ((int)plVar16 == 0) goto code_r0x0010228d;
  uVar7 = func_0x00101540(0,&UNK_001052b8,5);
  func_0x00101770(stderr,1,uVar7,puVar14);
  do {
    func_0x00101750((ulong)plVar16 & 0xffffffff);
    uVar7 = extraout_RDX_00;
code_r0x0010228d:
    uVar7 = func_0x00101540(0,&UNK_00105128,uVar7);
    func_0x00101710(1,uVar7,puVar14);
    uVar7 = stdout;
    uVar8 = func_0x00101540(0,&UNK_001052e0,5);
    func_0x00101620(uVar8,uVar7);
    uVar7 = stdout;
    uVar8 = func_0x00101540(0,&UNK_00105320,5);
    func_0x00101620(uVar8,uVar7);
    uVar7 = stdout;
    uVar8 = func_0x00101540(0,&UNK_00105390,5);
    func_0x00101620(uVar8,uVar7);
    uVar7 = stdout;
    uVar8 = func_0x00101540(0,&UNK_001053c0,5);
    func_0x00101620(uVar8,uVar7);
    uVar7 = stdout;
    uVar8 = func_0x00101540(0,&UNK_001053f8,5);
    func_0x00101620(uVar8,uVar7);
    uVar7 = func_0x00101540(0,&UNK_00105428,5);
    func_0x00101710(1,uVar7,&UNK_00105124);
    uStack736 = 0;
    uStack728 = 0;
    pbStack832 = &UNK_0010513f;
    apbStack816[4] = &UNK_00105180;
    puStack824 = &UNK_00105141;
    puStack768 = &UNK_0010518a;
    apbStack816[0] = &UNK_001051b9;
    puStack752 = &UNK_00105194;
    apbStack816[1] = &UNK_00105151;
    apbStack816[2] = &UNK_00105167;
    apbStack816[3] = &UNK_00105171;
    puStack776 = &UNK_00105171;
    puStack760 = &UNK_00105171;
    puStack744 = &UNK_00105171;
    ppbVar13 = &pbStack832;
    do {
      ppbVar13 = ppbVar13;
      ppbVar13 = ppbVar13 + 2;
      pbVar17 = *ppbVar13;
      bVar18 = false;
      bVar19 = pbVar17 == (byte *)0x0;
      if (bVar19) break;
      lVar6 = 4;
      pbVar15 = &UNK_00105124;
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar18 = *pbVar15 < *pbVar17;
        bVar19 = *pbVar15 == *pbVar17;
        pbVar15 = pbVar15 + (ulong)bVar20 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar20 * -2 + 1;
      } while (bVar19);
    } while ((!bVar18 && !bVar19) != bVar18);
    pbVar17 = ppbVar13[3];
    if (pbVar17 == (byte *)0x0) {
      uVar7 = func_0x00101540(0,&UNK_0010519e,5);
      func_0x00101710(1,uVar7,&UNK_001051b5,&UNK_001054e8);
      lVar6 = func_0x00101700(5,0);
      if ((lVar6 != 0) && (iVar4 = func_0x001014c0(lVar6,&UNK_001051c3,3), iVar4 != 0)) {
        pbVar17 = &UNK_00105124;
        goto code_r0x001025b8;
      }
      pbVar17 = &UNK_00105124;
      puVar14 = &UNK_0010515b;
      uVar7 = func_0x00101540(0,&UNK_001051c7,5);
      func_0x00101710(1,uVar7,&UNK_001054e8,&UNK_00105124);
    }
    else {
      uVar7 = func_0x00101540(0,&UNK_0010519e,5);
      func_0x00101710(1,uVar7,&UNK_001051b5,&UNK_001054e8);
      lVar6 = func_0x00101700(5,0);
      if ((lVar6 != 0) && (iVar4 = func_0x001014c0(lVar6,&UNK_001051c3,3), iVar4 != 0)) {
code_r0x001025b8:
        uVar7 = stdout;
        uVar8 = func_0x00101540(0,&UNK_00105510,5);
        func_0x00101620(uVar8,uVar7);
      }
      uVar7 = func_0x00101540(0,&UNK_001051c7,5);
      func_0x00101710(1,uVar7,&UNK_001054e8,&UNK_00105124);
      puVar14 = &UNK_0010513e;
      if (pbVar17 == &UNK_00105124) {
        puVar14 = &UNK_0010515b;
      }
    }
    uVar7 = func_0x00101540(0,&UNK_00105558,5);
    func_0x00101710(1,uVar7,pbVar17,puVar14);
  } while( true );
}

