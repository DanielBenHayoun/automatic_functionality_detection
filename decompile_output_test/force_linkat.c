
ulong force_linkat(long *param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,
                  ulong param_6,uint param_7)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *extraout_RDX;
  ulong *extraout_RDX_00;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  char cVar11;
  long in_FS_OFFSET;
  long *plStack704;
  undefined4 uStack696;
  long alStack688 [33];
  long lStack424;
  ulong uStack416;
  long *plStack408;
  ulong uStack400;
  long *plStack392;
  undefined *puStack384;
  long *plStack376;
  uint uStack364;
  undefined4 auStack360 [2];
  long *plStack352;
  undefined4 uStack344;
  undefined4 uStack340;
  long alStack328 [33];
  ulong uStack64;
  
  cVar11 = (char)param_6;
  uVar5 = (ulong)param_1 & 0xffffffff;
  plStack408 = (long *)(param_3 & 0xffffffff);
  uStack400 = param_5 & 0xffffffff;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  plVar7 = param_2;
  if ((int)param_7 < 0) {
    plStack376 = (long *)((ulong)plStack376 & 0xffffffff00000000 | param_6 & 0xffffffff);
    puStack384 = &UNK_00103cbc;
    uVar3 = func_0x00102150();
    uVar6 = (ulong)uVar3;
    if (uVar3 != 0) {
      puStack384 = &UNK_00103cc7;
      puVar4 = (uint *)func_0x00101dd0();
      cVar11 = (char)plStack376;
      param_7 = *puVar4;
      goto code_r0x00103c01;
    }
  }
  else {
code_r0x00103c01:
    uVar6 = (ulong)param_7;
    if ((cVar11 == '\x01') && (param_7 == 0x11)) {
      plVar7 = alStack328;
      puStack384 = &UNK_00103c20;
      param_1 = param_4;
      plStack376 = plVar7;
      plVar8 = (long *)samedir_template();
      if (plVar8 == (long *)0x0) {
        puStack384 = &UNK_00103d15;
        puVar4 = (uint *)func_0x00101dd0();
        uVar6 = (ulong)*puVar4;
      }
      else {
        plVar7 = (long *)0x0;
        param_5 = 6;
        auStack360[0] = (undefined4)uVar5;
        uStack344 = SUB84(plStack408,0);
        uStack340 = (undefined4)uStack400;
        puStack384 = &UNK_00103c5b;
        param_1 = plVar8;
        plStack352 = param_2;
        iVar2 = try_tempname_len(plVar8,0,auStack360);
        if (iVar2 == 0) {
          puStack384 = &UNK_00103ce7;
          iVar2 = func_0x00102220(plStack408,plVar8,plStack408,param_4);
          uStack364 = 0xffffffff;
          if (iVar2 != 0) {
            puStack384 = &UNK_00103cf5;
            puVar4 = (uint *)func_0x00101dd0();
            uStack364 = *puVar4;
          }
          puStack384 = &UNK_00103d07;
          plVar7 = plVar8;
          param_1 = plStack408;
          func_0x00101e40(plStack408,plVar8,0);
          uVar3 = uStack364;
        }
        else {
          puStack384 = &UNK_00103c64;
          puVar4 = (uint *)func_0x00101dd0();
          uVar3 = *puVar4;
        }
        uVar6 = (ulong)uVar3;
        if (plVar8 != plStack376) {
          plStack376 = (long *)((ulong)plStack376 & 0xffffffff00000000 | (ulong)uVar3);
          puStack384 = &UNK_00103c77;
          func_0x00101db0();
          uVar6 = (ulong)plStack376 & 0xffffffff;
          param_1 = plVar8;
        }
      }
    }
  }
  uStack416 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  cVar11 = (char)uVar6;
  if (uStack416 == 0) {
    return uVar6;
  }
  puStack384 = &UNK_00103d21;
  func_0x00101f20();
  plVar10 = (long *)((ulong)plVar7 & 0xffffffff);
  lStack424 = *(long *)(in_FS_OFFSET + 0x28);
  plVar8 = param_1;
  plStack392 = param_2;
  puStack384 = (undefined *)uVar5;
  if ((int)param_5 < 0) {
    uVar3 = func_0x00102280();
    param_5 = (ulong)uVar3;
    if (uVar3 == 0) goto code_r0x00103dd8;
    puVar4 = (uint *)func_0x00101dd0();
    param_5 = (ulong)*puVar4;
  }
  if ((cVar11 == '\x01') && ((int)param_5 == 0x11)) {
    plVar7 = alStack688;
    plVar8 = extraout_RDX;
    plVar9 = (long *)samedir_template(extraout_RDX);
    if (plVar9 == (long *)0x0) {
      puVar4 = (uint *)func_0x00101dd0();
      param_5 = (ulong)*puVar4;
    }
    else {
      plVar7 = (long *)0x0;
      uStack696 = SUB84(plVar10,0);
      plVar8 = plVar9;
      plStack704 = param_1;
      iVar2 = try_tempname_len(plVar9,0,&plStack704,try_symlink);
      if (iVar2 == 0) {
        plVar7 = plVar9;
        plVar8 = plVar10;
        iVar2 = func_0x00102220(plVar10,plVar9,plVar10,extraout_RDX);
        param_5 = 0xffffffff;
        if (iVar2 != 0) {
          puVar4 = (uint *)func_0x00101dd0();
          uVar3 = *puVar4;
          plVar7 = plVar9;
          func_0x00101e40(plVar10,plVar9,0);
          param_5 = (ulong)uVar3;
          plVar8 = plVar10;
        }
      }
      else {
        puVar4 = (uint *)func_0x00101dd0();
        param_5 = (ulong)*puVar4;
      }
      if (plVar9 != alStack688) {
        func_0x00101db0(plVar9);
        plVar8 = plVar9;
      }
    }
  }
code_r0x00103dd8:
  if (lStack424 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_5 & 0xffffffff;
  }
  func_0x00101f20();
  lVar1 = *plVar7;
  if (lVar1 != 0) {
    uVar5 = func_0x00101ef0();
    if (*extraout_RDX_00 < uVar5 || *extraout_RDX_00 == uVar5) {
      return 1;
    }
    func_0x001020a0(lVar1,plVar8,uVar5 + 1);
    *plVar7 = *plVar7 + uVar5;
    *extraout_RDX_00 = *extraout_RDX_00 - uVar5;
    return 0;
  }
  func_0x00102030();
  return 0;
}

