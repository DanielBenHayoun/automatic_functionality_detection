
/* WARNING: Removing unreachable block (ram,0x00104226) */

uint * base64_decode_ctx(uint *param_1,uint *param_2,uint *param_3,uint **param_4,uint **param_5)

{
  char cVar1;
  byte bVar2;
  uint **ppuVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint **ppuVar9;
  uint *puVar10;
  ulong extraout_RDX;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  long in_FS_OFFSET;
  uint *puStack160;
  long lStack152;
  ulong uStack144;
  uint **ppuStack136;
  uint *puStack128;
  uint *puStack120;
  uint *puStack112;
  bool bStack99;
  bool bStack98;
  bool bStack97;
  uint *puStack96;
  uint **ppuStack88;
  uint **ppuStack80;
  uint *puStack72;
  ulong uStack64;
  
  puVar10 = *param_5;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  bStack99 = param_1 == (uint *)0x0;
  bStack97 = !bStack99;
  if (bStack99) {
    bStack98 = true;
  }
  else {
    bStack98 = *param_1 == 0 && param_3 != (uint *)0x0;
  }
  bStack99 = bStack99 || param_3 != (uint *)0x0;
  puVar4 = param_1 + 1;
  ppuStack136 = &puStack72;
  puVar12 = param_1;
  puStack128 = param_2;
  puStack96 = puVar4;
  ppuStack88 = param_5;
  ppuStack80 = param_4;
  puStack72 = puVar10;
code_r0x00104064:
  puVar14 = puVar10;
  if (bStack98 != false) goto code_r0x00104145;
code_r0x00104072:
  bVar2 = param_3 == (uint *)0x0 & bStack99;
  puVar4 = (uint *)((ulong)puVar4 & 0xffffffffffffff00 | (ulong)bVar2);
  puVar11 = puStack128;
  if (bVar2 == 0) {
    do {
      puStack128 = puVar11;
      if (param_3 == (uint *)0x0) {
        ppuStack80 = (uint **)((long)ppuStack80 + (long)((long)puVar10 - (long)puVar14));
        puVar13 = puVar11;
        if (param_1 == (uint *)0x0) {
          puVar4 = (uint *)0x1;
          puVar10 = puVar14;
          puStack72 = puVar14;
          break;
        }
code_r0x00104181:
        uVar8 = *param_1;
        if (uVar8 != 4) {
          ppuVar9 = param_4;
          puStack72 = puVar14;
          if (uVar8 == 0) goto code_r0x001041e7;
code_r0x0010418d:
          ppuVar3 = (uint **)(ulong)uVar8;
          param_4 = ppuVar9;
          if (puVar11 < puVar13) {
            do {
              puStack128 = (uint *)((long)puVar11 + 1);
              cVar1 = *(char *)puVar11;
              param_4 = ppuVar3;
              if (cVar1 != '\n') {
                uVar8 = (int)ppuVar3 + 1;
                param_4 = (uint **)(ulong)uVar8;
                *param_1 = uVar8;
                *(char *)((long)((long)param_1 + 4) + (long)ppuVar3) = cVar1;
                ppuVar9 = param_4;
                if (uVar8 == 4) {
                  param_3 = (uint *)0x4;
                  puVar11 = puStack96;
                  goto code_r0x001040b3;
                }
              }
              uVar8 = (uint)param_4;
              ppuVar3 = param_4;
              param_4 = ppuVar9;
              puVar11 = puStack128;
            } while (puStack128 != puVar13);
          }
          param_3 = (uint *)(ulong)uVar8;
          puVar11 = puStack96;
          if (uVar8 != 0) goto code_r0x001040b3;
          goto code_r0x001041cf;
        }
        *param_1 = 0;
code_r0x001041e7:
        puStack72 = puVar14;
        if ((long)param_3 < 4) {
code_r0x00104204:
          uVar8 = *param_1;
          ppuVar9 = param_4;
          goto code_r0x0010418d;
        }
        param_2 = (uint *)0xa;
        puStack112 = (uint *)&UNK_001041ff;
        lVar5 = func_0x00101710(puVar11,10,4);
        if (lVar5 != 0) goto code_r0x00104204;
        param_3 = (uint *)0x4;
        puStack128 = puVar11 + 1;
      }
      else {
        if (*(char *)puVar11 == '\n') {
          if (param_1 != (uint *)0x0) {
            puStack128 = (uint *)((long)puVar11 + 1);
            param_3 = (uint *)((long)param_3 + -1);
            goto code_r0x00104064;
          }
          ppuStack80 = (uint **)((long)ppuStack80 + (long)((long)puVar10 - (long)puVar14));
        }
        else {
          ppuStack80 = (uint **)((long)ppuStack80 + (long)((long)puVar10 - (long)puVar14));
          puVar13 = (uint *)((long)puVar11 + (long)param_3);
          if (param_1 != (uint *)0x0) goto code_r0x00104181;
        }
        puVar13 = (uint *)((long)puVar11 + (long)param_3);
        puStack72 = puVar14;
code_r0x001040b3:
        if (((param_3 < (uint *)0x4) && (bStack97 != false)) && (bStack99 != false)) {
code_r0x001041cf:
          puVar4 = (uint *)0x1;
          puVar10 = puStack72;
          puVar12 = puVar11;
          break;
        }
      }
      puStack112 = (uint *)&UNK_001040d9;
      param_4 = ppuStack136;
      param_2 = param_3;
      puVar4 = (uint *)decode_4(puVar11,param_3,&ppuStack80);
      puVar10 = puStack72;
      puVar12 = puVar11;
      if ((char)puVar4 == '\0') break;
      param_3 = (uint *)((long)puVar13 - (long)puStack128);
      puVar14 = puStack72;
      if (bStack98 != false) goto code_r0x00104145;
      bVar2 = param_3 == (uint *)0x0 & bStack99;
      puVar4 = (uint *)((ulong)puVar4 & 0xffffffffffffff00 | (ulong)bVar2);
      puVar11 = puStack128;
      if (bVar2 != 0) break;
    } while( true );
  }
  *ppuStack88 = (uint *)((long)*ppuStack88 - (long)puVar10);
  uStack144 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (uStack144 == 0) {
    return puVar4;
  }
  puStack112 = (uint *)&UNK_0010429d;
  func_0x00101660();
  lStack152 = *(long *)(in_FS_OFFSET + 0x28);
  puVar10 = (uint *)((extraout_RDX >> 2) * 3 + 3);
  puStack160 = puVar10;
  puStack120 = param_3;
  puStack112 = param_1;
  puVar4 = (uint *)func_0x00101780();
  *param_4 = puVar4;
  if (puVar4 != (uint *)0x0) {
    uVar6 = base64_decode_ctx(puVar12,param_2,extraout_RDX,puVar4,&puStack160);
    if ((char)uVar6 == '\0') {
      puVar12 = *param_4;
      func_0x00101590();
      *param_4 = (uint *)0x0;
      uVar6 = uVar6 & 0xff;
      goto code_r0x0010431d;
    }
    puVar10 = puVar12;
    if (param_5 != (uint **)0x0) {
      *param_5 = puStack160;
      goto code_r0x0010431d;
    }
  }
  puVar12 = puVar10;
  uVar6 = 1;
code_r0x0010431d:
  if (lStack152 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uint *)uVar6;
  }
  uVar7 = func_0x00101660();
  file_name = puVar12;
  return (uint *)uVar7;
code_r0x00104145:
  while( true ) {
    puStack112 = (uint *)&UNK_00104156;
    param_4 = ppuStack136;
    param_2 = param_3;
    puVar12 = puStack128;
    puVar4 = (uint *)decode_4(puStack128,param_3,&ppuStack80);
    puVar10 = puStack72;
    if ((char)puVar4 == '\0') break;
    puStack128 = puStack128 + 1;
    param_3 = param_3 + -1;
    puVar14 = puStack72;
  }
  goto code_r0x00104072;
}

