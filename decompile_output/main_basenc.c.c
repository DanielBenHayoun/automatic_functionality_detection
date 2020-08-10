
undefined8 main(ulong param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  char *pcVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  char *pcVar19;
  char *pcVar20;
  char *unaff_R15;
  long in_FS_OFFSET;
  undefined auVar21 [16];
  undefined8 auStack208 [3];
  undefined auStack184 [32];
  undefined uStack152;
  undefined8 uStack64;
  
  pcVar20 = (char *)0x0;
  pcVar19 = (char *)0x4c;
  puVar13 = (uint *)(param_1 & 0xffffffff);
  lVar18 = 0;
  puVar14 = (undefined8 *)auStack184;
  uStack64 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  func_0x001017e0(6,&UNK_001085c1);
  func_0x00101620(&UNK_00107401,&UNK_0010742a);
  func_0x00101600(&UNK_00107401);
  atexit(close_stdout);
  uStack152 = 0;
code_r0x0010193b:
  do {
    puVar14[-1] = 0x101956;
    uVar5 = func_0x00101670((ulong)puVar13 & 0xffffffff,param_2,&UNK_00107471,long_options,0);
    if (uVar5 == 0xffffffff) {
      iVar6 = (int)pcVar20;
      pcVar20 = (char *)(ulong)(iVar6 - 0x80);
      switch(iVar6) {
      case 0x80:
        base_length = base64_length_wrapper;
        isbase = isbase64;
        base_encode = base64_encode;
        base_decode_ctx_init = base64_decode_ctx_init_wrapper;
        base_decode_ctx = base64_decode_ctx_wrapper;
        break;
      case 0x81:
        base_length = base64_length_wrapper;
        isbase = isbase64url;
        base_encode = base64url_encode;
        base_decode_ctx_init = base64url_decode_ctx_init_wrapper;
        base_decode_ctx = base64url_decode_ctx_wrapper;
        break;
      case 0x82:
        base_length = base32_length_wrapper;
        isbase = isbase32;
        base_encode = base32_encode;
        base_decode_ctx_init = base32_decode_ctx_init_wrapper;
        base_decode_ctx = base32_decode_ctx_wrapper;
        break;
      case 0x83:
        base_length = base32_length_wrapper;
        isbase = isbase32hex;
        base_encode = base32hex_encode;
        base_decode_ctx_init = base32hex_decode_ctx_init_wrapper;
        base_decode_ctx = base32hex_decode_ctx_wrapper;
        break;
      case 0x84:
        base_length = base16_length;
        isbase = isbase16;
        base_encode = base16_encode;
        base_decode_ctx_init = base16_decode_ctx_init;
        base_decode_ctx = base16_decode_ctx;
        break;
      case 0x85:
        base_length = base2_length;
        isbase = isbase2;
        base_encode = base2msbf_encode;
        base_decode_ctx_init = base2_decode_ctx_init;
        base_decode_ctx = base2msbf_decode_ctx;
        break;
      case 0x86:
        base_length = base2_length;
        isbase = isbase2;
        base_encode = base2lsbf_encode;
        base_decode_ctx_init = base2_decode_ctx_init;
        base_decode_ctx = base2lsbf_decode_ctx;
        break;
      case 0x87:
        base_length = z85_length;
        isbase = isz85;
        base_encode = z85_encode;
        base_decode_ctx_init = z85_decode_ctx_init;
        base_decode_ctx = z85_decode_ctx;
        break;
      default:
        goto code_r0x001022e4;
      }
      lVar8 = (long)optind;
      if (1 < (int)puVar13 - optind) goto code_r0x00102367;
      if (optind < (int)puVar13) {
        uVar7 = param_2[lVar8];
        puVar14[7] = uVar7;
        puVar14[-1] = 0x101ae5;
        iVar6 = func_0x00101750(uVar7,&UNK_0010808a);
        puVar17 = stdin;
        if (iVar6 != 0) {
          puVar14[-1] = 0x101afe;
          puVar13 = (uint *)func_0x00101830(puVar14[7],&UNK_0010749d);
          puVar17 = puVar13;
          if (puVar13 == (uint *)0x0) goto code_r0x00102336;
        }
      }
      else {
        puVar14[7] = 0x10808a;
        puVar17 = stdin;
      }
      puVar14[-1] = 0x101b17;
      fadvise(puVar17,2);
      lVar8 = stdout;
      if ((char)lVar18 == '\0') {
        puVar13 = (uint *)0x0;
        puVar14[-1] = 0x101f9e;
        uVar7 = xmalloc(0x7800);
        puVar14[2] = uVar7;
        puVar14[-1] = 0x101fae;
        iVar6 = (*base_length)(0x7800);
        puVar14[-1] = 0x101fb6;
        uVar7 = xmalloc((long)iVar6);
        *(char **)(puVar14 + 3) = pcVar19;
        puVar14[1] = uVar7;
        goto code_r0x00101fc0;
      }
      puVar14[5] = stdout;
      puVar14[-1] = 0x101b37;
      iVar6 = (*base_length)(0x1400);
      puVar14[-1] = 0x101b3f;
      lVar18 = xmalloc((long)iVar6);
      puVar14[-1] = 0x101b4c;
      uVar7 = xmalloc(0x1400);
      puVar14[6] = uVar7;
      puVar14[0xc] = 0;
      *(undefined8 **)(puVar14 + 2) = puVar14 + 10;
      puVar14[-1] = 0x101b6d;
      (*base_decode_ctx_init)(puVar14 + 10);
      *(undefined8 **)(puVar14 + 3) = puVar14 + 9;
code_r0x00101b80:
      pcVar12 = (char *)0x0;
      *(uint **)(puVar14 + 1) = puVar17;
      do {
        puVar14[-1] = 0x101bd1;
        iVar6 = (*base_length)(0x1400);
        puVar14[-1] = 0x101bea;
        pcVar19 = (char *)func_0x001015f0(pcVar12 + lVar18,1,(long)iVar6 - (long)pcVar12,puVar14[1])
        ;
        *(char **)(puVar14 + 9) = pcVar19;
        if (*(char *)(puVar14 + 4) != '\0') {
          pcVar20 = (char *)0x0;
          while (pcVar19 != (char *)0x0) {
            while( true ) {
              if (pcVar19 <= pcVar20) goto code_r0x00101b90;
              puVar17 = (uint *)(pcVar20 + (long)pcVar12);
              unaff_R15 = (char *)(lVar18 + (long)puVar17);
              cVar4 = *unaff_R15;
              puVar14[-1] = 0x101c1c;
              cVar4 = (*isbase)((ulong)(uint)(int)cVar4);
              pcVar19 = (char *)puVar14[9];
              if ((cVar4 != '\0') || (*unaff_R15 == '=')) break;
              pcVar19 = pcVar19 + -1;
              *(char **)(puVar14 + 9) = pcVar19;
              puVar14[-1] = 0x101c4f;
              func_0x00101800(unaff_R15,lVar18 + 1 + (long)puVar17,pcVar19 + -(long)pcVar20);
              if (pcVar19 == (char *)0x0) goto code_r0x00101b90;
            }
            pcVar20 = pcVar20 + 1;
          }
        }
code_r0x00101b90:
        pcVar12 = pcVar19 + (long)pcVar12;
        if ((*(byte *)puVar14[1] & 0x20) != 0) goto code_r0x001022b1;
        puVar14[-1] = 0x101bac;
        iVar6 = (*base_length)(0x1400);
        if ((char *)(long)iVar6 <= pcVar12) {
          puVar17 = (uint *)puVar14[1];
          uVar5 = *puVar17;
          goto code_r0x00101e88;
        }
        uVar5 = *(uint *)puVar14[1];
      } while ((uVar5 & 0x10) == 0);
      puVar17 = (uint *)puVar14[1];
code_r0x00101e88:
      *(char **)(puVar14 + 1) = pcVar12;
      pcVar19 = (char *)puVar14[6];
      uVar11 = 0;
      unaff_R15 = (char *)puVar14[5];
      do {
        if ((uVar5 & 0x10) == 0) {
          if (uVar11 != 0) goto code_r0x00101b80;
code_r0x00101ea8:
          uVar7 = puVar14[1];
          puVar14[9] = 0x1400;
        }
        else {
          if (1 < uVar11) {
code_r0x00101f3a:
            puVar14[-1] = 0x101f42;
            iVar6 = rpl_fclose(puVar17);
            if (iVar6 == -1) goto code_r0x001021d1;
            if (puVar14[0xf] == *(long *)(in_FS_OFFSET + 0x28)) {
              return 0;
            }
            do {
              puVar14[-1] = 0x1023a7;
              func_0x00101660();
code_r0x001023a7:
              puVar14[-1] = 0x1023b4;
              iVar6 = func_0x001016a0(lVar18,10);
              if (iVar6 == -1) {
                puVar14[-1] = 0x1023d0;
                uVar7 = func_0x00101630(0,&UNK_001074ab,5);
                puVar14[-1] = 0x1023d8;
                puVar13 = (uint *)func_0x001015b0();
                uVar5 = *puVar13;
                puVar14[-1] = 0x1023e9;
                auVar21 = func_0x00101810(1,(ulong)uVar5,uVar7);
                uVar7 = *puVar14;
                uVar16 = (ulong)(puVar14 + 1) & 0xfffffffffffffff0;
                *(undefined8 *)(uVar16 - 8) = SUB168(auVar21,0);
                *(ulong *)(uVar16 - 0x10) = uVar16 - 8;
                *(undefined8 *)(uVar16 - 0x18) = 0x10241a;
                (*(code *)PTR___libc_start_main_0030afd8)
                          (main,uVar7,puVar14 + 1,__libc_csu_init,__libc_csu_fini,
                           SUB168(auVar21 >> 0x40,0));
                do {
                    /* WARNING: Do nothing block with infinite loop */
                } while( true );
              }
code_r0x00102230:
              uVar5 = *puVar17;
code_r0x001020d3:
              if ((uVar5 & 0x20) == 0) goto code_r0x00101f3a;
              puVar14[-1] = 0x1020ee;
              lVar8 = func_0x00101630(0,&UNK_001074a0,5);
              puVar14[-1] = 0x1020f6;
              puVar13 = (uint *)func_0x001015b0();
              uVar5 = *puVar13;
              puVar14[-1] = 0x102107;
              func_0x00101810(1,(ulong)uVar5,lVar8);
              puVar13 = puVar17;
code_r0x00102110:
              puVar14[-1] = 0x10212d;
              pcVar12 = (char *)func_0x001017c0(pcVar20 + puVar14[1],1,pcVar19,stdout);
              if (pcVar19 <= pcVar12) {
                puVar13 = (uint *)((long)puVar13 + (long)pcVar19);
                pcVar20 = pcVar20 + (long)pcVar19;
                while (pcVar20 < unaff_R15) {
code_r0x00102060:
                  pcVar19 = (char *)(lVar8 - (long)puVar13);
                  if (unaff_R15 + -(long)pcVar20 < (char *)(lVar8 - (long)puVar13)) {
                    pcVar19 = unaff_R15 + -(long)pcVar20;
                  }
                  if (pcVar19 != (char *)0x0) goto code_r0x00102110;
                  puVar2 = *(undefined **)(lVar18 + 0x28);
                  if (*(undefined **)(lVar18 + 0x30) <= puVar2) goto code_r0x0010218f;
                  *(undefined **)(lVar18 + 0x28) = puVar2 + 1;
                  *puVar2 = 10;
code_r0x00102098:
                  puVar13 = (uint *)0x0;
                }
                unaff_R15 = (char *)puVar14[5];
                puVar17 = (uint *)puVar14[4];
                lVar8 = lVar18;
code_r0x001020ac:
                do {
                  uVar5 = *puVar17;
                  lVar18 = lVar8;
                  if (((uVar5 & 0x30) != 0) || (unaff_R15 != (char *)0x7800)) {
code_r0x001020c0:
                    pcVar19 = (char *)puVar14[3];
                    if ((pcVar19 == (char *)0x0) || (puVar13 == (uint *)0x0)) goto code_r0x001020d3;
                    goto code_r0x00102214;
                  }
code_r0x00101fc0:
                  unaff_R15 = (char *)0x0;
                  lVar1 = puVar14[2];
                  do {
                    puVar14[-1] = 0x101ff3;
                    lVar18 = func_0x001015f0(unaff_R15 + lVar1,1,0x7800 - (long)unaff_R15,puVar17);
                    pcVar3 = base_encode;
                    unaff_R15 = unaff_R15 + lVar18;
                    uVar5 = *puVar17;
                    lVar18 = lVar8;
                    if ((uVar5 & 0x30) != 0) {
                      if (unaff_R15 == (char *)0x0) goto code_r0x001020c0;
                      break;
                    }
                  } while (unaff_R15 < (char *)0x7800);
                  puVar14[-1] = 0x102016;
                  iVar6 = (*base_length)((ulong)unaff_R15 & 0xffffffff);
                  puVar14[-1] = 0x102029;
                  (*pcVar3)(puVar14[2],unaff_R15,puVar14[1],(long)iVar6);
                  puVar14[-1] = 0x102032;
                  iVar6 = (*base_length)();
                  pcVar19 = (char *)(long)iVar6;
                  if (puVar14[3] != 0) {
                    pcVar20 = (char *)0x0;
                    if (pcVar19 != (char *)0x0) {
                      *(uint **)(puVar14 + 4) = puVar17;
                      lVar8 = puVar14[3];
                      *(char **)(puVar14 + 5) = unaff_R15;
                      unaff_R15 = pcVar19;
                      goto code_r0x00102060;
                    }
                    goto code_r0x001020ac;
                  }
                  puVar14[-1] = 0x10215a;
                  pcVar12 = (char *)func_0x001017c0(puVar14[1],1,pcVar19,stdout);
                } while (pcVar19 <= pcVar12);
                puVar14[-1] = 0x102176;
                lVar8 = func_0x00101630(0,&UNK_001074ab,5);
                puVar14[-1] = 0x10217e;
                puVar13 = (uint *)func_0x001015b0();
                uVar5 = *puVar13;
                puVar14[-1] = 0x10218f;
                func_0x00101810(1,(ulong)uVar5,lVar8);
code_r0x0010218f:
                puVar14[-1] = 0x10219c;
                iVar6 = func_0x001016a0(lVar18,10);
                if (iVar6 != -1) goto code_r0x00102098;
                puVar14[-1] = 0x1021b8;
                uVar7 = func_0x00101630(0,&UNK_001074ab,5);
                puVar14[-1] = 0x1021c0;
                puVar13 = (uint *)func_0x001015b0();
                uVar5 = *puVar13;
                puVar14[-1] = 0x1021d1;
                func_0x00101810(1,(ulong)uVar5,uVar7);
code_r0x001021d1:
                puVar14[-1] = 0x1021e2;
                uVar5 = func_0x00101750(puVar14[7],&UNK_0010808a);
                puVar17 = (uint *)(ulong)uVar5;
                puVar14[-1] = 0x1021e9;
                puVar13 = (uint *)func_0x001015b0();
                if (uVar5 != 0) {
                  puVar14[-1] = 0x102249;
                  uVar7 = quotearg_n_style_colon(0,3,puVar14[7]);
                  uVar5 = *puVar13;
                  puVar14[-1] = 0x102261;
                  func_0x00101810(1,(ulong)uVar5,&UNK_00108044,uVar7);
                  goto code_r0x00102261;
                }
                puVar14[-1] = 0x102203;
                uVar7 = func_0x00101630(0,&UNK_001074c5,5);
                uVar5 = *puVar13;
                puVar14[-1] = 0x102214;
                func_0x00101810(1,(ulong)uVar5,uVar7);
code_r0x00102214:
                puVar2 = *(undefined **)(lVar18 + 0x28);
                if (*(undefined **)(lVar18 + 0x30) <= puVar2) goto code_r0x001023a7;
                *(undefined **)(lVar18 + 0x28) = puVar2 + 1;
                *puVar2 = 10;
                goto code_r0x00102230;
              }
              puVar14[-1] = 0x10231d;
              uVar7 = func_0x00101630(0,&UNK_001074ab,5);
              puVar14[-1] = 0x102325;
              puVar17 = (uint *)func_0x001015b0();
              uVar5 = *puVar17;
              puVar14[-1] = 0x102336;
              func_0x00101810(1,(ulong)uVar5,uVar7);
code_r0x00102336:
              puVar14[-1] = 0x102347;
              param_2 = (undefined8 *)quotearg_n_style_colon(0,3,puVar14[7]);
              puVar14[-1] = 0x10234f;
              puVar17 = (uint *)func_0x001015b0();
              uVar5 = *puVar17;
              puVar14[-1] = 0x102367;
              lVar8 = func_0x00101810(1,(ulong)uVar5,&UNK_00108044,param_2);
code_r0x00102367:
              uVar7 = param_2[lVar8 + 1];
              puVar14[-1] = 0x102371;
              uVar7 = quote(uVar7);
              puVar14[-1] = 0x102387;
              uVar10 = func_0x00101630(0,&UNK_0010748c,5);
              puVar14[-1] = 0x102398;
              func_0x00101810(0,0,uVar10,uVar7);
              puVar14[-1] = 0x1023a2;
              usage(1);
              puVar17 = puVar13;
            } while( true );
          }
          if (uVar11 != 1) goto code_r0x00101ea8;
          if (*(int *)(puVar14 + 10) == 0) goto code_r0x00101f3a;
          puVar14[9] = 0x1400;
          uVar7 = 0;
        }
        puVar14[-1] = 0x101ecf;
        uVar5 = (*base_decode_ctx)(puVar14[2],lVar18,uVar7,pcVar19,puVar14[3]);
        pcVar20 = (char *)(ulong)uVar5;
        puVar14[-1] = 0x101ee7;
        uVar9 = func_0x001017c0(pcVar19,1,puVar14[9],unaff_R15);
        if (uVar9 < (ulong)puVar14[9]) goto code_r0x00102285;
        if ((char)uVar5 == '\0') goto code_r0x00102261;
        uVar5 = *puVar17;
        uVar11 = uVar11 + 1;
      } while( true );
    }
    if (uVar5 == 0x69) goto code_r0x00101a00;
    if (0x69 < (int)uVar5) goto code_r0x001019d0;
    puVar17 = puVar13;
    if (uVar5 == 0xffffff7e) goto code_r0x001022dd;
    if (uVar5 != 100) {
      puVar15 = puVar14;
      if (uVar5 == 0xffffff7d) goto code_r0x00101990;
      goto code_r0x00101981;
    }
    lVar18 = 1;
  } while( true );
code_r0x00102261:
  puVar14[-1] = 0x102274;
  uVar7 = func_0x00101630(0,&UNK_001074b7,5);
  puVar14[-1] = 0x102285;
  func_0x00101810(1,0,uVar7);
code_r0x00102285:
  puVar14[-1] = 0x102298;
  uVar7 = func_0x00101630(0,&UNK_001074ab,5);
  puVar14[-1] = 0x1022a0;
  puVar13 = (uint *)func_0x001015b0();
  uVar5 = *puVar13;
  puVar14[-1] = 0x1022b1;
  func_0x00101810(1,(ulong)uVar5,uVar7);
code_r0x001022b1:
  puVar14[-1] = 0x1022c4;
  param_2 = (undefined8 *)func_0x00101630(0,&UNK_001074a0,5);
  puVar14[-1] = 0x1022cc;
  puVar13 = (uint *)func_0x001015b0();
  uVar5 = *puVar13;
  puVar14[-1] = 0x1022dd;
  func_0x00101810(1,(ulong)uVar5,param_2);
code_r0x001022dd:
  puVar14[-1] = 0x1022e4;
  usage(0);
  puVar13 = puVar17;
code_r0x001022e4:
  puVar14[-1] = 0x1022f7;
  uVar7 = func_0x00101630(0,&UNK_00107476,5);
  puVar14[-1] = 0x102305;
  func_0x00101810(0,0,uVar7);
code_r0x00101981:
  do {
    *(undefined8 *)((undefined *)puVar14 + -8) = 0x10198b;
    usage(1);
    puVar15 = puVar14;
code_r0x00101990:
    puVar14 = (undefined8 *)((undefined *)puVar15 + -0x10);
    *(undefined8 *)((undefined *)puVar15 + -0x10) = 0;
    *(undefined8 *)((undefined *)puVar15 + -0x18) = 0x1019c7;
    version_etc(stdout,&UNK_00107362,&UNK_001073fd,Version,&UNK_00107461,&UNK_00107454);
    *(undefined8 *)((undefined *)puVar15 + -0x18) = 0x1019ce;
    uVar5 = func_0x00101850();
code_r0x001019d0:
    if (uVar5 == 0x77) {
      *(undefined8 *)((undefined *)puVar14 + -8) = 0x101a23;
      uVar7 = func_0x00101630(0,&UNK_00107442,5);
      *(undefined8 *)((undefined *)puVar14 + -8) = 0x101a45;
      pcVar19 = (char *)xdectoumax(optarg,0,0xffffffffffffffff,&UNK_001085c1,uVar7,0);
      goto code_r0x0010193b;
    }
  } while (((int)uVar5 < 0x77) || (7 < uVar5 - 0x80));
  pcVar20 = (char *)(ulong)uVar5;
  goto code_r0x0010193b;
code_r0x00101a00:
  *(undefined *)(puVar14 + 4) = 1;
  goto code_r0x0010193b;
}

