
/* WARNING: Removing unreachable block (ram,0x00104925) */

long ** readtoken(long *param_1,long **param_2,long param_3,long **param_4,long *param_5,
                 long *param_6)

{
  ulong *puVar1;
  bool bVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long **pplVar9;
  long **pplVar10;
  undefined *puVar11;
  undefined8 extraout_RDX;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long **pplVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long in_FS_OFFSET;
  long lStack216;
  undefined8 uStack192;
  undefined8 uStack184;
  long lStack168;
  ulong uStack152;
  long *plStack144;
  long **pplStack136;
  long **pplStack128;
  long **pplStack120;
  long *plStack112;
  undefined4 auStack104 [4];
  undefined4 uStack88;
  undefined4 uStack84;
  undefined4 uStack80;
  undefined4 uStack76;
  ulong uStack64;
  
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  auStack104[0] = 0;
  auStack104[1] = 0;
  auStack104[2] = 0;
  auStack104[3] = 0;
  uStack88 = 0;
  uStack84 = 0;
  uStack80 = 0;
  uStack76 = 0;
  pplVar9 = param_4;
  plVar16 = param_1;
  if (param_3 == 0) goto code_r0x001048ac;
  pplVar10 = (long **)(param_3 + (long)param_2);
  param_5 = (long *)0x1;
  pplVar15 = param_2;
  do {
    param_2 = (long **)((long)pplVar15 + 1);
    uVar8 = (uint)*(byte *)pplVar15 & 0x3f;
    pplVar9 = (long **)(ulong)uVar8;
    puVar1 = (ulong *)((long)auStack104 + (ulong)((uint)(*(byte *)pplVar15 >> 3) & 0x18));
    *puVar1 = *puVar1 | 1 << (sbyte)uVar8;
    pplVar15 = param_2;
  } while (pplVar10 != param_2);
  pbVar3 = (byte *)param_1[1];
  plVar16 = (long *)auStack104;
  if ((byte *)param_1[2] <= pbVar3) goto code_r0x001048b6;
code_r0x00104890:
  *(byte **)(param_1 + 1) = pbVar3 + 1;
  uStack152 = (ulong)*pbVar3;
code_r0x0010489b:
  if ((*(ulong *)(auStack104 + ((ulong)(long)(int)uStack152 >> 6) * 2) >> (uStack152 & 0x1f) & 1) ==
      0) goto code_r0x001048c4;
code_r0x001048ac:
  pbVar3 = (byte *)param_1[1];
  if ((byte *)param_1[2] <= pbVar3) goto code_r0x001048b6;
  goto code_r0x00104890;
code_r0x001048b6:
  plStack112 = (long *)&UNK_001048be;
  plVar16 = param_1;
  uVar8 = func_0x001013e0();
  uStack152 = (ulong)uVar8;
  if ((int)uVar8 < 0) {
code_r0x001048c4:
    plVar18 = param_4[1];
    pplStack120 = (long **)*param_4;
    pplStack136 = (long **)0x0;
    goto code_r0x001048cf;
  }
  goto code_r0x0010489b;
code_r0x001048cf:
  plVar17 = plVar18;
  if ((-1 < (int)uStack152) || (pplStack136 != (long **)0x0)) {
    do {
      iVar12 = (int)uStack152;
      if (pplStack136 == pplStack120) {
        if (plVar17 == (long *)0x0) {
          pplVar9 = (long **)0x80;
          if (pplStack136 != (long **)0x0) {
            pplVar9 = pplStack136;
          }
          pplStack120 = pplVar9;
          if ((long)pplVar9 < 0) goto code_r0x001049d4;
        }
        else {
          if ((long **)0x5555555555555553 < pplStack136) {
code_r0x001049d4:
            plStack112 = (long *)&UNK_001049d9;
            xalloc_die();
            goto code_r0x001049d9;
          }
          pplStack120 = (long **)((long)pplStack136 + ((ulong)pplStack136 >> 1) + 1);
        }
        plStack112 = (long *)&UNK_0010496a;
        param_2 = pplStack120;
        plVar18 = (long *)xrealloc();
        puVar11 = (undefined *)((long)plVar18 + (long)pplStack136);
        plVar16 = plVar17;
        if (-1 < iVar12) goto code_r0x001048f1;
code_r0x00104980:
        *puVar11 = 0;
        param_4[1] = plVar18;
        *(long ***)param_4 = pplStack120;
        goto code_r0x0010498b;
      }
      puVar11 = (undefined *)((long)plVar17 + (long)pplStack136);
      plVar18 = plVar17;
      if (iVar12 < 0) goto code_r0x00104980;
code_r0x001048f1:
      if ((*(ulong *)(auStack104 + ((ulong)(long)iVar12 >> 6) * 2) >> (uStack152 & 0x1f) & 1) != 0)
      goto code_r0x00104980;
      *puVar11 = (char)uStack152;
      pplStack136 = (long **)((long)pplStack136 + 1);
      pbVar3 = (byte *)param_1[1];
      if ((byte *)param_1[2] <= pbVar3) goto code_r0x001049b0;
      *(byte **)(param_1 + 1) = pbVar3 + 1;
      uStack152 = (ulong)*pbVar3;
      plVar17 = plVar18;
    } while( true );
  }
  pplStack136 = (long **)0xffffffffffffffff;
code_r0x0010498b:
  plVar16 = (long *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  plVar17 = plVar18;
  if (plVar16 == (long *)0x0) {
    return pplStack136;
  }
code_r0x001049d9:
  plStack112 = (long *)&UNK_001049de;
  func_0x001014c0();
  uVar14 = (long)param_2 + 1;
  lStack168 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (long **)0x0) {
    uVar14 = 0x40;
  }
  lVar4 = SUB168(ZEXT816(8) * ZEXT816(uVar14),0);
  plStack144 = param_1;
  pplStack128 = param_4;
  plStack112 = plVar17;
  if (SUB168(ZEXT816(8) * ZEXT816(uVar14) >> 0x40,0) != 0) goto code_r0x00104c00;
  bVar2 = false;
  do {
    if ((-1 < lVar4) && (!bVar2)) {
      lVar4 = xmalloc(uVar14 * 8);
      uVar13 = 0;
      lVar5 = xmalloc(uVar14 * 8);
      uStack192 = 0;
      uStack184 = 0;
      while( true ) {
        lVar7 = readtoken(plVar16,extraout_RDX,pplVar9,&uStack192);
        if (uVar13 < uVar14) goto joined_r0x00104a94;
        if (lVar4 == 0) {
          if (uVar14 == 0) {
            uVar14 = 0x10;
          }
          bVar2 = false;
          lVar4 = SUB168(ZEXT816(8) * ZEXT816(uVar14),0);
          if (SUB168(ZEXT816(8) * ZEXT816(uVar14) >> 0x40,0) != 0) goto code_r0x00104c0f;
          goto code_r0x00104bc3;
        }
        if (0xaaaaaaaaaaaaaa9 < uVar14) break;
        uVar14 = uVar14 + 1 + (uVar14 >> 1);
        lStack216 = uVar14 * 8;
        lVar4 = xrealloc(lVar4,lStack216);
        while( true ) {
          lVar5 = xrealloc(lVar5,lStack216,lStack216);
joined_r0x00104a94:
          if (lVar7 != -1) break;
          *(undefined8 *)(lVar4 + uVar13 * 8) = 0;
          *(undefined8 *)(lVar5 + uVar13 * 8) = 0;
          func_0x001013f0(uStack184);
          *param_5 = lVar4;
          if (param_6 == (long *)0x0) {
            func_0x001013f0(lVar5);
          }
          else {
            *param_6 = lVar5;
          }
          if (lStack168 == *(long *)(in_FS_OFFSET + 0x28)) {
            return (long **)uVar13;
          }
          lVar4 = func_0x001014c0();
code_r0x00104c0f:
          bVar2 = true;
code_r0x00104bc3:
          if ((lVar4 < 0) || (bVar2)) goto code_r0x00104bfb;
          lStack216 = uVar14 * 8;
          lVar4 = xrealloc(0,lStack216);
        }
        lVar19 = lVar7 + 1;
        if (lVar19 < 0) break;
        uVar6 = xmalloc(lVar19);
        *(long *)(lVar5 + uVar13 * 8) = lVar7;
        uVar6 = func_0x001015b0(uVar6,uStack184,lVar19);
        *(undefined8 *)(lVar4 + uVar13 * 8) = uVar6;
        uVar13 = uVar13 + 1;
      }
    }
code_r0x00104bfb:
    lVar4 = xalloc_die();
code_r0x00104c00:
    bVar2 = true;
  } while( true );
code_r0x001049b0:
  plStack112 = (long *)&UNK_001049b8;
  plVar16 = param_1;
  uVar8 = func_0x001013e0();
  uStack152 = (ulong)uVar8;
  goto code_r0x001048cf;
}

