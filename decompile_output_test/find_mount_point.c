
char * find_mount_point(ulong param_1,undefined *param_2)

{
  undefined auVar1 [16];
  uint uVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  undefined *puVar20;
  char *pcVar21;
  char *pcVar22;
  int *piVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  long in_FS_OFFSET;
  undefined *puStack384;
  char acStack376 [8];
  undefined auStack368 [8];
  undefined4 uStack360;
  undefined4 uStack356;
  undefined4 uStack352;
  undefined4 uStack348;
  undefined4 uStack344;
  undefined4 uStack340;
  undefined4 uStack336;
  undefined4 uStack332;
  undefined4 uStack328;
  undefined4 uStack324;
  undefined4 uStack320;
  undefined4 uStack316;
  undefined4 uStack312;
  undefined4 uStack308;
  undefined4 uStack304;
  undefined4 uStack300;
  undefined4 uStack296;
  undefined4 uStack292;
  undefined4 uStack288;
  undefined4 uStack284;
  undefined4 uStack280;
  undefined4 uStack276;
  undefined4 uStack272;
  undefined4 uStack268;
  undefined4 uStack264;
  undefined4 uStack260;
  undefined4 uStack256;
  undefined4 uStack252;
  undefined4 uStack248;
  undefined4 uStack244;
  undefined4 uStack240;
  undefined4 uStack236;
  undefined4 uStack232;
  undefined4 uStack228;
  undefined4 uStack224;
  undefined4 uStack220;
  long lStack216;
  long lStack208;
  undefined auStack200 [16];
  undefined auStack184 [16];
  undefined auStack168 [16];
  undefined auStack152 [16];
  undefined auStack136 [16];
  undefined auStack120 [16];
  undefined auStack104 [16];
  undefined auStack88 [16];
  long lStack64;
  
  pcVar17 = acStack376;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puStack384 = &UNK_001053b8;
  uVar5 = save_cwd();
  puStack384 = &UNK_001053c0;
  puVar7 = (uint *)func_0x001020b0();
  if (uVar5 == 0) {
    if ((*(uint *)(param_2 + 0x18) & 0xf000) == 0x4000) {
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)param_2;
      uStack360 = SUB164(auVar1,0);
      uStack356 = SUB164(auVar1 >> 0x20,0);
      uStack352 = SUB164(auVar1 >> 0x40,0);
      uStack348 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)(param_2 + 0x10);
      uStack344 = SUB164(auVar1,0);
      uStack340 = SUB164(auVar1 >> 0x20,0);
      uStack336 = SUB164(auVar1 >> 0x40,0);
      uStack332 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)(param_2 + 0x20);
      uStack328 = SUB164(auVar1,0);
      uStack324 = SUB164(auVar1 >> 0x20,0);
      uStack320 = SUB164(auVar1 >> 0x40,0);
      uStack316 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)(param_2 + 0x30);
      uStack312 = SUB164(auVar1,0);
      uStack308 = SUB164(auVar1 >> 0x20,0);
      uStack304 = SUB164(auVar1 >> 0x40,0);
      uStack300 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)(param_2 + 0x40);
      uStack296 = SUB164(auVar1,0);
      uStack292 = SUB164(auVar1 >> 0x20,0);
      uStack288 = SUB164(auVar1 >> 0x40,0);
      uStack284 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)(param_2 + 0x50);
      uStack280 = SUB164(auVar1,0);
      uStack276 = SUB164(auVar1 >> 0x20,0);
      uStack272 = SUB164(auVar1 >> 0x40,0);
      uStack268 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)(param_2 + 0x60);
      uStack264 = SUB164(auVar1,0);
      uStack260 = SUB164(auVar1 >> 0x20,0);
      uStack256 = SUB164(auVar1 >> 0x40,0);
      uStack252 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)(param_2 + 0x70);
      uStack248 = SUB164(auVar1,0);
      uStack244 = SUB164(auVar1 >> 0x20,0);
      uStack240 = SUB164(auVar1 >> 0x40,0);
      uStack236 = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
      auVar1 = *(undefined *)(param_2 + 0x80);
      uStack232 = SUB164(auVar1,0);
      uStack228 = SUB164(auVar1 >> 0x20,0);
      uStack224 = SUB164(auVar1 >> 0x40,0);
      uStack220 = SUB164(auVar1 >> 0x60,0);
      puStack384 = &UNK_00105636;
      iVar6 = func_0x001021e0(SUB168(auVar1,0),param_1);
      pcVar21 = acStack376;
      pcVar24 = acStack376;
      if (iVar6 < 0) goto code_r0x0010563e;
