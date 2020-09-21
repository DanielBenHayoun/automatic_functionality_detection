
undefined8 make-prime-list(int param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  ulong in_R9;
  undefined8 in_R10;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  bool bVar20;
  undefined auVar21 [16];
  ulong uStack104;
  undefined8 auStack96 [2];
  uint *puStack80;
  uint uStack72;
  uint uStack68;
  uint *puStack64;
  
  if (param_1 == 2) {
    uStack104 = in_R9;
    auStack96[0] = in_R10;
    uVar5 = func_0x00100960(param_2[1],0,10);
    iVar8 = (int)uVar5;
    if (2 < iVar8) {
      if ((uVar5 & 1) == 0) {
        iVar8 = iVar8 + -1;
      }
      iVar8 = iVar8 + -1 >> 1;
      uVar16 = SEXT48(iVar8);
      uVar5 = xalloc(uVar16);
      func_0x00100950(uVar5,1,uVar16);
      puVar14 = (uint *)xalloc();
      if (iVar8 != 0) {
        uVar11 = 0;
        uVar7 = 0;
        puStack64 = puVar14;
        do {
          uStack72 = (int)uVar11 * 2 + 3;
          uStack104 = (ulong)uStack72;
          uStack68 = (int)uVar7 + 1;
          puStack80 = puStack64 + uVar7 * 0xc;
          *puStack80 = uStack72;
          uVar7 = (ulong)(0xf5397db1 >> (sbyte)((uStack72 >> 1 & 7) << 2));
          uVar6 = 0;
          do {
            uVar18 = uVar6;
            uVar17 = uVar7;
            auVar21 = (ZEXT816(uVar17) * ZEXT816(uVar17) & (undefined  [16])0xffffffffffffffff) *
                      ZEXT816(uStack104);
            uVar6 = SUB168(auVar21,0);
            uVar7 = uVar17 * 2 - uVar6;
            uVar6 = ((uVar18 << 1 | uVar17 >> 0x3f) -
                    (SUB168(auVar21 >> 0x40,0) +
                    (SUB168(ZEXT816(uVar17) * ZEXT816(uVar17) >> 0x40,0) + uVar18 * uVar17 * 2) *
                    uStack104)) - (ulong)(uVar17 * 2 < uVar6);
          } while ((uVar18 ^ uVar6 | uVar17 ^ uVar7) != 0);
          *(ulong *)(puStack80 + 4) = uVar17;
          *(ulong *)(puStack80 + 6) = uVar18;
          auStack96[0] = 0;
          auVar21 = __udivti3(0xffffffffffffffff,0xffffffffffffffff,uStack104);
          *(long *)(puStack80 + 8) = SUB168(auVar21,0);
          *(long *)(puStack80 + 10) = SUB168(auVar21 >> 0x40,0);
          uVar2 = uStack72 * uStack72 - 3 >> 1;
          while (uVar2 < uVar16) {
            *(undefined *)(uVar5 + uVar2) = 0;
            uVar2 = uVar2 + uStack72;
          }
          do {
            uVar11 = uVar11 + 1;
            puVar14 = puStack64;
            if (uVar16 <= uVar11) goto code_r0x00100be1;
          } while (*(char *)(uVar5 + uVar11) == '\0');
          uVar7 = (ulong)uStack68;
        } while( true );
      }
      uStack68 = 0;
code_r0x00100be1:
      func_0x00100920(&UNK_001012e0);
      func_0x00100980(1,&UNK_00101234,0x80);
      uVar2 = uStack68;
      if (uStack68 == 0) {
        uVar15 = 2;
      }
      else {
        uVar1 = uStack68 - 1;
        uVar19 = 8;
        puVar12 = puVar14;
        uStack104 = uVar5;
        uVar9 = 2;
        do {
          uVar15 = *puVar12;
          if (uVar19 < uVar2) {
            uVar5 = (ulong)(puVar14[(ulong)uVar19 * 0xc] - uVar15);
            if (0xff < puVar14[(ulong)uVar19 * 0xc] - uVar15) {
              auVar21 = func_0x00100900();
              uVar5 = uStack104;
              uStack104 = SUB168(auVar21,0);
              (*(code *)PTR___libc_start_main_00301fe0)
                        (main,uVar5,auStack96,__libc_csu_init,__libc_csu_fini,
                         SUB168(auVar21 >> 0x40,0),&uStack104);
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
          }
          else {
            uVar5 = 0xff;
          }
          puVar13 = puVar12 + 0xc;
          uVar19 = uVar19 + 1;
          func_0x00100980(1,&UNK_0010124f,(ulong)(uVar15 - uVar9),uVar5);
          print_wide_uint(*(undefined8 *)(puVar12 + 4),*(undefined8 *)(puVar12 + 6),0);
          func_0x00100980(1,&UNK_0010125f,(ulong)uVar15);
          puVar12 = puVar13;
          uVar5 = uStack104;
          uVar9 = uVar15;
        } while (puVar14 + (ulong)uVar1 * 0xc + 0xc != puVar13);
      }
      func_0x00100920();
      while (uVar15 = uVar15 + 2, *puVar14 * *puVar14 <= uVar15) {
        uVar11 = (ulong)uVar15;
        uVar16 = SUB168(ZEXT816(uVar11) * ZEXT816(*(ulong *)(puVar14 + 4)) >> 0x40,0) +
                 *(long *)(puVar14 + 6) * uVar11;
        bVar20 = *(ulong *)(puVar14 + 10) < uVar16;
        if ((bVar20 || *(ulong *)(puVar14 + 10) == uVar16) &&
           ((bVar20 ||
            (*(ulong *)(puVar14 + 8) < SUB168(ZEXT816(uVar11) * ZEXT816(*(ulong *)(puVar14 + 4)),0))
            ))) {
          uVar16 = 0;
          do {
            uVar16 = (ulong)((int)uVar16 + 1);
            puVar12 = puVar14 + uVar16 * 0xc;
            if (uVar15 < *puVar12 * *puVar12) goto code_r0x00100d50;
            uVar7 = SUB168(ZEXT816(uVar11) * ZEXT816(*(ulong *)(puVar12 + 4)),0);
            uVar6 = SUB168(ZEXT816(uVar11) * ZEXT816(*(ulong *)(puVar12 + 4)) >> 0x40,0) +
                    *(long *)(puVar12 + 6) * uVar11;
            bVar20 = *(ulong *)(puVar12 + 10) <= uVar6;
          } while ((bVar20) &&
                  ((bVar20 && uVar6 != *(ulong *)(puVar12 + 10) ||
                   (*(ulong *)(puVar12 + 8) <= uVar7 && uVar7 != *(ulong *)(puVar12 + 8)))));
        }
      }
code_r0x00100d50:
      func_0x00100980(1,&UNK_00101308,(ulong)uVar15);
      func_0x001008e0(uVar5);
      func_0x001008e0(puVar14);
      iVar8 = func_0x00100930(stdout);
      iVar3 = func_0x00100940(stdout);
      if (iVar8 + iVar3 != 0) {
        puVar14 = (uint *)func_0x00100910();
        uVar4 = func_0x001009c0((ulong)*puVar14);
        puVar10 = &UNK_00101294;
        goto code_r0x001009fd;
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = *param_2;
    puVar10 = &UNK_001012a8;
code_r0x001009fd:
    func_0x001009b0(stderr,1,puVar10,uVar4);
    uVar4 = 1;
  }
  return uVar4;
}