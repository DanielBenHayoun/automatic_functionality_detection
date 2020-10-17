
undefined * chdir_long(char *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  long extraout_RDX;
  ulong uVar10;
  byte *pbVar11;
  uint *puVar12;
  uint *unaff_R12;
  uint *unaff_R13;
  char *pcVar13;
  long in_FS_OFFSET;
  uint uStack124;
  long lStack120;
  undefined *puStack104;
  char *pcStack96;
  uint *puStack88;
  uint *puStack80;
  uint uStack68;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puStack80 = (uint *)&UNK_00109fd6;
  uVar3 = func_0x00101e70();
  puStack104 = (undefined *)(ulong)uVar3;
  if (uVar3 == 0) {
code_r0x00109fe9:
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return puStack104;
    }
code_r0x0010a201:
    puStack80 = (uint *)&UNK_0010a206;
    func_0x00101e80();
code_r0x0010a206:
    puStack80 = (uint *)&UNK_0010a225;
    func_0x00101f10(&UNK_0010febe,&UNK_0010fea0,0x7e,__PRETTY_FUNCTION___5099);
code_r0x0010a225:
    puStack80 = (uint *)&UNK_0010a244;
    func_0x00101f10(&UNK_0010fec6,&UNK_0010fea0,0x7f,__PRETTY_FUNCTION___5099);
  }
  else {
    puStack80 = (uint *)&UNK_00109fe1;
    piVar5 = (int *)func_0x00101d40();
    if (*piVar5 != 0x24) goto code_r0x00109fe9;
    puStack80 = (uint *)&UNK_0010a018;
    unaff_R12 = (uint *)func_0x00101e40(param_1);
    uStack68 = 0xffffff9c;
    if (unaff_R12 == (uint *)0x0) goto code_r0x0010a206;
    if (unaff_R12 < (uint *)0x1000) goto code_r0x0010a225;
    puStack80 = (uint *)&UNK_0010a047;
    puStack104 = (undefined *)func_0x00101f60(param_1,&UNK_0010f63e);
    if (puStack104 == (undefined *)0x2) {
      puStack80 = (uint *)&UNK_0010a133;
      puStack104 = (undefined *)func_0x00101f70(param_1 + 3,0x2f,(long)unaff_R12 - 3);
      if (puStack104 != (undefined *)0x0) {
        unaff_R13 = &uStack68;
        *puStack104 = 0;
        puStack80 = (uint *)&UNK_0010a14e;
        iVar4 = cdb_advance_fd(unaff_R13,param_1);
        *puStack104 = 0x2f;
        if (iVar4 != 0) goto code_r0x0010a178;
        puStack104 = puStack104 + 1;
        puStack80 = (uint *)&UNK_0010a168;
        lVar7 = func_0x00101f60(puStack104,&UNK_0010f63e);
        pcVar13 = puStack104 + lVar7;
        goto code_r0x0010a060;
      }
code_r0x0010a186:
      puStack104 = (undefined *)0xffffffff;
      goto code_r0x00109fe9;
    }
    pcVar13 = param_1;
    if (puStack104 != (undefined *)0x0) {
      unaff_R13 = &uStack68;
      puStack80 = (uint *)&UNK_0010a1d4;
      iVar4 = cdb_advance_fd(unaff_R13,&UNK_0010f63e);
      if (iVar4 == 0) {
        pcVar13 = param_1 + (long)puStack104;
        goto code_r0x0010a060;
      }
code_r0x0010a178:
      unaff_R13 = &uStack68;
      iVar4 = *piVar5;
      puStack80 = (uint *)&UNK_0010a183;
      cdb_free(unaff_R13);
      *piVar5 = iVar4;
      goto code_r0x0010a186;
    }
code_r0x0010a060:
    if (*pcVar13 == '/') goto code_r0x0010a263;
    param_1 = param_1 + (long)unaff_R12;
    if (pcVar13 <= param_1) {
      unaff_R12 = &uStack68;
      while (unaff_R13 = unaff_R12, 0xfff < (long)(param_1 + -(long)pcVar13)) {
        puStack80 = (uint *)&UNK_0010a0fe;
        puStack104 = (undefined *)func_0x00102130(pcVar13,0x2f,0x1000);
        if (puStack104 == (undefined *)0x0) {
          *piVar5 = 0x24;
          puStack104 = (undefined *)0xffffffff;
          goto code_r0x00109fe9;
        }
        *puStack104 = 0;
        if (0xfff < (long)(puStack104 + -(long)pcVar13)) {
          puStack80 = (uint *)&UNK_0010a201;
          func_0x00101f10(&UNK_0010feed,&UNK_0010fea0,0xb3,__PRETTY_FUNCTION___5099);
          goto code_r0x0010a201;
        }
        puStack80 = (uint *)&UNK_0010a0b8;
        iVar4 = cdb_advance_fd(unaff_R12,pcVar13);
        *puStack104 = 0x2f;
        if (iVar4 != 0) goto code_r0x0010a178;
        puStack80 = (uint *)&UNK_0010a0d6;
        lVar7 = func_0x00101f60(puStack104 + 1,&UNK_0010f63e);
        pcVar13 = puStack104 + 1 + lVar7;
      }
      if (pcVar13 < param_1) {
        puStack80 = (uint *)&UNK_0010a1a0;
        iVar4 = cdb_advance_fd(unaff_R12,pcVar13);
        if (iVar4 != 0) goto code_r0x0010a178;
      }
      puStack80 = (uint *)&UNK_0010a1ad;
      uVar3 = func_0x001020c0((ulong)uStack68);
      puStack104 = (undefined *)(ulong)uVar3;
      if (uVar3 == 0) {
        puStack80 = (uint *)&UNK_0010a1bb;
        cdb_free(unaff_R12);
        goto code_r0x00109fe9;
      }
      goto code_r0x0010a178;
    }
  }
  puStack80 = (uint *)&UNK_0010a263;
  func_0x00101f10(&UNK_0010fede,&UNK_0010fea0,0xa3,__PRETTY_FUNCTION___5099);
