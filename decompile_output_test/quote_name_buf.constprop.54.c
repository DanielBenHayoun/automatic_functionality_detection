
undefined8 *
quote_name_buf_constprop_54
          (byte **param_1,undefined8 *param_2,undefined8 *param_3,int param_4,byte **param_5,
          byte *param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *unaff_RBP;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  byte bVar15;
  bool bStack105;
  uint uStack76;
  undefined8 uStack72;
  long lStack64;
  
  bVar15 = 0;
  puVar13 = (undefined8 *)*param_1;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = get_quoting_style(param_3,param_2,param_3,0);
  bStack105 = (bool)(uVar3 < 3 & qmark_funny_chars);
  if (bStack105 != false) {
    if (param_4 != 0) goto code_r0x0010747e;
    puVar10 = (undefined8 *)func_0x00103400(param_2);
    if ((undefined8 *)0x1fff < puVar10) {
      puVar13 = (undefined8 *)xmalloc((byte *)((long)puVar10 + 1));
    }
    func_0x001035f0(puVar13,param_2,(byte *)((long)puVar10 + 1));
    bStack105 = false;
    goto code_r0x00107203;
  }
  bVar1 = false;
  if (param_4 == 0) {
    puVar10 = (undefined8 *)func_0x00103400(param_2);
    puVar13 = param_2;
    goto code_r0x001070fe;
  }
  do {
    puVar10 = (undefined8 *)quotearg_buffer(puVar13,0x2000,param_2,0xffffffffffffffff,param_3);
    if ((undefined8 *)0x1fff < puVar10) {
      puVar13 = (undefined8 *)xmalloc((byte *)((long)puVar10 + 1));
      quotearg_buffer(puVar13,(byte *)((long)puVar10 + 1),param_2,0xffffffffffffffff,param_3);
    }
    bStack105 = true;
    if (*(byte *)param_2 == *(byte *)puVar13) {
      puVar6 = (undefined8 *)func_0x00103400(param_2);
      bStack105 = puVar10 != puVar6;
    }
    if (bVar1) {
code_r0x00107203:
      puVar6 = (undefined8 *)((long)puVar13 + (long)puVar10);
      uVar7 = func_0x001033f0();
      bVar2 = align_variable_outer_quotes;
      if (uVar7 < 2) {
        unaff_RBP = puVar10;
        if (puVar13 < puVar6) {
          plVar5 = (long *)func_0x00103860();
          puVar9 = puVar13;
          do {
            if ((*(byte *)(*plVar5 + 1 + (ulong)*(byte *)puVar9 * 2) & 0x40) == 0) {
              *(byte *)puVar9 = 0x3f;
            }
            puVar9 = (undefined8 *)((long)puVar9 + 1);
            bVar2 = align_variable_outer_quotes;
          } while (puVar9 != puVar6);
        }
      }
      else {
        if (puVar13 < puVar6) {
          param_2 = &uStack72;
          unaff_RBP = (undefined8 *)0x0;
          puVar10 = puVar13;
          puVar9 = puVar13;
          do {
            bVar2 = *(byte *)puVar9;
            if ((char)bVar2 < '@') {
              if (('$' < (char)bVar2) || ((byte)(bVar2 - 0x20) < 4)) goto code_r0x00107388;
code_r0x00107260:
              uStack72 = 0;
              puVar14 = puVar9;
              do {
                param_3 = (undefined8 *)((long)puVar10 + 1);
                lVar8 = rpl_mbrtowc(&uStack76,puVar14,(undefined8 *)((long)puVar6 - (long)puVar14),
                                    param_2);
                if (lVar8 == -1) {
                  puVar9 = (undefined8 *)((long)puVar14 + 1);
                  *(byte *)puVar10 = 0x3f;
code_r0x001073ab:
                  unaff_RBP = (undefined8 *)((long)unaff_RBP + 1);
                  puVar10 = param_3;
                  break;
                }
                if (lVar8 == -2) {
                  *(byte *)puVar10 = 0x3f;
                  puVar9 = puVar6;
                  goto code_r0x001073ab;
                }
                if (lVar8 == 0) {
                  iVar4 = func_0x00103660((ulong)uStack76);
                  puVar9 = (undefined8 *)((long)puVar14 + 1);
                  if (-1 < iVar4) {
                    *(byte *)puVar10 = *(byte *)puVar14;
                    puVar10 = param_3;
                    goto code_r0x001072df;
                  }
code_r0x00107340:
                  *(byte *)puVar10 = 0x3f;
                  unaff_RBP = (undefined8 *)((long)unaff_RBP + 1);
                  puVar10 = param_3;
                }
                else {
                  iVar4 = func_0x00103660((ulong)uStack76);
                  puVar9 = (undefined8 *)((long)puVar14 + lVar8);
                  puVar12 = puVar10;
                  if (iVar4 < 0) goto code_r0x00107340;
                  do {
                    puVar11 = (undefined8 *)((long)puVar14 + (ulong)bVar15 * -2 + 1);
                    *(byte *)puVar12 = *(byte *)puVar14;
                    puVar12 = (undefined8 *)((long)puVar12 + (ulong)bVar15 * -2 + 1);
                    puVar14 = puVar11;
                  } while (puVar11 != puVar9);
                  puVar10 = (undefined8 *)((long)puVar10 + lVar8);
                  puVar9 = puVar11;
code_r0x001072df:
                  unaff_RBP = (undefined8 *)((long)unaff_RBP + (long)iVar4);
                }
                iVar4 = func_0x00103820(param_2);
                puVar14 = puVar9;
              } while (iVar4 == 0);
            }
            else {
              if (((char)bVar2 < 'A') || (('_' < (char)bVar2 && (0x1d < (byte)(bVar2 + 0x9f)))))
              goto code_r0x00107260;
code_r0x00107388:
              *(byte *)puVar10 = bVar2;
              puVar9 = (undefined8 *)((long)puVar9 + 1);
              unaff_RBP = (undefined8 *)((long)unaff_RBP + 1);
              puVar10 = (undefined8 *)((long)puVar10 + 1);
            }
          } while (puVar9 < puVar6);
          puVar10 = (undefined8 *)((long)puVar10 - (long)puVar13);
          bVar2 = align_variable_outer_quotes;
        }
        else {
          puVar10 = (undefined8 *)0x0;
          unaff_RBP = (undefined8 *)0x0;
        }
      }
joined_r0x00107331:
      align_variable_outer_quotes = bVar2;
      if (bVar2 != 0) {
code_r0x00107160:
        bVar2 = (cwd_some_quoted ^ 1 | bStack105) ^ 1;
      }
      *param_6 = bVar2;
      if (param_5 != (byte **)0x0) {
        *(undefined8 **)param_5 = unaff_RBP;
      }
    }
    else {
code_r0x001070fe:
      if (param_5 != (byte **)0x0) {
        uVar7 = func_0x001033f0();
        if (uVar7 < 2) {
          param_2 = (undefined8 *)((long)puVar13 + (long)puVar10);
          if (puVar13 < param_2) {
            plVar5 = (long *)func_0x00103860();
            unaff_RBP = (undefined8 *)0x0;
            puVar6 = puVar13;
            do {
              unaff_RBP = (undefined8 *)
                          ((long)unaff_RBP +
                          (ulong)((*(ushort *)(*plVar5 + (ulong)*(byte *)puVar6 * 2) & 0x4000) != 0)
                          );
              puVar6 = (undefined8 *)((long)puVar6 + 1);
              bVar2 = align_variable_outer_quotes;
            } while (param_2 != puVar6);
          }
          else {
            unaff_RBP = (undefined8 *)0x0;
            bVar2 = align_variable_outer_quotes;
          }
        }
        else {
          iVar4 = mbsnwidth(puVar13,puVar10,0);
          unaff_RBP = (undefined8 *)(long)iVar4;
          bVar2 = align_variable_outer_quotes;
        }
        goto joined_r0x00107331;
      }
      if (align_variable_outer_quotes != 0) goto code_r0x00107160;
      *param_6 = 0;
    }
    *(undefined8 **)param_1 = puVar13;
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return puVar10;
    }
    func_0x00103420();
code_r0x0010747e:
    bVar1 = true;
  } while( true );
}

