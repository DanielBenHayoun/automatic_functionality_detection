
/* WARNING: Removing unreachable block (ram,0x00103b26) */

uint * base32_decode_ctx(uint *param_1,uint *param_2,uint *param_3,uint **param_4,uint **param_5)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint **ppuVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  uint uVar14;
  uint **ppuVar15;
  long *plVar16;
  uint *puVar17;
  ulong extraout_RDX;
  byte **extraout_RDX_00;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint **ppuVar21;
  uint *puVar22;
  uint *puVar23;
  uint *puVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bStack98;
  uint **ppuStack80;
  uint *puStack72;
  long lStack64;
  
  puVar17 = *param_5;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  bVar25 = param_1 == (uint *)0x0;
  if (bVar25) {
    bVar5 = true;
  }
  else {
    bVar5 = *param_1 == 0 && param_3 != (uint *)0x0;
  }
  bVar6 = param_3 != (uint *)0x0;
  bStack98 = bVar25 || bVar6;
  puVar18 = param_1 + 1;
  puVar9 = puVar18;
  puVar20 = param_1;
  ppuVar21 = param_5;
  puVar22 = param_2;
  ppuStack80 = param_4;
  puStack72 = puVar17;
code_r0x00103962:
  puVar24 = puVar17;
  if (bVar5) goto code_r0x00103a3d;
