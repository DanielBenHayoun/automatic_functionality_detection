
void squeeze_filter_constprop_14(code *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar1 = 0;
  uVar2 = 0;
  uVar8 = 0x7fffffff;
code_r0x00103b6a:
  if (uVar2 < uVar1) {
    if ((int)uVar8 != 0x7fffffff) goto code_r0x00103b9a;
    goto code_r0x00103ba8;
  }
code_r0x00103b73:
  uVar1 = (*param_1)(io_buf,0x2000);
  if (uVar1 == 0) {
    return;
  }
  uVar2 = 0;
  if ((int)uVar8 == 0x7fffffff) {
    uVar2 = 0;
    uVar8 = uVar2;
    uVar4 = uVar2;
    if (in_squeeze_set[io_buf[0]] != '\0') goto code_r0x00103bc0;
    goto code_r0x00103c19;
  }
code_r0x00103b95:
  if (uVar2 < uVar1) {
code_r0x00103b9a:
    uVar4 = uVar2;
    if ((int)uVar8 != (int)(char)io_buf[uVar2]) {
code_r0x00103ba8:
      do {
        uVar8 = uVar2;
        uVar4 = uVar2;
        if (in_squeeze_set[(byte)io_buf[uVar2]] == '\0') {
code_r0x00103c19:
          while( true ) {
            uVar6 = uVar8 + 2;
            if (uVar1 <= uVar6) break;
            lVar7 = uVar8 + 2;
            uVar8 = uVar6;
            if (in_squeeze_set[(byte)io_buf[lVar7]] != '\0') goto code_r0x00103c36;
          }
          if ((uVar6 == uVar1) &&
             (uVar2 = uVar8 + 1, in_squeeze_set[(byte)io_buf[uVar8 + 1]] != '\0'))
          goto code_r0x00103bc0;
        }
        else {
code_r0x00103bc0:
          uVar6 = uVar2;
          if (uVar2 < uVar1) goto code_r0x00103c36;
        }
        uVar8 = uVar1 - uVar4;
        if ((uVar8 != 0) && (uVar2 = func_0x00101810(io_buf + uVar4,1,uVar8,stdout), uVar8 != uVar2)
           ) goto code_r0x00103c91;
        uVar8 = 0x7fffffff;
        uVar2 = uVar6;
        if (uVar1 <= uVar6) goto code_r0x00103b73;
      } while( true );
    }
    goto code_r0x00103cc0;
  }
  goto code_r0x00103b6a;
code_r0x00103c36:
  uVar8 = (ulong)(uint)(int)(char)io_buf[uVar6];
  lVar7 = (uVar6 - uVar4) + 1;
  if ((uVar6 != 0) && (io_buf[uVar6] == in_squeeze_set[uVar6 + 0xff])) {
    lVar7 = uVar6 - uVar4;
  }
  uVar2 = uVar6 + 1;
  if ((lVar7 != 0) && (lVar3 = func_0x00101810(io_buf + uVar4,1,lVar7,stdout), lVar3 != lVar7)) {
code_r0x00103c91:
    uVar4 = func_0x00101690(0,&UNK_00107082,5);
    puVar5 = (uint *)func_0x00101610();
    func_0x00101850(1,(ulong)*puVar5,uVar4);
    goto code_r0x00103cc0;
  }
  goto code_r0x00103b95;
  while (lVar7 = uVar4 + 1, uVar4 = uVar2, (int)(char)io_buf[lVar7] == (int)uVar8) {
code_r0x00103cc0:
    uVar2 = uVar4 + 1;
    if (uVar2 == uVar1) goto code_r0x00103b6a;
  }
  uVar8 = 0x7fffffff;
  goto code_r0x00103b6a;
}

