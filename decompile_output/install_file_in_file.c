
/* WARNING: Could not reconcile some variable overlaps */

undefined8 install_file_in_file(char *param_1,char *param_2,long param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined2 *puVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined *puVar15;
  long in_FS_OFFSET;
  uint uStack508;
  undefined auStack504 [24];
  uint uStack480;
  undefined8 uStack432;
  undefined8 uStack424;
  undefined8 uStack416;
  ulong uStack408;
  undefined auStack360 [24];
  uint uStack336;
  long lStack312;
  undefined8 uStack216;
  undefined8 uStack208;
  undefined8 uStack200;
  undefined8 uStack192;
  int iStack184;
  long lStack168;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(char *)(param_3 + 0x1f) != '\0') &&
     (iVar2 = func_0x00102dd0(1,param_1,auStack504), iVar2 != 0)) {
    param_2 = (char *)quotearg_style(4,param_1);
    puVar15 = &UNK_001163f5;
    goto code_r0x001043b5;
  }
  uVar3 = mode;
  if (((((((copy_only_if_needed != '\0') && ((mode & 0xffff0e00) == 0)) &&
         (iVar2 = func_0x00102b00(1,param_1,auStack360), iVar2 == 0)) &&
        ((iVar2 = func_0x00102b00(1,param_2,&uStack216), iVar2 == 0 &&
         ((uStack336 & 0xf000) == 0x8000)))) &&
       ((((uint)uStack192 & 0xf000) == 0x8000 &&
        (((uStack336 & 0xffff0e00) == 0 && ((uStack192 & 0xffff0e00) == 0)))))) &&
      (lStack312 == lStack168)) && (uVar3 == ((uint)uStack192 & 0xfff))) {
    iVar2 = owner_id;
    if (owner_id == -1) {
      piVar12 = (int *)func_0x00102950();
      *piVar12 = 0;
      iVar2 = func_0x00102b40();
      if ((iVar2 == -1) && (*piVar12 != 0)) goto code_r0x001042ca;
    }
    if (iVar2 == uStack192._4_4_) {
      iVar2 = group_id;
      if (group_id == -1) goto code_r0x001048a5;
      goto code_r0x0010455f;
    }
  }
code_r0x001042ca:
  cVar1 = copy(param_1,param_2,0,param_3,&uStack508,0);
  if (cVar1 != '\0') goto code_r0x00104323;
code_r0x001042e6:
  uVar5 = 0;
code_r0x001042e8:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
  func_0x00102b30();
  do {
    uVar5 = strip_program;
    func_0x00103080(strip_program,strip_program,param_2,0);
    param_2 = (char *)quotearg_style(4,uVar5);
    param_3 = func_0x00102ad0(0,&UNK_0011641c,5);
    puVar11 = (uint *)func_0x00102950();
    func_0x00102f30(1,(ulong)*puVar11,param_3,param_2);
code_r0x001048a5:
    piVar12 = (int *)func_0x00102950();
    *piVar12 = 0;
    iVar2 = func_0x00102dc0();
    if ((iVar2 == -1) && (*piVar12 != 0)) goto code_r0x001042ca;
code_r0x0010455f:
    if (iVar2 != iStack184) goto code_r0x001042ca;
    if ((selinux_enabled != 0) && (*(char *)(param_3 + 0x25) != '\0')) {
      puVar13 = (undefined4 *)func_0x00102950();
      *puVar13 = 0x5f;
      goto code_r0x001042ca;
    }
    uVar3 = func_0x00102f60(param_1,0);
    if ((int)uVar3 < 0) goto code_r0x001042ca;
    uVar4 = func_0x00102f60(param_2,0);
    if ((int)uVar4 < 0) {
      func_0x00102c30((ulong)uVar3);
      goto code_r0x001042ca;
    }
    while (lVar6 = full_read((ulong)uVar3,a_buff_7455,0x1000), lVar6 != 0) {
      lVar7 = full_read((ulong)uVar4,b_buff_7456,0x1000);
      if ((lVar7 != lVar6) || (iVar2 = func_0x00102c90(a_buff_7455,b_buff_7456,lVar7), iVar2 != 0))
      {
        func_0x00102c30((ulong)uVar3);
        func_0x00102c30((ulong)uVar4);
        goto code_r0x001042ca;
      }
    }
    func_0x00102c30((ulong)uVar3);
    func_0x00102c30((ulong)uVar4);
code_r0x00104323:
    if (strip_files == '\0') {
      if (*(char *)(param_3 + 0x1f) != '\0') goto code_r0x0010433a;
      goto code_r0x001043e0;
    }
    uVar3 = func_0x001030a0();
    if (uVar3 == 0xffffffff) {
      puVar15 = &UNK_00116404;
      goto code_r0x0010472c;
    }
  } while (uVar3 == 0);
  iVar2 = func_0x00102f40((ulong)uVar3,&uStack508,0);
  if (iVar2 < 0) {
    puVar15 = &UNK_0011642a;
code_r0x0010472c:
    uVar5 = func_0x00102ad0(0,puVar15,5);
    puVar11 = (uint *)func_0x00102950();
    func_0x00102f30(0,(ulong)*puVar11,uVar5);
code_r0x00104749:
    iVar2 = func_0x00102960(param_2);
    if (iVar2 == 0) goto code_r0x001042e6;
    param_2 = (char *)quotearg_style(4,param_2);
    param_3 = func_0x00102ad0(0,&UNK_0011643c,5);
    puVar11 = (uint *)func_0x00102950();
    func_0x00102f30(1,(ulong)*puVar11,param_3);
  }
  else {
    if (((uStack508 & 0x7f) != 0) || ((char)((ulong)uStack508 >> 8) != '\0')) {
      uVar5 = func_0x00102ad0(0,&UNK_00116688,5);
      func_0x00102f30(0,0,uVar5);
      goto code_r0x00104749;
    }
  }
  if (*(char *)(param_3 + 0x1f) != '\0') {
    if (strip_files == '\0') {
code_r0x0010433a:
      if ((uStack480 & 0xf000) == 0x8000) goto code_r0x001043e0;
    }
    uStack216 = uStack432;
    uStack208 = uStack424;
    uStack200 = uStack416;
    uStack192 = uStack408;
    iVar2 = utimens(param_2);
    if (iVar2 != 0) goto code_r0x00104399;
  }
