
undefined8 ****
mem_cd_iconv(undefined8 ***param_1,undefined8 ****param_2,undefined8 ****param_3,
            undefined8 ****param_4,undefined8 ****param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 ****ppppuVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 extraout_RDX;
  undefined *puVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  char *pcVar14;
  ulong uVar15;
  undefined *puVar16;
  long in_FS_OFFSET;
  undefined8 ****ppppuStack4344;
  ulong uStack4336;
  undefined *puStack4328;
  ulong uStack4320;
  ulong uStack4312;
  undefined8 ****ppppuStack4296;
  undefined8 ****ppppuStack4288;
  undefined8 ****ppppuStack4280;
  undefined8 ****ppppuStack4272;
  undefined8 ****ppppuStack4264;
  undefined8 ****ppppuStack4256;
  undefined8 ****ppppuStack4240;
  undefined8 ****ppppuStack4232;
  undefined8 ****ppppuStack4224;
  undefined8 ****ppppuStack4216;
  undefined8 ***pppuStack4208;
  undefined8 ***pppuStack4200;
  undefined8 ****ppppuStack4192;
  undefined8 ****ppppuStack4184;
  undefined8 ****ppppuStack4176;
  undefined8 **appuStack4168 [513];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  ppppuStack4256 = (undefined8 ****)&UNK_0010aa0d;
  ppppuStack4232 = param_5;
  ppppuStack4224 = param_4;
  pppuStack4208 = param_1;
  func_0x00101650(param_3,0,0,0,0);
  ppppuVar11 = (undefined8 ****)0x0;
  ppppuStack4264 = (undefined8 ****)appuStack4168;
  ppppuStack4280 = &ppppuStack4176;
  ppppuStack4288 = &ppppuStack4184;
  pppuStack4200 = param_1;
  ppppuStack4192 = param_2;
  if (param_2 != (undefined8 ****)0x0) {
    ppppuStack4240 = (undefined8 ****)&pppuStack4200;
    ppppuStack4216 = param_2;
    do {
      ppppuStack4176 = (undefined8 ****)0x1000;
      ppppuStack4256 = (undefined8 ****)&UNK_0010aa8b;
      ppppuVar12 = ppppuStack4240;
      ppppuStack4344 = param_3;
      ppppuStack4184 = ppppuStack4264;
      lVar5 = func_0x00101650(param_3,ppppuStack4240,&ppppuStack4192,ppppuStack4288,ppppuStack4280);
      if (lVar5 == -1) {
        ppppuStack4256 = (undefined8 ****)&UNK_0010aa96;
        piVar6 = (int *)func_0x00101610();
        if (*piVar6 != 7) {
          param_2 = ppppuStack4216;
          if (*piVar6 != 0x16) goto code_r0x0010ac69;
          break;
        }
      }
      ppppuVar11 = (undefined8 ****)
                   ((long)ppppuVar11 + (long)((long)ppppuStack4184 - (long)ppppuStack4264));
      param_2 = ppppuStack4216;
    } while (ppppuStack4192 != (undefined8 ****)0x0);
  }
  ppppuVar12 = (undefined8 ****)0x0;
  ppppuStack4176 = (undefined8 ****)0x1000;
  ppppuStack4256 = (undefined8 ****)&UNK_0010aacb;
  ppppuStack4344 = param_3;
  ppppuStack4184 = ppppuStack4264;
  lVar5 = func_0x00101650(param_3,0,0,ppppuStack4288,ppppuStack4280);
  if (lVar5 == -1) {
code_r0x0010ac69:
    param_3 = (undefined8 ****)0xffffffff;
code_r0x0010abd4:
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return param_3;
    }
  }
  else {
    ppppuVar13 = (undefined8 ****)
                 ((long)((long)ppppuStack4184 - (long)ppppuStack4264) + (long)ppppuVar11);
    ppppuStack4240 = ppppuVar13;
    if (ppppuVar13 == (undefined8 ****)0x0) {
      param_3 = (undefined8 ****)0x0;
      *ppppuStack4232 = (undefined8 ***)0x0;
      goto code_r0x0010abd4;
    }
    ppppuStack4216 = (undefined8 ****)*ppppuStack4224;
    if ((ppppuStack4216 == (undefined8 ****)0x0) || (*ppppuStack4232 < ppppuVar13)) {
      ppppuStack4256 = (undefined8 ****)&UNK_0010ab16;
      ppppuStack4216 = (undefined8 ****)func_0x00101810();
      if (ppppuStack4216 == (undefined8 ****)0x0) {
        ppppuStack4256 = (undefined8 ****)&UNK_0010ac63;
        puVar7 = (undefined4 *)func_0x00101610();
        *puVar7 = 0xc;
        ppppuStack4344 = ppppuVar13;
        goto code_r0x0010ac69;
      }
    }
    ppppuVar11 = &ppppuStack4192;
    ppppuStack4256 = (undefined8 ****)&UNK_0010ab3a;
    func_0x00101650(param_3,0,0,0,0);
    ppppuStack4264 = (undefined8 ****)&pppuStack4200;
    pppuStack4200 = pppuStack4208;
    ppppuStack4184 = ppppuStack4216;
    ppppuStack4176 = ppppuStack4240;
    ppppuStack4192 = param_2;
    do {
      param_2 = ppppuStack4192;
      if (ppppuStack4192 == (undefined8 ****)0x0) goto code_r0x0010ab90;
      ppppuStack4256 = (undefined8 ****)&UNK_0010ab7c;
      ppppuVar12 = ppppuStack4264;
      ppppuStack4344 = param_3;
      lVar5 = func_0x00101650(param_3,ppppuStack4264,ppppuVar11,ppppuStack4288,ppppuStack4280);
    } while (lVar5 != -1);
    ppppuStack4256 = (undefined8 ****)&UNK_0010ac25;
    piVar6 = (int *)func_0x00101610();
    if (*piVar6 != 0x16) {
code_r0x0010ac2e:
      ppppuVar11 = ppppuStack4216;
      param_3 = (undefined8 ****)0xffffffff;
      if ((undefined8 ****)*ppppuStack4224 != ppppuStack4216) {
        ppppuStack4256 = (undefined8 ****)&UNK_0010ac47;
        ppppuStack4288 = (undefined8 ****)func_0x00101610();
        uVar1 = *(uint *)ppppuStack4288;
        ppppuStack4280 = (undefined8 ****)(ulong)uVar1;
        ppppuStack4256 = (undefined8 ****)&UNK_0010ac55;
        ppppuStack4344 = ppppuVar11;
        func_0x001015f0();
        *(uint *)ppppuStack4288 = uVar1;
      }
      goto code_r0x0010abd4;
    }
code_r0x0010ab90:
    ppppuVar12 = (undefined8 ****)0x0;
    ppppuStack4256 = (undefined8 ****)&UNK_0010aba2;
    ppppuStack4344 = param_3;
    lVar5 = func_0x00101650(param_3,0,0,ppppuStack4288,ppppuStack4280);
    if (lVar5 == -1) goto code_r0x0010ac2e;
    if (ppppuStack4176 == (undefined8 ****)0x0) {
      param_3 = (undefined8 ****)0x0;
      *(undefined8 *****)ppppuStack4224 = ppppuStack4216;
      *(undefined8 *****)ppppuStack4232 = ppppuStack4240;
      ppppuVar12 = ppppuStack4216;
      ppppuStack4344 = ppppuStack4240;
      goto code_r0x0010abd4;
    }
    ppppuStack4256 = (undefined8 ****)&UNK_0010ac78;
    func_0x00101600();
  }
  ppppuStack4256 = (undefined8 ****)&UNK_0010ac7d;
  func_0x001016f0();
  uStack4312 = *(ulong *)(in_FS_OFFSET + 0x28);
  ppppuVar13 = ppppuVar12;
  ppppuStack4296 = param_3;
  ppppuStack4272 = param_2;
  ppppuStack4256 = ppppuVar11;
  uStack4336 = func_0x001016e0();
  uVar15 = uStack4336 << 4;
  if (0xfffffff < uStack4336) {
    uVar15 = uStack4336;
  }
  puVar10 = (undefined *)func_0x00101810((undefined8 ****)(uVar15 + 1));
  if (puVar10 == (undefined *)0x0) {
    puVar7 = (undefined4 *)func_0x00101610();
    *puVar7 = 0xc;
  }
  else {
    func_0x00101650(ppppuVar12,0,0,0,0);
    ppppuVar11 = (undefined8 ****)(uVar15 + 1);
    puStack4328 = puVar10;
    uStack4320 = uVar15;
    while (ppppuVar13 = &ppppuStack4344,
          lVar5 = func_0x00101650(ppppuVar12,&ppppuStack4344,&uStack4336,&puStack4328,&uStack4320),
          lVar5 == -1) {
      piVar6 = (int *)func_0x00101610();
      if (*piVar6 == 0x16) break;
      if (*piVar6 != 7) goto code_r0x0010ae6e;
      ppppuVar3 = (undefined8 ****)((long)ppppuVar11 * 2);
      puVar16 = puStack4328 + -(long)puVar10;
      if ((ppppuVar3 <= ppppuVar11) ||
         (ppppuVar13 = ppppuVar3, puVar8 = (undefined *)func_0x00101850(puVar10),
         puVar8 == (undefined *)0x0)) {
        *piVar6 = 0xc;
        goto code_r0x0010ae6e;
      }
      puStack4328 = puVar8 + (long)puVar16;
      uStack4320 = (long)ppppuVar3 + (-1 - (long)puVar16);
      puVar10 = puVar8;
      ppppuVar11 = ppppuVar3;
    }
code_r0x0010ae16:
    ppppuVar13 = (undefined8 ****)0x0;
    lVar5 = func_0x00101650(ppppuVar12,0,0,&puStack4328,&uStack4320);
    if (lVar5 != -1) goto code_r0x0010ae35;
    piVar6 = (int *)func_0x00101610();
    if (*piVar6 != 7) goto code_r0x0010ae6e;
    ppppuVar3 = (undefined8 ****)((long)ppppuVar11 * 2);
    puVar16 = puStack4328 + -(long)puVar10;
    if ((ppppuVar11 < ppppuVar3) &&
       (ppppuVar13 = ppppuVar3, puVar8 = (undefined *)func_0x00101850(puVar10),
       puVar8 != (undefined *)0x0)) {
      puStack4328 = puVar8 + (long)puVar16;
      uStack4320 = (long)ppppuVar3 + (-1 - (long)puVar16);
      puVar10 = puVar8;
      ppppuVar11 = ppppuVar3;
      goto code_r0x0010ae16;
    }
    *piVar6 = 0xc;
code_r0x0010ae6e:
    func_0x001015f0(puVar10);
    puVar10 = (undefined *)0x0;
  }
