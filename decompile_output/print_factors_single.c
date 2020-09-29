
undefined8 print_factors_single(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined *puVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 *puVar15;
  uint uVar16;
  long in_FS_OFFSET;
  undefined8 uStack312;
  long lStack304;
  undefined8 auStack296 [26];
  byte abStack88 [26];
  byte bStack62;
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  print_uintmaxes();
  lbuf_putc(0x3a);
  factor(param_1,param_2,&uStack312);
  if (bStack62 != 0) {
    pbVar11 = abStack88;
    uVar16 = 0;
    puVar15 = auStack296;
    do {
      uVar8 = 0;
      if (*pbVar11 != 0) {
        do {
          uVar8 = uVar8 + 1;
          lbuf_putc(0x20);
          lbuf_putint(*puVar15,0);
        } while (uVar8 < *pbVar11);
      }
      uVar16 = uVar16 + 1;
      pbVar11 = pbVar11 + 1;
      puVar15 = puVar15 + 1;
    } while (uVar16 < bStack62);
  }
  if (lStack304 != 0) {
    lbuf_putc(0x20);
    print_uintmaxes(lStack304,uStack312);
  }
  pcVar14 = (char *)0xa;
  lbuf_putc();
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x001016f0();
  cVar1 = *pcVar14;
  while (cVar1 == ' ') {
    pcVar14 = pcVar14 + 1;
    cVar1 = *pcVar14;
  }
  pcVar13 = pcVar14 + 1;
  if (cVar1 == '+') {
    pcVar13 = pcVar14 + 2;
    pcVar14 = pcVar14 + 1;
  }
  iVar5 = 4;
  pcVar6 = pcVar14;
  do {
    cVar1 = *pcVar6;
    if (cVar1 == '\0') {
      if (iVar5 == 0) {
        iVar5 = (int)*pcVar14;
        if (*pcVar14 != '\0') {
          lVar7 = 0;
          uVar10 = 0;
          goto code_r0x001045e4;
        }
        lVar7 = 0;
        uVar10 = 0;
        goto code_r0x00104645;
      }
      if (iVar5 == 1) goto code_r0x0010461e;
      break;
    }
    iVar5 = 0;
    pcVar6 = pcVar6 + 1;
  } while ((int)cVar1 - 0x30U < 10);
  uVar3 = quote();
  puVar12 = &UNK_0010b678;
  goto code_r0x0010457b;
code_r0x001045e4:
  do {
    uVar2 = lVar7 * 2;
    uVar9 = lVar7 * 10;
    uVar16 = (uint)((ulong)lVar7 >> 0x20);
    lVar7 = uVar9 + (ulong)(iVar5 - 0x30);
    uVar9 = (ulong)(((uVar16 >> 0x1d) - ((int)uVar16 >> 0x1f)) + (uint)(uVar9 < uVar2) +
                   (uint)CARRY8(uVar9,(ulong)(iVar5 - 0x30)));
    uVar2 = uVar10 * 10;
    uVar10 = uVar9 + uVar2;
    if (CARRY8(uVar9,uVar2)) break;
    iVar5 = (int)*pcVar13;
    if (iVar5 == 0) {
      if (-1 < (long)uVar10) {
code_r0x00104645:
        if (dev_debug != '\0') {
          func_0x001018f0(&UNK_0010b650,1,0x24,stderr);
        }
        print_factors_single(uVar10,lVar7);
        return 1;
      }
      break;
    }
    pcVar13 = pcVar13 + 1;
  } while (uVar10 < 0x199999999999999a);
code_r0x0010461e:
  uVar3 = quote();
  puVar12 = &UNK_0010b47f;
code_r0x0010457b:
  uVar4 = func_0x001016c0(0,puVar12,5);
  func_0x001018b0(0,0,uVar4,uVar3);
  return 0;
}

