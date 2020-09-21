
void print_stuff(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  undefined8 extraout_RDX;
  byte **ppbVar10;
  ulong unaff_RBX;
  undefined *puVar11;
  undefined8 *unaff_RBP;
  undefined uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong unaff_R12;
  byte *pbVar15;
  undefined1 *unaff_R13;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  byte *pbStack224;
  undefined *puStack216;
  byte *apbStack208 [5];
  undefined *puStack168;
  undefined *puStack160;
  undefined *puStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined8 uStack128;
  undefined8 uStack120;
  undefined8 uStack104;
  ulong uStack88;
  undefined8 *puStack80;
  ulong uStack72;
  undefined1 *puStack64;
  long lStack56;
  long lStack48;
  
  bVar18 = 0;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (just_user == '\0') {
    if (just_group == '\0') {
      if (just_group_list == '\0') {
        puStack64 = &UNK_0010222e;
        uVar5 = umaxtostr((ulong)ruid,buf_7126);
        puStack64 = &UNK_00102244;
        uVar6 = func_0x001016c0(0,&UNK_001067a5,5);
        puStack64 = &UNK_00102256;
        func_0x001018c0(1,uVar6,uVar5);
        puStack64 = &UNK_00102261;
        unaff_RBP = (undefined8 *)func_0x001016a0((ulong)ruid);
        if (unaff_RBP != (undefined8 *)0x0) {
          puStack64 = &UNK_0010227f;
          func_0x001018c0(1,&UNK_00106796,*unaff_RBP);
        }
        puStack64 = &UNK_00102291;
        uVar5 = umaxtostr((ulong)rgid,buf_7122);
        puStack64 = &UNK_001022a7;
        uVar6 = func_0x001016c0(0,&UNK_0010679b,5);
        puStack64 = &UNK_001022b9;
        func_0x001018c0(1,uVar6,uVar5);
        puStack64 = &UNK_001022c4;
        puVar7 = (undefined8 *)func_0x00101740();
        if (puVar7 != (undefined8 *)0x0) {
          puStack64 = &UNK_001022df;
          func_0x001018c0(1,&UNK_00106796,*puVar7);
        }
        if (euid != ruid) {
          puStack64 = &UNK_001023cc;
          uVar5 = umaxtostr((ulong)euid,buf_7126);
          puStack64 = &UNK_001023e2;
          uVar6 = func_0x001016c0(0,&UNK_001067a3,5);
          puStack64 = &UNK_001023f4;
          func_0x001018c0(1,uVar6,uVar5);
          puStack64 = &UNK_001023ff;
          unaff_RBP = (undefined8 *)func_0x001016a0();
          if (unaff_RBP != (undefined8 *)0x0) {
            puStack64 = &UNK_00102421;
            func_0x001018c0(1,&UNK_00106796,*unaff_RBP);
          }
        }
        if (egid != rgid) {
          puStack64 = &UNK_00102364;
          uVar5 = umaxtostr((ulong)egid,buf_7122);
          puStack64 = &UNK_0010237a;
          uVar6 = func_0x001016c0(0,&UNK_001067ac,5);
          puStack64 = &UNK_0010238c;
          func_0x001018c0(1,uVar6,uVar5);
          puStack64 = &UNK_00102397;
          puVar7 = (undefined8 *)func_0x00101740((ulong)egid);
          if (puVar7 != (undefined8 *)0x0) {
            puStack64 = &UNK_001023b6;
            func_0x001018c0(1,&UNK_00106796,*puVar7);
          }
        }
        if (param_1 == 0) {
          puStack64 = &UNK_0010243d;
          uVar3 = xgetgroups(0,(ulong)egid,&lStack56);
          unaff_R12 = (ulong)uVar3;
          if ((int)uVar3 < 0) {
            puStack64 = &UNK_0010245b;
            param_1 = func_0x001016c0(0,&UNK_00106270,5);
            puStack64 = &UNK_00102463;
            puVar8 = (uint *)func_0x00101640();
            puStack64 = &UNK_00102471;
            func_0x001018d0(0,(ulong)*puVar8,param_1);
            goto code_r0x00102471;
          }
        }
        else {
          uVar13 = 0xffffffff;
          if (unaff_RBP != (undefined8 *)0x0) {
            uVar13 = (ulong)*(uint *)((long)unaff_RBP + 0x14);
          }
          puStack64 = &UNK_00102320;
          uVar3 = xgetgroups(param_1,uVar13,&lStack56);
          unaff_R12 = (ulong)uVar3;
          if ((int)uVar3 < 0) {
            puStack64 = &UNK_00102588;
            unaff_RBP = (undefined8 *)quote(param_1);
            puStack64 = &UNK_0010259e;
            param_1 = func_0x001016c0(0,&UNK_00106248,5);
            puStack64 = &UNK_001025a6;
            puVar8 = (uint *)func_0x00101640();
            puStack64 = &UNK_001025b7;
            func_0x001018d0(0,(ulong)*puVar8,param_1,unaff_RBP);
code_r0x00102471:
            ok = 0;
            goto code_r0x001020b9;
          }
        }
        uVar13 = stdout;
        if ((uint)unaff_R12 != 0) {
          unaff_RBP = (undefined8 *)0x0;
          unaff_R13 = buf_7122;
          puStack64 = &UNK_001024eb;
          uVar5 = func_0x001016c0(0,&UNK_001067b5,5);
          param_1 = 0;
          puStack64 = &UNK_001024f8;
          func_0x001017c0(uVar5,uVar13);
          while( true ) {
            puStack64 = &UNK_00102525;
            uVar5 = umaxtostr((ulong)*(uint *)(lStack56 + param_1),buf_7122);
            puStack64 = &UNK_00102530;
            func_0x001017c0(uVar5);
            puStack64 = &UNK_0010253c;
            puVar7 = (undefined8 *)func_0x00101740((ulong)*(uint *)(lStack56 + param_1));
            if (puVar7 != (undefined8 *)0x0) {
              puStack64 = &UNK_00102557;
              func_0x001018c0(1,&UNK_00106796,*puVar7);
            }
            uVar3 = (int)unaff_RBP + 1;
            unaff_RBP = (undefined8 *)(ulong)uVar3;
            if (uVar3 == (uint)unaff_R12) break;
            puVar11 = *(undefined **)(stdout + 0x28);
            if (puVar11 < *(undefined **)(stdout + 0x30)) {
              *(undefined **)(stdout + 0x28) = puVar11 + 1;
              *puVar11 = 0x2c;
            }
            else {
              puStack64 = &UNK_0010257e;
              func_0x00101750(stdout,0x2c);
            }
            param_1 = param_1 + 4;
          }
        }
        puStack64 = &UNK_0010233d;
        func_0x00101620(lStack56);
      }
      else {
        puStack64 = &UNK_001021c1;
        bVar2 = print_group_list(param_1,(ulong)ruid,(ulong)rgid,(ulong)egid,(ulong)use_name,
                                 (ulong)(opt_zero == '\0') << 5);
        ok = ok & bVar2;
      }
    }
    else {
      uVar3 = egid;
      if (use_real != '\0') {
        uVar3 = rgid;
      }
      puStack64 = &UNK_00102152;
      bVar2 = print_group((ulong)uVar3);
      ok = ok & bVar2;
      param_1 = unaff_RBX;
    }
  }
  else {
    uVar3 = euid;
    if (use_real != '\0') {
      uVar3 = ruid;
    }
    param_1 = (ulong)uVar3;
    if (use_name == 0) {
code_r0x0010209b:
      puStack64 = &UNK_001020aa;
      uVar5 = umaxtostr(param_1,buf_7126);
    }
    else {
      puStack64 = &UNK_00102167;
      puVar7 = (undefined8 *)func_0x001016a0(param_1);
      if (puVar7 == (undefined8 *)0x0) {
        puStack64 = &UNK_0010248f;
        unaff_RBP = (undefined8 *)umaxtostr(param_1,buf_7126);
        puStack64 = &UNK_001024a5;
        uVar5 = func_0x001016c0(0,&UNK_00106228,5);
        puStack64 = &UNK_001024b6;
        func_0x001018d0(0,0,uVar5,unaff_RBP);
        ok = 0;
        goto code_r0x0010209b;
      }
      uVar5 = *puVar7;
    }
    puStack64 = &UNK_001020b9;
    func_0x001017c0(uVar5);
  }
code_r0x001020b9:
  uVar13 = stdout;
  puVar11 = *(undefined **)(stdout + 0x28);
  if (opt_zero == '\0') {
    uVar12 = 10;
  }
  else {
    if ((just_group_list != '\0') && (multiple_users != '\0')) {
      if (puVar11 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar11 + 1;
        *puVar11 = 0;
      }
      else {
        puStack64 = &UNK_001025d7;
        func_0x00101750(stdout,0);
      }
      uVar13 = stdout;
      puVar11 = *(undefined **)(stdout + 0x28);
      if (puVar11 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar11 + 1;
        *puVar11 = 0;
      }
      else {
        puStack64 = &UNK_001025c7;
        func_0x00101750(stdout,0);
      }
      goto code_r0x00102101;
    }
    uVar12 = 0;
  }
  if (puVar11 < *(undefined **)(stdout + 0x30)) {
    *(undefined **)(stdout + 0x28) = puVar11 + 1;
    *puVar11 = uVar12;
  }
  else {
    puStack64 = &UNK_0010234d;
    func_0x00101750();
  }
code_r0x00102101:
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  puStack64 = &UNK_001025e1;
  func_0x001016f0();
  puVar11 = program_name;
  uVar5 = 5;
  uStack104 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack88 = param_1;
  puStack80 = unaff_RBP;
  uStack72 = unaff_R12;
  puStack64 = unaff_R13;
  if ((int)uVar13 == 0) goto code_r0x0010264d;
  uVar5 = func_0x001016c0(0,&UNK_001062a0,5);
  func_0x00101940(stderr,1,uVar5,puVar11);
  do {
    func_0x00101920(uVar13 & 0xffffffff);
    uVar5 = extraout_RDX;
code_r0x0010264d:
    uVar5 = func_0x001016c0(0,&UNK_001062c8,uVar5);
    func_0x001018c0(1,uVar5,puVar11);
    uVar1 = stdout;
    uVar5 = func_0x001016c0(0,&UNK_001062f0,5);
    func_0x001017c0(uVar5,uVar1);
    uVar1 = stdout;
    uVar5 = func_0x001016c0(0,&UNK_00106360,5);
    func_0x001017c0(uVar5,uVar1);
    uVar1 = stdout;
    uVar5 = func_0x001016c0(0,&UNK_00106570,5);
    func_0x001017c0(uVar5,uVar1);
    uVar1 = stdout;
    uVar5 = func_0x001016c0(0,&UNK_001065a0,5);
    func_0x001017c0(uVar5,uVar1);
    uVar1 = stdout;
    uVar5 = func_0x001016c0(0,&UNK_001065d8,5);
    func_0x001017c0(uVar5,uVar1);
    uStack128 = 0;
    uStack120 = 0;
    pbStack224 = &UNK_001067c1;
    apbStack208[4] = &UNK_00106802;
    puStack216 = &UNK_001067c3;
    puStack160 = &UNK_0010680c;
    apbStack208[0] = &UNK_0010683b;
    puStack144 = &UNK_00106816;
    apbStack208[1] = &UNK_001067d3;
    apbStack208[2] = &UNK_001067e9;
    apbStack208[3] = &UNK_001067f3;
    puStack168 = &UNK_001067f3;
    puStack152 = &UNK_001067f3;
    puStack136 = &UNK_001067f3;
    ppbVar10 = &pbStack224;
    do {
      ppbVar10 = ppbVar10;
      ppbVar10 = ppbVar10 + 2;
      pbVar15 = *ppbVar10;
      bVar16 = false;
      bVar17 = pbVar15 == (byte *)0x0;
      if (bVar17) break;
      lVar9 = 3;
      pbVar14 = &UNK_001067be;
      do {
        if (lVar9 == 0) break;
        lVar9 = lVar9 + -1;
        bVar16 = *pbVar14 < *pbVar15;
        bVar17 = *pbVar14 == *pbVar15;
        pbVar14 = pbVar14 + (ulong)bVar18 * -2 + 1;
        pbVar15 = pbVar15 + (ulong)bVar18 * -2 + 1;
      } while (bVar17);
    } while ((!bVar16 && !bVar17) != bVar16);
    pbVar15 = ppbVar10[3];
    if (pbVar15 == (byte *)0x0) {
      uVar5 = func_0x001016c0(0,&UNK_00106820,5);
      func_0x001018c0(1,uVar5,&UNK_00106837,&UNK_00106620);
      lVar9 = func_0x001018b0(5,0);
      if (lVar9 != 0) {
        iVar4 = func_0x00101650(lVar9,&UNK_00106845,3);
        if (iVar4 != 0) {
          pbVar15 = &UNK_001067be;
          goto code_r0x00102950;
        }
      }
      pbVar15 = &UNK_001067be;
      puVar11 = &UNK_001067dd;
      uVar5 = func_0x001016c0(0,&UNK_00106849,5);
      func_0x001018c0(1,uVar5,&UNK_00106620,&UNK_001067be);
    }
    else {
      uVar5 = func_0x001016c0(0,&UNK_00106820,5);
      func_0x001018c0(1,uVar5,&UNK_00106837,&UNK_00106620);
      lVar9 = func_0x001018b0(5,0);
      if (lVar9 != 0) {
        iVar4 = func_0x00101650(lVar9,&UNK_00106845,3);
        if (iVar4 != 0) {
code_r0x00102950:
          uVar1 = stdout;
          uVar5 = func_0x001016c0(0,&UNK_00106648,5);
          func_0x001017c0(uVar5,uVar1);
        }
      }
      uVar5 = func_0x001016c0(0,&UNK_00106849,5);
      func_0x001018c0(1,uVar5,&UNK_00106620,&UNK_001067be);
      puVar11 = &UNK_00106f29;
      if (pbVar15 == &UNK_001067be) {
        puVar11 = &UNK_001067dd;
      }
    }
    uVar5 = func_0x001016c0(0,&UNK_00106690,5);
    func_0x001018c0(1,uVar5,pbVar15,puVar11);
  } while( true );
}

