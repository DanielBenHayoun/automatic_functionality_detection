
ulong timeout(uint param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined auVar7 [16];
  undefined8 uStack392;
  undefined8 auStack384 [2];
  uint uStack364;
  undefined auStack360 [128];
  code *pcStack232;
  undefined auStack224 [128];
  undefined4 uStack96;
  undefined auStack72 [24];
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101bf0(6,&UNK_00106e61);
  func_0x00101a10(&UNK_00105f4b,&UNK_00105f8d);
  func_0x001019e0(&UNK_00105f4b);
  exit_failure = 0x7d;
  atexit(close_stdout);
code_r0x00101de0:
  do {
    iVar1 = func_0x00101a60((ulong)param_1,param_2,&UNK_00105fb3,long_options,0);
    if (iVar1 == -1) {
      lVar2 = (long)optind;
      iVar1 = param_1 - optind;
      param_1 = iVar1 - 1;
      if (param_1 == 0 || iVar1 < 1) goto code_r0x00101e2a;
      optind = optind + 1;
      auStack384[0] = parse_duration(param_2[lVar2]);
      param_2 = param_2 + optind;
      command = *param_2;
      if (foreground == '\0') {
        func_0x00101c80(0,0);
      }
      uVar6 = term_signal;
      func_0x00101b30(auStack224);
      uStack96 = 0x10000000;
      pcStack232 = cleanup;
      func_0x001019c0(0xe,&pcStack232,0);
      func_0x001019c0(2,&pcStack232,0);
      func_0x001019c0(3,&pcStack232,0);
      func_0x001019c0(1,&pcStack232,0);
      func_0x001019c0(0xf,&pcStack232,0);
      func_0x001019c0((ulong)uVar6,&pcStack232,0);
      func_0x00101b20(0x15,1);
      func_0x00101b20(0x16,1);
      func_0x00101b30(auStack224);
      uStack96 = 0x10000000;
      pcStack232 = chld;
      func_0x001019c0(0x11,&pcStack232,0);
      unblock_signal(0x11);
      monitored_pid = func_0x00101d20();
      if (monitored_pid == 0xffffffff) {
        uVar3 = func_0x00101a20(0,&UNK_00105fba,5);
        puVar5 = (uint *)func_0x00101970();
        func_0x00101c10(0,(ulong)*puVar5,uVar3);
        uVar6 = 0x7d;
      }
      else {
        if (monitored_pid == 0) {
          func_0x00101b20(0x15,0);
          func_0x00101b20(0x16,0);
          func_0x00101c60(*param_2,param_2);
          puVar5 = (uint *)func_0x00101970();
          uVar6 = *puVar5;
          uVar3 = quote(command);
          uVar4 = func_0x00101a20(0,&UNK_00105fd2,5);
          func_0x00101c10(0,(ulong)*puVar5,uVar4,uVar3);
          uVar6 = (uint)(uVar6 == 2) + 0x7e;
        }
        else {
          unblock_signal(0xe);
          settimeout(auStack384[0],1);
          uVar6 = term_signal;
          func_0x00101b30(&pcStack232);
          func_0x00101d10(&pcStack232,0xe);
          func_0x00101d10(&pcStack232,2);
          func_0x00101d10(&pcStack232,3);
          func_0x00101d10(&pcStack232,1);
          func_0x00101d10(&pcStack232,0xf);
          func_0x00101d10(&pcStack232,(ulong)uVar6);
          func_0x00101d10(&pcStack232,0x11);
          iVar1 = func_0x00101920(0,&pcStack232,auStack360);
          if (iVar1 != 0) {
            uVar3 = func_0x00101a20(0,&UNK_00105eb1,5);
            puVar5 = (uint *)func_0x00101970();
            func_0x00101c10(0,(ulong)*puVar5,uVar3);
          }
          while( true ) {
            iVar1 = func_0x00101c20((ulong)monitored_pid,&uStack364,1);
            if (iVar1 != 0) break;
            func_0x00101bc0();
          }
          if (iVar1 < 0) {
            uVar3 = func_0x00101a20(0,&UNK_00105feb,5);
            puVar5 = (uint *)func_0x00101970();
            func_0x00101c10(0,(ulong)*puVar5,uVar3);
            uStack364 = 0x7d;
          }
          else {
            uVar6 = uStack364 & 0x7f;
            if (uVar6 == 0) {
              uStack364 = (uint)(byte)((ulong)uStack364 >> 8);
            }
            else {
              if ((char)uVar6 == '\0' || (char)((char)uVar6 + '\x01') < '\x01') {
                uVar3 = func_0x00101a20(0,&UNK_00106848,5);
                func_0x00101c10(0,0,uVar3,(ulong)uStack364);
                uStack364 = 1;
              }
              else {
                if ((uStack364 & 0x80) != 0) {
                  uVar3 = func_0x00101a20(0,&UNK_001067f8,5);
                  func_0x00101c10(0,0,uVar3);
                }
                if (timed_out == 0) {
                  iVar1 = func_0x00101b60(4,0);
                  if (iVar1 == 0) {
                    func_0x00101b20((ulong)uVar6,0);
                    unblock_signal((ulong)uVar6);
                    func_0x00101940((ulong)uVar6);
                  }
                  else {
                    uVar3 = func_0x00101a20(0,&UNK_00106820,5);
                    puVar5 = (uint *)func_0x00101970();
                    func_0x00101c10(0,(ulong)*puVar5,uVar3);
                  }
                }
                uStack364 = uVar6 + 0x80;
              }
            }
          }
          uVar6 = uStack364;
          if ((timed_out != 0) && (preserve_status == '\0')) {
            uStack364 = 0x7c;
            uVar6 = uStack364;
          }
        }
      }
      if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar6;
      }
code_r0x00102357:
      auVar7 = func_0x00101a50();
      uVar3 = uStack392;
      uStack392 = SUB168(auVar7,0);
      (*(code *)PTR___libc_start_main_00308fe0)
                (main,uVar3,auStack384,__libc_csu_init,__libc_csu_fini,SUB168(auVar7 >> 0x40,0),
                 &uStack392);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (iVar1 == 0x73) break;
    if (iVar1 < 0x74) {
      if (iVar1 == -0x82) {
        usage(0);
        goto code_r0x00102357;
      }
      if (iVar1 != 0x6b) {
        if (iVar1 != -0x83) goto code_r0x00101e2a;
        version_etc(stdout,&UNK_00105ec9,&UNK_00105f47,Version,&UNK_00105fa5,0);
        func_0x00101ca0(0);
      }
      kill_after = parse_duration();
      goto code_r0x00101de0;
    }
    if (iVar1 == 0x80) {
      foreground = '\x01';
    }
    else {
      if (iVar1 != 0x81) {
        if (iVar1 != 0x76) goto code_r0x00101e2a;
        goto code_r0x00101e38;
      }
      preserve_status = '\x01';
    }
  } while( true );
  term_signal = operand2sig(optarg,auStack72);
  if (term_signal == 0xffffffff) {
code_r0x00101e2a:
    usage();
code_r0x00101e38:
    verbose = 1;
  }
  goto code_r0x00101de0;
}