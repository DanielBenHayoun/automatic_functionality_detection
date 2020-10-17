
/* WARNING: Could not reconcile some variable overlaps */

void mkdir(uint param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  code *pcStack88;
  uint uStack80;
  undefined8 uStack76;
  undefined uStack68;
  undefined8 uStack64;
  long lStack48;
  
  pcVar7 = make_ancestor;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack88 = (code *)0x0;
  uStack76 = 0x1ff;
  uStack64 = 0;
  uStack68 = 0;
  set_program_name(*param_2);
  func_0x001019d0(6,&UNK_001093ee);
  func_0x001017e0(&UNK_001087c4,&UNK_001087ed);
  func_0x001017b0(&UNK_001087c4);
  atexit(close_stdout);
  lVar6 = 0;
  pcVar1 = pcStack88;
  while (pcStack88 = pcVar1,
        iVar2 = func_0x00101840((ulong)param_1,param_2,&UNK_0010882a,longopts,0), iVar2 != -1) {
    if (iVar2 == 0x5a) {
code_r0x00101c20:
      pcVar1 = pcStack88;
      if (optarg != 0) {
        uVar4 = func_0x001017f0(0,&UNK_00108c48,5);
        func_0x00101a10(0,0,uVar4);
        pcVar1 = pcStack88;
      }
    }
    else {
      if (iVar2 < 0x5b) {
        if (iVar2 == -0x83) {
          version_etc(stdout,&UNK_00108744,&UNK_001087c0,Version,&UNK_0010881a,0);
          func_0x00101a70();
          goto code_r0x00101c20;
        }
        if (iVar2 == -0x82) {
          usage(0);
          goto code_r0x00101d64;
        }
        goto code_r0x00101bc0;
      }
      pcVar1 = pcVar7;
      if (iVar2 != 0x70) {
        if (iVar2 == 0x76) {
          uStack64 = func_0x001017f0(0,&UNK_00108805,5);
          pcVar1 = pcStack88;
        }
        else {
          lVar6 = optarg;
          pcVar1 = pcStack88;
          if (iVar2 != 0x6d) {
code_r0x00101bc0:
            usage();
            lVar6 = optarg;
            pcVar1 = pcStack88;
          }
        }
      }
    }
  }
  if (optind != param_1) {
    if (pcStack88 == (code *)0x0) {
      if (lVar6 != 0) {
        uVar3 = func_0x001018f0(0);
        pcVar7 = (code *)(ulong)uVar3;
        func_0x001018f0((ulong)uVar3);
        uStack80 = uVar3;
        goto code_r0x00101d14;
      }
code_r0x00101cba:
      savewd_process_files((ulong)(param_1 - optind),param_2 + (int)optind,process_dir,&pcStack88);
      if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      uVar3 = func_0x001018f0(0);
      pcVar7 = (code *)(ulong)uVar3;
      func_0x001018f0((ulong)uVar3);
      uStack80 = uVar3;
      if (lVar6 == 0) {
        uStack76 = CONCAT44(uStack76._4_4_,0x1ff);
        goto code_r0x00101cba;
      }
code_r0x00101d14:
      lVar5 = mode_compile(lVar6);
      if (lVar5 != 0) {
        uVar3 = mode_adjust(0x1ff,1,pcVar7,lVar5);
        uStack76 = uStack76 & 0xffffffff00000000 | (ulong)uVar3;
        func_0x00101730(lVar5);
        goto code_r0x00101cba;
      }
code_r0x00101d64:
      param_2 = (undefined8 *)quote(lVar6);
      uVar4 = func_0x001017f0(0,&UNK_00108840,5);
      func_0x00101a10(1,0,uVar4,param_2);
    }
    func_0x00101830();
  }
  uVar4 = func_0x001017f0(0,&UNK_00108830,5);
  func_0x00101a10(0,0,uVar4);
  goto code_r0x00101bc0;
}