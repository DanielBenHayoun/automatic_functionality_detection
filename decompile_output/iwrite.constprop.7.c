
ulong iwrite_constprop_7(char *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  
  if (((output_flags._1_1_ & 0x40) != 0) && (param_2 < output_blocksize)) {
    uVar2 = rpl_fcntl(1,3);
    iVar1 = rpl_fcntl(1,4,(ulong)(uVar2 & 0xffffbfff));
    if ((iVar1 != 0) && (status_level != 1)) {
      uVar6 = quotearg_n_style_colon(0,3,output_file);
      uVar7 = func_0x00101b60(0,&UNK_0010cb88,5);
      puVar8 = (uint *)func_0x00101a80();
      nl_error(0,(ulong)*puVar8,uVar7,uVar6);
    }
    o_nocache_eof = 1;
    invalidate_cache(1,0);
    conversions_mask = conversions_mask | 0x8000;
  }
  uVar10 = 0;
  if (param_2 != 0) {
    do {
      process_signals();
      uVar2 = conversions_mask;
      final_op_was_seek = 0;
      uVar9 = param_2;
      pcVar11 = param_1;
      if ((conversions_mask & 0x10000) == 0) {
code_r0x00104eb8:
        uVar9 = func_0x00101b20(1,param_1 + uVar10,param_2 - uVar10);
        if ((long)uVar9 < 0) {
          piVar3 = (int *)func_0x00101a80();
          iVar1 = *piVar3;
          goto joined_r0x00104ed9;
        }
        if (uVar9 == 0) {
          puVar5 = (undefined4 *)func_0x00101a80();
          *puVar5 = 0x1c;
          break;
        }
code_r0x00104e6e:
        uVar10 = uVar10 + uVar9;
      }
      else {
        do {
          if (*pcVar11 != '\0') goto code_r0x00104eb8;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto code_r0x00104f00;
          pcVar11 = pcVar11 + 1;
        } while ((uVar9 & 0xf) != 0);
        iVar1 = func_0x00101c90(param_1);
        if (iVar1 != 0) goto code_r0x00104eb8;
code_r0x00104f00:
        lVar4 = func_0x00101c10(1,param_2,1);
        if (lVar4 < 0) {
          conversions_mask = uVar2 & 0xfffeffff;
          goto code_r0x00104eb8;
        }
        final_op_was_seek = 1;
        uVar9 = param_2;
        if (-1 < (long)param_2) goto code_r0x00104e6e;
        piVar3 = (int *)func_0x00101a80();
        iVar1 = *piVar3;
joined_r0x00104ed9:
        if (iVar1 != 4) break;
      }
    } while (uVar10 < param_2);
    if ((o_nocache != '\0') && (uVar10 != 0)) {
      invalidate_cache(1,uVar10);
      return uVar10;
    }
  }
  return uVar10;
}

