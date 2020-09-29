
undefined4 * docolon(long param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *unaff_R15;
  long in_FS_OFFSET;
  long lStack488;
  long lStack480;
  long lStack472;
  undefined8 uStack456;
  undefined8 uStack448;
  undefined *puStack424;
  undefined8 uStack416;
  byte *pbStack408;
  byte bStack400;
  char cStack392;
  undefined8 uStack388;
  undefined uStack380;
  byte *pbStack376;
  long lStack368;
  undefined uStack360;
  int aiStack356 [7];
  undefined auStack328 [264];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  tostring();
  tostring(param_2);
  uVar6 = *(undefined8 *)(param_2 + 8);
  puStack424 = auStack328;
  lStack488 = 0;
  lStack480 = 0;
  lStack472 = 0;
  uStack456 = 0;
  uStack448 = 0;
  uStack416 = 0;
  rpl_re_syntax_options = 0x2c6;
  uVar3 = func_0x001017b0(uVar6);
  lVar4 = rpl_re_compile_pattern(uVar6,uVar3,&uStack456);
  if (lVar4 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 8);
    bStack400 = bStack400 & 0x7f;
    uVar3 = func_0x001017b0(uVar6);
    unaff_R15 = (byte *)rpl_re_match(&uStack456,uVar6,uVar3,0,&lStack488);
    if ((long)unaff_R15 < 0) {
      if (unaff_R15 != (byte *)0xffffffffffffffff) goto code_r0x00102a76;
      if (pbStack408 == (byte *)0x0) {
        puVar8 = (undefined4 *)xmalloc(0x10);
        *puVar8 = 0;
        *(undefined8 *)(puVar8 + 2) = 0;
      }
      else {
        puVar8 = (undefined4 *)str_value(&UNK_00116c81);
      }
    }
    else {
      if (pbStack408 == (byte *)0x0) {
        lVar4 = func_0x001017a0();
        pbVar11 = unaff_R15;
        if (lVar4 != 1) {
          pbVar1 = *(byte **)(param_1 + 8);
          cStack392 = '\0';
          uStack388 = 0;
          pbVar11 = pbStack408;
          pbStack376 = pbVar1;
          do {
            uStack380 = 0;
            if (cStack392 == '\0') {
              if ((*(uint *)(is_basic_table + (ulong)(*pbStack376 >> 5) * 4) >>
                   ((uint)*pbStack376 & 0x1f) & 1) == 0) {
                iVar2 = func_0x00101a40(&uStack388);
                if (iVar2 != 0) {
                  cStack392 = '\x01';
                  goto code_r0x001028fb;
                }
                goto code_r0x00102a57;
              }
              lStack368 = 1;
              aiStack356[0] = (int)(char)*pbStack376;
              uStack360 = 1;
code_r0x001028b1:
              pbVar9 = pbStack376;
              if (aiStack356[0] == 0) goto code_r0x001029f0;
code_r0x001028c8:
              pbVar5 = pbVar9 + -(long)pbVar1;
            }
            else {
code_r0x001028fb:
              uVar6 = func_0x001017a0();
              pbVar9 = pbStack376;
              uVar6 = strnlen1(pbStack376,uVar6);
              lStack368 = rpl_mbrtowc(aiStack356,pbVar9,uVar6,&uStack388);
              pbVar9 = pbStack376;
              if (lStack368 != -1) {
                if (lStack368 != -2) {
                  if (lStack368 == 0) {
                    lStack368 = 1;
                    if (*pbStack376 != 0) goto code_r0x00102aab;
                    if (aiStack356[0] != 0) goto code_r0x00102aa6;
                  }
                  uStack360 = 1;
                  iVar2 = func_0x00101a40(&uStack388);
                  if (iVar2 != 0) {
                    cStack392 = '\0';
                  }
                  goto code_r0x001028b1;
                }
                lStack368 = func_0x001017b0(pbStack376);
                uStack360 = 0;
                goto code_r0x001028c8;
              }
              lStack368 = 1;
              uStack360 = 0;
              pbVar5 = pbStack376 + -(long)pbVar1;
            }
            if (unaff_R15 <= pbVar5) goto code_r0x001029f0;
            pbStack376 = pbVar9 + lStack368;
            pbVar11 = pbVar11 + 1;
          } while( true );
        }
        goto code_r0x001027be;
      }
      *(undefined *)(*(long *)(param_1 + 8) + *(long *)(lStack472 + 8)) = 0;
      puVar8 = (undefined4 *)str_value(*(long *)(lStack480 + 8) + *(long *)(param_1 + 8));
    }
    goto code_r0x00102753;
  }
  func_0x001019c0(2,0,&UNK_00116693,lVar4);
  goto code_r0x00102a52;
code_r0x001029f0:
  uStack380 = 1;
code_r0x001027be:
  puVar8 = (undefined4 *)xmalloc(0x10);
  *puVar8 = 0;
  *(byte **)(puVar8 + 2) = pbVar11;
code_r0x00102753:
  if (lStack488 != 0) {
    func_0x001016c0(lStack480);
    func_0x001016c0(lStack472);
  }
  puStack424 = (undefined *)0x0;
  rpl_regfree(&uStack456);
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar8;
  }
code_r0x00102a52:
  func_0x001017c0();
code_r0x00102a57:
  func_0x00101830(&UNK_00115bd1,&UNK_00115b07,0x96,__PRETTY_FUNCTION___7929);
code_r0x00102a76:
  pbVar9 = (byte *)func_0x00101790(0,&UNK_001165a8,5);
  uVar10 = 0x4b;
  if (unaff_R15 == (byte *)0xfffffffffffffffe) goto code_r0x00102aca;
  do {
    func_0x001019c0(3,uVar10,pbVar9);
code_r0x00102aa6:
    mbuiter_multi_next_part_6();
code_r0x00102aab:
    func_0x00101830(&UNK_00115be8,&UNK_00115b07,0xb2,__PRETTY_FUNCTION___7929);
code_r0x00102aca:
    puVar7 = (uint *)func_0x001016e0();
    uVar10 = (ulong)*puVar7;
  } while( true );
}

