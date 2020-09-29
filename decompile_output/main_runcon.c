
void runcon(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  long lStack88;
  undefined4 uStack68;
  undefined8 uStack64;
  
  uStack64 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x001013f0(6,&UNK_00105161);
  func_0x001012b0(&UNK_00104705,&UNK_0010472e);
  func_0x00101290(&UNK_00104705);
  atexit(close_stdout);
  bVar1 = false;
  lStack88 = 0;
  lVar2 = 0;
  lVar3 = 0;
  lVar4 = 0;
code_r0x00101532:
  do {
    lVar12 = lVar4;
    lVar11 = lVar3;
    lVar10 = lVar2;
    uStack68 = 0;
    iVar5 = func_0x00101300((ulong)param_1,param_2,&UNK_00104746,long_options,&uStack68);
    lVar3 = lVar11;
    lVar4 = lVar12;
    if (iVar5 == -1) {
      if (optind == param_1) {
        puVar7 = (uint *)func_0x00101250();
        *puVar7 = 0x5f;
        uVar8 = func_0x001012c0(0,&UNK_001047a1,5);
        func_0x00101410(1,(ulong)*puVar7,uVar8);
        goto code_r0x001016c5;
      }
      if (lVar10 != 0) goto code_r0x00101665;
      if (lVar11 != 0) goto code_r0x00101665;
      if (lVar12 != 0 || lStack88 != 0) goto code_r0x00101665;
      uVar6 = optind;
      if (!bVar1) goto code_r0x00101783;
      goto code_r0x00101665;
    }
    lVar2 = lVar10;
    if (iVar5 == 0x6c) {
      if (lStack88 != 0) {
        do {
          uVar8 = func_0x001012c0(0,&UNK_0010477e,5);
          uVar6 = func_0x00101410(1,0,uVar8);
code_r0x00101783:
          if ((int)uVar6 < (int)param_1) {
            optind = uVar6 + 1;
code_r0x00101665:
            if ((int)param_1 <= (int)optind) {
              puVar9 = &UNK_001047bf;
              goto code_r0x00101679;
            }
code_r0x001016c5:
            param_2 = program_name;
            uVar8 = func_0x001012c0(0,&UNK_00104bb8,5);
            func_0x00101410(1,0,uVar8,param_2);
          }
          else {
            puVar9 = &UNK_00104b88;
code_r0x00101679:
            uVar8 = func_0x001012c0(0,puVar9,5);
            func_0x00101410(0,0,uVar8);
code_r0x001015bf:
            usage();
code_r0x001015c9:
            lVar2 = optarg;
            lVar3 = lVar11;
            lVar4 = lVar12;
            if (lVar10 == 0) goto code_r0x00101532;
          }
          uVar8 = func_0x001012c0(0,&UNK_0010476f,5);
          func_0x00101410(1,0,uVar8);
code_r0x00101717:
          uVar8 = func_0x001012c0(0,&UNK_00104760,5);
          func_0x00101410(1,0,uVar8);
code_r0x0010173b:
          uVar8 = func_0x001012c0(0,&UNK_00104751,5);
          func_0x00101410(1,0,uVar8);
        } while( true );
      }
      lStack88 = optarg;
      goto code_r0x00101532;
    }
    if (iVar5 < 0x6d) {
      if (iVar5 == -0x82) {
        usage();
        goto code_r0x001015ef;
      }
      if (iVar5 != 99) {
        if (iVar5 != -0x83) goto code_r0x001015bf;
        version_etc(stdout,&UNK_00104684,&UNK_00104701,Version,&UNK_00104793,0);
        iVar5 = func_0x00101440();
        goto code_r0x001015b0;
      }
      bVar1 = true;
    }
    else {
code_r0x001015b0:
      if (iVar5 == 0x74) {
code_r0x001015ef:
        lVar4 = optarg;
        if (lVar12 != 0) goto code_r0x00101717;
      }
      else {
        if (iVar5 == 0x75) goto code_r0x001015c9;
        if (iVar5 != 0x72) goto code_r0x001015bf;
        lVar3 = optarg;
        if (lVar11 != 0) goto code_r0x0010173b;
      }
    }
  } while( true );
}