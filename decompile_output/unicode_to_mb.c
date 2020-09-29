
void unicode_to_mb(ulong param_1,code *param_2,code *param_3,undefined *param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined *puVar3;
  int extraout_EDX;
  code *pcVar4;
  ulong unaff_RBX;
  undefined *puVar5;
  undefined *puVar6;
  undefined *unaff_RBP;
  uint uVar7;
  code *pcVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  code *unaff_R12;
  undefined *unaff_R13;
  code *unaff_R14;
  undefined *unaff_R15;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  
  bVar14 = 0;
  puVar5 = (undefined *)register0x00000020;
  do {
    pcVar8 = param_2;
    pcVar4 = param_3;
    puVar3 = param_4;
    *(undefined **)(puVar5 + -8) = unaff_R15;
    *(code **)(puVar5 + -0x10) = unaff_R14;
    *(undefined **)(puVar5 + -0x18) = unaff_R13;
    *(code **)(puVar5 + -0x20) = unaff_R12;
    *(undefined **)(puVar5 + -0x28) = unaff_RBP;
    *(ulong *)(puVar5 + -0x30) = unaff_RBX;
    param_4 = (undefined *)(param_1 & 0xffffffff);
    puVar6 = puVar5 + -0xa8;
    *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    bVar12 = false;
    bVar13 = initialized_4445 == 0;
    if (bVar13) {
      unaff_R13 = &UNK_00109416;
      *(undefined8 *)(puVar5 + -0xb0) = 0x10514c;
      pbVar2 = (byte *)locale_charset();
      lVar9 = 6;
      pbVar10 = pbVar2;
      pbVar11 = &UNK_00109416;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar12 = *pbVar10 < *pbVar11;
        bVar13 = *pbVar10 == *pbVar11;
        pbVar10 = pbVar10 + (ulong)bVar14 * -2 + 1;
        pbVar11 = pbVar11 + (ulong)bVar14 * -2 + 1;
      } while (bVar13);
      bVar12 = (!bVar12 && !bVar13) == bVar12;
      is_utf8_4446 = (uint)bVar12;
      if (!bVar12) {
        *(undefined8 *)(puVar5 + -0xb0) = 0x10519b;
        utf8_to_local_4447 = func_0x00101740(pbVar2,&UNK_00109416);
        if (utf8_to_local_4447 == -1) {
          *(undefined8 *)(puVar5 + -0xb0) = 0x105227;
          utf8_to_local_4447 = func_0x00101740(&UNK_0010941c,&UNK_00109416);
        }
      }
      initialized_4445 = 1;
    }
    if ((is_utf8_4446 == 0) && (utf8_to_local_4447 == -1)) {
      uVar7 = 0x109422;
      *(undefined8 *)(puVar5 + -0xb0) = 0x1050ba;
      (*pcVar4)(param_4,&UNK_00109422,puVar3);
    }
    else {
      if ((uint)param_4 < 0x80) {
        puVar5[-0x6e] = (char)param_4;
        lVar9 = 1;
      }
      else {
        unaff_R13 = puVar5 + -0x6e;
        *(undefined8 *)(puVar5 + -0xb0) = 0x105124;
        iVar1 = u8_uctomb_aux(unaff_R13,param_4,6);
        if (iVar1 < 0) {
          uVar7 = 0x10943c;
          *(undefined8 *)(puVar5 + -0xb0) = 0x105137;
          (*pcVar4)(param_4,&UNK_0010943c,puVar3);
          goto code_r0x001050e4;
        }
        lVar9 = (long)iVar1;
      }
      uVar7 = (uint)lVar9;
      unaff_R13 = puVar5 + -0x6e;
      if (is_utf8_4446 == 0) {
        unaff_R15 = puVar5 + -0x78;
        *(undefined **)(puVar5 + -0x90) = unaff_R13;
        *(long *)(puVar5 + -0x88) = lVar9;
        unaff_R13 = puVar5 + -0x68;
        *(undefined **)(puVar5 + -0x80) = unaff_R13;
        *(undefined8 *)(puVar5 + -0x78) = 0x19;
        *(undefined **)(puVar5 + -0xa0) = puVar5 + -0x80;
        *(undefined8 *)(puVar5 + -0xb0) = 0x1051f8;
        lVar9 = func_0x00101490(utf8_to_local_4447,puVar5 + -0x90,puVar5 + -0x88,puVar5 + -0x80,
                                unaff_R15);
        if ((*(long *)(puVar5 + -0x88) == 0) && (lVar9 != -1)) {
          *(undefined8 *)(puVar5 + -0xb0) = 0x10524b;
          lVar9 = func_0x00101490(utf8_to_local_4447,0,0,*(undefined8 *)(puVar5 + -0xa0),unaff_R15);
          if (lVar9 != -1) {
            uVar7 = (uint)(*(long *)(puVar5 + -0x80) - (long)unaff_R13);
            *(undefined8 *)(puVar5 + -0xb0) = 0x105262;
            param_4 = unaff_R13;
            (*pcVar8)(unaff_R13,*(long *)(puVar5 + -0x80) - (long)unaff_R13,puVar3);
            goto code_r0x001050e4;
          }
        }
        uVar7 = 0;
        *(undefined8 *)(puVar5 + -0xb0) = 0x105210;
        (*pcVar4)(param_4,0,puVar3);
      }
      else {
        *(undefined8 *)(puVar5 + -0xb0) = 0x1050e4;
        param_4 = unaff_R13;
        (*pcVar8)(unaff_R13,lVar9,puVar3);
      }
    }
code_r0x001050e4:
    unaff_RBX = *(ulong *)(puVar5 + -0x40) ^ *(ulong *)(in_FS_OFFSET + 0x28);
    if (unaff_RBX == 0) {
      return;
    }
    *(undefined8 *)(puVar5 + -0xb0) = 0x10526c;
    func_0x00101520();
    param_1 = (ulong)uVar7;
    param_3 = exit_failure_callback;
    puVar5 = puVar5 + -0xa8;
    unaff_RBP = puVar3;
    param_2 = fwrite_success_callback;
    unaff_R12 = pcVar4;
    unaff_R14 = pcVar8;
    if (extraout_EDX == 0) {
      param_3 = fallback_failure_callback;
      puVar5 = puVar6;
    }
  } while( true );
}