code_r0x0010ae78:
  pcVar14 = (char *)(uStack4312 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (pcVar14 == (char *)0x0) {
    return (undefined8 ****)puVar10;
  }
  func_0x001016f0();
  if ((*pcVar14 == '\0') || (iVar4 = c_strcasecmp(ppppuVar13,extraout_RDX), iVar4 == 0)) {
    lVar9 = func_0x00101910(pcVar14);
    if (lVar9 == 0) {
      puVar7 = (undefined4 *)func_0x00101610();
      *puVar7 = 0xc;
      return (undefined8 ****)0;
    }
  }
  else {
    lVar5 = func_0x00101950(extraout_RDX,ppppuVar13);
    if (lVar5 == -1) {
      lVar9 = 0;
    }
    else {
      lVar9 = str_cd_iconv(pcVar14,lVar5);
      if (lVar9 == 0) {
        puVar7 = (undefined4 *)func_0x00101610();
        uVar2 = *puVar7;
        func_0x00101880(lVar5);
        *puVar7 = uVar2;
      }
      else {
        iVar4 = func_0x00101880(lVar5);
        if (iVar4 < 0) {
          puVar7 = (undefined4 *)func_0x00101610();
          uVar2 = *puVar7;
          func_0x001015f0(lVar9);
          lVar9 = 0;
          *puVar7 = uVar2;
        }
      }
    }
  }
  return (undefined8 ****)lVar9;
code_r0x0010ae35:
  puVar16 = puStack4328 + 1;
  *puStack4328 = 0;
  ppppuVar13 = (undefined8 ****)(puVar16 + -(long)puVar10);
  puStack4328 = puVar16;
  if ((ppppuVar13 < ppppuVar11) &&
     (puVar16 = (undefined *)func_0x00101850(puVar10), puVar16 != (undefined *)0x0)) {
    puVar10 = puVar16;
  }
  goto code_r0x0010ae78;
}

