
undefined4 * eval6(byte param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  undefined4 *puVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined *puStack312;
  undefined *puStack304;
  undefined8 uStack260;
  undefined uStack252;
  byte *pbStack248;
  long lStack240;
  char cStack232;
  int aiStack228 [7];
  char cStack200;
  undefined8 uStack196;
  undefined uStack188;
  byte *pbStack184;
  long lStack176;
  undefined uStack168;
  int aiStack164 [7];
  char cStack136;
  undefined8 uStack132;
  undefined uStack124;
  byte *pbStack120;
  long lStack112;
  undefined uStack104;
  int aiStack100 [9];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = nextarg(&UNK_00115bff);
  if (cVar3 == '\0') {
    uVar13 = (ulong)param_1;
    cVar3 = nextarg(&UNK_00115c01);
    if (cVar3 != '\0') {
      lVar11 = eval6(uVar13);
      tostring(lVar11);
      uVar5 = mbslen(*(undefined8 *)(lVar11 + 8));
      puVar20 = (undefined4 *)xmalloc(0x10);
      *puVar20 = 0;
      *(undefined8 *)(puVar20 + 2) = uVar5;
      freev(lVar11);
      goto code_r0x00102c22;
    }
    cVar3 = nextarg(&UNK_00115c08);
    if (cVar3 != '\0') {
      puVar10 = (undefined4 *)eval6(uVar13);
      uVar5 = eval6(uVar13);
      puVar20 = puVar10;
      if (param_1 != 0) {
        puVar20 = (undefined4 *)docolon(puVar10,uVar5);
        freev(puVar10);
      }
      freev(uVar5);
      goto code_r0x00102c22;
    }
    bVar21 = (bool)nextarg(&UNK_00115c0e);
    if (bVar21 == false) {
      cVar3 = nextarg(&UNK_00115c14);
      if (cVar3 == '\0') {
        require_more_args();
        cVar3 = nextarg(&UNK_00115c1b);
        if (cVar3 == '\0') {
          cVar3 = nextarg(&UNK_00116c3d);
          if (cVar3 == '\0') goto code_r0x00102c05;
          uVar5 = func_0x00101790(0,&UNK_00115c1d,5);
          func_0x001019c0(2,0,uVar5);
          goto code_r0x00102e00;
        }
        puVar20 = (undefined4 *)eval(uVar13);
        plVar16 = args;
        if (*args == 0) goto code_r0x001035a3;
        cVar3 = nextarg(&UNK_00116c3d);
        if (cVar3 == '\0') {
          uVar5 = quotearg_n_style(0,8,*args);
          uVar6 = func_0x00101790(0,&UNK_001165f8,5);
          func_0x001019c0(2,0,uVar6,uVar5);
          goto code_r0x00102c00;
        }
      }
      else {
        lVar11 = eval6(uVar13);
        lVar12 = eval6(uVar13);
        lVar14 = eval6(uVar13);
        tostring(lVar11);
        cVar3 = toarith(lVar12);
        if ((cVar3 == '\0') || (cVar3 = toarith(lVar14), cVar3 == '\0')) {
          puVar20 = (undefined4 *)str_value(&UNK_00116c81);
        }
        else {
          uVar13 = *(ulong *)(lVar12 + 8);
          uVar19 = 0xffffffffffffffff;
          if (-1 < (long)uVar13) {
            bVar21 = uVar13 == 0;
            uVar19 = uVar13;
          }
          pbVar1 = *(byte **)(lVar11 + 8);
          uVar13 = 0xffffffffffffffff;
          if (-1 < (long)*(ulong *)(lVar14 + 8)) {
            uVar13 = *(ulong *)(lVar14 + 8);
          }
          uVar7 = func_0x001017b0(pbVar1);
          uVar8 = func_0x001017a0();
          uVar9 = uVar7;
          if (1 < uVar8) {
            uVar9 = mbslen(pbVar1);
          }
          if (((uVar9 < uVar19) || (bVar21 != false)) || (0xfffffffffffffffd < uVar13 - 1)) {
            puStack312 = (undefined *)xstrdup(&UNK_00116c81);
          }
          else {
            uVar9 = (uVar9 - uVar19) + 1;
            if (uVar13 < uVar9) {
              uVar9 = uVar13;
            }
            lVar15 = func_0x001017a0();
            if (lVar15 != 1) {
              puStack312 = (undefined *)xmalloc(uVar7 + 1);
              cStack136 = '\0';
              uVar13 = 1;
              uStack132 = 0;
              puStack304 = puStack312;
              pbStack120 = pbVar1;
              do {
                uStack124 = 0;
                if (cStack136 == '\0') {
                  if ((*(uint *)(is_basic_table + (ulong)(*pbStack120 >> 5) * 4) >>
                       ((uint)*pbStack120 & 0x1f) & 1) == 0) {
                    iVar4 = func_0x00101a40(&uStack132);
                    if (iVar4 != 0) {
                      cStack136 = '\x01';
                      goto code_r0x001033d3;
                    }
                    goto code_r0x00103584;
                  }
                  lStack112 = 1;
                  aiStack100[0] = (int)(char)*pbStack120;
                  uStack104 = 1;
code_r0x00103354:
                  uStack124 = 1;
                  if (aiStack100[0] == 0) goto code_r0x001034ce;
                }
                else {
code_r0x001033d3:
                  uVar5 = func_0x001017a0();
                  pbVar1 = pbStack120;
                  uVar5 = strnlen1(pbStack120,uVar5);
                  lStack112 = rpl_mbrtowc(aiStack100,pbVar1,uVar5,&uStack132);
                  if (lStack112 == -1) {
                    lStack112 = 1;
                    uStack104 = 0;
                  }
                  else {
                    if (lStack112 != -2) {
                      if (lStack112 == 0) {
                        lStack112 = 1;
                        if (*pbStack120 != 0) goto code_r0x00103565;
                        if (aiStack100[0] != 0) goto code_r0x00103560;
                      }
                      uStack104 = 1;
                      iVar4 = func_0x00101a40(&uStack132);
                      if (iVar4 != 0) {
                        cStack136 = '\0';
                      }
                      goto code_r0x00103354;
                    }
                    lStack112 = func_0x001017b0(pbStack120);
                    uStack104 = 0;
                  }
                }
                lVar15 = lStack112;
                pbVar1 = pbStack120;
                uStack124 = 1;
                if (uVar9 == 0) goto code_r0x001034ce;
                if (uVar19 <= uVar13) {
                  uVar9 = uVar9 - 1;
                  puStack304 = (undefined *)func_0x001019a0(puStack304,pbStack120,lStack112);
                }
                pbStack120 = pbVar1 + lVar15;
                uVar13 = uVar13 + 1;
              } while( true );
            }
            puStack312 = (undefined *)xmalloc(uVar9 + 1);
            puStack304 = (undefined *)func_0x001019a0(puStack312,pbVar1 + (uVar19 - 1),uVar9);
code_r0x001034ce:
            *puStack304 = 0;
          }
          puVar20 = (undefined4 *)str_value(puStack312);
          func_0x001016c0(puStack312);
        }
        freev(lVar11);
        freev(lVar12);
        freev(lVar14);
      }
      goto code_r0x00102c22;
    }
code_r0x00102e00:
    lVar11 = eval6(uVar13);
    lVar12 = eval6(uVar13);
    tostring(lVar11);
    tostring(lVar12);
    pbVar1 = *(byte **)(lVar12 + 8);
    if (*pbVar1 == 0) {
code_r0x00102e31:
      lVar14 = 0;
code_r0x00102e33:
      puVar20 = (undefined4 *)xmalloc(0x10);
      *puVar20 = 0;
      *(long *)(puVar20 + 2) = lVar14;
      freev(lVar11);
      freev(lVar12);
      goto code_r0x00102c22;
    }
    pbVar2 = *(byte **)(lVar11 + 8);
    uVar13 = func_0x001017a0();
    if (uVar13 < 2) {
      lVar14 = func_0x00101850(pbVar2,pbVar1);
      if (pbVar2[lVar14] == 0) goto code_r0x00102e31;
      lVar14 = lVar14 + 1;
      goto code_r0x00102e33;
    }
    bVar21 = false;
    lVar14 = 0;
    uStack260 = 0;
    pbStack248 = pbVar2;
code_r0x00102efc:
    uStack252 = 0;
    if ((*(uint *)(is_basic_table + (ulong)(*pbStack248 >> 5) * 4) >> ((uint)*pbStack248 & 0x1f) & 1
        ) != 0) {
      lStack240 = 1;
      aiStack228[0] = (int)(char)*pbStack248;
      cStack232 = '\x01';
      uStack252 = 1;
      if (*pbStack248 != 0) {
        lVar14 = lVar14 + 1;
        while( true ) {
          pbVar2 = pbStack248;
          uStack252 = 1;
          lVar15 = mbschr(pbVar1,(ulong)(uint)(int)(char)*pbStack248);
          if (lVar15 != 0) break;
          pbStack248 = pbVar2;
          lVar15 = 1;
code_r0x00102f68:
          pbStack248 = pbStack248 + lVar15;
          uStack252 = 0;
          if (!bVar21) goto code_r0x00102efc;
code_r0x00102f7c:
          uVar5 = func_0x001017a0();
          pbVar2 = pbStack248;
          uVar5 = strnlen1(pbStack248,uVar5);
          lStack240 = rpl_mbrtowc(aiStack228,pbVar2,uVar5);
          if (lStack240 == -1) {
            lStack240 = 1;
            cStack232 = '\0';
            lVar14 = lVar14 + 1;
          }
          else {
            if (lStack240 == -2) {
              lStack240 = func_0x001017b0(pbStack248);
              cStack232 = '\0';
            }
            else {
              if (lStack240 == 0) {
                lStack240 = 1;
                if (*pbStack248 != 0) goto code_r0x00103565;
                if (aiStack228[0] != 0) goto code_r0x00103560;
              }
              cStack232 = '\x01';
              iVar4 = func_0x00101a40(&uStack260);
              if (iVar4 != 0) {
                bVar21 = false;
              }
              uStack252 = 1;
              if (aiStack228[0] == 0) goto code_r0x00102e31;
            }
            uStack252 = 1;
            lVar14 = lVar14 + 1;
            if (lStack240 != 1) {
              cStack200 = '\0';
              uStack196 = 0;
              pbStack184 = pbVar1;
              do {
                uStack188 = 0;
                if (cStack200 == '\0') {
                  if ((*(uint *)(is_basic_table + (ulong)(*pbStack184 >> 5) * 4) >>
                       ((uint)*pbStack184 & 0x1f) & 1) == 0) {
                    iVar4 = func_0x00101a40(&uStack196);
                    if (iVar4 != 0) {
                      cStack200 = '\x01';
                      goto code_r0x001030ed;
                    }
                    goto code_r0x00103584;
                  }
                  lStack176 = 1;
                  aiStack164[0] = (int)(char)*pbStack184;
                  uStack168 = 1;
code_r0x001030a9:
                  uStack188 = 1;
                  lVar15 = lStack240;
                  if (aiStack164[0] == 0) goto code_r0x00102f68;
                  if (cStack232 == '\0') goto code_r0x001031a9;
                  lVar15 = lStack176;
                  if (aiStack228[0] == aiStack164[0]) goto code_r0x00102e33;
                }
                else {
code_r0x001030ed:
                  uVar5 = func_0x001017a0();
                  pbVar2 = pbStack184;
                  uVar5 = strnlen1(pbStack184,uVar5);
                  lStack176 = rpl_mbrtowc(aiStack164,pbVar2,uVar5,&uStack196);
                  if (lStack176 == -1) {
                    lStack176 = 1;
                    uStack168 = 0;
                  }
                  else {
                    if (lStack176 != -2) {
                      if (lStack176 == 0) {
                        lStack176 = 1;
                        if (*pbStack184 != 0) goto code_r0x00103565;
                        if (aiStack164[0] != 0) goto code_r0x00103560;
                      }
                      uStack168 = 1;
                      iVar4 = func_0x00101a40(&uStack196);
                      if (iVar4 != 0) {
                        cStack200 = '\0';
                      }
                      goto code_r0x001030a9;
                    }
                    lStack176 = func_0x001017b0(pbStack184);
                    uStack168 = 0;
                  }
code_r0x001031a9:
                  lVar15 = lStack176;
                  uStack188 = 1;
                  if ((lStack176 == lStack240) &&
                     (iVar4 = func_0x00101870(pbStack184,pbStack248,lStack176), iVar4 == 0))
                  goto code_r0x00102e33;
                }
                pbStack184 = pbStack184 + lVar15;
              } while( true );
            }
          }
        }
        goto code_r0x00102e33;
      }
      goto code_r0x00102e31;
    }
    iVar4 = func_0x00101a40(&uStack260);
    if (iVar4 != 0) {
      bVar21 = true;
      goto code_r0x00102f7c;
    }
  }
  else {
code_r0x00102c00:
    require_more_args();
code_r0x00102c05:
    lVar11 = *args;
    args = args + 1;
    puVar20 = (undefined4 *)str_value(lVar11);
code_r0x00102c22:
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return puVar20;
    }
    func_0x001017c0();
code_r0x00103560:
    mbuiter_multi_next_part_6();
code_r0x00103565:
    func_0x00101830(&UNK_00115be8,&UNK_00115b07,0xb2,__PRETTY_FUNCTION___7929);
  }
code_r0x00103584:
  plVar16 = (long *)func_0x00101830(&UNK_00115bd1,&UNK_00115b07,0x96,__PRETTY_FUNCTION___7929);
code_r0x001035a3:
  uVar5 = quotearg_n_style(0,8,plVar16[-1]);
  uVar6 = func_0x00101790(0,&UNK_001165d0,5);
  uVar18 = 2;
  func_0x001019c0(2,0,uVar6,uVar5);
  uVar5 = eval6((ulong)(uVar18 & 0xff));
  while (cVar3 = nextarg(&UNK_00115c3a), cVar3 != '\0') {
    uVar17 = eval6((ulong)(uVar18 & 0xff));
    uVar6 = uVar5;
    if ((char)uVar18 != '\0') {
      uVar6 = docolon(uVar5,uVar17);
      freev(uVar5);
    }
    freev(uVar17);
    uVar5 = uVar6;
  }
  return (undefined4 *)uVar5;
}

