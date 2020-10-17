
undefined * fnmatch_no_wildcards(byte *param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  undefined8 uStack196;
  char cStack188;
  byte *pbStack184;
  ulong uStack176;
  char cStack168;
  uint auStack164 [7];
  char cStack136;
  undefined8 uStack132;
  char cStack124;
  byte *pbStack120;
  ulong uStack112;
  char cStack104;
  int aiStack100 [9];
  long lStack64;
  
  bVar22 = 0;
  if ((param_3 & 8) != 0) {
    if ((param_3 & 0x10) == 0) {
      lVar12 = func_0x00102530();
      uVar9 = func_0x00102420(param_1,param_2,lVar12);
      if (((int)uVar9 == 0) && ((int)(char)param_2[lVar12] != 0x2f)) {
        uVar9 = (ulong)(uint)(int)(char)param_2[lVar12];
      }
      return (undefined *)uVar9;
    }
    puVar7 = (undefined *)xstrdup(param_2);
    puVar13 = puVar7;
    while (puVar8 = (undefined *)func_0x001025a0(puVar13,0x2f), puVar8 != (undefined *)0x0) {
      *puVar8 = 0;
      uVar4 = mbscasecmp(param_1,puVar7);
      if ((int)uVar4 < 1) goto code_r0x001050a6;
      puVar13 = puVar8 + 1;
      *puVar8 = 0x2f;
    }
    uVar4 = mbscasecmp(param_1,puVar7);
code_r0x001050a6:
    func_0x00102a10(puVar7);
    return (undefined *)(ulong)uVar4;
  }
  if ((param_3 & 0x10) == 0) {
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*(code *)PTR_strcmp_00327e28)();
    return (undefined *)uVar11;
  }
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_2) {
    uVar9 = 0;
  }
  else {
    uVar9 = func_0x00102520();
    if (1 < uVar9) {
      bVar19 = false;
      uStack196 = 0;
      cStack136 = '\0';
      uStack132 = 0;
      pbStack184 = param_1;
      pbStack120 = param_2;
code_r0x0010a0f9:
      cStack124 = '\0';
      cStack188 = '\0';
      if (!bVar19) {
        if ((*(uint *)(is_basic_table + (ulong)(*pbStack184 >> 5) * 4) >> ((uint)*pbStack184 & 0x1f)
            & 1) == 0) {
          iVar6 = func_0x00102990(&uStack196);
          if (iVar6 != 0) {
            bVar19 = true;
            goto code_r0x0010a1a4;
          }
          goto code_r0x0010a600;
        }
        uStack176 = 1;
        auStack164[0] = SEXT14((char)*pbStack184);
        cStack168 = '\x01';
code_r0x0010a137:
        cStack188 = '\x01';
        if (auStack164[0] != 0) goto code_r0x0010a145;
code_r0x0010a445:
        if (cStack124 == '\0') {
          if (cStack136 == '\0') {
            if ((*(uint *)(is_basic_table + (ulong)(*pbStack120 >> 5) * 4) >>
                 ((uint)*pbStack120 & 0x1f) & 1) != 0) {
              uStack112 = 1;
              aiStack100[0] = (int)(char)*pbStack120;
              goto code_r0x0010a493;
            }
            iVar6 = func_0x00102990(&uStack132);
            if (iVar6 == 0) goto code_r0x0010a600;
            cStack136 = '\x01';
          }
          uVar11 = func_0x00102520();
          pbVar16 = pbStack120;
          uVar11 = strnlen1(pbStack120,uVar11);
          uStack112 = rpl_mbrtowc(aiStack100,pbVar16,uVar11);
          if (uStack112 + 2 < 2) goto code_r0x0010a3d8;
          if (uStack112 == 0) {
            uStack112 = 1;
            if (*pbStack120 != 0) goto code_r0x0010a624;
            if (aiStack100[0] != 0) goto code_r0x0010a5fb;
          }
        }
        else {
          if (cStack104 == '\0') goto code_r0x0010a3d8;
        }
code_r0x0010a493:
        uVar9 = (ulong)-(uint)(aiStack100[0] != 0);
        goto code_r0x00109fe8;
      }
code_r0x0010a1a4:
      uVar11 = func_0x00102520();
      pbVar16 = pbStack184;
      uVar11 = strnlen1(pbStack184,uVar11);
      uStack176 = rpl_mbrtowc(auStack164,pbVar16,uVar11,&uStack196);
      if (uStack176 != 0xffffffffffffffff) {
        if (uStack176 == 0xfffffffffffffffe) {
          uStack176 = func_0x00102530(pbStack184);
          cStack168 = '\0';
          goto code_r0x0010a145;
        }
        if (uStack176 != 0) {
code_r0x0010a211:
          cStack168 = '\x01';
          iVar6 = func_0x00102990(&uStack196);
          if (iVar6 != 0) {
            bVar19 = false;
          }
          goto code_r0x0010a137;
        }
        uStack176 = 1;
        if (*pbStack184 != 0) goto code_r0x0010a624;
        if (auStack164[0] == 0) goto code_r0x0010a211;
code_r0x0010a5fb:
        mbuiter_multi_next_part_0();
code_r0x0010a600:
        func_0x00102600(&UNK_001214a4,&UNK_00121496,0x96,__PRETTY_FUNCTION___5133);
        goto code_r0x0010a61f;
      }
      uStack176 = 1;
      cStack168 = '\0';
code_r0x0010a145:
      cStack188 = '\x01';
      if (cStack124 == '\0') {
        if (cStack136 == '\0') {
          if ((*(uint *)(is_basic_table + (ulong)(*pbStack120 >> 5) * 4) >>
               ((uint)*pbStack120 & 0x1f) & 1) != 0) {
            uStack112 = 1;
            aiStack100[0] = (int)(char)*pbStack120;
            cStack104 = '\x01';
            cStack124 = '\x01';
            goto code_r0x0010a0a3;
          }
          iVar6 = func_0x00102990(&uStack132);
          if (iVar6 == 0) goto code_r0x0010a600;
          cStack136 = '\x01';
        }
        uVar11 = func_0x00102520();
        pbVar16 = pbStack120;
        uVar11 = strnlen1(pbStack120,uVar11);
        uStack112 = rpl_mbrtowc(aiStack100,pbVar16,uVar11,&uStack132);
        if (uStack112 == 0xffffffffffffffff) {
          uStack112 = 1;
          cStack104 = '\0';
          cStack124 = '\x01';
        }
        else {
          if (uStack112 != 0xfffffffffffffffe) {
            if (uStack112 == 0) {
              uStack112 = 1;
              if (*pbStack120 != 0) goto code_r0x0010a624;
              if (aiStack100[0] != 0) goto code_r0x0010a5fb;
            }
            cStack104 = '\x01';
            iVar6 = func_0x00102990(&uStack132);
            if (iVar6 == 0) {
              cStack124 = '\x01';
            }
            else {
              cStack136 = '\0';
              cStack124 = '\x01';
            }
            goto code_r0x0010a0a3;
          }
          uStack112 = func_0x00102530(pbStack120);
          cStack104 = '\0';
          cStack124 = '\x01';
        }
code_r0x0010a15b:
        if (cStack168 != '\0') goto code_r0x0010a3d8;
        if (uStack176 != uStack112) {
          if (uStack176 < uStack112) {
            iVar6 = func_0x00102680();
            if (iVar6 < 1) {
code_r0x0010a3d8:
              uVar9 = 0xffffffff;
              goto code_r0x00109fe8;
            }
          }
          else {
            iVar6 = func_0x00102680(pbStack184,pbStack120,uStack112);
            if (iVar6 < 0) goto code_r0x0010a3d8;
          }
          goto code_r0x0010a3c0;
        }
        uVar9 = func_0x00102680();
      }
      else {
        if (cStack104 == '\0') goto code_r0x0010a15b;
code_r0x0010a0a3:
        if (aiStack100[0] == 0) {
          if (cStack188 == '\0') {
            if (!bVar19) {
              if ((*(uint *)(is_basic_table + (ulong)(*pbStack184 >> 5) * 4) >>
                   ((uint)*pbStack184 & 0x1f) & 1) != 0) {
                uStack176 = 1;
                auStack164[0] = SEXT14((char)*pbStack184);
                cStack168 = '\x01';
                cStack188 = '\x01';
                goto code_r0x0010a439;
              }
              iVar6 = func_0x00102990(&uStack196);
              if (iVar6 == 0) goto code_r0x0010a600;
            }
            uVar11 = func_0x00102520();
            pbVar16 = pbStack184;
            uVar11 = strnlen1(pbStack184,uVar11);
            uStack176 = rpl_mbrtowc(auStack164,pbVar16,uVar11,&uStack196);
            if ((uStack176 != 0xffffffffffffffff) && (uStack176 != 0xfffffffffffffffe)) {
              if (uStack176 == 0) {
                uStack176 = 1;
                if (*pbStack184 != 0) goto code_r0x0010a624;
                if (auStack164[0] != 0) goto code_r0x0010a5fb;
              }
              cStack168 = '\x01';
              iVar6 = func_0x00102990(&uStack196);
              if (iVar6 == 0) {
                cStack188 = '\x01';
              }
              else {
                cStack188 = '\x01';
              }
code_r0x0010a439:
              if (auStack164[0] == 0) goto code_r0x0010a445;
            }
          }
          else {
            if (cStack168 != '\0') goto code_r0x0010a439;
          }
code_r0x0010a3c0:
          uVar9 = 1;
          goto code_r0x00109fe8;
        }
        if (cStack168 == '\0') goto code_r0x0010a3c0;
        iVar6 = func_0x001028e0((ulong)auStack164[0]);
        iVar5 = func_0x001028e0();
        uVar9 = (ulong)(uint)(iVar6 - iVar5);
      }
      if ((int)uVar9 != 0) goto code_r0x00109fe8;
      pbStack184 = pbStack184 + uStack176;
      pbStack120 = pbStack120 + uStack112;
      goto code_r0x0010a0f9;
    }
    plVar10 = (long *)func_0x001029f0();
    lVar12 = *plVar10;
    do {
      bVar2 = *param_1;
      if ((*(byte *)(lVar12 + 1 + (ulong)bVar2 * 2) & 1) != 0) {
        plVar10 = (long *)func_0x001029e0();
        bVar2 = *(byte *)(*plVar10 + (ulong)bVar2 * 4);
      }
      bVar3 = *param_2;
      if ((*(byte *)(lVar12 + 1 + (ulong)bVar3 * 2) & 1) != 0) {
        plVar10 = (long *)func_0x001029e0();
        bVar3 = *(byte *)(*plVar10 + (ulong)bVar3 * 4);
      }
      if (bVar2 == 0) {
        uVar9 = (ulong)-(uint)bVar3;
        goto code_r0x00109fe8;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (bVar2 == bVar3);
    uVar9 = (ulong)((uint)bVar2 - (uint)bVar3);
  }
code_r0x00109fe8:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)uVar9;
  }
