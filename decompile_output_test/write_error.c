
undefined  [16] write_error(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char extraout_DL;
  char cVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined auVar13 [16];
  undefined8 auStack72 [5];
  
  auStack72[4] = func_0x00101450(0,&UNK_001051e4,5);
  puVar4 = (uint *)func_0x001013d0();
  puVar9 = (undefined8 *)(ulong)*puVar4;
  uVar11 = 1;
  func_0x001015d0(1,puVar9,auStack72[4]);
  set_program_name(*puVar9);
  func_0x001015b0(6,&UNK_001052b6);
  func_0x00101440(&UNK_00105289,&UNK_001052b7);
  func_0x00101420(&UNK_00105289);
  atexit(close_stdout);
  have_read_stdin = '\0';
  serial_merge = '\0';
  puVar10 = auStack72 + 3;
  puVar12 = (undefined8 *)&UNK_001052b5;
  while( true ) {
    puVar10[-1] = 0x10173a;
    iVar1 = func_0x00101490(uVar11 & 0xffffffff,puVar9,&UNK_001052ee,longopts,0);
    if (iVar1 == -1) break;
    puVar7 = puVar10;
    if (iVar1 == 100) {
code_r0x001017b8:
      puVar10 = puVar7;
      puVar12 = optarg;
      if (*(char *)optarg == '\0') {
        puVar12 = (undefined8 *)&UNK_001052b2;
      }
    }
    else {
      if (iVar1 < 0x65) {
        if (iVar1 != -0x83) {
          if (iVar1 == -0x82) {
            puVar10[-1] = 0x101997;
            usage(0);
          }
code_r0x00101997:
          puVar10[-1] = 0x1019a1;
          auVar13 = usage(1);
          puVar10[-1] = SUB168(auVar13,0);
          *(undefined8 **)(puVar10 + -2) = puVar10 + -1;
          puVar10[-3] = 0x1019da;
          (*(code *)PTR___libc_start_main_00307fd0)
                    (main,*puVar10,puVar10 + 1,__libc_csu_init,__libc_csu_fini,
                     SUB168(auVar13 >> 0x40,0));
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        puVar7 = puVar10 + -2;
        puVar10[-2] = 0;
        puVar10[-3] = 0x1017aa;
        version_etc(stdout,&UNK_00105209,&UNK_00105285,Version,&UNK_001052df,&UNK_001052cf);
        puVar10[-3] = 0x1017b1;
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
  iVar1 = (int)(uVar11 & 0xffffffff) - optind;
  if (iVar1 == 0) {
    iVar1 = 1;
    puVar9[optind] = 0x1056da;
  }
  puVar10[-1] = 0x1017ff;
  delim_end = (char *)xstrdup(puVar12);
  puVar7 = puVar12;
  delims = delim_end;
  do {
    cVar8 = *(char *)puVar7;
    if (cVar8 == '\0') {
      pcVar5 = paste_serial;
      if (serial_merge == '\0') {
        pcVar5 = paste_parallel;
      }
      puVar10[-1] = 0x1018b5;
      uVar2 = (*pcVar5)((long)iVar1,puVar9 + (long)optind,(long)optind);
      puVar9 = (undefined8 *)(ulong)uVar2;
      puVar10[-1] = 0x1018c3;
      func_0x001013b0(delims);
      if (have_read_stdin == '\0') {
code_r0x001018cc:
        return CONCAT88(*puVar10,(ulong)(uVar2 ^ 1)) & (undefined  [16])0xffffffffffffffff;
      }
      puVar10[-1] = 0x10194e;
      iVar3 = rpl_fclose(stdin);
      if (iVar3 != -1) goto code_r0x001018cc;
      puVar10[-1] = 0x10195c;
      puVar4 = (uint *)func_0x001013d0();
      uVar2 = *puVar4;
      puVar10[-1] = 0x101971;
      delim_end = (char *)func_0x001015d0(1,(ulong)uVar2,&UNK_001056da);
code_r0x00101971:
      *delim_end = '\r';
code_r0x0010187f:
      puVar7 = (undefined8 *)((long)puVar7 + 2);
    }
    else {
      if (cVar8 == '\\') {
        cVar8 = *(char *)((long)puVar7 + 1);
        if (cVar8 == 'f') {
          *delim_end = '\f';
        }
        else {
          if (cVar8 < 'g') {
            if (cVar8 == '0') {
              *delim_end = '\0';
            }
            else {
              if (cVar8 < '1') {
                if (cVar8 == '\0') {
                  puVar10[-1] = 0x1018f4;
                  puVar9 = (undefined8 *)quotearg_n_style_colon(0,6,puVar12);
                  puVar10[-1] = 0x10190a;
                  uVar6 = func_0x00101450(0,&UNK_00105658,5);
                  puVar10[-1] = 0x10191e;
                  puVar7 = puVar9;
                  delim_end = (char *)func_0x001015d0(1,0,uVar6);
                  cVar8 = extraout_DL;
                  goto code_r0x0010191e;
                }
code_r0x0010193b:
                *delim_end = cVar8;
              }
              else {
                if (cVar8 == '\\') {
                  *delim_end = '\\';
                }
                else {
                  if (cVar8 != 'b') goto code_r0x0010193b;
                  *delim_end = '\b';
                }
              }
            }
          }
          else {
            if (cVar8 == 'r') goto code_r0x00101971;
            if (cVar8 < 's') {
code_r0x0010191e:
              if (cVar8 != 'n') goto code_r0x0010193b;
              *delim_end = '\n';
            }
            else {
              if (cVar8 == 't') {
                *delim_end = '\t';
              }
              else {
                if (cVar8 != 'v') goto code_r0x0010193b;
                *delim_end = '\v';
              }
            }
          }
        }
        goto code_r0x0010187f;
      }
      puVar7 = (undefined8 *)((long)puVar7 + 1);
      *delim_end = cVar8;
    }
    delim_end = delim_end + 1;
  } while( true );
}

