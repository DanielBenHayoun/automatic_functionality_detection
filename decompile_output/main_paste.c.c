
undefined  [16] main(uint param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint *puVar5;
  undefined8 *puVar6;
  char extraout_DL;
  char cVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined auVar12 [16];
  undefined8 auStack64 [4];
  
  set_program_name(*param_2);
  func_0x001015b0(6,&UNK_001052b6);
  func_0x00101440(&UNK_00105289,&UNK_001052b7);
  func_0x00101420(&UNK_00105289);
  atexit(close_stdout);
  have_read_stdin = '\0';
  serial_merge = '\0';
  puVar8 = auStack64 + 3;
  puVar11 = (undefined8 *)&UNK_001052b5;
  while( true ) {
    puVar8[-1] = 0x10173a;
    iVar1 = func_0x00101490((ulong)param_1,param_2,&UNK_001052ee,longopts,0);
    if (iVar1 == -1) break;
    puVar6 = puVar8;
    if (iVar1 == 100) {
code_r0x001017b8:
      puVar8 = puVar6;
      puVar11 = optarg;
      if (*(char *)optarg == '\0') {
        puVar11 = (undefined8 *)&UNK_001052b2;
      }
    }
    else {
      if (iVar1 < 0x65) {
        if (iVar1 != -0x83) {
          if (iVar1 == -0x82) {
            puVar8[-1] = 0x101997;
            usage(0);
          }
code_r0x00101997:
          puVar8[-1] = 0x1019a1;
          auVar12 = usage(1);
          uVar10 = *puVar8;
          uVar9 = (ulong)(puVar8 + 1) & 0xfffffffffffffff0;
          *(undefined8 *)(uVar9 - 8) = SUB168(auVar12,0);
          *(ulong *)(uVar9 - 0x10) = uVar9 - 8;
          *(undefined8 *)(uVar9 - 0x18) = 0x1019da;
          (*(code *)PTR___libc_start_main_00307fd0)
                    (main,uVar10,puVar8 + 1,__libc_csu_init,__libc_csu_fini,
                     SUB168(auVar12 >> 0x40,0));
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar6 = puVar8 + -2;
        puVar8[-2] = 0;
        puVar8[-3] = 0x1017aa;
        version_etc(stdout,&UNK_00105209,&UNK_00105285,Version,&UNK_001052df,&UNK_001052cf);
        puVar8[-3] = 0x1017b1;
        func_0x00101610();
        goto code_r0x001017b8;
      }
      if (iVar1 == 0x73) {
        serial_merge = '\x01';
      }
      else {
        if (iVar1 != 0x7a) goto code_r0x00101997;
        line_delim = 0;
      }
    }
  }
  iVar1 = param_1 - optind;
  if (iVar1 == 0) {
    iVar1 = 1;
    param_2[optind] = 0x1056da;
  }
  puVar8[-1] = 0x1017ff;
  delim_end = (char *)xstrdup(puVar11);
  puVar6 = puVar11;
  delims = delim_end;
  do {
    cVar7 = *(char *)puVar6;
    if (cVar7 == '\0') {
      pcVar4 = paste_serial;
      if (serial_merge == '\0') {
        pcVar4 = paste_parallel;
      }
      puVar8[-1] = 0x1018b5;
      uVar2 = (*pcVar4)((long)iVar1,param_2 + (long)optind,(long)optind);
      param_2 = (undefined8 *)(ulong)uVar2;
      puVar8[-1] = 0x1018c3;
      func_0x001013b0(delims);
      if (have_read_stdin == '\0') {
code_r0x001018cc:
        return CONCAT88(*puVar8,(ulong)(uVar2 ^ 1)) & (undefined  [16])0xffffffffffffffff;
      }
      puVar8[-1] = 0x10194e;
      iVar3 = rpl_fclose(stdin);
      if (iVar3 != -1) goto code_r0x001018cc;
      puVar8[-1] = 0x10195c;
      puVar5 = (uint *)func_0x001013d0();
      uVar2 = *puVar5;
      puVar8[-1] = 0x101971;
      delim_end = (char *)func_0x001015d0(1,(ulong)uVar2,&UNK_001056da);
code_r0x00101971:
      *delim_end = '\r';
code_r0x0010187f:
      puVar6 = (undefined8 *)((long)puVar6 + 2);
    }
    else {
      if (cVar7 == '\\') {
        cVar7 = *(char *)((long)puVar6 + 1);
        if (cVar7 == 'f') {
          *delim_end = '\f';
        }
        else {
          if (cVar7 < 'g') {
            if (cVar7 == '0') {
              *delim_end = '\0';
            }
            else {
              if (cVar7 < '1') {
                if (cVar7 == '\0') {
                  puVar8[-1] = 0x1018f4;
                  param_2 = (undefined8 *)quotearg_n_style_colon(0,6,puVar11);
                  puVar8[-1] = 0x10190a;
                  uVar10 = func_0x00101450(0,&UNK_00105658,5);
                  puVar8[-1] = 0x10191e;
                  puVar6 = param_2;
                  delim_end = (char *)func_0x001015d0(1,0,uVar10);
                  cVar7 = extraout_DL;
                  goto code_r0x0010191e;
                }
code_r0x0010193b:
                *delim_end = cVar7;
              }
              else {
                if (cVar7 == '\\') {
                  *delim_end = '\\';
                }
                else {
                  if (cVar7 != 'b') goto code_r0x0010193b;
                  *delim_end = '\b';
                }
              }
            }
          }
          else {
            if (cVar7 == 'r') goto code_r0x00101971;
            if (cVar7 < 's') {
code_r0x0010191e:
              if (cVar7 != 'n') goto code_r0x0010193b;
              *delim_end = '\n';
            }
            else {
              if (cVar7 == 't') {
                *delim_end = '\t';
              }
              else {
                if (cVar7 != 'v') goto code_r0x0010193b;
                *delim_end = '\v';
              }
            }
          }
        }
        goto code_r0x0010187f;
      }
      puVar6 = (undefined8 *)((long)puVar6 + 1);
      *delim_end = cVar7;
    }
    delim_end = delim_end + 1;
  } while( true );
}

