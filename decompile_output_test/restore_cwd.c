
/* WARNING: Possible PIC construction at 0x00109646: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00109528: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010964b) */
/* WARNING: Removing unreachable block (ram,0x00109680) */
/* WARNING: Removing unreachable block (ram,0x00109650) */
/* WARNING: Removing unreachable block (ram,0x0010952d) */
/* WARNING: Removing unreachable block (ram,0x00109533) */

ulong restore_cwd(uint *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  uint uStack68;
  long lStack64;
  
  uVar1 = *param_1;
  if (-1 < (int)*param_1) goto code_r0x00101b50;
  pcVar7 = *(char **)(param_1 + 2);
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = func_0x00101990();
  uVar5 = (ulong)uVar1;
  if ((uVar1 == 0) || (piVar4 = (int *)func_0x001018a0(), *piVar4 != 0x24)) {
code_r0x00109369:
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar5;
    }
code_r0x00109581:
    func_0x001019a0();
code_r0x00109586:
    func_0x00101a00(&UNK_0010b316,&UNK_0010b2f8,0x7e,__PRETTY_FUNCTION___5099);
code_r0x001095a5:
    func_0x00101a00(&UNK_0010b31e,&UNK_0010b2f8,0x7f,__PRETTY_FUNCTION___5099);
code_r0x001095c4:
    func_0x00101a00(&UNK_0010b336,&UNK_0010b2f8,0xa3,__PRETTY_FUNCTION___5099);
  }
  else {
    uVar5 = func_0x00101960(pcVar7);
    uStack68 = 0xffffff9c;
    if (uVar5 == 0) goto code_r0x00109586;
    if (uVar5 < 0x1000) goto code_r0x001095a5;
    lVar6 = func_0x00101a40(pcVar7,&UNK_0010b3a8);
    if (lVar6 == 2) {
      puVar8 = (undefined *)func_0x00101a60(pcVar7 + 3,0x2f,uVar5 - 3);
      if (puVar8 != (undefined *)0x0) {
        *puVar8 = 0;
        iVar2 = cdb_advance_fd(&uStack68,pcVar7);
        *puVar8 = 0x2f;
        if (iVar2 != 0) goto code_r0x001094f8;
        lVar6 = func_0x00101a40(puVar8 + 1,&UNK_0010b3a8);
        pcVar9 = puVar8 + 1 + lVar6;
        goto code_r0x001093e0;
      }
code_r0x00109506:
      uVar5 = 0xffffffff;
      goto code_r0x00109369;
    }
    pcVar9 = pcVar7;
    if (lVar6 != 0) {
      iVar2 = cdb_advance_fd(&uStack68,&UNK_0010b3a8);
      if (iVar2 == 0) {
        pcVar9 = pcVar7 + lVar6;
        goto code_r0x001093e0;
      }
code_r0x001094f8:
      iVar2 = *piVar4;
      cdb_free(&uStack68);
      *piVar4 = iVar2;
      goto code_r0x00109506;
    }
code_r0x001093e0:
    if (*pcVar9 != '/') {
      pcVar7 = pcVar7 + uVar5;
      if (pcVar9 <= pcVar7) {
        while (0xfff < (long)(pcVar7 + -(long)pcVar9)) {
          puVar8 = (undefined *)func_0x00101bb0(pcVar9,0x2f,0x1000);
          if (puVar8 == (undefined *)0x0) {
            *piVar4 = 0x24;
            uVar5 = 0xffffffff;
            goto code_r0x00109369;
          }
          *puVar8 = 0;
          if (0xfff < (long)(puVar8 + -(long)pcVar9)) {
            func_0x00101a00(&UNK_0010b345,&UNK_0010b2f8,0xb3,__PRETTY_FUNCTION___5099);
            goto code_r0x00109581;
          }
          iVar2 = cdb_advance_fd(&uStack68,pcVar9);
          *puVar8 = 0x2f;
          if (iVar2 != 0) goto code_r0x001094f8;
          lVar6 = func_0x00101a40(puVar8 + 1,&UNK_0010b3a8);
          pcVar9 = puVar8 + 1 + lVar6;
        }
        uVar1 = uStack68;
        if ((pcVar7 <= pcVar9) ||
           (iVar2 = cdb_advance_fd(&uStack68,pcVar9), uVar1 = uStack68, iVar2 == 0)) {
code_r0x00101b50:
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*(code *)PTR_fchdir_0030df20)((ulong)uVar1);
          return uVar3;
        }
        goto code_r0x001094f8;
      }
      goto code_r0x001095c4;
    }
  }
  puVar8 = &UNK_0010b32a;
  func_0x00101a00(&UNK_0010b32a,&UNK_0010b2f8,0xa2,__PRETTY_FUNCTION___5099);
  iVar2 = func_0x00101ad0();
  if (-1 < iVar2) {
    iVar2 = func_0x00101b40(puVar8);
    if (iVar2 != 0) {
      uVar1 = func_0x00101ad0(puVar8);
      lVar6 = func_0x001019f0((ulong)uVar1,0,1);
      if (lVar6 == -1) goto code_r0x00101920;
    }
    iVar2 = rpl_fflush(puVar8);
    if (iVar2 != 0) {
      func_0x001018a0();
    }
  }
code_r0x00101920:
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)PTR_fclose_0030de08)(puVar8);
  return uVar3;
}

