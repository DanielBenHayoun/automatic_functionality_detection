
ulong readtokens(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5
                ,long *param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  long lStack112;
  undefined8 uStack88;
  undefined8 uStack80;
  long lStack64;
  
  uVar7 = param_2 + 1;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    uVar7 = 0x40;
  }
  lVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar7),0);
  if (SUB168(ZEXT816(8) * ZEXT816(uVar7) >> 0x40,0) != 0) goto code_r0x00104c00;
  bVar1 = false;
  while ((lVar2 < 0 || (bVar1))) {
code_r0x00104bfb:
    lVar2 = xalloc_die();
code_r0x00104c00:
    bVar1 = true;
  }
  lVar2 = xmalloc(uVar7 * 8);
  uVar6 = 0;
  lVar3 = xmalloc(uVar7 * 8);
  uStack88 = 0;
  uStack80 = 0;
  do {
    lVar5 = readtoken(param_1,param_3,param_4,&uStack88);
    if (uVar6 < uVar7) {
      if (lVar5 == -1) goto code_r0x00104b4c;
    }
    else {
      if (lVar2 == 0) {
        if (uVar7 == 0) {
          uVar7 = 0x10;
        }
        bVar1 = false;
        lVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar7),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar7) >> 0x40,0) != 0) goto code_r0x00104c0f;
        goto code_r0x00104bc3;
      }
      if (0xaaaaaaaaaaaaaa9 < uVar7) goto code_r0x00104bfb;
      uVar7 = uVar7 + 1 + (uVar7 >> 1);
      lStack112 = uVar7 * 8;
      lVar2 = xrealloc(lVar2,lStack112);
      while( true ) {
        lVar3 = xrealloc(lVar3,lStack112,lStack112);
        if (lVar5 != -1) break;
code_r0x00104b4c:
        *(undefined8 *)(lVar2 + uVar6 * 8) = 0;
        *(undefined8 *)(lVar3 + uVar6 * 8) = 0;
        func_0x001013f0(uStack80);
        *param_5 = lVar2;
        if (param_6 == (long *)0x0) {
          func_0x001013f0(lVar3);
        }
        else {
          *param_6 = lVar3;
        }
        if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
          return uVar6;
        }
        lVar2 = func_0x001014c0();
code_r0x00104c0f:
        bVar1 = true;
code_r0x00104bc3:
        if ((lVar2 < 0) || (bVar1)) goto code_r0x00104bfb;
        lStack112 = uVar7 * 8;
        lVar2 = xrealloc(0,lStack112);
      }
    }
    lVar8 = lVar5 + 1;
    if (lVar8 < 0) goto code_r0x00104bfb;
    uVar4 = xmalloc(lVar8);
    *(long *)(lVar3 + uVar6 * 8) = lVar5;
    uVar4 = func_0x001015b0(uVar4,uStack80,lVar8);
    *(undefined8 *)(lVar2 + uVar6 * 8) = uVar4;
    uVar6 = uVar6 + 1;
  } while( true );
}