code_r0x0010544d:
      pcVar17 = pcVar21;
      while( true ) {
        uVar19 = 0x10fefb;
        *(undefined8 *)(pcVar17 + -8) = 0x105523;
        iVar6 = func_0x00102390(1,&UNK_0010fefb,&lStack216);
        if (iVar6 < 0) break;
        if ((lStack216 != CONCAT44(uStack356,uStack360)) ||
           (lStack208 == CONCAT44(uStack348,uStack352))) {
          *(undefined8 *)(pcVar17 + -8) = 0x1055b5;
          uVar8 = xgetcwd();
          goto code_r0x00105566;
        }
        *(undefined8 *)(pcVar17 + -8) = 0x105490;
        iVar6 = func_0x001021e0(&UNK_0010fefb);
        if (iVar6 < 0) {
          *(undefined8 *)(pcVar17 + -8) = 0x1056d1;
          uVar10 = quotearg_style(4,&UNK_0010fefb);
          puVar20 = &UNK_0010fedd;
          goto code_r0x0010554b;
        }
        uStack360 = (int)lStack216;
        uStack356 = (int)((ulong)lStack216 >> 0x20);
        uStack352 = (int)lStack208;
        uStack348 = (int)((ulong)lStack208 >> 0x20);
        uStack344 = SUB164(auStack200,0);
        uStack340 = SUB164(auStack200 >> 0x20,0);
        uStack336 = SUB164(auStack200 >> 0x40,0);
        uStack332 = SUB164(auStack200 >> 0x60,0);
        uStack328 = SUB164(auStack184,0);
        uStack324 = SUB164(auStack184 >> 0x20,0);
        uStack320 = SUB164(auStack184 >> 0x40,0);
        uStack316 = SUB164(auStack184 >> 0x60,0);
        uStack312 = SUB164(auStack168,0);
        uStack308 = SUB164(auStack168 >> 0x20,0);
        uStack304 = SUB164(auStack168 >> 0x40,0);
        uStack300 = SUB164(auStack168 >> 0x60,0);
        uStack296 = SUB164(auStack152,0);
        uStack292 = SUB164(auStack152 >> 0x20,0);
        uStack288 = SUB164(auStack152 >> 0x40,0);
        uStack284 = SUB164(auStack152 >> 0x60,0);
        uStack280 = SUB164(auStack136,0);
        uStack276 = SUB164(auStack136 >> 0x20,0);
        uStack272 = SUB164(auStack136 >> 0x40,0);
        uStack268 = SUB164(auStack136 >> 0x60,0);
        uStack264 = SUB164(auStack120,0);
        uStack260 = SUB164(auStack120 >> 0x20,0);
        uStack256 = SUB164(auStack120 >> 0x40,0);
        uStack252 = SUB164(auStack120 >> 0x60,0);
        uStack248 = SUB164(auStack104,0);
        uStack244 = SUB164(auStack104 >> 0x20,0);
        uStack240 = SUB164(auStack104 >> 0x40,0);
        uStack236 = SUB164(auStack104 >> 0x60,0);
        uStack232 = SUB164(auStack88,0);
        uStack228 = SUB164(auStack88 >> 0x20,0);
        uStack224 = SUB164(auStack88 >> 0x40,0);
        uStack220 = SUB164(auStack88 >> 0x60,0);
      }
      *(undefined8 *)(pcVar17 + -8) = 0x10553c;
      uVar10 = quotearg_style(4,&UNK_0010fefb);
      puVar20 = &UNK_0010fefe;
