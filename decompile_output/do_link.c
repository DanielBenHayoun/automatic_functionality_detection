
ulong do_link(char *param_1,ulong param_2,undefined *param_3,long param_4,uint param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  undefined *puVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long in_FS_OFFSET;
  bool bVar19;
  char *pcStack392;
  int iStack376;
  long lStack360;
  long lStack352;
  long lStack344;
  uint uStack336;
  long lStack216;
  long lStack208;
  uint uStack192;
  ulong uStack64;
  
  uVar13 = (ulong)param_5;
  param_2 = param_2 & 0xffffffff;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  plVar16 = (long *)((ulong)(logical == '\0') << 8);
  if ((int)param_5 < 0) {
    uVar4 = atomic_link();
    uVar13 = (ulong)uVar4;
  }
  iVar3 = (int)uVar13;
  uVar17 = (ulong)symbolic_link;
  pcVar12 = param_1;
  if (iVar3 == 0) {
    if (dest_set == 0) {
      pcStack392 = (char *)0x0;
      plVar16 = (long *)0x0;
      goto code_r0x001030bb;
    }
    if (symbolic_link == 0) {
      iVar3 = func_0x00101f60(1,0xffffff9c,param_1,&lStack360,plVar16);
      if (iVar3 == 0) {
        pcStack392 = (char *)0x0;
        plVar16 = (long *)0x0;
        goto code_r0x00102ce6;
      }
code_r0x001030d0:
      uVar17 = 0;
      param_3 = (undefined *)quotearg_style(4,param_1);
      uVar6 = func_0x00101ed0(0,&UNK_0010afa8,5);
      puVar9 = (uint *)func_0x00101dd0();
      func_0x001021b0(0,(ulong)*puVar9,uVar6,param_3);
      goto code_r0x00102dbb;
    }
    if (verbose != '\0') {
      plVar16 = (long *)0x0;
      pcStack392 = (char *)0x0;
      goto code_r0x0010323b;
    }
    pcStack392 = (char *)0x0;
    plVar16 = (long *)0x0;
    goto code_r0x00102daa;
  }
  iStack376 = 1;
  if (symbolic_link == 0) {
    pcStack392 = (char *)((ulong)pcStack392 & 0xffffffff00000000 | uVar13);
    iStack376 = func_0x00101f60(1,0xffffff9c,param_1,&lStack360,plVar16);
    if (iStack376 != 0) goto code_r0x001030d0;
    uVar17 = (ulong)hard_dir_link;
    if ((hard_dir_link == 0) && ((uStack336 & 0xf000) == 0x4000)) {
      uVar6 = quotearg_n_style_colon(0,3,param_1);
      uVar7 = func_0x00101ed0(0,&UNK_0010b200,5);
      func_0x001021b0(0,0,uVar7,uVar6);
      goto code_r0x00102dbb;
    }
  }
  pcStack392 = (char *)0x0;
  if (relative != '\0') {
    uVar6 = dir_name(param_4);
    lVar11 = canonicalize_filename_mode(uVar6,2);
    lVar10 = canonicalize_filename_mode(param_1,2);
    if ((lVar11 == 0) || (lVar10 == 0)) {
      func_0x00101db0(uVar6);
      func_0x00101db0(lVar11);
      func_0x00101db0(lVar10);
    }
    else {
      pcVar12 = (char *)xmalloc(0x1000);
      cVar1 = relpath(lVar10,lVar11,pcVar12,0x1000);
      if (cVar1 == '\0') {
        func_0x00101db0(pcVar12);
        func_0x00101db0(uVar6);
        func_0x00101db0(lVar11);
        func_0x00101db0(lVar10);
      }
      else {
        func_0x00101db0(uVar6);
        func_0x00101db0(lVar11);
        func_0x00101db0(lVar10);
        pcStack392 = pcVar12;
        if (pcVar12 != (char *)0x0) goto code_r0x00102e16;
      }
    }
    pcVar12 = (char *)xstrdup(param_1);
    pcStack392 = pcVar12;
  }
code_r0x00102e16:
  if (((remove_existing_files == 0) && (interactive == 0)) && (backup_type == 0)) {
code_r0x00102e40:
    uVar6 = 0;
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = &lStack216;
    iVar5 = func_0x00101f60(1,param_2,param_3,plVar16);
    if (iVar5 != 0) {
      plVar16 = (long *)func_0x00101dd0();
      if (*(uint *)plVar16 != 2) {
        uVar17 = 0;
        uVar6 = quotearg_style(4,param_4);
        uVar7 = func_0x00101ed0(0,&UNK_0010afa8,5);
        func_0x001021b0(0,(ulong)*(uint *)plVar16,uVar7,uVar6);
        goto code_r0x00102dbb;
      }
      goto code_r0x00102e40;
    }
    if ((uStack192 & 0xf000) == 0x4000) {
      uVar6 = quotearg_n_style_colon(0,3,param_4);
      uVar17 = 0;
      uVar7 = func_0x00101ed0(0,&UNK_0010b228,5);
      func_0x001021b0(0,0,uVar7,uVar6);
      goto code_r0x00102dbb;
    }
    cVar1 = seen_file(dest_set,param_4,plVar16);
    if (cVar1 != '\0') {
      param_3 = (undefined *)quotearg_n_style(1,4,pcVar12);
      uVar6 = quotearg_n_style(0,4,param_4);
      puVar15 = &UNK_0010b248;
code_r0x0010353b:
      uVar17 = 0;
      uVar7 = func_0x00101ed0(0,puVar15,5);
      func_0x001021b0(0,0,uVar7,uVar6,param_3);
      goto code_r0x00102dbb;
    }
    bVar2 = remove_existing_files;
    if (backup_type != 0) {
      bVar2 = symbolic_link ^ 1;
    }
    if ((((bVar2 != 0) &&
         ((iStack376 == 0 || (iVar5 = func_0x001020d0(1,pcVar12,&lStack360), iVar5 == 0)))) &&
        (lStack352 == lStack208)) &&
       ((lStack360 == lStack216 &&
        ((lStack344 == 1 || (cVar1 = same_nameat(0xffffff9c,pcVar12,param_2,param_3), cVar1 != '\0')
         ))))) {
      param_3 = (undefined *)quotearg_n_style(1,4,param_4);
      uVar6 = quotearg_n_style(0,4,pcVar12);
      puVar15 = &UNK_0010afbc;
      goto code_r0x0010353b;
    }
    if ((iVar3 < 0) || (iVar3 == 0x11)) {
      uVar17 = (ulong)interactive;
      if (interactive != 0) {
        plVar16 = (long *)quotearg_style(4,param_4);
        uVar6 = program_name;
        uVar7 = func_0x00101ed0(0,&UNK_0010afd8,5);
        func_0x00102260(stderr,1,uVar7,uVar6,plVar16);
        cVar1 = yesno();
        if (cVar1 == '\0') goto code_r0x00102dbb;
      }
      if (backup_type == 0) goto code_r0x0010309e;
      plVar16 = (long *)find_backup_file_name(param_2,param_3);
      iVar3 = func_0x00102220(param_2,param_3,param_2,plVar16);
      uVar6 = 1;
      if (iVar3 != 0) {
        puVar9 = (uint *)func_0x00101dd0();
        uVar4 = *puVar9;
        func_0x00101db0(plVar16);
        if (uVar4 != 2) {
          uVar6 = quotearg_style(4,param_4);
          uVar7 = func_0x00101ed0(0,&UNK_0010afe9,5);
          uVar17 = 0;
          func_0x001021b0(0,(ulong)uVar4,uVar7,uVar6);
          goto code_r0x00102dbb;
        }
        goto code_r0x00102e40;
      }
    }
    else {
code_r0x0010309e:
      uVar6 = 1;
      plVar16 = (long *)0x0;
    }
  }
  if (symbolic_link == 0) {
    uVar4 = force_linkat(0xffffff9c,pcVar12,param_2,param_3,(ulong)(logical != '\0') << 10,uVar6,
                         uVar13);
  }
  else {
    uVar4 = force_symlinkat(pcVar12,param_2,param_3,uVar6,uVar13);
  }
  if ((int)uVar4 < 1) goto code_r0x001030bb;
  uVar6 = quotearg_n_style(1,4,pcVar12);
  uVar7 = quotearg_n_style(0,4,param_4);
  if (symbolic_link == 0) {
    if (uVar4 == 0x1f) {
      uVar8 = func_0x00101ed0(0,&UNK_0010b2c8,5);
    }
    else {
      if (((uVar4 == 0x7a) || (uVar4 == 0x11)) || ((uVar4 & 0xfffffffd) == 0x1c)) {
        uVar8 = func_0x00101ed0(0,&UNK_0010b009,5);
      }
      else {
        uVar8 = func_0x00101ed0(0,&UNK_0010b2f0,5);
      }
    }
  }
  else {
    if ((uVar4 == 0x24) || (*pcVar12 == '\0')) {
      uVar8 = func_0x00101ed0(0,&UNK_0010b2a0,5);
    }
    else {
      uVar8 = func_0x00101ed0(0,&UNK_0010b278,5);
    }
  }
  uVar17 = 0;
  func_0x001021b0(0,(ulong)uVar4,uVar8,uVar7,uVar6);
  if ((plVar16 != (long *)0x0) &&
     (iVar3 = func_0x00102220(param_2,plVar16,param_2,param_3), iVar3 != 0)) {
    param_3 = (undefined *)quotearg_style(4,param_4);
    uVar6 = func_0x00101ed0(0,&UNK_0010b027,5);
    puVar9 = (uint *)func_0x00101dd0();
    func_0x001021b0(0,(ulong)*puVar9,uVar6,param_3);
  }
code_r0x00102daa:
  while( true ) {
    func_0x00101db0(plVar16);
    func_0x00101db0(pcStack392);
code_r0x00102dbb:
    pcVar12 = (char *)(uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28));
    if (pcVar12 == (char *)0x0) break;
    func_0x00101f20();
code_r0x001030bb:
    if (symbolic_link == 0) {
code_r0x00102ce6:
      record_file(dest_set,param_4,&lStack360);
    }
    uVar17 = 1;
    if (verbose != '\0') {
      param_1 = pcVar12;
      if (plVar16 == (long *)0x0) {
code_r0x0010323b:
        puVar15 = &UNK_0010c6f8;
        param_3 = &UNK_0010c6f8;
      }
      else {
        param_3 = param_3 + -param_4;
        if ((long)param_3 < 1) {
          plVar14 = (long *)0x0;
          plVar18 = plVar16;
        }
        else {
          lVar11 = func_0x00101ef0(plVar16);
          plVar14 = (long *)xmalloc(param_3 + lVar11 + 1);
          func_0x001020a0(plVar14,param_4,param_3);
          func_0x00101e00((long)plVar14 + (long)param_3,plVar16);
          plVar18 = plVar14;
        }
        param_3 = (undefined *)quotearg_n_style(2,4,plVar18);
        puVar15 = &UNK_0010afa4;
        func_0x00101db0(plVar14);
      }
      uVar6 = quotearg_n_style(1,4,param_1);
      bVar19 = symbolic_link == 0;
      uVar7 = quotearg_n_style(0,4,param_4);
      uVar17 = 1;
      func_0x00102170(1,&UNK_0010affa,param_3,puVar15,uVar7,(ulong)((-(uint)bVar19 & 0x10) + 0x2d),
                      uVar6);
    }
  }
  return uVar17;
}

