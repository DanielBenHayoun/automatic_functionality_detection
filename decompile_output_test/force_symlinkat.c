
ulong force_symlinkat(long *param_1,long *param_2,long *param_3,char param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  ulong *extraout_RDX;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long in_FS_OFFSET;
  long *plStack328;
  undefined4 uStack320;
  long alStack312 [33];
  long lStack48;
  
  plVar7 = (long *)((ulong)param_2 & 0xffffffff);
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = param_1;
  if ((int)param_5 < 0) {
    param_5 = func_0x00102280();
    if (param_5 == 0) goto code_r0x00103dd8;
    puVar3 = (uint *)func_0x00101dd0();
    param_5 = *puVar3;
  }
  if ((param_4 == '\x01') && (param_5 == 0x11)) {
    param_2 = alStack312;
    plVar6 = param_3;
    plVar5 = (long *)samedir_template(param_3);
    if (plVar5 == (long *)0x0) {
      puVar3 = (uint *)func_0x00101dd0();
      param_5 = *puVar3;
    }
    else {
      param_2 = (long *)0x0;
      uStack320 = SUB84(plVar7,0);
      plVar6 = plVar5;
      plStack328 = param_1;
      iVar2 = try_tempname_len(plVar5,0,&plStack328,try_symlink);
      if (iVar2 == 0) {
        param_2 = plVar5;
        plVar6 = plVar7;
        iVar2 = func_0x00102220(plVar7,plVar5,plVar7,param_3);
        param_5 = 0xffffffff;
        if (iVar2 != 0) {
          puVar3 = (uint *)func_0x00101dd0();
          param_5 = *puVar3;
          param_2 = plVar5;
          func_0x00101e40(plVar7,plVar5,0);
          plVar6 = plVar7;
        }
      }
      else {
        puVar3 = (uint *)func_0x00101dd0();
        param_5 = *puVar3;
      }
      if (plVar5 != alStack312) {
        func_0x00101db0(plVar5);
        plVar6 = plVar5;
      }
    }
  }
code_r0x00103dd8:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)param_5;
  }
  func_0x00101f20();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    uVar4 = func_0x00101ef0();
    if (*extraout_RDX < uVar4 || *extraout_RDX == uVar4) {
      return 1;
    }
    func_0x001020a0(lVar1,plVar6,uVar4 + 1);
    *param_2 = *param_2 + uVar4;
    *extraout_RDX = *extraout_RDX - uVar4;
    return 0;
  }
  func_0x00102030();
  return 0;
}