code_r0x001043e0:
  if (((owner_id == -1) && (group_id == -1)) || (iVar2 = func_0x00102e40(param_2), iVar2 == 0)) {
    uVar5 = 1;
    iVar2 = func_0x00102f10(param_2,(ulong)mode);
    if (iVar2 != 0) {
      param_1 = (char *)quotearg_style(4,param_2);
      puVar15 = &UNK_001166b0;
      goto code_r0x00104664;
    }
  }
  else {
    param_1 = (char *)quotearg_style(4,param_2);
    puVar15 = &UNK_0011646a;
code_r0x00104664:
    uVar8 = func_0x00102ad0(0,puVar15,5);
    puVar11 = (uint *)func_0x00102950();
    uVar5 = 0;
    func_0x00102f30(0,(ulong)*puVar11,uVar8);
  }
  if (((use_default_selinux_context != '\0') && (selinux_enabled == 1)) &&
     (iVar2 = func_0x00102b00(1,param_2,&uStack216), iVar2 == 0)) {
    if ((first_call_7488 != '\0') && (*param_2 == '/')) {
      cVar1 = param_2[1];
      pcVar9 = param_2 + 1;
      while (cVar1 == '/') {
        pcVar9 = pcVar9 + 1;
        cVar1 = *pcVar9;
      }
      pcVar14 = pcVar9;
      if (cVar1 != '\0') {
        do {
          pcVar14 = pcVar14 + 1;
          if (*pcVar14 == '\0') break;
        } while (*pcVar14 != '/');
        param_2 = pcVar9 + -1;
        param_1 = pcVar14 + -(long)param_2;
        lVar6 = func_0x00102df0(param_1 + 2);
        if (lVar6 != 0) {
          puVar10 = (undefined2 *)func_0x00102ea0(lVar6,param_2,param_1);
          *puVar10 = 0x2f;
          func_0x001030d0(lVar6);
        }
      }
    }
    first_call_7488 = '\0';
    puVar13 = (undefined4 *)func_0x00102950();
    *puVar13 = 0x5f;
  }
  goto code_r0x001042e8;
code_r0x00104399:
  param_2 = (char *)quotearg_style(4,param_2);
  puVar15 = &UNK_0011644d;
code_r0x001043b5:
  uVar5 = func_0x00102ad0(0,puVar15,5);
  puVar11 = (uint *)func_0x00102950();
  func_0x00102f30(0,(ulong)*puVar11,uVar5,param_2);
  goto code_r0x001042e6;
}

