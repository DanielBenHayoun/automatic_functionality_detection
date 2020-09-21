
/* WARNING: Possible PIC construction at 0x0010a1a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010a1ad) */
/* WARNING: Removing unreachable block (ram,0x0010a1b3) */

undefined * restore_cwd(uint *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  long extraout_RDX;
  ulong uVar11;
  byte *pbVar12;
  uint *puVar13;
  uint *unaff_R12;
  uint *unaff_R13;
  char *pcVar14;
  long in_FS_OFFSET;
  uint uStack124;
  long lStack120;
  undefined *puStack104;
  char *pcStack96;
  uint *puStack88;
  uint *puStack80;
  uint uStack68;
  long lStack64;
  
  uVar3 = *param_1;
  if (-1 < (int)uVar3) goto code_r0x001020c0;
  pcStack96 = *(char **)(param_1 + 2);
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
    piVar6 = (int *)func_0x00101d40();
    if (*piVar6 != 0x24) goto code_r0x00109fe9;
    puStack80 = (uint *)&UNK_0010a018;
    unaff_R12 = (uint *)func_0x00101e40(pcStack96);
    uStack68 = 0xffffff9c;
    if (unaff_R12 == (uint *)0x0) goto code_r0x0010a206;
    if (unaff_R12 < (uint *)0x1000) goto code_r0x0010a225;
    puStack80 = (uint *)&UNK_0010a047;
    puStack104 = (undefined *)func_0x00101f60(pcStack96,&UNK_0010f63e);
    if (puStack104 == (undefined *)0x2) {
      puStack80 = (uint *)&UNK_0010a133;
      puStack104 = (undefined *)func_0x00101f70(pcStack96 + 3,0x2f,(long)unaff_R12 - 3);
      if (puStack104 != (undefined *)0x0) {
        unaff_R13 = &uStack68;
        *puStack104 = 0;
        puStack80 = (uint *)&UNK_0010a14e;
        iVar4 = cdb_advance_fd(unaff_R13,pcStack96);
        *puStack104 = 0x2f;
        if (iVar4 != 0) goto code_r0x0010a178;
        puStack104 = puStack104 + 1;
        puStack80 = (uint *)&UNK_0010a168;
        lVar8 = func_0x00101f60(puStack104,&UNK_0010f63e);
        pcVar14 = puStack104 + lVar8;
        goto code_r0x0010a060;
      }
code_r0x0010a186:
      puStack104 = (undefined *)0xffffffff;
      goto code_r0x00109fe9;
    }
    pcVar14 = pcStack96;
    if (puStack104 != (undefined *)0x0) {
      unaff_R13 = &uStack68;
      puStack80 = (uint *)&UNK_0010a1d4;
      iVar4 = cdb_advance_fd(unaff_R13,&UNK_0010f63e);
      if (iVar4 == 0) {
        pcVar14 = pcStack96 + (long)puStack104;
        goto code_r0x0010a060;
      }
code_r0x0010a178:
      unaff_R13 = &uStack68;
      iVar4 = *piVar6;
      puStack80 = (uint *)&UNK_0010a183;
      cdb_free(unaff_R13);
      *piVar6 = iVar4;
      goto code_r0x0010a186;
    }
code_r0x0010a060:
    if (*pcVar14 == '/') goto code_r0x0010a263;
    pcStack96 = pcStack96 + (long)unaff_R12;
    if (pcVar14 <= pcStack96) {
      unaff_R12 = &uStack68;
      while (0xfff < (long)(pcStack96 + -(long)pcVar14)) {
        puStack80 = (uint *)&UNK_0010a0fe;
        puStack104 = (undefined *)func_0x00102130(pcVar14,0x2f,0x1000);
        unaff_R13 = unaff_R12;
        if (puStack104 == (undefined *)0x0) {
          *piVar6 = 0x24;
          puStack104 = (undefined *)0xffffffff;
          goto code_r0x00109fe9;
        }
        *puStack104 = 0;
        if (0xfff < (long)(puStack104 + -(long)pcVar14)) {
          puStack80 = (uint *)&UNK_0010a201;
          func_0x00101f10(&UNK_0010feed,&UNK_0010fea0,0xb3,__PRETTY_FUNCTION___5099);
          goto code_r0x0010a201;
        }
        puStack80 = (uint *)&UNK_0010a0b8;
        iVar4 = cdb_advance_fd(unaff_R12,pcVar14);
        *puStack104 = 0x2f;
        if (iVar4 != 0) goto code_r0x0010a178;
        puStack80 = (uint *)&UNK_0010a0d6;
        lVar8 = func_0x00101f60(puStack104 + 1,&UNK_0010f63e);
        pcVar14 = puStack104 + 1 + lVar8;
      }
      if (pcVar14 < pcStack96) {
        puStack80 = (uint *)&UNK_0010a1a0;
        iVar4 = cdb_advance_fd(unaff_R12,pcVar14);
        if (iVar4 != 0) goto code_r0x0010a178;
      }
      puStack80 = (uint *)&UNK_0010a1ad;
      uVar3 = uStack68;
code_r0x001020c0:
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)PTR_fchdir_00312f10)((ulong)uVar3);
      return (undefined *)uVar5;
    }
  }
  puStack80 = (uint *)&UNK_0010a263;
  func_0x00101f10(&UNK_0010fede,&UNK_0010fea0,0xa3,__PRETTY_FUNCTION___5099);
code_r0x0010a263:
  pbVar12 = &UNK_0010fea0;
  puVar10 = (uint *)&UNK_0010fed2;
  puStack80 = (uint *)&UNK_0010a282;
  func_0x00101f10(&UNK_0010fed2,&UNK_0010fea0,0xa2,__PRETTY_FUNCTION___5099);
  lStack120 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar10 == (uint *)0x0) {
    puVar10 = &uStack124;
  }
  puVar13 = puVar10;
  puStack88 = unaff_R12;
  puStack80 = unaff_R13;
  uVar7 = func_0x00101ea0();
  if ((0xfffffffffffffffd < uVar7) && (extraout_RDX != 0)) {
    puVar13 = (uint *)0x0;
    cVar2 = hard_locale();
    if (cVar2 == '\0') {
      uVar7 = 1;
      *puVar10 = (uint)*pbVar12;
    }
  }
  if (lStack120 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar7;
  }
  func_0x00101e80();
  lVar8 = func_0x00101e40();
  uVar9 = lVar8 + 1;
  puVar10 = puVar13;
  uVar7 = 0;
  do {
    uVar11 = uVar7 + 1;
    if ((((*(char *)((long)puVar13 + uVar7) == '\\') && (uVar7 + 4 < uVar9)) &&
        ((byte)(*(char *)((long)puVar13 + uVar11) - 0x30U) < 4)) &&
       ((cVar2 = *(char *)((long)puVar13 + uVar7 + 2), (byte)(cVar2 - 0x30U) < 8 &&
        (cVar1 = *(char *)((long)puVar13 + uVar7 + 3), (byte)(cVar1 - 0x30U) < 8)))) {
      *(char *)puVar10 = cVar1 + 'P' + (cVar2 + *(char *)((long)puVar13 + uVar11) * '\b') * '\b';
      uVar11 = uVar7 + 4;
    }
    else {
      *(char *)puVar10 = *(char *)((long)puVar13 + uVar7);
    }
    puVar10 = (uint *)((long)puVar10 + 1);
    uVar7 = uVar11;
  } while (uVar11 < uVar9);
  return (undefined *)uVar9;
}

