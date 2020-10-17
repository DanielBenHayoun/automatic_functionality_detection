
/* WARNING: Possible PIC construction at 0x00103ddd: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00103de2) */

ulong parse_block_signal_params(undefined1 *param_1,undefined *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *unaff_RBP;
  char *pcVar10;
  undefined1 *puVar11;
  ulong unaff_R12;
  undefined *unaff_R13;
  undefined1 *unaff_R14;
  undefined *unaff_R15;
  char *pcVar12;
  long in_FS_OFFSET;
  uint uStack180;
  char *pcStack176;
  long lStack168;
  ulong uStack152;
  undefined1 *puStack144;
  ulong uStack136;
  undefined *puStack128;
  undefined1 *puStack120;
  undefined *puStack112;
  char *pcStack96;
  undefined auStack88 [24];
  long lStack64;
  
  uVar6 = (ulong)param_2 & 0xffffffff;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (undefined1 *)0x0) {
    if ((char)param_2 == '\0') {
      puStack112 = &UNK_00103cac;
      func_0x00101aa0(unblock_signals);
      puVar11 = block_signals;
    }
    else {
      puStack112 = &UNK_00103c69;
      func_0x00101aa0(block_signals);
      puVar11 = unblock_signals;
    }
    puStack112 = &UNK_00103c75;
    func_0x00101a80();
    sig_mask_changed = 1;
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      sig_mask_changed = 1;
      return 0;
    }
  }
  else {
    unaff_R12 = (ulong)param_2 & 0xffffffff;
    if (sig_mask_changed == '\0') {
      puStack112 = &UNK_00103c44;
      func_0x00101a80(block_signals);
      puStack112 = &UNK_00103c50;
      func_0x00101a80(unblock_signals);
    }
    sig_mask_changed = 1;
    puStack112 = &UNK_00103b2b;
    puVar11 = (undefined1 *)xstrdup(param_1);
    param_2 = &UNK_00106b68;
    puStack112 = &UNK_00103b3f;
    pcStack96 = puVar11;
    unaff_R15 = (undefined *)func_0x00101b70(puVar11,&UNK_00106b68);
    if (unaff_R15 != (undefined *)0x0) {
      unaff_R14 = block_signals;
      param_1 = unblock_signals;
      unaff_R13 = auStack88;
      if ((char)uVar6 == '\0') {
        param_1 = block_signals;
      }
      do {
        puStack112 = &UNK_00103ba5;
        param_2 = unaff_R13;
        uVar5 = operand2sig(unaff_R15,unaff_R13);
        uVar6 = uVar5 & 0xffffffff;
        if ((int)uVar5 == 0) {
          puStack112 = &UNK_00103bd0;
          uVar6 = quote();
          puStack112 = &UNK_00103be6;
          uVar4 = func_0x00101960(0,&UNK_00106c26,5);
          param_2 = (undefined *)0x0;
          puStack112 = &UNK_00103bf7;
          func_0x00101b40(0,0,uVar4,uVar6);
code_r0x00103bf7:
          puVar11 = (undefined1 *)(ulong)exit_failure;
          puStack112 = &UNK_00103c02;
          usage();
          break;
        }
        if ((int)uVar5 < 1) goto code_r0x00103bf7;
        if ((char)unaff_R12 == '\0') {
          puStack112 = &UNK_00103bc1;
          func_0x00101c30(unblock_signals,uVar5 & 0xffffffff);
        }
        else {
          puStack112 = &UNK_00103b7a;
          func_0x00101c30(block_signals,uVar5 & 0xffffffff);
        }
        puStack112 = &UNK_00103b84;
        func_0x00101b60(param_1,uVar6);
        param_2 = &UNK_00106b68;
        puVar11 = (char *)0x0;
        puStack112 = &UNK_00103b92;
        unaff_R15 = (undefined *)func_0x00101b70(0,&UNK_00106b68);
      } while (unaff_R15 != (undefined *)0x0);
    }
    unaff_RBP = param_1;
    pcVar10 = pcStack96;
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) goto code_r0x001018a0;
  }
  puStack112 = &UNK_00103cba;
  func_0x001019a0();
  lStack168 = *(long *)(in_FS_OFFSET + 0x28);
  uStack152 = uVar6;
  puStack144 = unaff_RBP;
  uStack136 = unaff_R12;
  puStack128 = unaff_R13;
  puStack120 = unaff_R14;
  puStack112 = unaff_R15;
  if ((int)(char)*puVar11 - 0x30U < 10) {
    piVar7 = (int *)func_0x001018c0();
    *piVar7 = 0;
    lVar8 = func_0x00101a90(puVar11,&pcStack176,10);
    if (((pcStack176 == puVar11) || (*pcStack176 != '\0')) ||
       ((*piVar7 != 0 || (uStack180 = (uint)lVar8, (long)(int)uStack180 != lVar8)))) {
      uStack180 = 0xffffffff;
    }
    else {
      if (uStack180 != 0xffffffff) {
        uVar3 = 0xff;
        if ((int)uStack180 < 0xff) {
          uVar3 = 0x7f;
        }
        uStack180 = uVar3 & uStack180;
        uVar6 = (ulong)uStack180;
        iVar2 = sig2str(uVar6,param_2);
        if (iVar2 == 0) {
          uVar5 = (ulong)uStack180;
          goto code_r0x00103e00;
        }
      }
    }
  }
  else {
    pcVar10 = (char *)xstrdup();
    cVar1 = *pcVar10;
    pcVar12 = pcVar10;
    while (cVar1 != '\0') {
      lVar8 = func_0x001019d0(&UNK_001076f5,(ulong)(uint)(int)cVar1);
      if (lVar8 != 0) {
        *pcVar12 = cVar1 + -0x20;
      }
      pcVar12 = pcVar12 + 1;
      cVar1 = *pcVar12;
    }
    iVar2 = str2sig(pcVar10,&uStack180);
    if ((iVar2 == 0) ||
       ((((*pcVar10 == 'S' && (pcVar10[1] == 'I')) && (pcVar10[2] == 'G')) &&
        (iVar2 = str2sig(pcVar10 + 3,&uStack180), iVar2 == 0)))) {
code_r0x001018a0:
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)PTR_free_00309df0)(pcVar10);
      return uVar4;
    }
    uStack180 = 0xffffffff;
    func_0x001018a0(pcVar10);
  }
  uVar4 = quote();
  uVar9 = func_0x00101960(0,&UNK_00106c26,5);
  uVar6 = 0;
  func_0x00101b40(0,0,uVar9,uVar4);
  uVar5 = 0xffffffff;
code_r0x00103e00:
  if (lStack168 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
  uVar4 = func_0x001019a0();
  file_name = uVar6;
  return uVar4;
}