code_r0x0010a263:
  pbVar11 = &UNK_0010fea0;
  puVar9 = (uint *)&UNK_0010fed2;
  puStack80 = (uint *)&UNK_0010a282;
  func_0x00101f10(&UNK_0010fed2,&UNK_0010fea0,0xa2,__PRETTY_FUNCTION___5099);
  lStack120 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar9 == (uint *)0x0) {
    puVar9 = &uStack124;
  }
  puVar12 = puVar9;
  pcStack96 = param_1;
  puStack88 = unaff_R12;
  puStack80 = unaff_R13;
  uVar6 = func_0x00101ea0();
  if ((0xfffffffffffffffd < uVar6) && (extraout_RDX != 0)) {
    puVar12 = (uint *)0x0;
    cVar2 = hard_locale();
    if (cVar2 == '\0') {
      uVar6 = 1;
      *puVar9 = (uint)*pbVar11;
    }
  }
  if (lStack120 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar6;
  }
  func_0x00101e80();
  lVar7 = func_0x00101e40();
  uVar8 = lVar7 + 1;
  puVar9 = puVar12;
  uVar6 = 0;
  do {
    uVar10 = uVar6 + 1;
    if ((((*(char *)((long)puVar12 + uVar6) == '\\') && (uVar6 + 4 < uVar8)) &&
        ((byte)(*(char *)((long)puVar12 + uVar10) - 0x30U) < 4)) &&
       ((cVar2 = *(char *)((long)puVar12 + uVar6 + 2), (byte)(cVar2 - 0x30U) < 8 &&
        (cVar1 = *(char *)((long)puVar12 + uVar6 + 3), (byte)(cVar1 - 0x30U) < 8)))) {
      *(char *)puVar9 = cVar1 + 'P' + (cVar2 + *(char *)((long)puVar12 + uVar10) * '\b') * '\b';
      uVar10 = uVar6 + 4;
    }
    else {
      *(char *)puVar9 = *(char *)((long)puVar12 + uVar6);
    }
    puVar9 = (uint *)((long)puVar9 + 1);
    uVar6 = uVar10;
  } while (uVar10 < uVar8);
  return (undefined *)uVar8;
}

