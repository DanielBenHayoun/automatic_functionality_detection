
undefined * mbsstr_trimmed_wordbounded(byte *param_1,undefined8 param_2)

{
  bool bVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  undefined *puVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined8 uStack196;
  char cStack188;
  byte *pbStack184;
  long lStack176;
  char cStack168;
  uint auStack164 [7];
  char cStack136;
  undefined8 uStack132;
  undefined uStack124;
  byte *pbStack120;
  long lStack112;
  undefined uStack104;
  int aiStack100 [9];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar5 = (byte *)trim2(param_2,2);
code_r0x00104c80:
  if (*param_1 != 0) {
    while( true ) {
      pbVar6 = (byte *)mbsstr(param_1,pbVar5);
      if (pbVar6 == (byte *)0x0) goto code_r0x00104d05;
      uVar7 = func_0x001016d0();
      if (1 < uVar7) break;
      if (param_1 < pbVar6) {
        plVar8 = (long *)func_0x00101940();
        bVar16 = (bool)(((byte)(*(ushort *)(*plVar8 + (ulong)pbVar6[-1] * 2) >> 3) ^ 1) & 1);
        lVar9 = func_0x001016e0(pbVar5);
        bVar13 = pbVar6[lVar9];
        if (bVar13 != 0) goto code_r0x00105334;
code_r0x00104cee:
        if (bVar16 != false) goto code_r0x00104d0a;
      }
      else {
        lVar9 = func_0x001016e0(pbVar5);
        bVar13 = pbVar6[lVar9];
        bVar16 = true;
        if (bVar13 == 0) goto code_r0x00104d0a;
code_r0x00105334:
        plVar8 = (long *)func_0x00101940();
        if ((*(byte *)(*plVar8 + (ulong)bVar13 * 2) & 8) == 0) goto code_r0x00104cee;
      }
      if ((*pbVar6 == 0) || (param_1 = pbVar6 + 1, *param_1 == 0)) goto code_r0x00104d05;
    }
    bVar16 = false;
    uStack196 = 0;
    pbStack184 = param_1;
    if (param_1 < pbVar6) {
      do {
        cStack188 = '\0';
        if (bVar16) {
code_r0x00104dde:
          uVar12 = func_0x001016d0();
          pbVar2 = pbStack184;
          uVar12 = strnlen1(pbStack184,uVar12);
          lStack176 = rpl_mbrtowc(auStack164,pbVar2,uVar12);
          uVar14 = auStack164[0];
          pbVar2 = pbStack184;
          if (lStack176 == -1) {
            lStack176 = 1;
            cStack168 = '\0';
            pbStack184 = pbVar2;
          }
          else {
            if (lStack176 != -2) {
              if (lStack176 == 0) {
                lStack176 = 1;
                if (*pbStack184 != 0) goto code_r0x0010557b;
                if (auStack164[0] != 0) goto code_r0x001054fc;
              }
              cStack168 = '\x01';
              iVar4 = func_0x00101920();
              if (iVar4 != 0) {
                bVar16 = false;
              }
              goto code_r0x00104daa;
            }
            lStack176 = func_0x001016e0();
            cStack168 = '\0';
            pbStack184 = pbVar2;
          }
        }
        else {
          if ((*(uint *)(is_basic_table + (ulong)(*pbStack184 >> 5) * 4) >>
               ((uint)*pbStack184 & 0x1f) & 1) == 0) {
            iVar4 = func_0x00101920(&uStack196);
            if (iVar4 != 0) {
              bVar16 = true;
              goto code_r0x00104dde;
            }
            goto code_r0x00105557;
          }
          lStack176 = 1;
          auStack164[0] = SEXT14((char)*pbStack184);
          cStack168 = '\x01';
          uVar14 = auStack164[0];
code_r0x00104daa:
          cStack188 = '\x01';
          if (uVar14 == 0) goto code_r0x00105552;
        }
        cStack188 = 0;
        pbStack184 = pbStack184 + lStack176;
      } while (pbStack184 < pbVar6);
      if (cStack168 != '\0') {
        iVar4 = func_0x00101800();
        bVar16 = iVar4 == 0;
        goto code_r0x00104f16;
      }
    }
    bVar16 = true;
code_r0x00104f16:
    bVar1 = false;
    uStack196 = 0;
    cStack136 = '\0';
    uStack132 = 0;
    pbStack184 = pbVar6;
    pbStack120 = pbVar5;
    do {
      uStack124 = 0;
      cStack188 = '\0';
      if (cStack136 == '\0') {
        if ((*(uint *)(is_basic_table + (ulong)(*pbStack120 >> 5) * 4) >> ((uint)*pbStack120 & 0x1f)
            & 1) == 0) {
          iVar4 = func_0x00101920(&uStack132);
          if (iVar4 != 0) {
            cStack136 = '\x01';
            goto code_r0x0010503f;
          }
          goto code_r0x00105557;
        }
        lStack112 = 1;
        aiStack100[0] = (int)(char)*pbStack120;
        uStack104 = 1;
joined_r0x001050da:
        if (aiStack100[0] == 0) goto code_r0x001050e0;
      }
      else {
code_r0x0010503f:
        uVar12 = func_0x001016d0();
        pbVar2 = pbStack120;
        uVar12 = strnlen1(pbStack120,uVar12);
        lStack112 = rpl_mbrtowc(aiStack100,pbVar2,uVar12);
        if (lStack112 == -1) {
          lStack112 = 1;
          uStack104 = 0;
        }
        else {
          if (lStack112 != -2) {
            if (lStack112 == 0) {
              lStack112 = 1;
              if (*pbStack120 != 0) goto code_r0x0010557b;
              if (aiStack100[0] != 0) goto code_r0x001054fc;
            }
            uStack104 = 1;
            iVar4 = func_0x00101920();
            if (iVar4 != 0) {
              cStack136 = '\0';
            }
            goto joined_r0x001050da;
          }
          lStack112 = func_0x001016e0();
          uStack104 = 0;
        }
      }
      uStack124 = 1;
      if (cStack188 == '\0') {
        if (!bVar1) {
          if ((*(uint *)(is_basic_table + (ulong)(*pbStack184 >> 5) * 4) >>
               ((uint)*pbStack184 & 0x1f) & 1) != 0) {
            lStack176 = 1;
            auStack164[0] = SEXT14((char)*pbStack184);
            cStack168 = '\x01';
            cStack188 = '\x01';
            goto code_r0x00104f93;
          }
          iVar4 = func_0x00101920(&uStack196);
          if (iVar4 == 0) goto code_r0x00105557;
          bVar1 = true;
        }
        uVar12 = func_0x001016d0();
        pbVar2 = pbStack184;
        uVar12 = strnlen1(pbStack184,uVar12);
        lStack176 = rpl_mbrtowc(auStack164,pbVar2,uVar12);
        if (lStack176 == -1) {
          lStack176 = 1;
          cStack168 = '\0';
        }
        else {
          if (lStack176 != -2) {
            if (lStack176 == 0) {
              lStack176 = 1;
              if (*pbStack184 != 0) goto code_r0x0010557b;
              if (auStack164[0] != 0) goto code_r0x001054fc;
            }
            cStack168 = '\x01';
            iVar4 = func_0x00101920();
            if (iVar4 == 0) {
              cStack188 = '\x01';
            }
            else {
              bVar1 = false;
              cStack188 = '\x01';
            }
            goto code_r0x00104f93;
          }
          lStack176 = func_0x001016e0();
          cStack168 = '\0';
        }
      }
      else {
        if (cStack168 != '\0') {
code_r0x00104f93:
          if (auStack164[0] == 0) goto code_r0x00105552;
        }
      }
      pbStack184 = pbStack184 + lStack176;
      pbStack120 = pbStack120 + lStack112;
    } while( true );
  }
code_r0x00104d05:
  bVar16 = false;
code_r0x00104d0a:
  func_0x001015f0(pbVar5);
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined *)(ulong)bVar16;
  }
