
undefined8 main(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined *puVar11;
  long *plStack72;
  
  set_program_name(*param_2);
  func_0x001013b0(6,&UNK_001050c1);
  func_0x00101270(&UNK_00104922,&UNK_0010494b);
  func_0x00101250(&UNK_00104922);
  puVar11 = &UNK_001014c8;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_001048a4,&UNK_0010491e,Version,1,usage,&UNK_00104963,0,
             puVar11);
  plVar9 = param_2 + (int)optind;
  plVar7 = param_2 + (int)param_1;
  plStack72 = plVar7;
  if (optind == param_1) {
    plStack72 = plVar7 + 1;
    *plVar7 = 0x104973;
  }
  if (plStack72 <= plVar9) {
    lVar4 = xmalloc(0x2000);
    *(undefined *)(lVar4 + -1) = 10;
    do {
      invalidInstructionException();
    } while( true );
  }
  lVar4 = *plVar9;
  bVar1 = true;
  uVar10 = 0;
  plVar7 = plVar9;
  lVar3 = lVar4;
  while( true ) {
    plVar7 = plVar7 + 1;
    lVar2 = func_0x001012a0(lVar3);
    uVar10 = uVar10 + lVar2 + 1;
    if (plStack72 <= plVar7) break;
    lVar2 = lVar2 + 1 + lVar3;
    lVar3 = *plVar7;
    if (lVar2 != lVar3) {
      bVar1 = false;
    }
  }
  if (uVar10 < 0x1001) {
    uVar10 = 0x2000;
  }
  else {
    if (bVar1) goto code_r0x0010159e;
  }
  bVar1 = false;
  lVar4 = xmalloc(uVar10);
code_r0x0010159e:
  uVar8 = 0;
  do {
    lVar2 = *plVar9;
    lVar3 = func_0x001012a0(lVar2);
    if (!bVar1) {
      func_0x00101340(lVar4 + uVar8,lVar2,lVar3);
    }
    lVar3 = lVar3 + uVar8;
    plVar9 = plVar9 + 1;
    uVar8 = lVar3 + 1;
    puVar11 = (undefined *)(lVar3 + lVar4);
    *puVar11 = 0x20;
  } while (plVar9 < plStack72);
  *puVar11 = 10;
  lVar2 = uVar10 / uVar8 - 1;
  lVar3 = lVar4;
  if (lVar2 != 0) {
    do {
      lVar3 = func_0x00101340(lVar3 + uVar8,lVar4,uVar8,lVar3 + uVar8);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    uVar8 = uVar8 * (uVar10 / uVar8);
  }
  do {
    uVar10 = full_write(1,lVar4,uVar8);
  } while (uVar10 == uVar8);
  uVar5 = func_0x00101280(0,&UNK_00104975,5);
  puVar6 = (uint *)func_0x00101200();
  func_0x001013d0(0,(ulong)*puVar6,uVar5);
  return 1;
}