code_r0x0010396e:
  puVar9 = (uint *)((ulong)puVar9 & 0xffffffffffffff00 | (ulong)(param_3 == (uint *)0x0 && bStack98)
                   );
  puVar19 = puVar20;
  if (param_3 != (uint *)0x0 || !bVar25 && !bVar6) {
    do {
      puVar19 = puVar22;
      puVar22 = puVar19;
      if (param_3 == (uint *)0x0) {
        ppuStack80 = (uint **)((long)ppuStack80 + (long)((long)puVar17 - (long)puVar24));
        puVar23 = puVar19;
        if (param_1 == (uint *)0x0) {
          puVar9 = (uint *)0x1;
          puVar17 = puVar24;
          puVar19 = puVar20;
          puStack72 = puVar24;
          break;
        }
code_r0x00103a79:
        uVar14 = *param_1;
        if (uVar14 != 8) {
          ppuVar15 = param_4;
          puStack72 = puVar24;
          if (uVar14 == 0) goto code_r0x00103ae7;
code_r0x00103a85:
          ppuVar8 = (uint **)(ulong)uVar14;
          param_4 = ppuVar15;
          if (puVar19 < puVar23) {
            do {
              puVar22 = (uint *)((long)puVar19 + 1);
              cVar1 = *(char *)puVar19;
              param_4 = ppuVar8;
              if (cVar1 != '\n') {
                uVar14 = (int)ppuVar8 + 1;
                param_4 = (uint **)(ulong)uVar14;
                *param_1 = uVar14;
                *(char *)((long)((long)param_1 + 4) + (long)ppuVar8) = cVar1;
                ppuVar15 = param_4;
                if (uVar14 == 8) {
                  param_3 = (uint *)0x8;
                  puVar19 = puVar18;
                  goto code_r0x001039af;
                }
              }
              uVar14 = (uint)param_4;
              ppuVar8 = param_4;
              param_4 = ppuVar15;
              puVar19 = puVar22;
            } while (puVar22 != puVar23);
          }
          param_3 = (uint *)(ulong)uVar14;
          puVar19 = puVar18;
          if (uVar14 != 0) goto code_r0x001039af;
          goto code_r0x00103ac7;
        }
        *param_1 = 0;
code_r0x00103ae7:
        puStack72 = puVar24;
        if ((long)param_3 < 8) {
code_r0x00103b04:
          uVar14 = *param_1;
          ppuVar15 = param_4;
          goto code_r0x00103a85;
        }
        param_2 = (uint *)0xa;
        lVar10 = func_0x00101710(puVar19,10,8);
        if (lVar10 != 0) goto code_r0x00103b04;
        puVar22 = puVar19 + 2;
        param_3 = (uint *)0x8;
      }
      else {
        if (*(char *)puVar19 == '\n') {
          if (param_1 != (uint *)0x0) {
            puVar22 = (uint *)((long)puVar19 + 1);
            param_3 = (uint *)((long)param_3 + -1);
            goto code_r0x00103962;
          }
          ppuStack80 = (uint **)((long)ppuStack80 + (long)((long)puVar17 - (long)puVar24));
        }
        else {
          ppuStack80 = (uint **)((long)ppuStack80 + (long)((long)puVar17 - (long)puVar24));
          puVar23 = (uint *)((long)puVar19 + (long)param_3);
          if (param_1 != (uint *)0x0) goto code_r0x00103a79;
        }
        puVar23 = (uint *)((long)puVar19 + (long)param_3);
        puStack72 = puVar24;
code_r0x001039af:
        if (((param_3 < (uint *)0x8) && (!bVar25)) && (bStack98)) {
code_r0x00103ac7:
          puVar9 = (uint *)0x1;
          puVar17 = puStack72;
          break;
        }
      }
      param_2 = param_3;
      param_4 = &puStack72;
      puVar9 = (uint *)decode_8(puVar19,param_2,&ppuStack80);
      puVar17 = puStack72;
      if ((char)puVar9 == '\0') break;
      param_3 = (uint *)((long)puVar23 - (long)puVar22);
      puVar24 = puStack72;
      if (bVar5) goto code_r0x00103a3d;
      bVar7 = param_3 == (uint *)0x0 && bStack98;
      puVar9 = (uint *)((ulong)puVar9 & 0xffffffffffffff00 | (ulong)bVar7);
      puVar20 = puVar19;
      if (bVar7) break;
    } while( true );
  }
  *param_5 = (uint *)((long)*param_5 - (long)puVar17);
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar9;
  }
  func_0x00101660();
  uVar3 = *(ulong *)(in_FS_OFFSET + 0x28);
  puVar17 = (uint *)((extraout_RDX >> 3) * 5 + 5);
  puVar18 = param_2;
  puVar9 = puVar17;
  puVar20 = (uint *)func_0x00101780();
  *param_4 = puVar20;
  if (puVar20 == (uint *)0x0) {
code_r0x00103c18:
    puVar19 = puVar9;
    param_2 = puVar18;
    uVar11 = 1;
  }
  else {
    uVar11 = base32_decode_ctx(puVar19,param_2,extraout_RDX,puVar20);
    if ((char)uVar11 == '\0') {
      puVar19 = *param_4;
      func_0x00101590();
      *param_4 = (uint *)0x0;
      uVar11 = uVar11 & 0xff;
    }
    else {
      puVar18 = param_2;
      puVar9 = puVar19;
      if (ppuVar21 == (uint **)0x0) goto code_r0x00103c18;
      *ppuVar21 = puVar17;
    }
  }
  plVar16 = (long *)(uVar3 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (plVar16 == (long *)0x0) {
    return (uint *)uVar11;
  }
  func_0x00101660();
  uVar12 = 0;
  if ((((uint *)0x1 < param_2) && (-1 < (char)b64[*(byte *)puVar19])) &&
     (cVar1 = b64[*(byte *)((long)puVar19 + 1)], -1 < cVar1)) {
    pbVar4 = *extraout_RDX_00;
    pbVar13 = pbVar4;
    if (*plVar16 != 0) {
      pbVar13 = pbVar4 + 1;
      *pbVar4 = b64[*(byte *)puVar19] << 2 | cVar1 >> 4;
      *plVar16 = *plVar16 + -1;
    }
    if (param_2 == (uint *)0x2) goto code_r0x00103d06;
    if (*(byte *)((long)puVar19 + 2) == 0x3d) {
      if ((param_2 != (uint *)0x4) || (*(char *)((long)puVar19 + 3) != '=')) goto code_r0x00103d06;
    }
    else {
      cVar2 = b64[*(byte *)((long)puVar19 + 2)];
      if (cVar2 < '\0') {
code_r0x00103d06:
        *extraout_RDX_00 = pbVar13;
        return (uint *)0;
      }
      if (*plVar16 != 0) {
        *pbVar13 = cVar1 << 4 | cVar2 >> 2;
        *plVar16 = *plVar16 + -1;
        pbVar13 = pbVar13 + 1;
      }
      if (param_2 == (uint *)0x3) goto code_r0x00103d06;
      if (*(byte *)((long)puVar19 + 3) == 0x3d) {
        if (param_2 != (uint *)0x4) goto code_r0x00103d06;
      }
      else {
        if ((char)b64[*(byte *)((long)puVar19 + 3)] < '\0') goto code_r0x00103d06;
        if (*plVar16 != 0) {
          *pbVar13 = cVar2 << 6 | b64[*(byte *)((long)puVar19 + 3)];
          *plVar16 = *plVar16 + -1;
          pbVar13 = pbVar13 + 1;
        }
      }
    }
    *extraout_RDX_00 = pbVar13;
    uVar12 = 1;
  }
  return (uint *)uVar12;
code_r0x00103a3d:
  while (param_2 = param_3, param_4 = &puStack72, puVar20 = puVar22, param_3 = param_2,
        puVar9 = (uint *)decode_8(puVar22,param_2,&ppuStack80), puVar17 = puStack72,
        (char)puVar9 != '\0') {
    puVar22 = puVar22 + 2;
    param_3 = param_3 + -2;
    puVar24 = puStack72;
  }
  goto code_r0x0010396e;
}

