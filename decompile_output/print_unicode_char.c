
void print_unicode_char(undefined *param_1,undefined *param_2,undefined8 param_3)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 extraout_RDX;
  code *pcVar4;
  ulong unaff_RBX;
  undefined *unaff_RBP;
  byte *pbVar5;
  undefined *puVar6;
  byte *pbVar7;
  code *unaff_R12;
  undefined *unaff_R13;
  code *unaff_R14;
  undefined *unaff_R15;
  long in_FS_OFFSET;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  
  bVar10 = 0;
  do {
    pcVar4 = exit_failure_callback;
    puVar6 = (undefined *)((ulong)param_2 & 0xffffffff);
    if ((int)param_3 == 0) {
      pcVar4 = fallback_failure_callback;
    }
    *(undefined **)((undefined *)register0x00000020 + -8) = unaff_R15;
    *(code **)((undefined *)register0x00000020 + -0x10) = unaff_R14;
    unaff_R14 = fwrite_success_callback;
    *(undefined **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
    *(code **)((undefined *)register0x00000020 + -0x20) = unaff_R12;
    *(undefined **)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
    *(ulong *)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    bVar8 = false;
    bVar9 = initialized_4445 == 0;
    if (bVar9) {
      unaff_R13 = &UNK_00109416;
      *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x10514c;
      pbVar2 = (byte *)locale_charset();
      lVar3 = 6;
      pbVar5 = pbVar2;
      pbVar7 = &UNK_00109416;
      do {
        if (lVar3 == 0) break;
        lVar3 = lVar3 + -1;
        bVar8 = *pbVar5 < *pbVar7;
        bVar9 = *pbVar5 == *pbVar7;
        pbVar5 = pbVar5 + (ulong)bVar10 * -2 + 1;
        pbVar7 = pbVar7 + (ulong)bVar10 * -2 + 1;
      } while (bVar9);
      bVar8 = (!bVar8 && !bVar9) == bVar8;
      is_utf8_4446 = (uint)bVar8;
      if (!bVar8) {
        *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x10519b;
        utf8_to_local_4447 = func_0x00101740(pbVar2,&UNK_00109416);
        if (utf8_to_local_4447 == -1) {
          *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x105227;
          utf8_to_local_4447 = func_0x00101740(&UNK_0010941c,&UNK_00109416);
        }
      }
      initialized_4445 = 1;
    }
    if ((is_utf8_4446 == 0) && (utf8_to_local_4447 == -1)) {
      param_2 = &UNK_00109422;
      *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x1050ba;
      (*pcVar4)(puVar6,&UNK_00109422,param_1);
    }
    else {
      if ((uint)puVar6 < 0x80) {
        ((undefined *)register0x00000020)[-0x6e] = (char)puVar6;
        param_2 = (undefined *)0x1;
      }
      else {
        unaff_R13 = (undefined *)register0x00000020 + -0x6e;
        *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x105124;
        iVar1 = u8_uctomb_aux(unaff_R13,puVar6,6);
        if (iVar1 < 0) {
          param_2 = &UNK_0010943c;
          *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x105137;
          (*pcVar4)(puVar6,&UNK_0010943c,param_1);
          goto code_r0x001050e4;
        }
        param_2 = (undefined *)(long)iVar1;
      }
      unaff_R13 = (undefined *)register0x00000020 + -0x6e;
      if (is_utf8_4446 == 0) {
        unaff_R15 = (undefined *)register0x00000020 + -0x78;
        *(undefined **)((undefined *)register0x00000020 + -0x90) = unaff_R13;
        *(undefined **)((undefined *)register0x00000020 + -0x88) = param_2;
        unaff_R13 = (undefined *)register0x00000020 + -0x68;
        *(undefined **)((undefined *)register0x00000020 + -0x80) = unaff_R13;
        *(undefined8 *)((undefined *)register0x00000020 + -0x78) = 0x19;
        *(undefined **)((undefined *)register0x00000020 + -0xa0) =
             (undefined *)register0x00000020 + -0x80;
        *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x1051f8;
        lVar3 = func_0x00101490(utf8_to_local_4447,(undefined *)register0x00000020 + -0x90,
                                (undefined *)register0x00000020 + -0x88,
                                (undefined *)register0x00000020 + -0x80,unaff_R15);
        if ((*(long *)((undefined *)register0x00000020 + -0x88) == 0) && (lVar3 != -1)) {
          *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x10524b;
          lVar3 = func_0x00101490(utf8_to_local_4447,0,0,
                                  *(undefined8 *)((undefined *)register0x00000020 + -0xa0),unaff_R15
                                 );
          if (lVar3 != -1) {
            param_2 = (undefined *)
                      (*(long *)((undefined *)register0x00000020 + -0x80) - (long)unaff_R13);
            *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x105262;
            puVar6 = unaff_R13;
            fwrite_success_callback(unaff_R13,param_2,param_1);
            goto code_r0x001050e4;
          }
        }
        param_2 = (undefined *)0x0;
        *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x105210;
        (*pcVar4)(puVar6,0,param_1);
      }
      else {
        *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x1050e4;
        puVar6 = unaff_R13;
        fwrite_success_callback(unaff_R13,param_2,param_1);
      }
    }
code_r0x001050e4:
    unaff_RBX = *(ulong *)((undefined *)register0x00000020 + -0x40) ^
                *(ulong *)(in_FS_OFFSET + 0x28);
    if (unaff_RBX == 0) {
      return;
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0xb0) = 0x10526c;
    func_0x00101520();
    param_3 = extraout_RDX;
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0xa8);
    unaff_RBP = param_1;
    param_1 = puVar6;
    unaff_R12 = pcVar4;
  } while( true );
}

