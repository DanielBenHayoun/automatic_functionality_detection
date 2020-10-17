
/* WARNING: Could not reconcile some variable overlaps */

ulong rm(ulong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  undefined auVar18 [16];
  undefined *puVar19;
  undefined8 uStack232;
  undefined uStack224;
  char cStack223;
  undefined uStack222;
  long lStack216;
  undefined uStack208;
  bool bStack207;
  undefined uStack206;
  undefined uStack205;
  undefined auStack200 [152];
  long lStack48;
  
  bVar17 = 0;
  puVar14 = (undefined8 *)&UNK_0010a9f0;
  param_1 = param_1 & 0xffffffff;
  bVar1 = true;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101c90(6,&UNK_0010be81);
  func_0x00101a50(&UNK_0010a9a1,&UNK_0010a9ca);
  func_0x00101a30(&UNK_0010a9a1);
  atexit(close_stdin);
  uStack232._0_4_ = (uint)uStack232 & 0xffffff00;
  uStack232 = CONCAT44(4,(uint)uStack232);
  uStack224 = 0;
  uStack222 = 0;
  cStack223 = '\0';
  lStack216 = 0;
  uStack208 = 0;
  iVar3 = func_0x00101a00(0);
  bStack207 = iVar3 != 0;
  uStack206 = 0;
  uStack205 = 0;
  lVar13 = 0;
code_r0x00101e70:
  iVar3 = (int)param_1;
  puVar19 = &UNK_00101e8b;
  uVar4 = func_0x00101ac0(param_1 & 0xffffffff,param_2,&UNK_0010aa43,long_opts,0);
  lVar10 = optarg;
  if (uVar4 == 0xffffffff) {
    if (iVar3 <= optind) {
      if ((char)uStack232 == '\0') goto code_r0x00102308;
      goto code_r0x0010219a;
    }
    if ((cStack223 == '\0') || (!bVar1)) {
code_r0x001020da:
      uVar6 = program_name;
      puVar14 = param_2 + optind;
      if ((char)lVar13 == '\0') goto code_r0x0010214a;
      param_1 = (ulong)(uint)(iVar3 - optind);
      param_2 = (undefined8 *)(long)(iVar3 - optind);
      if (cStack223 != '\0') goto code_r0x0010226a;
      if (param_2 < (undefined8 *)0x4) goto code_r0x0010214a;
      uVar7 = func_0x00101d00(0,&UNK_0010aa95,&UNK_0010aa7a,param_2,5);
      goto code_r0x00102125;
    }
    lStack216 = get_root_dev_ino(dev_ino_buf_6971);
    if (lStack216 != 0) goto code_r0x001020da;
    uVar7 = quotearg_style(4,&UNK_0010b956);
    iVar3 = (int)uVar7;
    param_2 = (undefined8 *)func_0x00101a60(0,&UNK_0010b3b8,5);
    puVar9 = (uint *)func_0x001019a0();
    uVar4 = func_0x00101cd0(1,(ulong)*puVar9,param_2,uVar7);
code_r0x001022f1:
    if (uVar4 == 0xffffff7e) {
      usage(0);
      goto code_r0x00102303;
    }
code_r0x0010209f:
    lVar13 = 1;
    while ((int)lVar13 < iVar3) {
      puVar14 = (undefined8 *)param_2[lVar13];
      if ((*(byte *)puVar14 == 0x2d) && (*(byte *)((long)puVar14 + 1) != 0)) {
        iVar5 = func_0x00101a90(1,puVar14,auStack200);
        if (iVar5 == 0) {
          lVar13 = quotearg_style(4,puVar14);
          uVar7 = quotearg_n_style(1,3,puVar14);
          param_2 = (undefined8 *)*param_2;
          uVar8 = func_0x00101a60(0,&UNK_0010b390,5);
          func_0x00101d60(stderr,1,uVar8,param_2,uVar7,lVar13);
          break;
        }
      }
      lVar13 = lVar13 + 1;
    }
    do {
      usage(1);
code_r0x0010226a:
      uVar6 = program_name;
      uVar7 = func_0x00101d00(0,&UNK_0010b400,&UNK_0010b3d8,param_2,5);
code_r0x00102125:
      func_0x00101d60(stderr,1,uVar7,uVar6);
      cVar2 = yesno();
      param_1 = uVar6;
      if (cVar2 == '\0') {
code_r0x0010219a:
        uVar6 = 0;
      }
      else {
code_r0x0010214a:
        iVar3 = rm(puVar14,&uStack232);
        uVar6 = (ulong)(iVar3 == 4);
        if (2 < iVar3 - 2U) goto code_r0x00102166;
      }
      if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
code_r0x00102303:
      func_0x00101ab0();
code_r0x00102308:
      uVar7 = func_0x00101a60(0,&UNK_0010aa4b,5);
      func_0x00101cd0(0,0,uVar7);
    } while( true );
  }
  if (uVar4 != 0x69) {
    if ((int)uVar4 < 0x6a) {
      if (uVar4 == 0x49) {
code_r0x00101f88:
        uStack232 = CONCAT44(4,(uint)uStack232);
        uStack232 = uStack232 & 0xffffffffffffff00;
        lVar13 = 1;
      }
      else {
        if ((int)uVar4 < 0x4a) {
          if (uVar4 == 0xffffff7d) {
            version_etc(stdout,&UNK_0010a924,&UNK_0010a99d,Version,&UNK_0010aa17,&UNK_0010aa07,
                        &UNK_0010aa2f,&UNK_0010aa22,0,puVar19);
            func_0x00101d40();
            goto code_r0x00102000;
          }
          goto code_r0x001022f1;
        }
        if (uVar4 == 100) {
          uStack222 = 1;
        }
        else {
          if (uVar4 == 0x66) {
            uStack232 = CONCAT44(5,(uint)uStack232);
            uStack232 = CONCAT71(uStack232._1_7_,1);
            lVar13 = 0;
          }
          else {
            if (uVar4 != 0x52) goto code_r0x0010209f;
code_r0x001020b4:
            cStack223 = '\x01';
          }
        }
      }
      goto code_r0x00101e70;
    }
    if (uVar4 == 0x81) {
      uStack224 = 1;
      goto code_r0x00101e70;
    }
    if (0x81 < (int)uVar4) {
      bVar15 = uVar4 < 0x83;
      bVar16 = uVar4 == 0x83;
      if (bVar16) {
        if (optarg == 0) goto code_r0x00102185;
        iVar3 = func_0x00101bb0(optarg,&UNK_0010aa03);
        if (iVar3 != 0) {
          uVar7 = quotearg_style(4,lVar10);
          uVar8 = func_0x00101a60(0,&UNK_0010b360,5);
          func_0x00101cd0(1,0,uVar8,uVar7);
code_r0x00102365:
          uVar7 = func_0x00101a60(0,&UNK_0010b328,5);
          auVar18 = func_0x00101cd0(1,0,uVar7);
          uVar6 = uStack232;
          uStack232 = SUB168(auVar18,0);
          (*(code *)PTR___libc_start_main_0030efd8)
                    (main,uVar6,&uStack224,__libc_csu_init,__libc_csu_fini,SUB168(auVar18 >> 0x40,0)
                     ,&uStack232);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uStack208 = 1;
        bVar1 = true;
      }
      else {
        if ((int)uVar4 < 0x83) {
          lVar10 = 0x13;
          pbVar11 = (byte *)param_2[(long)optind + -1];
          puVar12 = puVar14;
          do {
            if (lVar10 == 0) break;
            lVar10 = lVar10 + -1;
            bVar15 = *pbVar11 < *(byte *)puVar12;
            bVar16 = *pbVar11 == *(byte *)puVar12;
            pbVar11 = pbVar11 + (ulong)bVar17 * -2 + 1;
            puVar12 = (undefined8 *)((long)puVar12 + (ulong)bVar17 * -2 + 1);
          } while (bVar16);
          if ((!bVar15 && !bVar16) != bVar15) goto code_r0x00102365;
          bVar1 = false;
        }
        else {
          if (uVar4 != 0x84) goto code_r0x0010209f;
          bStack207 = true;
        }
      }
      goto code_r0x00101e70;
    }
    if (uVar4 == 0x76) {
code_r0x00102000:
      uStack206 = 1;
      goto code_r0x00101e70;
    }
    if (uVar4 != 0x80) {
      if (uVar4 != 0x72) goto code_r0x0010209f;
      goto code_r0x001020b4;
    }
    if (optarg != 0) {
      lVar10 = __xargmatch_internal
                         (&UNK_0010a9e2,optarg,interactive_args,interactive_types,4,argmatch_die);
      iVar3 = *(int *)(interactive_types + lVar10 * 4);
      if (iVar3 == 1) goto code_r0x00101f88;
      if (iVar3 == 0) {
        uStack232 = CONCAT44(5,(uint)uStack232);
        lVar13 = 0;
      }
      else {
        if (iVar3 == 2) goto code_r0x00101f70;
      }
      goto code_r0x00101e70;
    }
  }
code_r0x00101f70:
  uStack232 = CONCAT44(3,(uint)uStack232);
  uStack232 = uStack232 & 0xffffffffffffff00;
  lVar13 = 0;
  goto code_r0x00101e70;
code_r0x00102166:
  func_0x00101b20(&UNK_0010aa64,&UNK_0010aa5b,0x173,&__PRETTY_FUNCTION___6977);
code_r0x00102185:
  bVar1 = true;
  goto code_r0x00101e70;
}