code_r0x00105576:
  func_0x001016f0();
code_r0x0010557b:
  puVar15 = &UNK_0010e9cb;
  func_0x00101750(&UNK_0010e9cb,&UNK_0010e994,0xb2,__PRETTY_FUNCTION___5159);
  puVar10 = (undefined *)func_0x001016c0(0,puVar15,5);
  if ((puVar15 != puVar10) && (cVar3 = mbsstr_trimmed_wordbounded(puVar10,puVar15), cVar3 == '\0'))
  {
    lVar9 = func_0x001016e0(puVar10);
    lVar11 = func_0x001016e0(puVar15);
    uVar12 = xmalloc(lVar9 + 4 + lVar11);
    func_0x00101960(uVar12,1,0xffffffffffffffff,&UNK_0010e9e2,puVar10,puVar15);
    return (undefined *)uVar12;
  }
  return puVar10;
code_r0x001050e0:
  uStack124 = 1;
  if (cStack188 == '\0') {
    if (!bVar1) {
      if ((*(uint *)(is_basic_table + (ulong)(*pbStack184 >> 5) * 4) >> ((uint)*pbStack184 & 0x1f) &
          1) != 0) {
        lStack176 = 1;
        auStack164[0] = SEXT14((char)*pbStack184);
        uVar7 = (ulong)auStack164[0];
        cStack168 = '\x01';
        cStack188 = '\x01';
        goto code_r0x0010512e;
      }
      iVar4 = func_0x00101920(&uStack196);
      if (iVar4 == 0) goto code_r0x00105557;
    }
    uVar12 = func_0x001016d0();
    pbVar2 = pbStack184;
    uVar12 = strnlen1(pbStack184,uVar12);
    lStack176 = rpl_mbrtowc(auStack164,pbVar2,uVar12);
    if (lStack176 == -1) {
      lStack176 = 1;
      cStack168 = '\0';
      uVar7 = (ulong)auStack164[0];
      cStack188 = '\x01';
code_r0x00105132:
      if ((cStack168 == '\0') || (iVar4 = func_0x00101800(uVar7), iVar4 == 0))
      goto code_r0x00105144;
      goto code_r0x0010514f;
    }
    if (lStack176 == -2) {
      lStack176 = func_0x001016e0(pbStack184);
      cStack168 = '\0';
      uVar7 = (ulong)auStack164[0];
      cStack188 = '\x01';
      goto code_r0x00105132;
    }
    if (lStack176 != 0) {
code_r0x001053d9:
      uVar7 = (ulong)auStack164[0];
      cStack168 = '\x01';
      iVar4 = func_0x00101920(&uStack196);
      if (iVar4 == 0) {
        cStack188 = '\x01';
      }
      else {
        cStack188 = '\x01';
      }
      goto code_r0x0010512e;
    }
    lStack176 = 1;
    if (*pbStack184 != 0) goto code_r0x0010557b;
    if (auStack164[0] == 0) goto code_r0x001053d9;
code_r0x001054fc:
    mbuiter_multi_next_part_0();
  }
  else {
    uVar7 = (ulong)auStack164[0];
    if (cStack168 == '\0') goto code_r0x00105132;
code_r0x0010512e:
    if ((int)uVar7 != 0) goto code_r0x00105132;
code_r0x00105144:
    if (bVar16 != false) goto code_r0x00104d0a;
code_r0x0010514f:
    uStack196 = 0;
    cStack188 = '\0';
    if ((*(uint *)(is_basic_table + (ulong)(*pbVar6 >> 5) * 4) >> ((uint)*pbVar6 & 0x1f) & 1) == 0)
    {
      pbStack184 = pbVar6;
      iVar4 = func_0x00101920(&uStack196);
      if (iVar4 == 0) {
code_r0x00105557:
        func_0x00101750(&UNK_0010e9b4,&UNK_0010e994,0x96,__PRETTY_FUNCTION___5159);
        goto code_r0x00105576;
      }
      uVar12 = func_0x001016d0();
      pbVar2 = pbStack184;
      uVar12 = strnlen1(pbStack184,uVar12);
      lStack176 = rpl_mbrtowc(auStack164,pbVar2,uVar12);
      if (lStack176 == -1) {
        lStack176 = 1;
        goto code_r0x001051ab;
      }
      if (lStack176 == -2) {
        lStack176 = func_0x001016e0(pbStack184);
        goto code_r0x001051ab;
      }
      if (lStack176 == 0) {
        lStack176 = 1;
        if (*pbStack184 != 0) goto code_r0x0010557b;
        if (auStack164[0] != 0) goto code_r0x001054fc;
      }
      cStack168 = '\x01';
      func_0x00101920(&uStack196);
    }
    else {
      lStack176 = 1;
      auStack164[0] = SEXT14((char)*pbVar6);
      cStack168 = '\x01';
      pbStack184 = pbVar6;
    }
  }
  cStack188 = '\x01';
  if (auStack164[0] == 0) goto code_r0x00104d05;
code_r0x001051ab:
  param_1 = pbVar6 + lStack176;
  goto code_r0x00104c80;
code_r0x00105552:
  func_0x00101600();
  goto code_r0x00105557;
}

