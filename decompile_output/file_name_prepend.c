
/* WARNING: Possible PIC construction at 0x00101caf: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00101cb4) */

void file_name_prepend(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  undefined8 extraout_RDX;
  byte **ppbVar9;
  undefined *puVar10;
  uint *unaff_RBP;
  byte *pbVar11;
  long *plVar12;
  byte *pbVar13;
  long unaff_R15;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte *pbStack808;
  undefined *puStack800;
  byte *apbStack792 [5];
  undefined *puStack752;
  undefined *puStack744;
  undefined *puStack736;
  undefined *puStack728;
  undefined *puStack720;
  undefined8 uStack712;
  undefined8 uStack704;
  undefined8 uStack688;
  long *plStack672;
  uint *puStack664;
  ulong uStack656;
  undefined *puStack648;
  long *plStack640;
  long lStack632;
  long lStack624;
  long *plStack616;
  ulong *puStack608;
  long *plStack600;
  undefined auStack592 [16];
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
  undefined4 uStack456;
  undefined4 uStack452;
  undefined4 uStack448;
  undefined4 uStack444;
  undefined4 uStack440;
  undefined4 uStack436;
  ulong uStack432;
  undefined8 uStack424;
  undefined auStack416 [16];
  undefined auStack400 [16];
  undefined auStack384 [16];
  undefined auStack368 [16];
  undefined auStack352 [16];
  undefined auStack336 [16];
  undefined auStack320 [16];
  undefined auStack304 [16];
  long lStack288;
  long lStack280;
  long lStack136;
  long *plStack120;
  ulong uStack104;
  ulong uStack96;
  long lStack88;
  long lStack64;
  
  bVar16 = 0;
  uStack656 = param_1[2] - *param_1;
  if (param_3 + 1 <= uStack656) {
    puVar10 = (undefined *)(param_1[2] + ~param_3);
    *(undefined **)(param_1 + 2) = puVar10;
    *puVar10 = 0x2f;
    lVar5 = param_1[2] + 1;
code_r0x00101650:
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_memcpy_00307f08)(lVar5,param_2,param_3);
    return;
  }
  plStack600 = (long *)(param_3 + 1 + param_1[1]);
  if (SUB168(ZEXT816(2) * ZEXT816(plStack600) >> 0x40,0) == 0) {
    lVar5 = xmalloc((long)plStack600 * 2);
    param_3 = param_1[1] - uStack656;
    param_2 = *param_1 + uStack656;
    lStack64 = *param_1;
    lVar5 = ((long)plStack600 * 2 - param_3) + lVar5;
    param_1[2] = lVar5;
    goto code_r0x00101650;
  }
  xalloc_die();
  lStack136 = *(long *)(in_FS_OFFSET + 0x28);
  puStack648 = &UNK_00101d43;
  plStack120 = param_1;
  uStack104 = uStack656;
  uStack96 = param_3;
  lStack88 = param_2;
  plStack616 = (long *)get_root_dev_ino(auStack592);
  if (plStack616 == (long *)0x0) goto code_r0x001021e5;
  plVar12 = (long *)0x1;
  puStack648 = &UNK_00101d67;
  iVar3 = func_0x00101670(1,&UNK_001050de,&uStack576);
  if (-1 < iVar3) {
    puStack608 = &uStack432;
    lStack632 = 1;
    plStack640 = &lStack288;
    do {
      if ((CONCAT44(uStack564,uStack568) == *plStack616) &&
         (CONCAT44(uStack572,uStack576) == plStack616[1])) {
        if (*(char *)plStack600[2] == '\0') {
          puStack648 = &UNK_0010206b;
          plVar12 = plStack600;
          file_name_prepend(plStack600,&UNK_0010513e,0);
        }
        if (lStack136 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto code_r0x00102228;
      }
      lStack624 = lStack632 + 1;
      puStack648 = &UNK_00101dd0;
      param_1 = (long *)func_0x00101520(&UNK_001050dd);
      if (param_1 == (long *)0x0) goto code_r0x001021a1;
      puStack648 = &UNK_00101de4;
      uVar4 = func_0x00101640(param_1);
      if ((int)uVar4 < 0) {
        puStack648 = &UNK_00102021;
        iVar3 = func_0x00101580(&UNK_001050dd);
        if (iVar3 < 0) goto code_r0x001020dd;
        puStack648 = &UNK_0010203f;
        uVar4 = func_0x00101670(1,&UNK_001050de,puStack608);
      }
      else {
        puStack648 = &UNK_00101df5;
        iVar3 = func_0x001016e0((ulong)uVar4);
        if (iVar3 < 0) goto code_r0x001020dd;
        puStack648 = &UNK_00101e0e;
        uVar4 = func_0x001016c0(1,(ulong)uVar4,puStack608);
      }
      uStack656 = (ulong)(uVar4 >> 0x1f);
      puStack648 = &UNK_00101e19;
      unaff_RBP = (uint *)func_0x001014b0();
      uVar2 = uStack432;
      if ((int)uVar4 < 0) goto code_r0x00102121;
      param_3 = CONCAT44(uStack572,uStack576);
      uStack656 = (ulong)(uStack432 != param_3);
      do {
        while( true ) {
          *unaff_RBP = 0;
          do {
            puStack648 = &UNK_00101e58;
            plVar12 = (long *)func_0x00101680(param_1);
            if (plVar12 == (long *)0x0) {
              uVar4 = *unaff_RBP;
              uStack656 = (ulong)uVar4;
              if (uVar4 != 0) {
                puStack648 = &UNK_0010209c;
                func_0x00101600(param_1);
                *unaff_RBP = uVar4;
                goto code_r0x001020a0;
              }
              puStack648 = &UNK_00101f7d;
              iVar3 = func_0x00101600(param_1);
              if (iVar3 != 0) goto code_r0x001020a0;
              puStack648 = &UNK_00101f8f;
              uVar6 = nth_parent(lStack632);
              puStack648 = &UNK_00101f97;
              param_1 = (long *)quote(uVar6);
              puStack648 = &UNK_00101fad;
              uVar6 = func_0x00101540(0,&UNK_00105278,5);
              puStack648 = &UNK_00101fc1;
              func_0x00101720(1,0,uVar6,param_1);
              goto code_r0x00101fc8;
            }
            unaff_R15 = (long)plVar12 + 0x13;
          } while ((*(char *)((long)plVar12 + 0x13) == '.') &&
                  ((cVar1 = *(char *)((long)plVar12 +
                                     (ulong)(*(char *)((long)plVar12 + 0x14) == '.') + 0x14),
                   cVar1 == '\0' || (cVar1 == '/'))));
          if ((*plVar12 != 0) && ((char)uStack656 == '\0')) break;
code_r0x00101fc8:
          puStack648 = &UNK_00101fd9;
          iVar3 = func_0x00101570(1,unaff_R15,plStack640);
          if (((-1 < iVar3) && (lStack280 == CONCAT44(uStack564,uStack568))) &&
             ((uVar2 == param_3 || (lStack288 == CONCAT44(uStack572,uStack576)))))
          goto code_r0x00101e9e;
        }
      } while (*plVar12 != CONCAT44(uStack564,uStack568));
code_r0x00101e9e:
      puStack648 = &UNK_00101ea6;
      uVar6 = func_0x00101560(unaff_R15);
      puStack648 = &UNK_00101eb6;
      file_name_prepend(plStack600,unaff_R15,uVar6);
      puStack648 = &UNK_00101ebe;
      plVar12 = param_1;
      iVar3 = func_0x00101600();
      if (iVar3 != 0) goto code_r0x001020a0;
      lStack632 = lStack624;
      uStack576 = (undefined4)uStack432;
      uStack572 = (undefined4)(uStack432 >> 0x20);
      uStack568 = (undefined4)uStack424;
      uStack564 = (undefined4)((ulong)uStack424 >> 0x20);
      uStack560 = SUB164(auStack416,0);
      uStack556 = SUB164(auStack416 >> 0x20,0);
      uStack552 = SUB164(auStack416 >> 0x40,0);
      uStack548 = SUB164(auStack416 >> 0x60,0);
      uStack544 = SUB164(auStack400,0);
      uStack540 = SUB164(auStack400 >> 0x20,0);
      uStack536 = SUB164(auStack400 >> 0x40,0);
      uStack532 = SUB164(auStack400 >> 0x60,0);
      uStack528 = SUB164(auStack384,0);
      uStack524 = SUB164(auStack384 >> 0x20,0);
      uStack520 = SUB164(auStack384 >> 0x40,0);
      uStack516 = SUB164(auStack384 >> 0x60,0);
      uStack512 = SUB164(auStack368,0);
      uStack508 = SUB164(auStack368 >> 0x20,0);
      uStack504 = SUB164(auStack368 >> 0x40,0);
      uStack500 = SUB164(auStack368 >> 0x60,0);
      uStack496 = SUB164(auStack352,0);
      uStack492 = SUB164(auStack352 >> 0x20,0);
      uStack488 = SUB164(auStack352 >> 0x40,0);
      uStack484 = SUB164(auStack352 >> 0x60,0);
      uStack480 = SUB164(auStack336,0);
      uStack476 = SUB164(auStack336 >> 0x20,0);
      uStack472 = SUB164(auStack336 >> 0x40,0);
      uStack468 = SUB164(auStack336 >> 0x60,0);
      uStack464 = SUB164(auStack320,0);
      uStack460 = SUB164(auStack320 >> 0x20,0);
      uStack456 = SUB164(auStack320 >> 0x40,0);
      uStack452 = SUB164(auStack320 >> 0x60,0);
      uStack448 = SUB164(auStack304,0);
      uStack444 = SUB164(auStack304 >> 0x20,0);
      uStack440 = SUB164(auStack304 >> 0x40,0);
      uStack436 = SUB164(auStack304 >> 0x60,0);
    } while( true );
  }
  goto code_r0x0010215e;
code_r0x001020a0:
  puStack648 = &UNK_001020aa;
  uVar6 = nth_parent(lStack632);
  puStack648 = &UNK_001020b2;
  uVar6 = quote(uVar6);
  puStack648 = &UNK_001020c8;
  uVar7 = func_0x00101540(0,&UNK_0010510f,5);
  puStack648 = &UNK_001020dd;
  func_0x00101720(1,(ulong)*unaff_RBP,uVar7,uVar6);
code_r0x001020dd:
  puStack648 = &UNK_001020e7;
  uVar6 = nth_parent(lStack632);
  puStack648 = &UNK_001020ef;
  unaff_RBP = (uint *)quote(uVar6);
  puStack648 = &UNK_00102105;
  uVar6 = func_0x00101540(0,&UNK_001050f9,5);
  puStack648 = &UNK_0010210d;
  puVar8 = (uint *)func_0x001014b0();
  puStack648 = &UNK_00102121;
  func_0x00101720(1,(ulong)*puVar8,uVar6,unaff_RBP);
code_r0x00102121:
  puStack648 = &UNK_0010212b;
  uVar6 = nth_parent(lStack632);
  puStack648 = &UNK_00102133;
  uVar6 = quote(uVar6);
  puStack648 = &UNK_00102149;
  uVar7 = func_0x00101540(0,&UNK_001050cb,5);
  puStack648 = &UNK_0010215e;
  func_0x00101720(1,(ulong)*unaff_RBP,uVar7,uVar6);
code_r0x0010215e:
  puStack648 = &UNK_0010216f;
  uVar6 = quotearg_style(4,&UNK_001050de);
  puStack648 = &UNK_00102185;
  uVar7 = func_0x00101540(0,&UNK_001050cb,5);
  puStack648 = &UNK_0010218d;
  puVar8 = (uint *)func_0x001014b0();
  puStack648 = &UNK_001021a1;
  func_0x00101720(1,(ulong)*puVar8,uVar7,uVar6);
code_r0x001021a1:
  puStack648 = &UNK_001021ab;
  uVar6 = nth_parent(lStack632);
  puStack648 = &UNK_001021b3;
  uVar6 = quote(uVar6);
  puStack648 = &UNK_001021c9;
  uVar7 = func_0x00101540(0,&UNK_001050e0,5);
  puStack648 = &UNK_001021d1;
  puVar8 = (uint *)func_0x001014b0();
  puStack648 = &UNK_001021e5;
  func_0x00101720(1,(ulong)*puVar8,uVar7,uVar6);
code_r0x001021e5:
  puStack648 = &UNK_001021f6;
  unaff_RBP = (uint *)quotearg_style(4,&UNK_001055e6);
  puStack648 = &UNK_0010220c;
  param_1 = (long *)func_0x00101540(0,&UNK_00105258,5);
  puStack648 = &UNK_00102214;
  puVar8 = (uint *)func_0x001014b0();
  plVar12 = (long *)0x1;
  puStack648 = &UNK_00102228;
  func_0x00101720(1,(ulong)*puVar8,param_1,unaff_RBP);
code_r0x00102228:
  puStack648 = &UNK_0010222d;
  func_0x00101590();
  puVar10 = program_name;
  uVar6 = 5;
  uStack688 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  plStack672 = param_1;
  puStack664 = unaff_RBP;
  puStack648 = (undefined *)param_3;
  if ((int)plVar12 == 0) goto code_r0x0010228d;
  uVar6 = func_0x00101540(0,&UNK_001052b8,5);
  func_0x00101770(stderr,1,uVar6,puVar10);
  do {
    func_0x00101750((ulong)plVar12 & 0xffffffff);
    uVar6 = extraout_RDX;
code_r0x0010228d:
    uVar6 = func_0x00101540(0,&UNK_00105128,uVar6);
    func_0x00101710(1,uVar6,puVar10);
    uVar6 = stdout;
    uVar7 = func_0x00101540(0,&UNK_001052e0,5);
    func_0x00101620(uVar7,uVar6);
    uVar6 = stdout;
    uVar7 = func_0x00101540(0,&UNK_00105320,5);
    func_0x00101620(uVar7,uVar6);
    uVar6 = stdout;
    uVar7 = func_0x00101540(0,&UNK_00105390,5);
    func_0x00101620(uVar7,uVar6);
    uVar6 = stdout;
    uVar7 = func_0x00101540(0,&UNK_001053c0,5);
    func_0x00101620(uVar7,uVar6);
    uVar6 = stdout;
    uVar7 = func_0x00101540(0,&UNK_001053f8,5);
    func_0x00101620(uVar7,uVar6);
    uVar6 = func_0x00101540(0,&UNK_00105428,5);
    func_0x00101710(1,uVar6,&UNK_00105124);
    uStack712 = 0;
    uStack704 = 0;
    pbStack808 = &UNK_0010513f;
    apbStack792[4] = &UNK_00105180;
    puStack800 = &UNK_00105141;
    puStack744 = &UNK_0010518a;
    apbStack792[0] = &UNK_001051b9;
    puStack728 = &UNK_00105194;
    apbStack792[1] = &UNK_00105151;
    apbStack792[2] = &UNK_00105167;
    apbStack792[3] = &UNK_00105171;
    puStack752 = &UNK_00105171;
    puStack736 = &UNK_00105171;
    puStack720 = &UNK_00105171;
    ppbVar9 = &pbStack808;
    do {
      ppbVar9 = ppbVar9;
      ppbVar9 = ppbVar9 + 2;
      pbVar13 = *ppbVar9;
      bVar14 = false;
      bVar15 = pbVar13 == (byte *)0x0;
      if (bVar15) break;
      lVar5 = 4;
      pbVar11 = &UNK_00105124;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar14 = *pbVar11 < *pbVar13;
        bVar15 = *pbVar11 == *pbVar13;
        pbVar11 = pbVar11 + (ulong)bVar16 * -2 + 1;
        pbVar13 = pbVar13 + (ulong)bVar16 * -2 + 1;
      } while (bVar15);
    } while ((!bVar14 && !bVar15) != bVar14);
    pbVar13 = ppbVar9[3];
    if (pbVar13 == (byte *)0x0) {
      uVar6 = func_0x00101540(0,&UNK_0010519e,5);
      func_0x00101710(1,uVar6,&UNK_001051b5,&UNK_001054e8);
      lVar5 = func_0x00101700(5,0);
      if ((lVar5 != 0) && (iVar3 = func_0x001014c0(lVar5,&UNK_001051c3,3), iVar3 != 0)) {
        pbVar13 = &UNK_00105124;
        goto code_r0x001025b8;
      }
      pbVar13 = &UNK_00105124;
      puVar10 = &UNK_0010515b;
      uVar6 = func_0x00101540(0,&UNK_001051c7,5);
      func_0x00101710(1,uVar6,&UNK_001054e8,&UNK_00105124);
    }
    else {
      uVar6 = func_0x00101540(0,&UNK_0010519e,5);
      func_0x00101710(1,uVar6,&UNK_001051b5,&UNK_001054e8);
      lVar5 = func_0x00101700(5,0);
      if ((lVar5 != 0) && (iVar3 = func_0x001014c0(lVar5,&UNK_001051c3,3), iVar3 != 0)) {
code_r0x001025b8:
        uVar6 = stdout;
        uVar7 = func_0x00101540(0,&UNK_00105510,5);
        func_0x00101620(uVar7,uVar6);
      }
      uVar6 = func_0x00101540(0,&UNK_001051c7,5);
      func_0x00101710(1,uVar6,&UNK_001054e8,&UNK_00105124);
      puVar10 = &UNK_0010513e;
      if (pbVar13 == &UNK_00105124) {
        puVar10 = &UNK_0010515b;
      }
    }
    uVar6 = func_0x00101540(0,&UNK_00105558,5);
    func_0x00101710(1,uVar6,pbVar13,puVar10);
  } while( true );
}

