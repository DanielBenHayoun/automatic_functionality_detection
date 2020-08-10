
ulong main(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  undefined *puVar18;
  undefined *puStack96;
  ulong uStack88;
  ulong uStack80;
  uint *puStack64;
  
  set_program_name(*param_2);
  func_0x00101610(6,&UNK_00105e81);
  func_0x00101490(&UNK_001053c4,&UNK_0010542b);
  func_0x00101470(&UNK_001053c4);
  lVar9 = func_0x001013e0(&UNK_00105443);
  uVar14 = (-(uint)(lVar9 == 0) & 0xfffffffe) + 0x7f;
  puVar18 = &UNK_00101775;
  exit_failure = uVar14;
  atexit(close_stdout);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_00105344,&UNK_001053c0,Version,0,usage,&UNK_00105453,0,
             puVar18);
  if (optind < (int)param_1) {
    iVar4 = func_0x00101450(0);
    uVar5 = func_0x00101450(1);
    if ((uVar5 == 0) && (piVar10 = (int *)func_0x00101410(), *piVar10 == 9)) {
      bVar1 = true;
      uVar6 = func_0x00101450(2);
      bVar17 = uVar6 != 0;
      bVar2 = true;
      bVar3 = true;
      if (iVar4 != 0) goto code_r0x00101a3d;
code_r0x00101860:
      if ((bVar17) && (bVar1)) {
code_r0x00101872:
        bVar17 = true;
        uVar6 = func_0x00101590(0xfffffe7f);
        uVar7 = func_0x00101650(&UNK_001053ed,0x441,0x180);
code_r0x001018d7:
        uStack88 = (ulong)uVar6;
        if ((int)uVar7 < 0) {
          puStack64 = (uint *)func_0x00101410();
          uVar6 = *puStack64;
          uStack80 = (ulong)uVar6;
          lVar9 = func_0x001013e0(&UNK_00105489);
          if (lVar9 == 0) {
            uVar11 = quotearg_style(4,&UNK_001053ed);
            uVar12 = func_0x001014a0(0,&UNK_0010548e,5);
            func_0x00101640(0,(ulong)uVar6,uVar12,uVar11);
            goto code_r0x0010181b;
          }
          puVar18 = (undefined *)file_name_concat(lVar9,&UNK_001053ed,0);
          puStack96 = puVar18;
          if (uVar5 == 0) {
            uVar7 = func_0x00101650(puVar18,0x441,0x180);
            if ((int)uVar7 < 0) {
              uVar5 = *puStack64;
              uVar11 = quotearg_style(4,&UNK_001053ed);
              uVar12 = func_0x001014a0(0,&UNK_0010548e,5);
              func_0x00101640(0,(ulong)uVar6,uVar12,uVar11);
              goto code_r0x00101c90;
            }
          }
          else {
            uVar7 = fd_reopen(1,puVar18,0x441,0x180);
            if ((int)uVar7 < 0) goto code_r0x00101cdb;
          }
        }
        else {
          puVar18 = &UNK_001053ed;
          puStack96 = (undefined *)0x0;
        }
        uVar16 = (ulong)uVar7;
        func_0x00101590(uStack88);
        uVar11 = quotearg_style(4,puVar18);
        puVar18 = &UNK_00105838;
        if (iVar4 == 0) {
          puVar18 = &UNK_001053f7;
        }
        uVar12 = func_0x001014a0(0,puVar18,5);
        func_0x00101640(0,0,uVar12,uVar11);
        func_0x001013f0(puStack96);
      }
      else {
        uVar16 = 1;
      }
      if (!bVar17) goto code_r0x00101805;
      uVar6 = rpl_fcntl(2,0x406,3);
      uVar15 = (ulong)uVar6;
      if (uVar5 == 0) {
        puVar18 = &UNK_00105868;
        if (iVar4 == 0) {
          puVar18 = &UNK_0010540e;
        }
        goto code_r0x00101b39;
      }
code_r0x0010197a:
      iVar4 = func_0x00101500(uVar16,2);
      if (iVar4 < 0) {
        uVar11 = func_0x001014a0(0,&UNK_001058c8,5);
        puVar13 = (uint *)func_0x00101410();
        func_0x00101640((ulong)uVar14,(ulong)*puVar13,uVar11);
      }
      if (bVar2) {
        func_0x00101540(uVar16);
      }
    }
    else {
      uVar6 = func_0x00101450(2);
      bVar17 = uVar6 != 0;
      if (iVar4 == 0) {
        if (uVar5 != 0) {
          bVar2 = false;
          goto code_r0x001018ab;
        }
        if (uVar6 == 0) goto code_r0x00101805;
        uVar16 = 1;
        uVar5 = rpl_fcntl(2,0x406,3);
        bVar2 = false;
        uVar15 = (ulong)uVar5;
        puVar18 = &UNK_0010540e;
code_r0x00101b39:
        uVar11 = func_0x001014a0(0,puVar18,5);
        func_0x00101640(0,0,uVar11);
        goto code_r0x0010197a;
      }
      bVar2 = false;
      bVar3 = false;
code_r0x00101a3d:
      bVar1 = bVar3;
      iVar8 = fd_reopen(0,&UNK_00105470,1,0);
      if (iVar8 < 0) {
        uVar11 = func_0x001014a0(0,&UNK_00105898,5);
        puVar13 = (uint *)func_0x00101410();
        func_0x00101640((ulong)uVar14,(ulong)*puVar13,uVar11);
      }
      if ((uVar6 | uVar5) != 0) {
        if (uVar5 == 0) goto code_r0x00101860;
code_r0x001018ab:
        uVar6 = func_0x00101590(0xfffffe7f);
        uVar7 = fd_reopen(1,&UNK_001053ed,0x441,0x180);
        goto code_r0x001018d7;
      }
      uVar11 = func_0x001014a0(0,&UNK_0010547a,5);
      func_0x00101640(0,0,uVar11);
      if ((bVar17) && (bVar1)) goto code_r0x00101872;
code_r0x00101805:
      uVar15 = 2;
    }
    if ((*stderr & 0x20) != 0) goto code_r0x0010181b;
    func_0x00101580(1,1);
    param_2 = param_2 + optind;
    func_0x00101670(*param_2,param_2);
    puVar13 = (uint *)func_0x00101410();
    uVar5 = *puVar13;
    uVar14 = (uint)(uVar5 == 2) + 0x7e;
    iVar4 = func_0x00101500(uVar15,2);
    if (iVar4 != 2) goto code_r0x0010181b;
    uVar11 = quotearg_style(4,*param_2);
    puVar18 = &UNK_001054a0;
  }
  else {
    uVar11 = func_0x001014a0(0,&UNK_00105460,5);
    func_0x00101640(0,0,uVar11);
    usage((ulong)uVar14);
code_r0x00101cdb:
    uVar5 = *puStack64;
    uVar11 = quotearg_style(4,&UNK_001053ed);
    uVar12 = func_0x001014a0(0,&UNK_0010548e,5);
    func_0x00101640(0,uStack80 & 0xffffffff,uVar12,uVar11);
    if (puStack96 == (undefined *)0x0) goto code_r0x0010181b;
code_r0x00101c90:
    uVar11 = quotearg_style(4,puStack96);
    puVar18 = &UNK_0010548e;
  }
  uVar12 = func_0x001014a0(0,puVar18,5);
  func_0x00101640(0,(ulong)uVar5,uVar12,uVar11);
code_r0x0010181b:
  return (ulong)uVar14;
}