code_r0x0010a61f:
  func_0x00102560();
code_r0x0010a624:
  pbVar16 = &UNK_001214bb;
  func_0x00102600(&UNK_001214bb,&UNK_00121496,0xb2,__PRETTY_FUNCTION___5133);
  if (pbVar16 == (byte *)0x0) {
    pcVar18 = "A NULL argv[0] was passed through an exec system call.\n";
    iVar6 = 1;
    func_0x00102960(&UNK_00121a58,1,0x37,stderr);
    func_0x00102400();
    pbVar16 = (byte *)locale_charset();
    if ((*pbVar16 & 0xdf) == 0x55) {
      if (((((pbVar16[1] & 0xdf) == 0x54) && ((pbVar16[2] & 0xdf) == 0x46)) && (pbVar16[3] == 0x2d))
         && ((pbVar16[4] == 0x38 && (pbVar16[5] == 0)))) {
        puVar13 = &UNK_00121a9c;
        if (*pcVar18 != '`') {
          puVar13 = &UNK_00121aa0;
        }
        return puVar13;
      }
    }
    else {
      if ((((*pbVar16 & 0xdf) == 0x47) && ((pbVar16[1] & 0xdf) == 0x42)) &&
         ((pbVar16[2] == 0x31 &&
          ((((pbVar16[3] == 0x38 && (pbVar16[4] == 0x30)) && (pbVar16[5] == 0x33)) &&
           ((pbVar16[6] == 0x30 && (pbVar16[7] == 0)))))))) {
        puVar13 = &UNK_00121aa4;
        if (*pcVar18 != '`') {
          puVar13 = &UNK_00121aa8;
        }
        return puVar13;
      }
    }
    puVar13 = &UNK_00121aab;
    if (iVar6 != 9) {
      puVar13 = &UNK_001214d0;
    }
    return puVar13;
  }
  lVar12 = func_0x001025d0();
  if (lVar12 != 0) {
    pbVar1 = (byte *)(lVar12 + 1);
    pbVar15 = pbVar1 + -(long)pbVar16;
    bVar19 = pbVar15 < (byte *)0x6;
    bVar21 = pbVar15 == (byte *)0x6;
    if (6 < (long)pbVar15) {
      lVar14 = 7;
      pbVar15 = (byte *)(lVar12 + -6);
      pbVar17 = &UNK_00121a90;
      do {
        if (lVar14 == 0) break;
        lVar14 = lVar14 + -1;
        bVar19 = *pbVar15 < *pbVar17;
        bVar21 = *pbVar15 == *pbVar17;
        pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
        pbVar17 = pbVar17 + (ulong)bVar22 * -2 + 1;
      } while (bVar21);
      bVar20 = false;
      bVar19 = (!bVar19 && !bVar21) == bVar19;
      if (bVar19) {
        lVar14 = 3;
        pbVar16 = pbVar1;
        pbVar15 = &UNK_00121a98;
        do {
          if (lVar14 == 0) break;
          lVar14 = lVar14 + -1;
          bVar20 = *pbVar16 < *pbVar15;
          bVar19 = *pbVar16 == *pbVar15;
          pbVar16 = pbVar16 + (ulong)bVar22 * -2 + 1;
          pbVar15 = pbVar15 + (ulong)bVar22 * -2 + 1;
        } while (bVar19);
        pbVar16 = pbVar1;
        if ((!bVar20 && !bVar19) == bVar20) {
          pbVar16 = (byte *)(lVar12 + 4);
          program_invocation_short_name = pbVar16;
        }
      }
    }
  }
  program_invocation_name = pbVar16;
  program_name = pbVar16;
  return (undefined *)lVar12;
}

