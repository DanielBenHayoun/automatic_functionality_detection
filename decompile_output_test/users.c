
void users(undefined8 param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 extraout_RDX;
  byte **ppbVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte *pbStack256;
  undefined *puStack248;
  byte *apbStack240 [5];
  undefined *puStack200;
  undefined *puStack192;
  undefined *puStack184;
  undefined *puStack176;
  undefined *puStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined8 uStack136;
  undefined8 uStack120;
  ulong uStack80;
  undefined8 *puStack72;
  long lStack64;
  
  bVar17 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = read_utmp(param_1,&uStack80,&puStack72);
  if (iVar2 == 0) {
    bVar15 = false;
    lVar3 = SUB168(ZEXT816(8) * ZEXT816(uStack80),0);
    puVar9 = puStack72;
    if (SUB168(ZEXT816(8) * ZEXT816(uStack80) >> 0x40,0) != 0) goto code_r0x00101ab4;
    do {
      if ((-1 < lVar3) && (!bVar15)) {
        lVar3 = uStack80 - 1;
        puVar4 = (undefined8 *)xmalloc(uStack80 * 8);
        if (uStack80 == 0) {
          func_0x00101440(puVar4,0,8,userid_compare);
        }
        else {
          uVar14 = 0;
          do {
            if ((*(char *)((long)puVar9 + 0x2c) != '\0') && (*(short *)puVar9 == 7)) {
              uVar5 = extract_trimmed_name(puVar9);
              puVar4[uVar14] = uVar5;
              uVar14 = uVar14 + 1;
            }
            lVar3 = lVar3 + -1;
            puVar9 = puVar9 + 0x30;
          } while (lVar3 != -1);
          func_0x00101440(puVar4,uVar14,8,userid_compare);
          if (uVar14 != 0) {
            uVar8 = 0;
            do {
              uStack80 = (ulong)((-(uint)(uVar8 < uVar14 - 1) & 0x16) + 10);
              func_0x00101540(puVar4[uVar8]);
              pcVar1 = *(char **)(stdout + 0x28);
              if (pcVar1 < *(char **)(stdout + 0x30)) {
                *(char **)(stdout + 0x28) = pcVar1 + 1;
                *pcVar1 = (-(uVar8 < uVar14 - 1) & 0x16U) + 10;
              }
              else {
                func_0x001014f0();
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar14);
            puVar9 = puVar4 + uVar8;
            puVar11 = puVar4;
            do {
              uVar5 = *puVar11;
              puVar11 = puVar11 + 1;
              func_0x001013d0(uVar5);
            } while (puVar11 != puVar9);
          }
        }
        func_0x001013d0(puVar4);
        func_0x001013d0(puStack72);
        if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        func_0x001014c0();
      }
      lVar3 = xalloc_die();
code_r0x00101ab4:
      bVar15 = true;
    } while( true );
  }
  uStack120 = quotearg_n_style_colon(0,3,param_1);
  puVar6 = (uint *)func_0x001013f0();
  uVar14 = 1;
  func_0x00101630(1,(ulong)*puVar6,&UNK_00104fd0,uStack120);
  puVar10 = program_name;
  uVar5 = 5;
  uStack136 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((int)uVar14 == 0) goto code_r0x00101b4d;
  uVar5 = func_0x00101490(0,&UNK_00104e18,5);
  func_0x00101680(stderr,1,uVar5,puVar10);
  do {
    func_0x00101660(uVar14 & 0xffffffff);
    uVar5 = extraout_RDX;
code_r0x00101b4d:
    uVar5 = func_0x00101490(0,&UNK_00104cea,uVar5);
    func_0x00101610(1,uVar5,puVar10);
    uVar5 = func_0x00101490(0,&UNK_00104e40,5);
    func_0x00101610(1,uVar5,&UNK_00104d16,&UNK_00104d08);
    lVar3 = stdout;
    uVar5 = func_0x00101490(0,&UNK_00104eb0,5);
    func_0x00101540(uVar5,lVar3);
    lVar3 = stdout;
    uVar5 = func_0x00101490(0,&UNK_00104ee0,5);
    func_0x00101540(uVar5,lVar3);
    puStack192 = &UNK_00104d6f;
    uStack160 = 0;
    uStack152 = 0;
    pbStack256 = &UNK_00104d24;
    apbStack240[4] = &UNK_00104d65;
    puStack248 = &UNK_00104d26;
    puStack176 = &UNK_00104d79;
    apbStack240[0] = &UNK_00104d9e;
    apbStack240[1] = &UNK_00104d36;
    apbStack240[2] = &UNK_00104d4c;
    apbStack240[3] = &UNK_00104d56;
    puStack200 = &UNK_00104d56;
    puStack184 = &UNK_00104d56;
    puStack168 = &UNK_00104d56;
    ppbVar7 = &pbStack256;
    do {
      ppbVar7 = ppbVar7;
      ppbVar7 = ppbVar7 + 2;
      pbVar13 = *ppbVar7;
      bVar15 = false;
      bVar16 = pbVar13 == (byte *)0x0;
      if (bVar16) break;
      lVar3 = 6;
      pbVar12 = &UNK_00104ce4;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar15 = *pbVar12 < *pbVar13;
        bVar16 = *pbVar12 == *pbVar13;
        pbVar12 = pbVar12 + (ulong)bVar17 * -2 + 1;
        pbVar13 = pbVar13 + (ulong)bVar17 * -2 + 1;
      } while (bVar16);
    } while ((!bVar15 && !bVar16) != bVar15);
    pbVar13 = ppbVar7[3];
    if (pbVar13 == (byte *)0x0) {
      uVar5 = func_0x00101490(0,&UNK_00104d83,5);
      func_0x00101610(1,uVar5,&UNK_00104d9a,&UNK_00104f18);
      lVar3 = func_0x00101600(5,0);
      if (lVar3 != 0) {
        iVar2 = func_0x00101410(lVar3,&UNK_00104da8,3);
        if (iVar2 != 0) {
          pbVar13 = &UNK_00104ce4;
          goto code_r0x00101e10;
        }
      }
      pbVar13 = &UNK_00104ce4;
      puVar10 = &UNK_00104d40;
      uVar5 = func_0x00101490(0,&UNK_00104dac,5);
      func_0x00101610(1,uVar5,&UNK_00104f18,&UNK_00104ce4);
    }
    else {
      uVar5 = func_0x00101490(0,&UNK_00104d83,5);
      func_0x00101610(1,uVar5,&UNK_00104d9a,&UNK_00104f18);
      lVar3 = func_0x00101600(5,0);
      if (lVar3 != 0) {
        iVar2 = func_0x00101410(lVar3,&UNK_00104da8,3);
        if (iVar2 != 0) {
code_r0x00101e10:
          lVar3 = stdout;
          uVar5 = func_0x00101490(0,&UNK_00104f40,5);
          func_0x00101540(uVar5,lVar3);
        }
      }
      uVar5 = func_0x00101490(0,&UNK_00104dac,5);
      func_0x00101610(1,uVar5,&UNK_00104f18,&UNK_00104ce4);
      puVar10 = &UNK_00105561;
      if (pbVar13 == &UNK_00104ce4) {
        puVar10 = &UNK_00104d40;
      }
    }
    uVar5 = func_0x00101490(0,&UNK_00104f88,5);
    func_0x00101610(1,uVar5,pbVar13,puVar10);
  } while( true );
}

