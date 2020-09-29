
ulong get_funky_string(byte **param_1,byte **param_2,uint param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  bool bVar10;
  
  pbVar7 = *param_2;
  pbVar8 = *param_1;
  lVar9 = 0;
code_r0x0010540f:
  do {
    bVar6 = *pbVar7;
    cVar2 = bVar6 - 0x3d;
    bVar10 = bVar6 == 0x3d;
    pbVar3 = pbVar7;
    while (pbVar7 = pbVar3, !bVar10) {
      if (bVar10 || SBORROW1(bVar6,'=') != cVar2 < '\0') {
        if ((bVar6 != 0) && (bVar6 != 0x3a)) goto code_r0x00105470;
        uVar4 = 1;
        goto code_r0x001054df;
      }
      if (bVar6 == 0x5c) {
        bVar6 = pbVar3[1];
        pbVar7 = pbVar3 + 2;
        switch(bVar6) {
        case 0:
          uVar4 = 0;
          goto code_r0x001054df;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
          bVar1 = *pbVar7;
          bVar6 = bVar6 - 0x30;
          while ((byte)(bVar1 - 0x30) < 8) {
            pbVar7 = pbVar7 + 1;
            bVar6 = (bVar1 - 0x30) + bVar6 * '\b';
            bVar1 = *pbVar7;
          }
          break;
        case 0x3f:
          bVar6 = 0x7f;
          break;
        case 0x58:
        case 0x78:
          bVar6 = 0;
          goto code_r0x00105548;
        case 0x5f:
          bVar6 = 0x20;
          break;
        case 0x61:
          bVar6 = 7;
          break;
        case 0x62:
          bVar6 = 8;
          break;
        case 0x65:
          bVar6 = 0x1b;
          break;
        case 0x66:
          bVar6 = 0xc;
          break;
        case 0x6e:
          bVar6 = 10;
          break;
        case 0x72:
          bVar6 = 0xd;
          break;
        case 0x74:
          bVar6 = 9;
          break;
        case 0x76:
          bVar6 = 0xb;
        }
      }
      else {
        if (bVar6 != 0x5e) goto code_r0x00105470;
        bVar6 = pbVar3[1];
        pbVar7 = pbVar3 + 1;
        if (0x3e < (byte)(bVar6 - 0x40)) {
          if (bVar6 != 0x3f) {
            uVar4 = 0;
            goto code_r0x001054df;
          }
          *pbVar8 = 0x7f;
          lVar9 = lVar9 + 1;
          pbVar8 = pbVar8 + 1;
          goto code_r0x0010540f;
        }
        pbVar7 = pbVar3 + 2;
        bVar6 = bVar6 & 0x1f;
      }
      *pbVar8 = bVar6;
      bVar6 = *pbVar7;
      lVar9 = lVar9 + 1;
      pbVar8 = pbVar8 + 1;
      cVar2 = bVar6 - 0x3d;
      bVar10 = cVar2 == '\0';
      pbVar3 = pbVar7;
    }
    if ((char)param_3 != '\0') {
      uVar4 = (ulong)param_3;
code_r0x001054df:
      *param_1 = pbVar8;
      *param_2 = pbVar7;
      *param_4 = lVar9;
      return uVar4;
    }
code_r0x00105470:
    *pbVar8 = bVar6;
    pbVar7 = pbVar3 + 1;
    lVar9 = lVar9 + 1;
    pbVar8 = pbVar8 + 1;
  } while( true );
code_r0x00105548:
  bVar1 = *pbVar7;
  bVar5 = bVar1 - 0x30;
  if (bVar5 < 0x37) {
    while (uVar4 = 1 << (bVar5 & 0x3f), (uVar4 & 0x7e0000) == 0) {
      if ((uVar4 & 0x7e000000000000) != 0) {
        pbVar7 = pbVar7 + 1;
        bVar6 = bVar1 + 0xa9 + bVar6 * '\x10';
        goto code_r0x00105548;
      }
      if ((uVar4 & 0x3ff) == 0) goto code_r0x00105598;
      pbVar7 = pbVar7 + 1;
      bVar6 = (bVar1 - 0x30) + bVar6 * '\x10';
      bVar1 = *pbVar7;
      bVar5 = bVar1 - 0x30;
      if (0x36 < bVar5) goto code_r0x00105598;
    }
    pbVar7 = pbVar7 + 1;
    bVar6 = (bVar1 - 0x37) + bVar6 * '\x10';
    goto code_r0x00105548;
  }
code_r0x00105598:
  *pbVar8 = bVar6;
  lVar9 = lVar9 + 1;
  pbVar8 = pbVar8 + 1;
  goto code_r0x0010540f;
}