code_r0x0010554b:
      *(undefined8 *)(pcVar17 + -8) = 0x105552;
      uVar11 = func_0x00102190(0,puVar20,5);
      uVar19 = *puVar7;
      uVar8 = 0;
      *(undefined8 *)(pcVar17 + -8) = 0x105566;
      func_0x001024a0(0,(ulong)uVar19,uVar11,uVar10);
    }
    else {
      puStack384 = &UNK_001053e7;
      uVar8 = dir_name(param_1);
      puStack384 = &UNK_001053f2;
      lVar9 = func_0x001021b0(uVar8);
      lVar13 = -(lVar9 + 0x1fU & 0xfffffffffffffff0);
      pcVar17 = acStack376 + lVar13;
      *(undefined **)((long)&puStack384 + lVar13) = 0x105412;
      param_1 = func_0x00102360(auStack368 + lVar13,uVar8,lVar9 + 1);
      *(undefined **)((long)&puStack384 + lVar13) = 0x10541d;
      func_0x00102070(uVar8);
      *(undefined **)((long)&puStack384 + lVar13) = 0x105425;
      iVar6 = func_0x001021e0(param_1);
      pcVar24 = acStack376 + lVar13;
      if (iVar6 < 0) {
code_r0x0010563e:
        pcVar17 = pcVar24;
        *(undefined8 *)(pcVar17 + -8) = 0x10564b;
        uVar10 = quotearg_style(4,param_1);
        *(undefined8 *)(pcVar17 + -8) = 0x105661;
        uVar11 = func_0x00102190(0,&UNK_0010fedd,5);
        uVar19 = *puVar7;
        pcVar21 = (char *)0x0;
        uVar8 = 0;
        *(undefined8 *)(pcVar17 + -8) = 0x105675;
        func_0x001024a0(0,(ulong)uVar19,uVar11,uVar10);
        goto code_r0x00105584;
      }
      *(undefined **)((long)&puStack384 + lVar13) = 0x105445;
      iVar6 = func_0x00102390(1,&UNK_0010fefc,&uStack360);
      pcVar21 = acStack376 + lVar13;
      if (-1 < iVar6) goto code_r0x0010544d;
      *(undefined **)((long)&puStack384 + lVar13) = 0x10568d;
      uVar10 = quotearg_style(4,param_1);
      *(undefined **)((long)&puStack384 + lVar13) = 0x1056a3;
      uVar11 = func_0x00102190(0,&UNK_0010ff10,5);
      uVar19 = *puVar7;
      uVar8 = 0;
      *(undefined **)((long)&puStack384 + lVar13) = 0x1056b7;
      func_0x001024a0(0,(ulong)uVar19,uVar11,uVar10);
    }
code_r0x00105566:
    uVar2 = *puVar7;
    param_1 = (ulong)uVar2;
    *(undefined8 *)(pcVar17 + -8) = 0x105571;
    iVar6 = restore_cwd(acStack376);
    if (iVar6 != 0) {
      *(undefined8 *)(pcVar17 + -8) = 0x105721;
      uVar10 = func_0x00102190(0,&UNK_0010ff38,5);
      uVar19 = *puVar7;
      pcVar21 = (char *)0x1;
      *(undefined8 *)(pcVar17 + -8) = 0x105733;
      func_0x001024a0(1,(ulong)uVar19,uVar10);
      goto code_r0x00105733;
    }
    *(undefined8 *)(pcVar17 + -8) = 0x105581;
    pcVar21 = acStack376;
    free_cwd();
    *puVar7 = uVar2;
  }
  else {
    uVar8 = 0;
    puStack384 = &UNK_001056fa;
    uVar10 = func_0x00102190(0,&UNK_0010fec0,5);
    uVar19 = *puVar7;
    pcVar21 = (char *)0x0;
    puStack384 = &UNK_00105709;
    func_0x001024a0(0,(ulong)uVar19,uVar10);
  }
code_r0x00105584:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)uVar8;
  }
