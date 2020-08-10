
undefined8 main(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 auStack64 [3];
  
  puVar6 = &stack0xffffffffffffffd8;
  bVar1 = false;
  set_program_name(*param_2);
  func_0x001013e0(6,&UNK_001046c7);
  func_0x00101280(&UNK_00104742,&UNK_0010476b);
  func_0x00101260(&UNK_00104742);
  atexit(close_stdout);
  while( true ) {
    iVar2 = func_0x001012d0((ulong)param_1,param_2,&UNK_00104783,longopts,0);
    puVar5 = &stack0xffffffffffffffd8;
    if (iVar2 == -1) goto code_r0x0010157e;
    bVar1 = true;
    if (iVar2 == -0x82) break;
    if (iVar2 != 0x7a) {
      puVar6 = &stack0xffffffffffffffd8;
      puVar5 = &stack0xffffffffffffffd8;
      if (iVar2 == -0x83) goto code_r0x00101540;
      while( true ) {
        *(undefined8 *)(puVar6 + -8) = 0x10153b;
        usage(1);
        puVar5 = puVar6;
code_r0x00101540:
        *(undefined8 *)(puVar5 + -0x10) = 0;
        *(undefined8 *)(puVar5 + -0x18) = 0x101577;
        version_etc(stdout,&UNK_001046a4,&UNK_0010473e,Version,&UNK_00104792,&UNK_00104785);
        *(undefined8 *)(puVar5 + -0x18) = 0x10157e;
        func_0x00101430(0);
        puVar5 = puVar5 + -0x10;
code_r0x0010157e:
        puVar6 = puVar5;
        if (optind < (int)param_1) break;
code_r0x00101637:
        *(undefined8 *)(puVar6 + -8) = 0x10164a;
        uVar4 = func_0x00101290(0,&UNK_001047a2,5);
        *(undefined8 *)(puVar6 + -8) = 0x101658;
        func_0x00101400(0,0,uVar4);
      }
      do {
        uVar4 = param_2[optind];
        *(undefined8 *)(puVar6 + -8) = 0x1015ee;
        lVar3 = dir_len(uVar4);
        if (lVar3 == 0) {
          puVar5 = *(undefined **)(stdout + 0x28);
          if (puVar5 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar5 + 1;
            *puVar5 = 0x2e;
          }
          else {
            *(undefined8 *)(puVar6 + -8) = 0x101619;
            func_0x001012f0(stdout,0x2e);
          }
        }
        else {
          *(undefined8 *)(puVar6 + -8) = 0x10160a;
          func_0x001013c0(uVar4,1,lVar3);
        }
        puVar5 = *(undefined **)(stdout + 0x28);
        if (*(undefined **)(ulong *)(stdout + 0x30) < puVar5 ||
            *(undefined **)(ulong *)(stdout + 0x30) == puVar5) {
          *(undefined8 *)(puVar6 + -8) = 0x10162e;
          func_0x001012f0(stdout,(ulong)(-(uint)!bVar1 & 10));
        }
        else {
          *(undefined **)(stdout + 0x28) = puVar5 + 1;
          *puVar5 = (char)(-(uint)!bVar1 & 10);
        }
        optind = optind + 1;
      } while (optind < (int)param_1);
      return 0;
    }
  }
  usage(0);
  goto code_r0x00101637;
}

