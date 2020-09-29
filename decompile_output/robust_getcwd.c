
void robust_getcwd(ulong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  long lVar8;
  undefined8 extraout_RDX;
  byte **ppbVar9;
  ulong unaff_RBX;
  undefined *puVar10;
  uint *unaff_RBP;
  byte *pbVar11;
  ulong uVar12;
  ulong unaff_R12;
  byte *pbVar13;
  long unaff_R13;
  long unaff_R15;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  byte *pbStack736;
  undefined *puStack728;
  byte *apbStack720 [5];
  undefined *puStack680;
  undefined *puStack672;
  undefined *puStack664;
  undefined *puStack656;
  undefined *puStack648;
  undefined8 uStack640;
  undefined8 uStack632;
  undefined8 uStack616;
  ulong uStack600;
  uint *puStack592;
  ulong uStack584;
  undefined *puStack576;
  long *plStack568;
  long lStack560;
  long lStack552;
  long *plStack544;
  long *plStack536;
  ulong uStack528;
  undefined auStack520 [16];
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
  undefined4 uStack432;
  undefined4 uStack428;
  undefined4 uStack424;
  undefined4 uStack420;
  undefined4 uStack416;
  undefined4 uStack412;
  undefined4 uStack408;
  undefined4 uStack404;
  undefined4 uStack400;
  undefined4 uStack396;
  undefined4 uStack392;
  undefined4 uStack388;
  undefined4 uStack384;
  undefined4 uStack380;
  undefined4 uStack376;
  undefined4 uStack372;
  undefined4 uStack368;
  undefined4 uStack364;
  long lStack360;
  undefined8 uStack352;
  undefined auStack344 [16];
  undefined auStack328 [16];
  undefined auStack312 [16];
  undefined auStack296 [16];
  undefined auStack280 [16];
  undefined auStack264 [16];
  undefined auStack248 [16];
  undefined auStack232 [16];
  long lStack216;
  long lStack208;
  long lStack64;
  
  bVar16 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puStack576 = &UNK_00101d43;
  uStack528 = param_1;
  plStack544 = (long *)get_root_dev_ino(auStack520);
  if (plStack544 == (long *)0x0) goto code_r0x001021e5;
  uVar12 = 1;
  puStack576 = &UNK_00101d67;
  iVar2 = func_0x00101670(1,&UNK_001050de,&uStack504);
  if (-1 < iVar2) {
    plStack536 = &lStack360;
    lStack560 = 1;
    plStack568 = &lStack216;
    do {
      if ((CONCAT44(uStack492,uStack496) == *plStack544) &&
         (CONCAT44(uStack500,uStack504) == plStack544[1])) {
        if (**(char **)(uStack528 + 0x10) == '\0') {
          puStack576 = &UNK_0010206b;
          uVar12 = uStack528;
          file_name_prepend(uStack528,&UNK_0010513e,0);
        }
        if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto code_r0x00102228;
      }
      lStack552 = lStack560 + 1;
      puStack576 = &UNK_00101dd0;
      unaff_RBX = func_0x00101520(&UNK_001050dd);
      if (unaff_RBX == 0) goto code_r0x001021a1;
      puStack576 = &UNK_00101de4;
      uVar3 = func_0x00101640(unaff_RBX);
      if ((int)uVar3 < 0) {
        puStack576 = &UNK_00102021;
        iVar2 = func_0x00101580(&UNK_001050dd);
        if (iVar2 < 0) goto code_r0x001020dd;
        puStack576 = &UNK_0010203f;
        uVar3 = func_0x00101670(1,&UNK_001050de,plStack536);
      }
      else {
        puStack576 = &UNK_00101df5;
        iVar2 = func_0x001016e0((ulong)uVar3);
        if (iVar2 < 0) goto code_r0x001020dd;
        puStack576 = &UNK_00101e0e;
        uVar3 = func_0x001016c0(1,(ulong)uVar3,plStack536);
      }
      unaff_R12 = (ulong)(uVar3 >> 0x1f);
      puStack576 = &UNK_00101e19;
      unaff_RBP = (uint *)func_0x001014b0();
      lVar8 = lStack360;
      if ((int)uVar3 < 0) goto code_r0x00102121;
      unaff_R13 = CONCAT44(uStack500,uStack504);
      unaff_R12 = (ulong)(lStack360 != unaff_R13);
      do {
        while( true ) {
          *unaff_RBP = 0;
          do {
            puStack576 = &UNK_00101e58;
            plVar4 = (long *)func_0x00101680(unaff_RBX);
            if (plVar4 == (long *)0x0) {
              uVar3 = *unaff_RBP;
              unaff_R12 = (ulong)uVar3;
              if (uVar3 != 0) {
                puStack576 = &UNK_0010209c;
                func_0x00101600(unaff_RBX);
                *unaff_RBP = uVar3;
                goto code_r0x001020a0;
              }
              puStack576 = &UNK_00101f7d;
              iVar2 = func_0x00101600(unaff_RBX);
              if (iVar2 != 0) goto code_r0x001020a0;
              puStack576 = &UNK_00101f8f;
              uVar5 = nth_parent(lStack560);
              puStack576 = &UNK_00101f97;
              unaff_RBX = quote(uVar5);
              puStack576 = &UNK_00101fad;
              uVar5 = func_0x00101540(0,&UNK_00105278,5);
              puStack576 = &UNK_00101fc1;
              func_0x00101720(1,0,uVar5,unaff_RBX);
              goto code_r0x00101fc8;
            }
            unaff_R15 = (long)plVar4 + 0x13;
          } while ((*(char *)((long)plVar4 + 0x13) == '.') &&
                  ((cVar1 = *(char *)((long)plVar4 +
                                     (ulong)(*(char *)((long)plVar4 + 0x14) == '.') + 0x14),
                   cVar1 == '\0' || (cVar1 == '/'))));
          if ((*plVar4 != 0) && ((char)unaff_R12 == '\0')) break;
code_r0x00101fc8:
          puStack576 = &UNK_00101fd9;
          iVar2 = func_0x00101570(1,unaff_R15,plStack568);
          if (((-1 < iVar2) && (lStack208 == CONCAT44(uStack492,uStack496))) &&
             ((lVar8 == unaff_R13 || (lStack216 == CONCAT44(uStack500,uStack504)))))
          goto code_r0x00101e9e;
        }
      } while (*plVar4 != CONCAT44(uStack492,uStack496));
code_r0x00101e9e:
      puStack576 = &UNK_00101ea6;
      uVar5 = func_0x00101560(unaff_R15);
      puStack576 = &UNK_00101eb6;
      file_name_prepend(uStack528,unaff_R15,uVar5);
      puStack576 = &UNK_00101ebe;
      uVar12 = unaff_RBX;
      iVar2 = func_0x00101600();
      if (iVar2 != 0) goto code_r0x001020a0;
      lStack560 = lStack552;
      uStack504 = (undefined4)lStack360;
      uStack500 = (undefined4)((ulong)lStack360 >> 0x20);
      uStack496 = (undefined4)uStack352;
      uStack492 = (undefined4)((ulong)uStack352 >> 0x20);
      uStack488 = SUB164(auStack344,0);
      uStack484 = SUB164(auStack344 >> 0x20,0);
      uStack480 = SUB164(auStack344 >> 0x40,0);
      uStack476 = SUB164(auStack344 >> 0x60,0);
      uStack472 = SUB164(auStack328,0);
      uStack468 = SUB164(auStack328 >> 0x20,0);
      uStack464 = SUB164(auStack328 >> 0x40,0);
      uStack460 = SUB164(auStack328 >> 0x60,0);
      uStack456 = SUB164(auStack312,0);
      uStack452 = SUB164(auStack312 >> 0x20,0);
      uStack448 = SUB164(auStack312 >> 0x40,0);
      uStack444 = SUB164(auStack312 >> 0x60,0);
      uStack440 = SUB164(auStack296,0);
      uStack436 = SUB164(auStack296 >> 0x20,0);
      uStack432 = SUB164(auStack296 >> 0x40,0);
      uStack428 = SUB164(auStack296 >> 0x60,0);
      uStack424 = SUB164(auStack280,0);
      uStack420 = SUB164(auStack280 >> 0x20,0);
      uStack416 = SUB164(auStack280 >> 0x40,0);
      uStack412 = SUB164(auStack280 >> 0x60,0);
      uStack408 = SUB164(auStack264,0);
      uStack404 = SUB164(auStack264 >> 0x20,0);
      uStack400 = SUB164(auStack264 >> 0x40,0);
      uStack396 = SUB164(auStack264 >> 0x60,0);
      uStack392 = SUB164(auStack248,0);
      uStack388 = SUB164(auStack248 >> 0x20,0);
      uStack384 = SUB164(auStack248 >> 0x40,0);
      uStack380 = SUB164(auStack248 >> 0x60,0);
      uStack376 = SUB164(auStack232,0);
      uStack372 = SUB164(auStack232 >> 0x20,0);
      uStack368 = SUB164(auStack232 >> 0x40,0);
      uStack364 = SUB164(auStack232 >> 0x60,0);
    } while( true );
  }
  goto code_r0x0010215e;
code_r0x001020a0:
  puStack576 = &UNK_001020aa;
  uVar5 = nth_parent(lStack560);
  puStack576 = &UNK_001020b2;
  uVar5 = quote(uVar5);
  puStack576 = &UNK_001020c8;
  uVar6 = func_0x00101540(0,&UNK_0010510f,5);
  puStack576 = &UNK_001020dd;
  func_0x00101720(1,(ulong)*unaff_RBP,uVar6,uVar5);
code_r0x001020dd:
  puStack576 = &UNK_001020e7;
  uVar5 = nth_parent(lStack560);
  puStack576 = &UNK_001020ef;
  unaff_RBP = (uint *)quote(uVar5);
  puStack576 = &UNK_00102105;
  uVar5 = func_0x00101540(0,&UNK_001050f9,5);
  puStack576 = &UNK_0010210d;
  puVar7 = (uint *)func_0x001014b0();
  puStack576 = &UNK_00102121;
  func_0x00101720(1,(ulong)*puVar7,uVar5,unaff_RBP);
code_r0x00102121:
  puStack576 = &UNK_0010212b;
  uVar5 = nth_parent(lStack560);
  puStack576 = &UNK_00102133;
  uVar5 = quote(uVar5);
  puStack576 = &UNK_00102149;
  uVar6 = func_0x00101540(0,&UNK_001050cb,5);
  puStack576 = &UNK_0010215e;
  func_0x00101720(1,(ulong)*unaff_RBP,uVar6,uVar5);
code_r0x0010215e:
  puStack576 = &UNK_0010216f;
  uVar5 = quotearg_style(4,&UNK_001050de);
  puStack576 = &UNK_00102185;
  uVar6 = func_0x00101540(0,&UNK_001050cb,5);
  puStack576 = &UNK_0010218d;
  puVar7 = (uint *)func_0x001014b0();
  puStack576 = &UNK_001021a1;
  func_0x00101720(1,(ulong)*puVar7,uVar6,uVar5);
code_r0x001021a1:
  puStack576 = &UNK_001021ab;
  uVar5 = nth_parent(lStack560);
  puStack576 = &UNK_001021b3;
  uVar5 = quote(uVar5);
  puStack576 = &UNK_001021c9;
  uVar6 = func_0x00101540(0,&UNK_001050e0,5);
  puStack576 = &UNK_001021d1;
  puVar7 = (uint *)func_0x001014b0();
  puStack576 = &UNK_001021e5;
  func_0x00101720(1,(ulong)*puVar7,uVar6,uVar5);
code_r0x001021e5:
  puStack576 = &UNK_001021f6;
  unaff_RBP = (uint *)quotearg_style(4,&UNK_001055e6);
  puStack576 = &UNK_0010220c;
  unaff_RBX = func_0x00101540(0,&UNK_00105258,5);
  puStack576 = &UNK_00102214;
  puVar7 = (uint *)func_0x001014b0();
  uVar12 = 1;
  puStack576 = &UNK_00102228;
  func_0x00101720(1,(ulong)*puVar7,unaff_RBX,unaff_RBP);
code_r0x00102228:
  puStack576 = &UNK_0010222d;
  func_0x00101590();
  puVar10 = program_name;
  uVar5 = 5;
  uStack616 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack600 = unaff_RBX;
  puStack592 = unaff_RBP;
  uStack584 = unaff_R12;
  puStack576 = (undefined *)unaff_R13;
  if ((int)uVar12 == 0) goto code_r0x0010228d;
  uVar5 = func_0x00101540(0,&UNK_001052b8,5);
  func_0x00101770(stderr,1,uVar5,puVar10);
  do {
    func_0x00101750(uVar12 & 0xffffffff);
    uVar5 = extraout_RDX;
code_r0x0010228d:
    uVar5 = func_0x00101540(0,&UNK_00105128,uVar5);
    func_0x00101710(1,uVar5,puVar10);
    uVar5 = stdout;
    uVar6 = func_0x00101540(0,&UNK_001052e0,5);
    func_0x00101620(uVar6,uVar5);
    uVar5 = stdout;
    uVar6 = func_0x00101540(0,&UNK_00105320,5);
    func_0x00101620(uVar6,uVar5);
    uVar5 = stdout;
    uVar6 = func_0x00101540(0,&UNK_00105390,5);
    func_0x00101620(uVar6,uVar5);
    uVar5 = stdout;
    uVar6 = func_0x00101540(0,&UNK_001053c0,5);
    func_0x00101620(uVar6,uVar5);
    uVar5 = stdout;
    uVar6 = func_0x00101540(0,&UNK_001053f8,5);
    func_0x00101620(uVar6,uVar5);
    uVar5 = func_0x00101540(0,&UNK_00105428,5);
    func_0x00101710(1,uVar5,&UNK_00105124);
    uStack640 = 0;
    uStack632 = 0;
    pbStack736 = &UNK_0010513f;
    apbStack720[4] = &UNK_00105180;
    puStack728 = &UNK_00105141;
    puStack672 = &UNK_0010518a;
    apbStack720[0] = &UNK_001051b9;
    puStack656 = &UNK_00105194;
    apbStack720[1] = &UNK_00105151;
    apbStack720[2] = &UNK_00105167;
    apbStack720[3] = &UNK_00105171;
    puStack680 = &UNK_00105171;
    puStack664 = &UNK_00105171;
    puStack648 = &UNK_00105171;
    ppbVar9 = &pbStack736;
    do {
      ppbVar9 = ppbVar9;
      ppbVar9 = ppbVar9 + 2;
      pbVar13 = *ppbVar9;
      bVar14 = false;
      bVar15 = pbVar13 == (byte *)0x0;
      if (bVar15) break;
      lVar8 = 4;
      pbVar11 = &UNK_00105124;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar14 = *pbVar11 < *pbVar13;
        bVar15 = *pbVar11 == *pbVar13;
        pbVar11 = pbVar11 + (ulong)bVar16 * -2 + 1;
        pbVar13 = pbVar13 + (ulong)bVar16 * -2 + 1;
      } while (bVar15);
    } while ((!bVar14 && !bVar15) != bVar14);
    pbVar13 = ppbVar9[3];
    if (pbVar13 == (byte *)0x0) {
      uVar5 = func_0x00101540(0,&UNK_0010519e,5);
      func_0x00101710(1,uVar5,&UNK_001051b5,&UNK_001054e8);
      lVar8 = func_0x00101700(5,0);
      if ((lVar8 != 0) && (iVar2 = func_0x001014c0(lVar8,&UNK_001051c3,3), iVar2 != 0)) {
        pbVar13 = &UNK_00105124;
        goto code_r0x001025b8;
      }
      pbVar13 = &UNK_00105124;
      puVar10 = &UNK_0010515b;
      uVar5 = func_0x00101540(0,&UNK_001051c7,5);
      func_0x00101710(1,uVar5,&UNK_001054e8,&UNK_00105124);
    }
    else {
      uVar5 = func_0x00101540(0,&UNK_0010519e,5);
      func_0x00101710(1,uVar5,&UNK_001051b5,&UNK_001054e8);
      lVar8 = func_0x00101700(5,0);
      if ((lVar8 != 0) && (iVar2 = func_0x001014c0(lVar8,&UNK_001051c3,3), iVar2 != 0)) {
code_r0x001025b8:
        uVar5 = stdout;
        uVar6 = func_0x00101540(0,&UNK_00105510,5);
        func_0x00101620(uVar6,uVar5);
      }
      uVar5 = func_0x00101540(0,&UNK_001051c7,5);
      func_0x00101710(1,uVar5,&UNK_001054e8,&UNK_00105124);
      puVar10 = &UNK_0010513e;
      if (pbVar13 == &UNK_00105124) {
        puVar10 = &UNK_0010515b;
      }
    }
    uVar5 = func_0x00101540(0,&UNK_00105558,5);
    func_0x00101710(1,uVar5,pbVar13,puVar10);
  } while( true );
}

