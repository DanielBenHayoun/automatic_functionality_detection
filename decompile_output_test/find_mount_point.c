
long find_mount_point(ulong param_1,undefined *param_2)

{
  undefined auVar1 [16];
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long in_FS_OFFSET;
  undefined *puStack384;
  undefined auStack376 [8];
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
  
  puVar14 = auStack376;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puStack384 = &UNK_00104e78;
  uVar3 = save_cwd(auStack376);
  puStack384 = &UNK_00104e80;
  puVar5 = (uint *)func_0x00101d40();
  if (uVar3 == 0) {
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
      puStack384 = &UNK_001050f6;
      iVar4 = func_0x00101e70(SUB168(auVar1,0),param_1);
      puVar16 = auStack376;
      puVar15 = auStack376;
      if (iVar4 < 0) goto code_r0x001050fe;
code_r0x00104f0d:
      puVar14 = puVar16;
      while( true ) {
        puVar15 = &UNK_0010f2b3;
        *(undefined8 *)(puVar14 + -8) = 0x104fe3;
        iVar4 = func_0x00102020(1,&UNK_0010f2b3,&lStack216);
        if (iVar4 < 0) break;
        if ((lStack216 != CONCAT44(uStack356,uStack360)) ||
           (lStack208 == CONCAT44(uStack348,uStack352))) {
          *(undefined8 *)(puVar14 + -8) = 0x105075;
          uVar6 = xgetcwd();
          goto code_r0x00105026;
        }
        *(undefined8 *)(puVar14 + -8) = 0x104f50;
        iVar4 = func_0x00101e70(&UNK_0010f2b3);
        if (iVar4 < 0) {
          *(undefined8 *)(puVar14 + -8) = 0x105191;
          uVar8 = quotearg_style(4,&UNK_0010f2b3);
          puVar16 = &UNK_0010f295;
          goto code_r0x0010500b;
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
      *(undefined8 *)(puVar14 + -8) = 0x104ffc;
      uVar8 = quotearg_style(4,&UNK_0010f2b3);
      puVar16 = &UNK_0010df42;
code_r0x0010500b:
      *(undefined8 *)(puVar14 + -8) = 0x105012;
      uVar9 = func_0x00101e20(0,puVar16,5);
      puVar15 = (undefined *)(ulong)*puVar5;
      uVar6 = 0;
      *(undefined8 *)(puVar14 + -8) = 0x105026;
      func_0x00102120(0,puVar15,uVar9,uVar8);
    }
    else {
      puStack384 = &UNK_00104ea7;
      uVar6 = dir_name(param_1);
      puStack384 = &UNK_00104eb2;
      lVar7 = func_0x00101e40(uVar6);
      lVar10 = -(lVar7 + 0x1fU & 0xfffffffffffffff0);
      puVar14 = auStack376 + lVar10;
      *(undefined **)((long)&puStack384 + lVar10) = 0x104ed2;
      param_1 = func_0x00101fe0(auStack368 + lVar10,uVar6,lVar7 + 1);
      *(undefined **)((long)&puStack384 + lVar10) = 0x104edd;
      func_0x00101d10(uVar6);
      *(undefined **)((long)&puStack384 + lVar10) = 0x104ee5;
      iVar4 = func_0x00101e70(param_1);
      puVar15 = auStack376 + lVar10;
      if (iVar4 < 0) {
code_r0x001050fe:
        puVar14 = puVar15;
        *(undefined8 *)(puVar14 + -8) = 0x10510b;
        uVar8 = quotearg_style(4,param_1);
        *(undefined8 *)(puVar14 + -8) = 0x105121;
        uVar9 = func_0x00101e20(0,&UNK_0010f295,5);
        puVar15 = (undefined *)(ulong)*puVar5;
        puVar16 = (undefined *)0x0;
        uVar6 = 0;
        *(undefined8 *)(puVar14 + -8) = 0x105135;
        func_0x00102120(0,puVar15,uVar9,uVar8);
        goto code_r0x00105044;
      }
      *(undefined **)((long)&puStack384 + lVar10) = 0x104f05;
      iVar4 = func_0x00102020(1,&UNK_0010f2b4,&uStack360);
      puVar16 = auStack376 + lVar10;
      if (-1 < iVar4) goto code_r0x00104f0d;
      *(undefined **)((long)&puStack384 + lVar10) = 0x10514d;
      uVar8 = quotearg_style(4,param_1);
      *(undefined **)((long)&puStack384 + lVar10) = 0x105163;
      uVar9 = func_0x00101e20(0,&UNK_0010f2b8,5);
      puVar15 = (undefined *)(ulong)*puVar5;
      uVar6 = 0;
      *(undefined **)((long)&puStack384 + lVar10) = 0x105177;
      func_0x00102120(0,puVar15,uVar9,uVar8);
    }
code_r0x00105026:
    uVar2 = *puVar5;
    param_1 = (ulong)uVar2;
    *(undefined8 *)(puVar14 + -8) = 0x105031;
    iVar4 = restore_cwd(auStack376);
    if (iVar4 != 0) {
      *(undefined8 *)(puVar14 + -8) = 0x1051e1;
      uVar8 = func_0x00101e20(0,&UNK_0010f2e0,5);
      puVar15 = (undefined *)(ulong)*puVar5;
      puVar16 = (undefined *)0x1;
      *(undefined8 *)(puVar14 + -8) = 0x1051f3;
      func_0x00102120(1,puVar15,uVar8);
      goto code_r0x001051f3;
    }
    *(undefined8 *)(puVar14 + -8) = 0x105041;
    puVar16 = auStack376;
    free_cwd(auStack376);
    *puVar5 = uVar2;
  }
  else {
    uVar6 = 0;
    puStack384 = &UNK_001051ba;
    uVar8 = func_0x00101e20(0,&UNK_0010f278,5);
    puVar15 = (undefined *)(ulong)*puVar5;
    puVar16 = (undefined *)0x0;
    puStack384 = &UNK_001051c9;
    func_0x00102120(0,puVar15,uVar8);
  }
code_r0x00105044:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
code_r0x001051f3:
  *(undefined8 *)(puVar14 + -8) = 0x1051f8;
  func_0x00101e80();
  *(ulong *)(puVar14 + -8) = (ulong)uVar3;
  *(uint **)(puVar14 + -0x10) = puVar5;
  *(undefined **)(puVar14 + -0x18) = auStack376;
  *(ulong *)(puVar14 + -0x20) = param_1;
  *(undefined **)(puVar14 + -0x28) = &stack0xfffffffffffffff8;
  *(undefined8 *)(puVar14 + -0x30) = uVar6;
  puVar13 = puVar15 + 1;
  if ((undefined *)0x400 < puVar15) {
    puVar13 = (undefined *)0x401;
  }
  do {
    *(undefined8 *)(puVar14 + -0x40) = 0x105248;
    lVar10 = func_0x00102030(puVar13);
    while( true ) {
      if (lVar10 == 0) {
        return 0;
      }
      *(undefined8 *)(puVar14 + -0x40) = 0x10525e;
      puVar15 = (undefined *)func_0x00101db0(puVar16,lVar10,puVar13);
      if ((long)puVar15 < 0) {
        *(undefined8 *)(puVar14 + -0x40) = 0x1052bd;
        piVar11 = (int *)func_0x00101d40();
        if (*piVar11 != 0x22) {
          *(undefined8 *)(puVar14 + -0x40) = 0x1052cc;
          func_0x00101d10(lVar10);
          return 0;
        }
      }
      if (puVar15 < puVar13) {
        puVar15[lVar10] = 0;
        return lVar10;
      }
      *(undefined8 *)(puVar14 + -0x40) = 0x105273;
      func_0x00101d10(lVar10);
      if ((undefined *)0x3fffffffffffffff < puVar13) break;
      puVar13 = (undefined *)((long)puVar13 * 2);
      *(undefined8 *)(puVar14 + -0x40) = 0x105283;
      lVar10 = func_0x00102030(puVar13);
    }
    if ((undefined *)0x7ffffffffffffffe < puVar13) {
      *(undefined8 *)(puVar14 + -0x40) = 0x1052e5;
      puVar12 = (undefined4 *)func_0x00101d40();
      *puVar12 = 0xc;
      return 0;
    }
    puVar13 = (undefined *)0x7fffffffffffffff;
  } while( true );
}

