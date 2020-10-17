
/* WARNING: Could not reconcile some variable overlaps */

undefined8 base32(uint param_1,undefined8 ****param_2)

{
  undefined8 ***pppuVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char cVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined8 ****ppppuVar16;
  uint uVar17;
  char *unaff_R14;
  long in_FS_OFFSET;
  undefined auVar18 [16];
  undefined8 uStack168;
  undefined8 ****ppppuStack160;
  undefined8 ****ppppuStack152;
  undefined8 ****ppppuStack144;
  undefined8 ****ppppuStack136;
  undefined8 ****ppppuStack128;
  undefined8 uStack120;
  undefined8 ****ppppuStack112;
  undefined8 ****ppppuStack104;
  undefined8 ***pppuStack96;
  undefined8 ****ppppuStack88;
  int aiStack76 [3];
  ulong uStack64;
  
  ppppuVar16 = (undefined8 ****)(ulong)param_1;
  ppppuVar12 = (undefined8 ****)0x4c;
  cVar9 = '\0';
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x00101720(6,&UNK_001068e1);
  func_0x00101560(&UNK_00105d43,&UNK_00105d6c);
  func_0x00101540(&UNK_00105d43);
  atexit(close_stdout);
  uStack120 = (undefined8 ****)((ulong)uStack120 & 0xffffffffffffff00);
  while( true ) {
    puVar8 = long_options;
    iVar3 = func_0x001015b0(ppppuVar16,param_2,&UNK_00105da6,long_options,0);
    if (iVar3 == -1) break;
    if (iVar3 == 100) {
      cVar9 = '\x01';
    }
    else {
      if (iVar3 < 0x65) {
        if (iVar3 != -0x83) goto code_r0x00101f6e;
        version_etc(stdout,&UNK_00105ca4,&UNK_00105d3f,Version,&UNK_00105d96,0);
        func_0x00101790(0);
        break;
      }
      if (iVar3 == 0x69) {
        uStack120 = (undefined8 ****)CONCAT71(uStack120._1_7_,1);
      }
      else {
        if (iVar3 != 0x77) {
          do {
            usage(1);
code_r0x00101fb7:
            iVar3 = func_0x001015e0(puVar8,10);
            if (iVar3 == -1) {
              uVar7 = func_0x00101570(0,&UNK_00105dca,5);
              puVar5 = (uint *)func_0x001014f0();
              auVar18 = func_0x00101750(1,(ulong)*puVar5,uVar7);
              uVar7 = uStack168;
              uStack168 = SUB168(auVar18,0);
              (*(code *)PTR___libc_start_main_00308fd8)
                        (main,uVar7,&ppppuStack160,__libc_csu_init,__libc_csu_fini,
                         SUB168(auVar18 >> 0x40,0),&uStack168);
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
code_r0x00101c97:
            uVar4 = *(uint *)param_2;
            ppppuVar13 = ppppuVar12;
code_r0x00101c9b:
            if ((uVar4 & 0x20) != 0) {
              ppppuVar10 = (undefined8 ****)func_0x00101570(0,&UNK_00105dbf,5);
              puVar5 = (uint *)func_0x001014f0();
              func_0x00101750(1,(ulong)*puVar5,ppppuVar10);
              do {
                ppppuVar12 = (undefined8 ****)(((ulong)((long)ppppuVar13 + 4U) / 5) * 8);
                base32_encode(ppppuVar16,ppppuVar13,ppppuStack152,ppppuVar12);
                if (ppppuStack160 == (undefined8 ****)0x0) {
                  ppppuVar14 = (undefined8 ****)func_0x00101700(ppppuStack152,1,ppppuVar12,stdout);
                  if (ppppuVar14 <= ppppuVar12 &&
                      (undefined8 ****)((long)ppppuVar12 - (long)ppppuVar14) != (undefined8 ****)0x0
                     ) {
                    ppppuVar11 = (undefined8 ****)func_0x00101570(0,&UNK_00105dca,5);
                    puVar5 = (uint *)func_0x001014f0();
                    func_0x00101750(1,(ulong)*puVar5,ppppuVar11);
                    ppppuVar14 = ppppuVar12;
                    goto code_r0x00101e13;
                  }
                }
                else {
                  ppppuVar11 = (undefined8 ****)0x0;
                  ppppuVar14 = ppppuStack144;
                  ppppuVar15 = param_2;
                  if (ppppuVar12 != (undefined8 ****)0x0) {
                    do {
                      uStack120 = ppppuVar13;
                      ppppuStack128 = ppppuVar16;
                      ppppuStack136 = ppppuVar15;
                      param_2 = (undefined8 ****)((long)ppppuStack160 - (long)ppppuVar10);
                      if ((undefined8 ****)((long)ppppuVar12 - (long)ppppuVar11) <
                          (undefined8 ****)((long)ppppuStack160 - (long)ppppuVar10)) {
                        param_2 = (undefined8 ****)((long)ppppuVar12 - (long)ppppuVar11);
                      }
                      if (param_2 == (undefined8 ****)0x0) {
                        pppuVar1 = ppppuVar14[5];
                        ppppuVar13 = ppppuVar12;
                        ppppuVar16 = ppppuVar10;
                        if (pppuVar1 < ppppuVar14[6]) {
                          ppppuVar14[5] = (undefined8 ***)((long)pppuVar1 + 1);
                          *(undefined *)pppuVar1 = 10;
                        }
                        else {
code_r0x00101e13:
                          iVar3 = func_0x001015e0(ppppuVar14,10);
                          if (iVar3 == -1) {
                            uVar7 = func_0x00101570(0,&UNK_00105dca,5);
                            puVar5 = (uint *)func_0x001014f0();
                            func_0x00101750(1,(ulong)*puVar5,uVar7);
                            ppppuVar15 = param_2;
                            goto code_r0x00101e55;
                          }
                        }
                        ppppuVar10 = (undefined8 ****)0x0;
                        ppppuVar12 = ppppuVar13;
                      }
                      else {
                        puVar8 = (undefined1 *)stdout;
                        ppppuVar16 = (undefined8 ****)
                                     func_0x00101700((long)ppppuStack152 + (long)ppppuVar11,1,
                                                     param_2);
                        if (ppppuVar16 < param_2) goto code_r0x00101f42;
                        ppppuVar10 = (undefined8 ****)((long)ppppuVar10 + (long)param_2);
                        ppppuVar11 = (undefined8 ****)((long)ppppuVar11 + (long)param_2);
                      }
                      ppppuVar13 = uStack120;
                      param_2 = ppppuStack136;
                      ppppuVar16 = ppppuStack128;
                      ppppuVar15 = ppppuStack136;
                    } while (ppppuVar11 < ppppuVar12);
                  }
                }
                uVar4 = *(uint *)param_2;
                if (((uVar4 & 0x30) != 0) || (ppppuVar13 != (undefined8 ****)0x7800))
                goto code_r0x00101c65;
code_r0x00101c26:
                ppppuVar13 = (undefined8 ****)0x0;
                do {
                  lVar6 = func_0x00101530((long)ppppuVar16 + (long)ppppuVar13,1,
                                          unaff_R14 + -(long)ppppuVar13,param_2);
                  ppppuVar13 = (undefined8 ****)((long)ppppuVar13 + lVar6);
                  uVar4 = *(uint *)param_2;
                  if ((uVar4 & 0x30) != 0) {
                    if (ppppuVar13 == (undefined8 ****)0x0) goto code_r0x00101c65;
                    break;
                  }
                } while (ppppuVar13 < (undefined8 ****)0x7800);
              } while( true );
            }
code_r0x00101bc2:
            iVar3 = rpl_fclose(param_2);
            ppppuVar15 = param_2;
            if (iVar3 == -1) {
code_r0x00101e55:
              uVar4 = func_0x00101690(pppuStack96,&UNK_001063aa);
              ppppuVar13 = (undefined8 ****)(ulong)uVar4;
              puVar5 = (uint *)func_0x001014f0();
              if (uVar4 == 0) {
                uVar7 = func_0x00101570(0,&UNK_00105de4,5);
                func_0x00101750(1,(ulong)*puVar5,uVar7);
              }
              puVar8 = (undefined1 *)quotearg_n_style_colon(0,3,pppuStack96);
              func_0x00101750(1,(ulong)*puVar5,&UNK_00106364);
code_r0x00101ec1:
              uVar7 = func_0x00101570(0,&UNK_00105dd6,5);
              func_0x00101750(1,0,uVar7);
code_r0x00101ee5:
              uVar7 = func_0x00101570(0,&UNK_00105dca,5);
              puVar5 = (uint *)func_0x001014f0();
              func_0x00101750(1,(ulong)*puVar5,uVar7);
              ppppuVar12 = ppppuVar13;
              ppppuVar14 = ppppuVar15;
code_r0x00101f11:
              uVar7 = func_0x00101570(0,&UNK_00105dbf,5);
              puVar5 = (uint *)func_0x001014f0();
              func_0x00101750(1,(ulong)*puVar5,uVar7);
              param_2 = ppppuVar14;
              ppppuVar10 = ppppuVar16;
            }
            else {
              puVar8 = (undefined1 *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
              ppppuVar12 = ppppuVar13;
              ppppuVar10 = ppppuVar16;
              if ((undefined8 ****)puVar8 == (undefined8 ****)0x0) {
                return 0;
              }
            }
            func_0x001015a0();
code_r0x00101f42:
            uVar7 = func_0x00101570(0,&UNK_00105dca,5);
            puVar5 = (uint *)func_0x001014f0();
            iVar3 = func_0x00101750(1,(ulong)*puVar5,uVar7);
            ppppuVar16 = ppppuVar10;
code_r0x00101f6e:
            if (iVar3 == -0x82) {
              lVar6 = usage(0);
code_r0x00101f7c:
              puVar8 = (undefined1 *)quote(param_2[lVar6 + 1]);
              uVar7 = func_0x00101570(0,&UNK_00105dab,5);
              func_0x00101750(0,0,uVar7);
            }
          } while( true );
        }
        func_0x00101570(0,&UNK_00105d84,5);
        ppppuVar12 = (undefined8 ****)xdectoumax(optarg,0,0xffffffffffffffff,&UNK_001068e1);
      }
    }
  }
  lVar6 = (long)optind;
  if (1 < (int)(param_1 - optind)) goto code_r0x00101f7c;
  if (optind < (int)param_1) {
    pppuStack96 = param_2[lVar6];
    iVar3 = func_0x00101690(pppuStack96,&UNK_001063aa);
    param_2 = stdin;
    if ((iVar3 == 0) ||
       (param_2 = (undefined8 ****)func_0x00101770(pppuStack96,&UNK_00105dbc),
       param_2 != (undefined8 ****)0x0)) goto code_r0x001019e2;
    uVar7 = quotearg_n_style_colon(0,3,pppuStack96);
    cVar9 = (char)uVar7;
    puVar5 = (uint *)func_0x001014f0();
    func_0x00101750(1,(ulong)*puVar5,&UNK_00106364,uVar7);
  }
  pppuStack96 = (undefined8 ***)&UNK_001063aa;
  param_2 = stdin;
code_r0x001019e2:
  fadvise(param_2,2);
  if (cVar9 == '\0') {
    ppppuStack144 = stdout;
    ppppuVar10 = (undefined8 ****)0x0;
    ppppuVar16 = (undefined8 ****)xmalloc(0x7800);
    unaff_R14 = (char *)0x7800;
    ppppuStack152 = (undefined8 ****)xmalloc(0xc000);
    ppppuStack160 = ppppuVar12;
    goto code_r0x00101c26;
  }
  ppppuStack112 = stdout;
  ppppuVar13 = (undefined8 ****)xmalloc(0x2000);
  ppppuStack104 = (undefined8 ****)xmalloc(0x1400);
  ppppuStack144 = (undefined8 ****)aiStack76;
  base32_decode_ctx_init(ppppuStack144);
  ppppuStack136 = &ppppuStack88;
  ppppuStack160 = ppppuVar13;
  ppppuStack152 = param_2;
code_r0x00101a48:
  ppppuVar10 = (undefined8 ****)0x0;
  ppppuVar12 = ppppuVar13;
  do {
    puVar8 = (undefined1 *)ppppuStack152;
    ppppuVar14 = (undefined8 ****)
                 func_0x00101530((long)ppppuStack160 + (long)ppppuVar10,1,0x2000 - (long)ppppuVar10,
                                 ppppuStack152);
    ppppuStack88 = ppppuVar14;
    if ((char)uStack120 != '\0') {
      ppppuVar16 = (undefined8 ****)0x0;
      while (ppppuVar14 != (undefined8 ****)0x0) {
        while( true ) {
          if (ppppuVar14 <= ppppuVar16) goto code_r0x00101a50;
          unaff_R14 = (char *)((long)ppppuStack160 + (long)ppppuVar10 + (long)ppppuVar16);
          cVar9 = *unaff_R14;
          ppppuVar12 = (undefined8 ****)(ulong)(uint)(int)cVar9;
          cVar2 = isbase32();
          if ((cVar9 != '=') && (cVar2 == '\0')) break;
          ppppuVar16 = (undefined8 ****)((long)ppppuVar16 + 1);
          if (ppppuVar14 == (undefined8 ****)0x0) goto code_r0x00101a50;
        }
        ppppuVar14 = (undefined8 ****)((long)ppppuVar14 - 1);
        ppppuStack88 = ppppuVar14;
        func_0x00101740(unaff_R14,(long)ppppuStack160 + (long)ppppuVar10 + (long)ppppuVar16 + 1,
                        (undefined8 ****)((long)ppppuVar14 - (long)ppppuVar16));
      }
    }
code_r0x00101a50:
    ppppuVar15 = ppppuStack104;
    ppppuVar11 = ppppuStack112;
    param_2 = ppppuStack152;
    ppppuVar13 = ppppuStack160;
    ppppuVar10 = (undefined8 ****)((long)ppppuVar10 + (long)ppppuVar14);
    uVar4 = *(uint *)ppppuStack152;
    if ((uVar4 & 0x20) != 0) goto code_r0x00101f11;
  } while ((ppppuVar10 < (undefined8 ****)0x2000) && ((uVar4 & 0x10) == 0));
  unaff_R14 = (char *)0x0;
  ppppuStack128 = ppppuVar10;
  do {
    uVar17 = (uint)unaff_R14;
    ppppuVar12 = ppppuStack128;
    if ((uVar4 & 0x10) == 0) {
      if (uVar17 != 0) goto code_r0x00101a48;
    }
    else {
      if (1 < uVar17) goto code_r0x00101bc2;
      if (uVar17 == 1) {
        if (aiStack76[0] == 0) goto code_r0x00101bc2;
        ppppuVar12 = (undefined8 ****)0x0;
      }
    }
    ppppuStack88 = (undefined8 ****)0x1400;
    uVar4 = base32_decode_ctx(ppppuStack144,ppppuVar13,ppppuVar12,ppppuVar15,ppppuStack136);
    ppppuVar16 = (undefined8 ****)(ulong)uVar4;
    puVar8 = (undefined1 *)ppppuVar11;
    ppppuVar12 = (undefined8 ****)func_0x00101700(ppppuVar15,1,ppppuStack88,ppppuVar11);
    if (ppppuVar12 < ppppuStack88) goto code_r0x00101ee5;
    if ((char)uVar4 == '\0') goto code_r0x00101ec1;
    uVar4 = *(uint *)param_2;
    unaff_R14 = (char *)(ulong)(uVar17 + 1);
  } while( true );
code_r0x00101c65:
  ppppuVar13 = ppppuStack160;
  if ((ppppuVar10 == (undefined8 ****)0x0) || (ppppuStack160 == (undefined8 ****)0x0))
  goto code_r0x00101c9b;
  pppuVar1 = ppppuStack144[5];
  puVar8 = (undefined1 *)ppppuStack144;
  ppppuVar12 = ppppuStack160;
  if (ppppuStack144[6] <= pppuVar1) goto code_r0x00101fb7;
  ppppuStack144[5] = (undefined8 ***)((long)pppuVar1 + 1);
  *(undefined *)pppuVar1 = 10;
  goto code_r0x00101c97;
}