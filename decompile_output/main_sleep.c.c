
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(uint param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  double dVar11;
  undefined auVar12 [16];
  undefined8 uStack104;
  double adStack96 [2];
  double dStack80;
  char *pcStack72;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x001014a0(6,&UNK_00105621);
  func_0x00101340(&UNK_00104d64,&UNK_00104d8d);
  func_0x00101310(&UNK_00104d64);
  atexit(close_stdout);
  parse_gnu_standard_options_only
            ((ulong)param_1,param_2,&UNK_00104ce4,&UNK_00104d60,Version,1,usage,&UNK_00104db1,
             &UNK_00104da5,0);
  if (param_1 == 1) goto code_r0x001017b9;
  if ((int)optind < (int)param_1) {
    lVar9 = (long)(int)optind;
    uVar3 = ~optind;
    bVar1 = true;
    puVar10 = param_2 + lVar9;
    adStack96[0] = 0.00000000;
    do {
      cVar2 = xstrtod(*puVar10,&pcStack72,&dStack80,cl_strtod);
      if (((cVar2 == '\0') && (piVar5 = (int *)func_0x001012c0(), *piVar5 != 0x22)) ||
         (dStack80 < 0.00000000)) {
code_r0x0010166a:
        uVar7 = quote(*puVar10);
        uVar6 = func_0x00101350(0,&UNK_00104dce,5);
        bVar1 = false;
        func_0x001014c0(0,0,uVar6,uVar7);
        dVar11 = dStack80;
      }
      else {
        cVar2 = *pcStack72;
        dVar11 = dStack80;
        if (cVar2 != '\0') {
          if (pcStack72[1] != '\0') goto code_r0x0010166a;
          if (cVar2 == 'h') {
            dVar11 = dStack80 * _UNK_00105070;
          }
          else {
            if (cVar2 < 'i') {
              if (cVar2 != 'd') goto code_r0x0010166a;
              dVar11 = dStack80 * _UNK_00105078;
            }
            else {
              if (cVar2 == 'm') {
                dVar11 = dStack80 * _UNK_00105068;
              }
              else {
                if (cVar2 != 's') goto code_r0x0010166a;
              }
            }
          }
        }
      }
      adStack96[0] = dVar11 + adStack96[0];
      puVar10 = puVar10 + 1;
    } while (puVar10 != param_2 + (ulong)(uVar3 + param_1) + lVar9 + 1);
    if (bVar1) goto code_r0x00101715;
    usage(1);
code_r0x00101788:
    func_0x00101380();
  }
  else {
    adStack96[0] = 0.00000000;
code_r0x00101715:
    iVar4 = xnanosleep(adStack96[0]);
    if (iVar4 == 0) {
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
      goto code_r0x00101788;
    }
  }
  uVar7 = func_0x00101350(0,&UNK_00104de7,5);
  puVar8 = (uint *)func_0x001012c0();
  func_0x001014c0(1,(ulong)*puVar8,uVar7);
code_r0x001017b9:
  uVar7 = func_0x00101350(0,&UNK_00104dbe,5);
  func_0x001014c0(0,0,uVar7);
  auVar12 = usage(1);
  uVar7 = uStack104;
  uStack104 = SUB168(auVar12,0);
  (*(code *)PTR___libc_start_main_00306fe0)
            (main,uVar7,adStack96,__libc_csu_init,__libc_csu_fini,SUB168(auVar12 >> 0x40,0),
             &uStack104);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

