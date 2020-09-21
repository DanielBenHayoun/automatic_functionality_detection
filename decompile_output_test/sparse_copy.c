
ulong sparse_copy(uint param_1,uint param_2,char *param_3,ulong param_4,ulong param_5,byte param_6,
                 undefined8 param_7,undefined8 param_8,ulong param_9,long *param_10,byte *param_11)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  bool bVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  char *pcVar16;
  ulong uVar17;
  byte bVar18;
  char *pcVar19;
  bool bVar20;
  char *pcVar21;
  bool bVar22;
  ulong uStack128;
  
  *param_11 = 0;
  *param_10 = 0;
  uStack128 = param_9;
  if (param_9 != 0) {
    uVar17 = param_5;
    if (param_5 == 0) {
      uVar17 = param_4;
    }
    uVar9 = 0;
    bVar22 = false;
    do {
      while( true ) {
        uVar5 = uStack128;
        if (param_4 <= uStack128) {
          uVar5 = param_4;
        }
        uVar5 = func_0x00102a80((ulong)param_1,param_3,uVar5);
        if (-1 < (long)uVar5) break;
        puVar10 = (uint *)func_0x00102770();
        if (*puVar10 != 4) {
          uVar6 = quotearg_style(4,param_7);
          uVar7 = func_0x001028e0(0,&UNK_00114dc5,5);
          func_0x00102cb0(0,(ulong)*puVar10,uVar7,uVar6);
          return 0;
        }
      }
      if (uVar5 == 0) break;
      *param_10 = *param_10 + uVar5;
      uVar14 = uVar5;
      pcVar19 = param_3;
      pcVar21 = param_3;
      uVar8 = uVar17;
      do {
        uVar13 = uVar8;
        if (uVar14 <= uVar8) {
          uVar13 = uVar14;
        }
        bVar20 = uVar13 != 0 && param_5 != 0;
        uVar12 = uVar13;
        pcVar16 = pcVar21;
        if (uVar13 != 0 && param_5 != 0) {
          do {
            if (*pcVar16 != '\0') {
              bVar11 = bVar22;
              bVar2 = false;
              bVar1 = bVar20;
              goto code_r0x001053d1;
            }
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              bVar18 = uVar9 != 0 & (bVar22 ^ 1U);
              goto code_r0x00105538;
            }
            pcVar16 = pcVar16 + 1;
          } while ((uVar12 & 0xf) != 0);
          iVar3 = func_0x00102a90(pcVar21);
          bVar11 = (bool)(iVar3 == 0 ^ bVar22);
          bVar2 = iVar3 == 0;
          bVar1 = iVar3 != 0;
code_r0x001053d1:
          bVar20 = bVar2;
          bVar18 = uVar9 != 0 & bVar11;
          if ((uVar8 < uVar14) || (!bVar1)) {
code_r0x00105538:
            if (bVar18 == 0) goto code_r0x001054f8;
            bVar1 = false;
          }
          else {
            if (bVar18 == 0) goto code_r0x0010549a;
            bVar1 = true;
          }
joined_r0x001054ac:
          if (bVar22 == false) {
            uVar8 = full_write((ulong)param_2,pcVar19,uVar9);
            if (uVar9 != uVar8) {
              uVar6 = quotearg_style(4,param_8);
              uVar7 = func_0x001028e0(0,&UNK_00114dd6,5);
              puVar10 = (uint *)func_0x00102770();
              func_0x00102cb0(0,(ulong)*puVar10,uVar7,uVar6);
              return 0;
            }
          }
          else {
            uVar9 = create_hole((ulong)param_2,param_8,(ulong)param_6);
            if ((char)uVar9 == '\0') {
              return uVar9 & 0xffffffff;
            }
          }
          pcVar19 = pcVar21;
          uVar9 = uVar13;
          bVar22 = bVar20;
          if (bVar1) {
            if (uVar13 == 0) break;
            uVar8 = 0;
            if (bVar18 == 0) {
              pcVar21 = pcVar21 + uVar13;
              uVar9 = 0;
              uVar8 = uVar13;
            }
          }
          else {
            pcVar21 = pcVar21 + uVar13;
            uVar8 = uVar13;
          }
        }
        else {
          if (((bVar22 != true) && (uVar14 <= uVar8)) || (bVar20 = bVar22, uVar13 == 0)) {
code_r0x0010549a:
            uVar9 = uVar9 + uVar13;
            bVar18 = 0;
            bVar1 = true;
            goto joined_r0x001054ac;
          }
code_r0x001054f8:
          if (0x7fffffffffffffff - uVar13 < uVar9) {
            uVar6 = quotearg_style(4,param_7);
            uVar7 = func_0x001028e0(0,&UNK_00114de7,5);
            func_0x00102cb0(0,0,uVar7,uVar6);
            return 0;
          }
          uVar9 = uVar9 + uVar13;
          pcVar21 = pcVar21 + uVar13;
          uVar8 = uVar13;
          bVar22 = bVar20;
        }
        uVar14 = uVar14 - uVar8;
      } while (uVar14 != 0);
      uStack128 = uStack128 - uVar5;
      *(bool *)param_11 = bVar22;
    } while (uStack128 != 0);
    if (bVar22 != false) {
      lVar4 = func_0x001029c0((ulong)param_2,uVar9,1,uVar9);
      if (lVar4 < 0) {
        uVar6 = quotearg_style(4,param_8);
        puVar15 = &UNK_00114d9f;
      }
      else {
        if ((param_6 == 0) || (iVar3 = punch_hole((ulong)param_2,lVar4 - uVar9,uVar9), -1 < iVar3))
        {
          return 1;
        }
        uVar6 = quotearg_style(4,param_8);
        puVar15 = &UNK_00114daf;
      }
      uVar7 = func_0x001028e0(0,puVar15,5);
      puVar10 = (uint *)func_0x00102770();
      func_0x00102cb0(0,(ulong)*puVar10,uVar7,uVar6);
      return 0;
    }
  }
  return 1;
}

