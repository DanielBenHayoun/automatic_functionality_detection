
ulong main(uint param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  set_program_name(*param_2);
  func_0x00101440(6,&UNK_0010453a);
  func_0x001012f0(&UNK_001045b5,&UNK_001045de);
  func_0x001012d0(&UNK_001045b5);
  exit_failure = 3;
  atexit(close_stdout);
  silent = '\0';
  do {
    iVar1 = func_0x00101340((ulong)param_1,param_2,&UNK_00104811,longopts,0);
    if (iVar1 == -1) {
      lVar3 = (long)optind;
      if ((int)param_1 <= optind) {
        puVar2 = (undefined4 *)func_0x00101270();
        bVar5 = silent == '\0';
        *puVar2 = 2;
        if (bVar5) {
          lVar3 = func_0x00101420();
          bVar5 = lVar3 == 0;
          if (bVar5) {
            lVar3 = func_0x00101300(0,&UNK_00104617,5);
          }
          func_0x001012b0(lVar3);
        }
        else {
          iVar1 = func_0x001012c0(0);
          bVar5 = iVar1 == 0;
        }
        return (ulong)bVar5;
      }
code_r0x00101657:
      param_2 = (undefined8 *)quote(param_2[lVar3]);
      uVar4 = func_0x00101300(0,&UNK_00104606,5);
      func_0x00101460(0,0,uVar4,param_2);
code_r0x00101598:
      usage(2);
code_r0x001015a8:
      version_etc(stdout,&UNK_0010461d,&UNK_001045b1,Version,&UNK_001045f6,0);
      func_0x00101490();
    }
    else {
      if (iVar1 == -0x82) {
        lVar3 = usage(0);
        goto code_r0x00101657;
      }
      if (iVar1 != 0x73) {
        if (iVar1 != -0x83) goto code_r0x00101598;
        goto code_r0x001015a8;
      }
    }
    silent = '\x01';
  } while( true );
}

