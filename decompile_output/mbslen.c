
long mbslen(byte *param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  undefined *puVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined8 uStack116;
  undefined uStack108;
  byte *pbStack104;
  long lStack96;
  undefined uStack88;
  int aiStack84 [9];
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = func_0x001016d0();
  if (uVar4 < 2) {
    lVar5 = func_0x001016e0(param_1);
code_r0x0010b185:
    if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
      return lVar5;
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
    lVar5 = 0;
    do {
      uVar6 = (*(code *)(&__frame_dummy_init_array_entry)[lVar5])((ulong)uVar8,puVar7,extraout_RDX);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 1);
    return uVar6;
  }
  bVar1 = false;
  uStack116 = 0;
  lVar5 = 0;
  pbStack104 = param_1;
  do {
    uStack108 = 0;
    if (bVar1) {
code_r0x0010b23c:
      uVar6 = func_0x001016d0();
      pbVar2 = pbStack104;
      uVar6 = strnlen1(pbStack104,uVar6);
      lStack96 = rpl_mbrtowc(aiStack84,pbVar2,uVar6,&uStack116);
      if (lStack96 == -1) {
        lStack96 = 1;
        uStack88 = 0;
      }
      else {
        if (lStack96 != -2) {
          if (lStack96 == 0) {
            lStack96 = 1;
            if (*pbStack104 != 0) goto code_r0x0010b33e;
            if (aiStack84[0] != 0) goto code_r0x0010b35d;
          }
          uStack88 = 1;
          iVar3 = func_0x00101920(&uStack116);
          if (iVar3 != 0) {
            bVar1 = false;
          }
          goto code_r0x0010b217;
        }
        lStack96 = func_0x001016e0(pbStack104);
        uStack88 = 0;
      }
    }
    else {
      if ((*(uint *)(is_basic_table + (ulong)(*pbStack104 >> 5) * 4) >> ((uint)*pbStack104 & 0x1f) &
          1) == 0) {
        iVar3 = func_0x00101920(&uStack116);
        if (iVar3 != 0) {
          bVar1 = true;
          goto code_r0x0010b23c;
        }
        func_0x00101750(&UNK_0010e9b4,&UNK_0010e994,0x96,__PRETTY_FUNCTION___5021);
        goto code_r0x0010b339;
      }
      lStack96 = 1;
      aiStack84[0] = (int)(char)*pbStack104;
      uStack88 = 1;
code_r0x0010b217:
      uStack108 = 1;
      if (aiStack84[0] == 0) goto code_r0x0010b185;
    }
    pbStack104 = pbStack104 + lStack96;
    lVar5 = lVar5 + 1;
  } while( true );
}

