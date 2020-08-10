
char * find_bind_mount(char *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char extraout_DL;
  char **ppcVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  char cVar11;
  char *pcVar12;
  undefined1 *puVar13;
  long in_FS_OFFSET;
  undefined uStack344;
  undefined7 uStack343;
  long lStack336;
  long lStack200;
  long lStack192;
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (tried_mount_list_7429 == '\0') {
    mount_list_7428 = (char **)read_file_system_list(0);
    if (mount_list_7428 == (char **)0x0) {
      uVar4 = func_0x00101e20(0,&UNK_0010e350,5);
      puVar2 = (uint *)func_0x00101d40();
      func_0x00102120(0,(ulong)*puVar2,&UNK_0010f36a,uVar4);
    }
    tried_mount_list_7429 = '\x01';
  }
  pcVar12 = (char *)0x1;
  pcVar8 = param_1;
  iVar1 = func_0x00102020(1,param_1,&uStack344);
  cVar7 = (char)pcVar8;
  cVar11 = (char)pcVar12;
  if ((iVar1 == 0) && (mount_list_7428 != (char **)0x0)) {
    ppcVar6 = mount_list_7428;
    do {
      if (((*(byte *)(ppcVar6 + 5) & 1) != 0) && (pcVar9 = *ppcVar6, *pcVar9 == '/')) {
        pcVar12 = ppcVar6[1];
        pcVar8 = param_1;
        iVar1 = func_0x00101fc0();
        if (iVar1 == 0) {
          pcVar12 = (char *)0x1;
          iVar1 = func_0x00102020(1,pcVar9,&lStack200);
          cVar7 = (char)pcVar9;
          cVar11 = (char)pcVar12;
          pcVar8 = pcVar9;
          if (((iVar1 == 0) && (lStack336 == lStack192)) &&
             (CONCAT71(uStack343,uStack344) == lStack200)) {
            pcVar12 = *ppcVar6;
            goto code_r0x00103e12;
          }
        }
      }
      cVar7 = (char)pcVar8;
      cVar11 = (char)pcVar12;
      ppcVar6 = (char **)ppcVar6[6];
    } while (ppcVar6 != (char **)0x0);
  }
  pcVar12 = (char *)0x0;
code_r0x00103e12:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar12;
  }
  func_0x00101e80();
  if (cVar11 == '\0') {
    if (cVar7 == '\0') {
      uVar4 = func_0x00101e20(0,&UNK_0010e430,5);
      uVar4 = xstrdup(uVar4);
      puVar10 = &UNK_0010e470;
      if (extraout_DL == '\0') {
        puVar10 = &UNK_0010e4b0;
      }
      uVar3 = func_0x00101e20(0,puVar10,5);
      uVar3 = xasprintf(&UNK_0010ddd2,uVar4,uVar3);
      func_0x00101d10(uVar4);
      uVar4 = func_0x00101e20(0,&UNK_0010e4e0,5);
      uVar4 = xasprintf(&UNK_0010ddd2,uVar3,uVar4);
      func_0x00101d10(uVar3);
      uVar3 = func_0x00101e20(0,&UNK_0010e520,5);
      uVar3 = xasprintf(&UNK_0010ddd2,uVar4,uVar3);
      func_0x00101d10(uVar4);
      return (char *)uVar3;
    }
    puVar13 = fmt_terse_regular;
  }
  else {
    if (cVar7 == '\0') {
      puVar13 = (undefined1 *)func_0x00101e20(0,&UNK_0010e380,5);
    }
    else {
      puVar13 = fmt_terse_fs;
    }
  }
  lVar5 = func_0x00101e40(puVar13);
  lVar5 = lVar5 + 1;
  uVar4 = xmalloc(lVar5,lVar5);
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)PTR_memcpy_00312ea0)(uVar4,puVar13,lVar5);
  return (char *)uVar4;
}

