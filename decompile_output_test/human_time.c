
char * human_time(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char extraout_DL;
  char **ppcVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  char cVar11;
  undefined1 *puVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  undefined uStack480;
  undefined7 uStack479;
  long lStack472;
  long lStack336;
  long lStack328;
  long lStack184;
  undefined *puStack168;
  ulong uStack160;
  undefined8 uStack136;
  ulong uStack128;
  undefined auStack120 [64];
  undefined auStack56 [24];
  long lStack32;
  
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  uStack136 = param_1;
  uStack128 = param_2;
  if (tz_7299 == 0) {
    uVar5 = func_0x00101cf0(&UNK_0010ddaf);
    tz_7299 = tzalloc(uVar5);
  }
  uStack160 = uStack128;
  puStack168 = auStack120;
  lVar2 = localtime_rz(tz_7299,&uStack136,puStack168);
  if (lVar2 == 0) {
    uVar5 = imaxtostr(uStack136,auStack56);
    puVar12 = str_7298;
    func_0x00102220(str_7298,1,0x3d,&UNK_0010ddca,uVar5,uStack160 & 0xffffffff);
  }
  else {
    puVar12 = str_7298;
    nstrftime(str_7298,0x3d,&UNK_0010ddb2,puStack168,tz_7299,uStack160 & 0xffffffff);
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return str_7298;
  }
  func_0x00101e80();
  lStack184 = *(long *)(in_FS_OFFSET + 0x28);
  if (tried_mount_list_7429 == '\0') {
    mount_list_7428 = (char **)read_file_system_list(0);
    if (mount_list_7428 == (char **)0x0) {
      uVar5 = func_0x00101e20(0,&UNK_0010e350,5);
      puVar3 = (uint *)func_0x00101d40();
      func_0x00102120(0,(ulong)*puVar3,&UNK_0010f36a,uVar5);
    }
    tried_mount_list_7429 = '\x01';
  }
  pcVar13 = (char *)0x1;
  pcVar8 = puVar12;
  iVar1 = func_0x00102020(1,puVar12,&uStack480);
  cVar7 = (char)pcVar8;
  cVar11 = (char)pcVar13;
  if ((iVar1 == 0) && (mount_list_7428 != (char **)0x0)) {
    ppcVar6 = mount_list_7428;
    do {
      if (((*(byte *)(ppcVar6 + 5) & 1) != 0) && (pcVar9 = *ppcVar6, *pcVar9 == '/')) {
        pcVar13 = ppcVar6[1];
        pcVar8 = puVar12;
        iVar1 = func_0x00101fc0();
        if (iVar1 == 0) {
          pcVar13 = (char *)0x1;
          iVar1 = func_0x00102020(1,pcVar9,&lStack336);
          cVar7 = (char)pcVar9;
          cVar11 = (char)pcVar13;
          pcVar8 = pcVar9;
          if (((iVar1 == 0) && (lStack472 == lStack328)) &&
             (CONCAT71(uStack479,uStack480) == lStack336)) {
            pcVar13 = *ppcVar6;
            goto code_r0x00103e12;
          }
        }
      }
      cVar7 = (char)pcVar8;
      cVar11 = (char)pcVar13;
      ppcVar6 = (char **)ppcVar6[6];
    } while (ppcVar6 != (char **)0x0);
  }
  pcVar13 = (char *)0x0;
code_r0x00103e12:
  if (lStack184 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar13;
  }
  func_0x00101e80();
  if (cVar11 == '\0') {
    if (cVar7 == '\0') {
      uVar5 = func_0x00101e20(0,&UNK_0010e430,5);
      uVar5 = xstrdup(uVar5);
      puVar10 = &UNK_0010e470;
      if (extraout_DL == '\0') {
        puVar10 = &UNK_0010e4b0;
      }
      uVar4 = func_0x00101e20(0,puVar10,5);
      uVar4 = xasprintf(&UNK_0010ddd2,uVar5,uVar4);
      func_0x00101d10(uVar5);
      uVar5 = func_0x00101e20(0,&UNK_0010e4e0,5);
      uVar5 = xasprintf(&UNK_0010ddd2,uVar4,uVar5);
      func_0x00101d10(uVar4);
      uVar4 = func_0x00101e20(0,&UNK_0010e520,5);
      uVar4 = xasprintf(&UNK_0010ddd2,uVar5,uVar4);
      func_0x00101d10(uVar5);
      return (char *)uVar4;
    }
    puVar12 = fmt_terse_regular;
  }
  else {
    if (cVar7 == '\0') {
      puVar12 = (undefined1 *)func_0x00101e20(0,&UNK_0010e380,5);
    }
    else {
      puVar12 = fmt_terse_fs;
    }
  }
  lVar2 = func_0x00101e40(puVar12);
  lVar2 = lVar2 + 1;
  uVar5 = xmalloc(lVar2,lVar2);
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)PTR_memcpy_00312ea0)(uVar5,puVar12,lVar2);
  return (char *)uVar5;
}

