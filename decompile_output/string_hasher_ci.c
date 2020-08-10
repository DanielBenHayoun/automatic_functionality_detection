
undefined8 * string_hasher_ci(undefined8 *param_1,ulong param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined8 uStack132;
  undefined uStack124;
  undefined8 *puStack120;
  long lStack112;
  char cStack104;
  uint auStack100 [9];
  ulong uStack64;
  
  uVar4 = 0;
  bVar1 = false;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack132 = 0;
  puStack120 = param_1;
  do {
    uStack124 = 0;
    if (bVar1) {
code_r0x001051b7:
      uVar3 = func_0x00102520();
      _uVar7 = puStack120;
      uVar3 = strnlen1(puStack120,uVar3);
      puVar6 = (undefined8 *)auStack100;
      lStack112 = rpl_mbrtowc(puVar6,_uVar7,uVar3,&uStack132);
      uVar7 = auStack100[0];
      if (lStack112 == -1) {
        lStack112 = 1;
        cStack104 = '\0';
        param_1 = (undefined8 *)(ulong)auStack100[0];
      }
      else {
        if (lStack112 != -2) {
          if (lStack112 == 0) {
            lStack112 = 1;
            if (*(byte *)puStack120 != 0) goto code_r0x00105320;
            if (auStack100[0] != 0) goto code_r0x00105301;
          }
          _uVar7 = (undefined8 *)(ulong)auStack100[0];
          param_1 = &uStack132;
          cStack104 = '\x01';
          iVar2 = func_0x00102990();
          if (iVar2 == 0) goto code_r0x00105182;
          bVar1 = false;
          puVar6 = param_1;
          param_1 = _uVar7;
          goto joined_r0x00105249;
        }
        puVar6 = puStack120;
        lStack112 = func_0x00102530();
        cStack104 = '\0';
        param_1 = (undefined8 *)(ulong)auStack100[0];
      }
    }
    else {
      if ((*(uint *)(is_basic_table + (ulong)(*(byte *)puStack120 >> 5) * 4) >>
           ((uint)*(byte *)puStack120 & 0x1f) & 1) == 0) {
        iVar2 = func_0x00102990(&uStack132);
        if (iVar2 != 0) {
          bVar1 = true;
          goto code_r0x001051b7;
        }
        func_0x00102600(&UNK_001214a4,&UNK_00121496,0x96,__PRETTY_FUNCTION___5373);
code_r0x00105301:
        func_0x00102600(&UNK_001214d2,&UNK_00121496,0xb3,__PRETTY_FUNCTION___5373);
code_r0x00105320:
        puVar5 = &UNK_00121496;
        puVar6 = (undefined8 *)&UNK_001214bb;
        func_0x00102600(&UNK_001214bb,&UNK_00121496,0xb2,__PRETTY_FUNCTION___5373);
        goto code_r0x0010533f;
      }
      lStack112 = 1;
      auStack100[0] = SEXT14((char)*(byte *)puStack120);
      _uVar7 = (undefined8 *)(ulong)auStack100[0];
      cStack104 = '\x01';
code_r0x00105182:
      uVar7 = (uint)_uVar7;
      puVar6 = param_1;
      param_1 = _uVar7;
joined_r0x00105249:
      if (uVar7 == 0) {
        uStack124 = 1;
        puVar5 = (undefined *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
        if (puVar5 == (undefined *)0x0) {
          return (undefined8 *)uVar4;
        }
code_r0x0010533f:
        func_0x00102560();
        _uVar7 = (undefined8 *)xmalloc(0x10);
        uVar3 = puVar6[1];
        *(undefined **)(_uVar7 + 1) = puVar5;
        *(undefined8 **)(puVar6 + 1) = _uVar7;
        *_uVar7 = uVar3;
        return _uVar7;
      }
    }
    _uVar7 = puStack120;
    uStack124 = 1;
    if (cStack104 == '\0') {
      iVar2 = (int)(char)*(byte *)puStack120;
      param_1 = puVar6;
    }
    else {
      iVar2 = func_0x001028e0();
    }
    puStack120 = (undefined8 *)((long)_uVar7 + lStack112);
    uVar4 = ((long)iVar2 + uVar4 * 0x1f) % param_2;
  } while( true );
}

