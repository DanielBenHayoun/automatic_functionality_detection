
long freea(byte *param_1)

{
  bool bVar1;
  byte *pbVar2;
  undefined in_AL;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_RDX;
  undefined *puVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined8 uStack124;
  undefined uStack116;
  byte *pbStack112;
  long lStack104;
  undefined uStack96;
  int aiStack92 [9];
  long lStack56;
  
  if (((ulong)param_1 & 0xf) == 0) {
    if (((ulong)param_1 & 0x10) == 0) {
      return (long)_in_AL;
    }
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)PTR_free_00311e08)(param_1 + -(ulong)param_1[-1]);
    return uVar4;
  }
  func_0x00101600();
  lStack56 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = func_0x001016d0();
  if (uVar5 < 2) {
    lVar6 = func_0x001016e0(param_1);
code_r0x0010b185:
    if (lStack56 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar6;
    }
code_r0x0010b339:
    func_0x001016f0();
code_r0x0010b33e:
    func_0x00101750(&UNK_0010e9cb,&UNK_0010e994,0xb2,__PRETTY_FUNCTION___5021);
code_r0x0010b35d:
    puVar7 = &UNK_0010e994;
    uVar8 = 0x10e9a2;
    func_0x00101750(&UNK_0010e9a2,&UNK_0010e994,0xb3,__PRETTY_FUNCTION___5021);
    _init();
    lVar6 = 0;
    do {
      uVar4 = (*(code *)(&__frame_dummy_init_array_entry)[lVar6])((ulong)uVar8,puVar7,extraout_RDX);
      lVar6 = lVar6 + 1;
    } while (lVar6 != 1);
    return uVar4;
  }
  bVar1 = false;
  uStack124 = 0;
  lVar6 = 0;
  pbStack112 = param_1;
  do {
    uStack116 = 0;
    if (bVar1) {
code_r0x0010b23c:
      uVar4 = func_0x001016d0();
      pbVar2 = pbStack112;
      uVar4 = strnlen1(pbStack112,uVar4);
      lStack104 = rpl_mbrtowc(aiStack92,pbVar2,uVar4,&uStack124);
      if (lStack104 == -1) {
        lStack104 = 1;
        uStack96 = 0;
      }
      else {
        if (lStack104 != -2) {
          if (lStack104 == 0) {
            lStack104 = 1;
            if (*pbStack112 != 0) goto code_r0x0010b33e;
            if (aiStack92[0] != 0) goto code_r0x0010b35d;
          }
          uStack96 = 1;
          iVar3 = func_0x00101920(&uStack124);
          if (iVar3 != 0) {
            bVar1 = false;
          }
          goto code_r0x0010b217;
        }
        lStack104 = func_0x001016e0(pbStack112);
        uStack96 = 0;
      }
    }
    else {
      if ((*(uint *)(is_basic_table + (ulong)(*pbStack112 >> 5) * 4) >> ((uint)*pbStack112 & 0x1f) &
          1) == 0) {
        iVar3 = func_0x00101920(&uStack124);
        if (iVar3 != 0) {
          bVar1 = true;
          goto code_r0x0010b23c;
        }
        func_0x00101750(&UNK_0010e9b4,&UNK_0010e994,0x96,__PRETTY_FUNCTION___5021);
        goto code_r0x0010b339;
      }
      lStack104 = 1;
      aiStack92[0] = (int)(char)*pbStack112;
      uStack96 = 1;
code_r0x0010b217:
      uStack116 = 1;
      if (aiStack92[0] == 0) goto code_r0x0010b185;
    }
    pbStack112 = pbStack112 + lStack104;
    lVar6 = lVar6 + 1;
  } while( true );
}