code_r0x00105733:
  *(undefined8 *)(pcVar17 + -8) = 0x105738;
  func_0x001021f0();
  *(ulong *)(pcVar17 + -8) = (ulong)uVar5;
  *(uint **)(pcVar17 + -0x10) = puVar7;
  *(char **)(pcVar17 + -0x18) = acStack376;
  *(ulong *)(pcVar17 + -0x20) = param_1;
  *(undefined **)(pcVar17 + -0x28) = &stack0xfffffffffffffff8;
  *(undefined8 *)(pcVar17 + -0x30) = uVar8;
  *(undefined8 *)(pcVar17 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(bool *)(pcVar17 + -0xfd) = (uVar19 & 4) != 0;
  uVar5 = uVar19 & 3;
  *(uint *)(pcVar17 + -0xfc) = uVar19 & 4;
  *(uint *)(pcVar17 + -0x114) = uVar5;
  if (((uVar5 & uVar5 - 1) == 0) && (pcVar21 != (char *)0x0)) {
    if (*pcVar21 == '\0') {
      *(undefined8 *)(pcVar17 + -0x120) = 0x105d15;
      puVar15 = (undefined4 *)func_0x001020b0();
      pcVar18 = (char *)0x0;
      *puVar15 = 2;
      pcVar24 = pcVar21;
    }
    else {
      if (*pcVar21 == '/') goto code_r0x00105c60;
      *(undefined8 *)(pcVar17 + -0x120) = 0x1057a8;
      pcVar24 = pcVar21;
      pcVar18 = (char *)xgetcwd();
      if (pcVar18 != (char *)0x0) {
        *(undefined8 *)(pcVar17 + -0x120) = 0x1057bc;
        uVar12 = func_0x001021b0(pcVar18);
        pcVar24 = pcVar21;
        if (uVar12 < 0x1000) {
          *(undefined8 *)(pcVar17 + -0x120) = 0x105c8d;
          pcVar18 = (char *)xrealloc(pcVar18,0x1000);
          pcVar22 = pcVar18 + uVar12;
          pcVar25 = pcVar18 + 0x1000;
        }
        else {
          pcVar25 = pcVar18 + uVar12;
          pcVar22 = pcVar25;
        }
code_r0x001057d1:
        *(char **)(pcVar17 + -0xf8) = pcVar24;
        *(undefined8 *)(pcVar17 + -0x108) = 0;
        *(undefined8 *)(pcVar17 + -0xe8) = 0;
        *(undefined8 *)(pcVar17 + -0xf0) = 0;
        *(char **)(pcVar17 + -0x110) = pcVar17 + -0xd8;
code_r0x001057fb:
        cVar4 = *pcVar24;
        pcVar26 = pcVar22;
joined_r0x00105801:
        if (cVar4 == '\0') {
code_r0x0010590f:
          if ((pcVar18 + 1 < pcVar26) && (pcVar26[-1] == '/')) {
            pcVar26 = pcVar26 + -1;
          }
          *pcVar26 = '\0';
          if (pcVar25 != pcVar26 + 1) {
            *(undefined8 *)(pcVar17 + -0x120) = 0x10593f;
            pcVar18 = (char *)xrealloc(pcVar18,pcVar26 + (1 - (long)pcVar18));
          }
          pcVar24 = *(char **)(pcVar17 + -0xf0);
          *(undefined8 *)(pcVar17 + -0x120) = 0x10594c;
          func_0x00102070();
          pcVar21 = *(char **)(pcVar17 + -0x108);
          if (pcVar21 != (char *)0x0) {
            *(undefined8 *)(pcVar17 + -0x120) = 0x10595e;
            hash_free();
            pcVar24 = pcVar21;
          }
          goto code_r0x00105960;
        }
        pcVar21 = pcVar24;
        if (cVar4 == '/') {
          do {
            pcVar24 = pcVar24 + 1;
            cVar4 = *pcVar24;
          } while (cVar4 == '/');
          pcVar21 = pcVar24;
          if (cVar4 != '\0') goto code_r0x0010583d;
        }
        else {
code_r0x0010583d:
          do {
            pcVar24 = pcVar24 + 1;
            if (*pcVar24 == '\0') break;
          } while (*pcVar24 != '/');
        }
        if (pcVar24 == pcVar21) goto code_r0x0010590f;
        pcVar22 = pcVar24 + -(long)pcVar21;
        if (pcVar22 == (char *)0x1) {
          if (cVar4 != '.') goto code_r0x00105871;
          goto code_r0x00105900;
        }
        if (((pcVar22 == (char *)0x2) && (cVar4 == '.')) && (pcVar21[1] == '.')) {
          pcVar22 = pcVar26;
          if (((pcVar26 <= pcVar18 + 1) || (pcVar22 = pcVar26 + -1, pcVar22 <= pcVar18)) ||
             (pcVar26[-2] == '/')) goto code_r0x001057fb;
          do {
            pcVar26 = pcVar22 + -1;
            if (pcVar18 == pcVar26) break;
            pcVar21 = pcVar22 + -2;
            pcVar22 = pcVar26;
          } while (*pcVar21 != '/');
        }
        else {
code_r0x00105871:
          if (pcVar26[-1] != '/') {
            *pcVar26 = '/';
            pcVar26 = pcVar26 + 1;
          }
          if (pcVar25 <= pcVar26 + (long)pcVar22) {
            lVar13 = -(long)pcVar18;
            pcVar16 = pcVar25 + -(long)pcVar18 + 0x1000;
            if (0xfff < (long)pcVar22) {
              pcVar16 = pcVar22 + 1 + (long)(pcVar25 + -(long)pcVar18);
            }
            *(undefined8 *)(pcVar17 + -0x120) = 0x1058b1;
            pcVar18 = (char *)xrealloc(pcVar18,pcVar16);
            pcVar25 = pcVar16 + (long)pcVar18;
            pcVar26 = pcVar26 + lVar13 + (long)pcVar18;
          }
          *(undefined8 *)(pcVar17 + -0x120) = 0x1058c8;
          func_0x00102360(pcVar26,pcVar21,pcVar22);
          iVar6 = *(int *)(pcVar17 + -0x114);
          pcVar26 = pcVar26 + (long)pcVar22;
          *pcVar26 = '\0';
          if ((iVar6 == 2) && (pcVar17[-0xfd] != '\0')) {
code_r0x001058e6:
            *(undefined4 *)(pcVar17 + -0xc0) = 0;
code_r0x001058ee:
            if ((*pcVar24 != '\0') && (*(int *)(pcVar17 + -0x114) != 2)) {
              *(undefined8 *)(pcVar17 + -0x120) = 0x105d5c;
              piVar23 = (int *)func_0x001020b0();
              iVar6 = 0x14;
code_r0x00105a01:
              *(int *)(pcVar17 + -0x114) = iVar6;
              *(undefined8 *)(pcVar17 + -0x120) = 0x105a0f;
              func_0x00102070(*(undefined8 *)(pcVar17 + -0xf0));
              *(undefined8 *)(pcVar17 + -0x120) = 0x105a17;
              func_0x00102070();
              iVar6 = *(int *)(pcVar17 + -0x114);
              pcVar24 = pcVar18;
              if (*(long *)(pcVar17 + -0x108) != 0) {
code_r0x00105aca:
                pcVar24 = *(char **)(pcVar17 + -0x108);
                *(int *)(pcVar17 + -0x114) = iVar6;
                *(undefined8 *)(pcVar17 + -0x120) = 0x105ad8;
                hash_free();
                iVar6 = *(int *)(pcVar17 + -0x114);
              }
              *piVar23 = iVar6;
              pcVar18 = (char *)0x0;
              goto code_r0x00105960;
            }
            goto code_r0x00105900;
          }
          if (*(int *)(pcVar17 + -0xfc) == 0) {
            *(undefined8 *)(pcVar17 + -0x120) = 0x105a65;
            iVar6 = func_0x001021c0(1,pcVar18,*(undefined8 *)(pcVar17 + -0x110));
          }
          else {
            *(undefined8 *)(pcVar17 + -0x120) = 0x1059ae;
            iVar6 = func_0x00102390();
          }
          if (iVar6 != 0) {
            *(undefined8 *)(pcVar17 + -0x120) = 0x1059c0;
            piVar23 = (int *)func_0x001020b0();
            iVar6 = *piVar23;
            if (*(int *)(pcVar17 + -0x114) != 0) {
              if (*(int *)(pcVar17 + -0x114) != 1) goto code_r0x001058e6;
              *(int *)(pcVar17 + -0xe0) = iVar6;
              *(undefined8 *)(pcVar17 + -0x120) = 0x1059e9;
              lVar13 = func_0x001022e0(pcVar24,&UNK_001100be);
              iVar6 = *(int *)(pcVar17 + -0xe0);
              if ((pcVar24[lVar13] == '\0') && (iVar6 == 2)) goto code_r0x00105900;
            }
            goto code_r0x00105a01;
          }
          if ((*(uint *)(pcVar17 + -0xc0) & 0xf000) == 0xa000) {
            if (*(long *)(pcVar17 + -0x108) == 0) {
              *(undefined8 *)(pcVar17 + -0x120) = 0x105c47;
              lVar13 = hash_initialize(7,0,triple_hash,triple_compare_ino_str,triple_free);
              *(long *)(pcVar17 + -0x108) = lVar13;
              if (lVar13 == 0) goto code_r0x00105c55;
            }
            *(undefined8 *)(pcVar17 + -0x120) = 0x105a90;
            cVar4 = seen_file(*(undefined8 *)(pcVar17 + -0x108),*(undefined8 *)(pcVar17 + -0xf8),
                              *(undefined8 *)(pcVar17 + -0x110));
            if (cVar4 == '\0') {
              *(undefined8 *)(pcVar17 + -0x120) = 0x105b64;
              record_file(*(undefined8 *)(pcVar17 + -0x108),*(undefined8 *)(pcVar17 + -0xf8),
                          *(undefined8 *)(pcVar17 + -0x110));
              *(undefined8 *)(pcVar17 + -0x120) = 0x105b71;
              pcVar21 = (char *)areadlink_with_size(pcVar18,*(undefined8 *)(pcVar17 + -0xa8));
              if (pcVar21 == (char *)0x0) {
                *(undefined8 *)(pcVar17 + -0x120) = 0x105ce7;
                piVar23 = (int *)func_0x001020b0();
                iVar6 = *piVar23;
                if ((*(int *)(pcVar17 + -0x114) != 2) || (iVar6 == 0xc)) goto code_r0x00105ab0;
              }
              else {
                *(undefined8 *)(pcVar17 + -0x120) = 0x105b85;
                lVar9 = func_0x001021b0(pcVar21);
                *(long *)(pcVar17 + -0xf8) = lVar9;
                *(undefined8 *)(pcVar17 + -0x120) = 0x105b95;
                lVar13 = func_0x001021b0(pcVar24);
                uVar12 = lVar9 + 1 + lVar13;
                if (*(long *)(pcVar17 + -0xe8) == 0) {
                  *(long *)(pcVar17 + -0xe0) = lVar13;
                  uVar14 = 0x1000;
                  if (0xfff < uVar12) {
                    uVar14 = uVar12;
                  }
                  *(ulong *)(pcVar17 + -0xe8) = uVar14;
                  *(undefined8 *)(pcVar17 + -0x120) = 0x105cc1;
                  uVar8 = xmalloc(uVar14);
                  lVar13 = *(long *)(pcVar17 + -0xe0);
                  *(undefined8 *)(pcVar17 + -0xf0) = uVar8;
                }
                else {
                  if (*(ulong *)(pcVar17 + -0xe8) < uVar12) {
                    *(long *)(pcVar17 + -0xe0) = lVar13;
                    *(ulong *)(pcVar17 + -0xe8) = uVar12;
                    *(undefined8 *)(pcVar17 + -0x120) = 0x105bc7;
                    uVar8 = xrealloc(*(undefined8 *)(pcVar17 + -0xf0),uVar12);
                    lVar13 = *(long *)(pcVar17 + -0xe0);
                    *(undefined8 *)(pcVar17 + -0xf0) = uVar8;
                  }
                }
                pcVar16 = *(char **)(pcVar17 + -0xf0);
                *(undefined8 *)(pcVar17 + -0x120) = 0x105bed;
                func_0x00102490(pcVar16 + *(long *)(pcVar17 + -0xf8),pcVar24,lVar13 + 1);
                *(undefined8 *)(pcVar17 + -0x120) = 0x105bfd;
                func_0x00102360(pcVar16,pcVar21,*(undefined8 *)(pcVar17 + -0xf8));
                cVar4 = *pcVar21;
                *(char **)(pcVar17 + -0xf8) = pcVar16;
                pcVar22 = pcVar18 + 1;
                if (cVar4 == '/') {
                  *pcVar18 = '/';
                }
                else {
                  bVar3 = pcVar22 < pcVar26;
                  pcVar22 = pcVar26;
                  if ((bVar3) && (pcVar22 = pcVar26 + -1, pcVar18 < pcVar22)) {
                    cVar4 = pcVar26[-2];
                    pcVar24 = pcVar22;
                    while ((pcVar22 = pcVar24, cVar4 != '/' &&
                           (pcVar22 = pcVar24 + -1, pcVar18 != pcVar22))) {
                      cVar4 = pcVar24[-2];
                      pcVar24 = pcVar22;
                    }
                  }
                }
                *(undefined8 *)(pcVar17 + -0x120) = 0x105c21;
                func_0x00102070(pcVar21);
                pcVar24 = pcVar16;
                pcVar26 = pcVar22;
              }
            }
            else {
              if (*(int *)(pcVar17 + -0x114) != 2) {
                *(undefined8 *)(pcVar17 + -0x120) = 0x105aa8;
                piVar23 = (int *)func_0x001020b0();
                iVar6 = 0x28;
code_r0x00105ab0:
                *(int *)(pcVar17 + -0x114) = iVar6;
                *(undefined8 *)(pcVar17 + -0x120) = 0x105abe;
                func_0x00102070(*(undefined8 *)(pcVar17 + -0xf0));
                *(undefined8 *)(pcVar17 + -0x120) = 0x105ac6;
                func_0x00102070(pcVar18);
                iVar6 = *(int *)(pcVar17 + -0x114);
                goto code_r0x00105aca;
              }
            }
          }
          else {
            if ((*(uint *)(pcVar17 + -0xc0) & 0xf000) != 0x4000) goto code_r0x001058ee;
          }
        }
code_r0x00105900:
        cVar4 = *pcVar24;
        goto joined_r0x00105801;
      }
    }
  }
  else {
    *(undefined8 *)(pcVar17 + -0x120) = 0x105cd5;
    puVar15 = (undefined4 *)func_0x001020b0();
    pcVar18 = (char *)0x0;
    *puVar15 = 0x16;
    pcVar24 = pcVar21;
  }
code_r0x00105960:
  if (*(long *)(pcVar17 + -0x40) != *(long *)(in_FS_OFFSET + 0x28)) {
    *(undefined8 *)(pcVar17 + -0x120) = 0x105d76;
    uVar8 = func_0x001021f0();
    file_name = pcVar24;
    return (char *)uVar8;
  }
  return pcVar18;
code_r0x00105c55:
  *(undefined8 *)(pcVar17 + -0x120) = 0x105c5a;
  xalloc_die();
code_r0x00105c60:
  *(undefined8 *)(pcVar17 + -0x120) = 0x105c6a;
  pcVar18 = (char *)xmalloc(0x1000);
  pcVar25 = pcVar18 + 0x1000;
  pcVar22 = pcVar18 + 1;
  *pcVar18 = '/';
  pcVar24 = pcVar21;
  goto code_r0x001057d1;
}

