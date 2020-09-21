
/* WARNING: Possible PIC construction at 0x00103ddd: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00103de2) */

ulong parse_signal_action_params(long param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *unaff_RBP;
  undefined1 *puVar12;
  char *pcVar13;
  char *pcVar14;
  undefined1 *puVar15;
  undefined *unaff_R12;
  undefined *puVar16;
  char *pcVar17;
  undefined1 *unaff_R14;
  undefined *unaff_R15;
  char *pcVar18;
  long in_FS_OFFSET;
  uint uStack252;
  char *pcStack248;
  long lStack240;
  ulong uStack224;
  char *pcStack216;
  undefined *puStack208;
  char *pcStack200;
  undefined1 *puStack192;
  undefined *puStack184;
  char *pcStack168;
  char acStack160 [24];
  long lStack136;
  char *pcStack120;
  char *pcStack112;
  undefined *puStack104;
  char *pcStack96;
  undefined1 *puStack88;
  char acStack72 [24];
  long lStack48;
  
  pcVar11 = (char *)(param_2 & 0xffffffff);
  pcVar18 = acStack72;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    unaff_RBP = (char *)0x4;
    pcVar11 = (char *)0x1;
    uVar9 = (-(uint)((char)param_2 == '\0') & 2) + 2;
    pcVar17 = (char *)(ulong)uVar9;
    do {
      pcVar13 = acStack72;
      puVar12 = pcVar11;
      iVar2 = sig2str();
      if (iVar2 == 0) {
        *(uint *)(unaff_RBP + signals) = uVar9;
      }
      uVar10 = (int)pcVar11 + 1;
      pcVar11 = (char *)(ulong)uVar10;
      unaff_RBP = unaff_RBP + 4;
    } while (uVar10 != 0x41);
    if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
    pcVar17 = (char *)xstrdup();
    pcVar13 = ",";
    puVar12 = pcVar17;
    unaff_R14 = (undefined1 *)func_0x00101b70();
    pcVar18 = unaff_R12;
    if (unaff_R14 != (undefined1 *)0x0) {
      unaff_RBP = ",";
      uVar9 = (-(uint)((char)pcVar11 == '\0') & 2) + 1;
      pcVar11 = (char *)(ulong)uVar9;
      do {
        pcVar13 = acStack72;
        iVar2 = operand2sig();
        if (iVar2 == 0) {
          pcVar11 = (char *)quote();
          uVar3 = func_0x00101960(0,&UNK_00106c26,5);
          pcVar13 = (char *)0x0;
          func_0x00101b40(0,0,uVar3,pcVar11);
code_r0x00103a37:
          puVar12 = (undefined1 *)(ulong)exit_failure;
          usage();
          pcVar18 = acStack72;
          break;
        }
        if (iVar2 < 1) goto code_r0x00103a37;
        puVar12 = (char *)0x0;
        pcVar13 = ",";
        *(uint *)(signals + (long)iVar2 * 4) = uVar9;
        unaff_R14 = (undefined1 *)func_0x00101b70();
        pcVar18 = acStack72;
      } while (unaff_R14 != (undefined1 *)0x0);
    }
    pcVar14 = pcVar17;
    if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) goto code_r0x001018a0;
  }
  func_0x001019a0();
  uVar5 = (ulong)pcVar13 & 0xffffffff;
  lStack136 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack120 = pcVar11;
  pcStack112 = unaff_RBP;
  puStack104 = pcVar18;
  pcStack96 = pcVar17;
  puStack88 = unaff_R14;
  if (puVar12 == (char *)0x0) {
    if ((char)pcVar13 == '\0') {
      puStack184 = &UNK_00103cac;
      func_0x00101aa0(unblock_signals);
      puVar15 = block_signals;
    }
    else {
      puStack184 = &UNK_00103c69;
      func_0x00101aa0(block_signals);
      puVar15 = unblock_signals;
    }
    puStack184 = &UNK_00103c75;
    func_0x00101a80();
    sig_mask_changed = '\x01';
    if (lStack136 == *(long *)(in_FS_OFFSET + 0x28)) {
      sig_mask_changed = 1;
      return 0;
    }
  }
  else {
    puVar16 = (undefined *)((ulong)pcVar13 & 0xffffffff);
    if (sig_mask_changed == '\0') {
      puStack184 = &UNK_00103c44;
      func_0x00101a80(block_signals);
      puStack184 = &UNK_00103c50;
      func_0x00101a80(unblock_signals);
    }
    sig_mask_changed = '\x01';
    puStack184 = &UNK_00103b2b;
    puVar15 = (undefined1 *)xstrdup(puVar12);
    pcVar13 = ",";
    puStack184 = &UNK_00103b3f;
    pcStack168 = puVar15;
    unaff_R15 = (undefined *)func_0x00101b70(puVar15,&UNK_00106b68);
    if (unaff_R15 != (undefined *)0x0) {
      unaff_R14 = block_signals;
      puVar12 = unblock_signals;
      pcVar17 = acStack160;
      if ((char)uVar5 == '\0') {
        puVar12 = block_signals;
      }
      do {
        puStack184 = &UNK_00103ba5;
        pcVar13 = pcVar17;
        uVar4 = operand2sig(unaff_R15,pcVar17);
        uVar5 = uVar4 & 0xffffffff;
        if ((int)uVar4 == 0) {
          puStack184 = &UNK_00103bd0;
          uVar5 = quote();
          puStack184 = &UNK_00103be6;
          uVar3 = func_0x00101960(0,&UNK_00106c26,5);
          pcVar13 = (char *)0x0;
          puStack184 = &UNK_00103bf7;
          func_0x00101b40(0,0,uVar3,uVar5);
code_r0x00103bf7:
          puVar15 = (undefined1 *)(ulong)exit_failure;
          puStack184 = &UNK_00103c02;
          usage();
          break;
        }
        if ((int)uVar4 < 1) goto code_r0x00103bf7;
        if ((char)puVar16 == '\0') {
          puStack184 = &UNK_00103bc1;
          func_0x00101c30(unblock_signals,uVar4 & 0xffffffff);
        }
        else {
          puStack184 = &UNK_00103b7a;
          func_0x00101c30(block_signals,uVar4 & 0xffffffff);
        }
        puStack184 = &UNK_00103b84;
        func_0x00101b60(puVar12,uVar5);
        pcVar13 = ",";
        puVar15 = (char *)0x0;
        puStack184 = &UNK_00103b92;
        unaff_R15 = (undefined *)func_0x00101b70(0,&UNK_00106b68);
      } while (unaff_R15 != (undefined *)0x0);
    }
    unaff_RBP = puVar12;
    pcVar14 = pcStack168;
    pcVar18 = puVar16;
    if (lStack136 == *(long *)(in_FS_OFFSET + 0x28)) goto code_r0x001018a0;
  }
  puStack184 = &UNK_00103cba;
  func_0x001019a0();
  lStack240 = *(long *)(in_FS_OFFSET + 0x28);
  uStack224 = uVar5;
  pcStack216 = unaff_RBP;
  puStack208 = pcVar18;
  pcStack200 = pcVar17;
  puStack192 = unaff_R14;
  puStack184 = unaff_R15;
  if ((int)(char)*puVar15 - 0x30U < 10) {
    piVar6 = (int *)func_0x001018c0();
    *piVar6 = 0;
    lVar7 = func_0x00101a90(puVar15,&pcStack248,10);
    if (((pcStack248 == puVar15) || (*pcStack248 != '\0')) ||
       ((*piVar6 != 0 || (uStack252 = (uint)lVar7, (long)(int)uStack252 != lVar7)))) {
      uStack252 = 0xffffffff;
    }
    else {
      if (uStack252 != 0xffffffff) {
        uVar9 = 0xff;
        if ((int)uStack252 < 0xff) {
          uVar9 = 0x7f;
        }
        uStack252 = uVar9 & uStack252;
        uVar5 = (ulong)uStack252;
        iVar2 = sig2str(uVar5,pcVar13);
        if (iVar2 == 0) {
          uVar4 = (ulong)uStack252;
          goto code_r0x00103e00;
        }
      }
    }
  }
  else {
    pcVar14 = (char *)xstrdup();
    cVar1 = *pcVar14;
    pcVar18 = pcVar14;
    while (cVar1 != '\0') {
      lVar7 = func_0x001019d0(&UNK_001076f5,(ulong)(uint)(int)cVar1);
      if (lVar7 != 0) {
        *pcVar18 = cVar1 + -0x20;
      }
      pcVar18 = pcVar18 + 1;
      cVar1 = *pcVar18;
    }
    iVar2 = str2sig(pcVar14,&uStack252);
    if ((iVar2 == 0) ||
       ((((*pcVar14 == 'S' && (pcVar14[1] == 'I')) && (pcVar14[2] == 'G')) &&
        (iVar2 = str2sig(pcVar14 + 3,&uStack252), iVar2 == 0)))) {
code_r0x001018a0:
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)PTR_free_00309df0)(pcVar14);
      return uVar3;
    }
    uStack252 = 0xffffffff;
    func_0x001018a0(pcVar14);
  }
  uVar3 = quote();
  uVar8 = func_0x00101960(0,&UNK_00106c26,5);
  uVar5 = 0;
  func_0x00101b40(0,0,uVar8,uVar3);
  uVar4 = 0xffffffff;
code_r0x00103e00:
  if (lStack240 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
  uVar3 = func_0x001019a0();
  file_name = uVar5;
  return uVar3;
}

