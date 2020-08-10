
ulong bsd_sum_file(byte *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint *puVar6;
  long lVar7;
  ulong extraout_RDX;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long unaff_R14;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  undefined auStack728 [664];
  long lStack64;
  
  lVar7 = 2;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  bVar12 = false;
  bVar13 = true;
  pbVar10 = param_1;
  pbVar4 = &UNK_001067b2;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    bVar12 = *pbVar10 < *pbVar4;
    bVar13 = *pbVar10 == *pbVar4;
    pbVar10 = pbVar10 + 1;
    pbVar4 = pbVar4 + 1;
  } while (bVar13);
  bVar13 = !bVar12 && !bVar13;
  if (bVar13 == bVar12) {
    have_read_stdin = 1;
    pbVar10 = stdin;
  }
  else {
    pbVar10 = (byte *)func_0x001018a0(param_1,&UNK_001066da);
    if (pbVar10 == (byte *)0x0) goto code_r0x0010200b;
  }
  unaff_R14 = 0;
  fadvise(pbVar10,2);
  uVar9 = 0;
  pbVar11 = *(byte **)(pbVar10 + 0x10);
  pbVar4 = *(byte **)(pbVar10 + 8);
  uVar8 = extraout_RDX;
  do {
    if (pbVar4 < pbVar11) {
      *(byte **)(pbVar10 + 8) = pbVar4 + 1;
      uVar2 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    }
    else {
      uVar2 = func_0x001015c0(pbVar10,pbVar11,uVar8);
      if (uVar2 == 0xffffffff) {
        if ((*pbVar10 & 0x20) == 0) {
          if (bVar13 != bVar12) {
            iVar3 = rpl_fclose(pbVar10);
            if (iVar3 != 0) {
code_r0x0010200b:
              uVar5 = quotearg_n_style_colon(0,3,param_1);
              puVar6 = (uint *)func_0x00101600();
              uVar9 = 0;
              func_0x00101870(0,(ulong)*puVar6,&UNK_00107172,uVar5);
              goto code_r0x00101fa2;
            }
          }
          uVar5 = human_readable(unaff_R14,auStack728,0,1,0x400);
          func_0x00101840(1,&UNK_0010638a,(ulong)uVar9,uVar5);
          if (1 < param_2) {
            func_0x00101840(1,&UNK_00107171,param_1);
          }
          puVar1 = *(undefined **)(stdout + 0x28);
          if (puVar1 < *(undefined **)(stdout + 0x30)) {
            uVar9 = 1;
            *(undefined **)(stdout + 0x28) = puVar1 + 1;
            *puVar1 = 10;
          }
          else {
            uVar9 = 1;
            func_0x001016f0(stdout,10);
          }
        }
        else {
          uVar5 = quotearg_n_style_colon(0,3,param_1);
          puVar6 = (uint *)func_0x00101600();
          uVar9 = 0;
          func_0x00101870(0,(ulong)*puVar6,&UNK_00107172,uVar5);
          if (bVar13 != bVar12) {
            rpl_fclose(pbVar10);
          }
        }
code_r0x00101fa2:
        if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
          return (ulong)uVar9;
        }
        uVar2 = func_0x001016b0();
      }
      pbVar11 = *(byte **)(pbVar10 + 0x10);
      pbVar4 = *(byte **)(pbVar10 + 8);
    }
    unaff_R14 = unaff_R14 + 1;
    uVar8 = (ulong)(uint)((int)uVar9 >> 1);
    uVar9 = (uVar9 & 1) * 0x8000 + ((int)uVar9 >> 1) + uVar2 & 0xffff;
  } while( true );
}

