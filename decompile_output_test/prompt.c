
undefined8 prompt(long param_1,long param_2,char param_3,char *param_4,int param_5,uint *param_6)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  uint *unaff_R12;
  long in_FS_OFFSET;
  undefined auStack216 [24];
  uint uStack192;
  undefined8 uStack168;
  long lStack64;
  
  uVar1 = *(uint *)(param_1 + 0x2c);
  plVar16 = (long *)(ulong)uVar1;
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = *(undefined8 *)(param_2 + 0x38);
  if (param_6 == (uint *)0x0) {
    uStack168 = 0xffffffffffffffff;
    uVar14 = ~-(uint)(param_3 == '\0') & 4;
    if (param_3 != '\0') {
      param_3 = '\0';
    }
  }
  else {
    *param_6 = 2;
    uStack168 = 0xffffffffffffffff;
    uVar14 = (uint)(param_3 != '\0') << 2;
    uVar3 = func_0x00101aa0(plVar16,uVar7,0x30900);
    if ((int)uVar3 < 0) {
code_r0x00102ca5:
      param_3 = '\0';
      uVar3 = 3;
      plVar15 = plVar16;
    }
    else {
      plVar15 = (long *)(ulong)uVar3;
      plVar16 = (long *)func_0x00101d10();
      param_3 = (char)plVar16;
      if (plVar16 != (long *)0x0) {
        piVar5 = (int *)func_0x001019a0();
        *piVar5 = 0;
        do {
          lVar6 = func_0x00101c10(plVar16);
          if (lVar6 == 0) {
            iVar4 = *piVar5;
            func_0x00101b60();
            if (iVar4 != 0) goto code_r0x00102ca5;
            param_3 = '\x01';
            uVar3 = 4;
            plVar15 = plVar16;
            goto code_r0x00102cad;
          }
        } while ((*(char *)(lVar6 + 0x13) == '.') &&
                ((cVar2 = *(char *)(lVar6 + 0x14 + (ulong)(*(char *)(lVar6 + 0x14) == '.')),
                 cVar2 == '\0' || (cVar2 == '/'))));
        func_0x00101b60();
        goto code_r0x00102ca5;
      }
      func_0x00101b50();
      uVar3 = 3;
    }
code_r0x00102cad:
    *param_6 = uVar3;
    plVar16 = plVar15;
    unaff_R12 = param_6;
  }
  if (*(long *)(param_2 + 0x20) == 0) {
    iVar4 = *(int *)(param_4 + 4);
    if (iVar4 != 5) {
      if (*param_4 == '\0') {
        if ((iVar4 != 3) && (param_4[0x19] == '\0')) goto code_r0x00102cf2;
        cVar2 = can_write_any_file();
        if (cVar2 != '\0') goto code_r0x00102ce5;
        plVar16 = (long *)(ulong)uVar1;
        iVar4 = cache_fstatat_constprop_3(plVar16,uVar7,auStack216);
        if (iVar4 != 0) goto code_r0x00102f00;
        if ((uStack192 & 0xf000) == 0xa000) {
code_r0x00102ce5:
          iVar4 = *(int *)(param_4 + 4);
          goto code_r0x00102ce9;
        }
        plVar16 = (long *)(ulong)uVar1;
        iVar4 = func_0x00101a10(plVar16,uVar7,2,0x200);
        if (iVar4 == 0) goto code_r0x00102ce5;
        puVar10 = (uint *)func_0x001019a0();
        uVar3 = *puVar10;
        unaff_R12 = (uint *)0x1;
        if (uVar3 == 0xd) goto code_r0x00102e23;
code_r0x00102f07:
        uVar13 = (ulong)uVar3;
        uVar7 = quotearg_style(4,uVar12);
code_r0x00102f19:
        uVar12 = func_0x00101a60(0,&UNK_0010b47a,5);
        plVar16 = (long *)0x0;
        func_0x00101cd0(0,uVar13,uVar12,uVar7);
        uVar7 = 4;
        goto code_r0x00102cf7;
      }
code_r0x00102ce9:
      if (iVar4 != 3) goto code_r0x00102cf2;
      unaff_R12 = (uint *)0x0;
code_r0x00102e23:
      if (uVar14 == 0) {
        plVar16 = (long *)(ulong)uVar1;
        iVar4 = cache_fstatat_constprop_3(plVar16,uVar7,auStack216);
        if (iVar4 != 0) {
code_r0x00102f00:
          puVar10 = (uint *)func_0x001019a0();
          uVar3 = *puVar10;
          goto code_r0x00102f07;
        }
        if ((uStack192 & 0xf000) == 0xa000) {
          if (*(int *)(param_4 + 4) != 3) goto code_r0x00102cf2;
        }
        else {
          if ((uStack192 & 0xf000) == 0x4000) goto code_r0x00102e34;
        }
        uVar12 = quotearg_style(4,uVar12);
code_r0x00102d6d:
        iVar4 = cache_fstatat_constprop_3((ulong)uVar1,uVar7,auStack216);
        if (iVar4 != 0) {
          uVar7 = func_0x00101a60(0,&UNK_0010b47a,5);
          puVar10 = (uint *)func_0x001019a0();
          plVar16 = (long *)0x0;
          func_0x00101cd0(0,(ulong)*puVar10,uVar7,uVar12);
          uVar7 = 4;
          goto code_r0x00102cf7;
        }
        uVar8 = file_type(auStack216);
        uVar7 = program_name;
        if ((int)unaff_R12 == 0) {
          uVar9 = func_0x00101a60(0,&UNK_0010b48b,5);
        }
        else {
          uVar9 = func_0x00101a60(0,&UNK_0010b560,5);
        }
        plVar16 = stderr;
        func_0x00101d60(stderr,1,uVar9,uVar7,uVar8,uVar12);
      }
      else {
        if (uVar14 != 4) {
code_r0x00102f78:
          uVar12 = quotearg_style(4,uVar12);
          goto code_r0x00102d6d;
        }
code_r0x00102e34:
        if (param_4[9] == '\0') {
          if ((param_4[10] == '\0') || (param_3 == '\0')) {
            uVar13 = 0x15;
            uVar7 = quotearg_style(4,uVar12);
            goto code_r0x00102f19;
          }
          goto code_r0x00102f78;
        }
        uVar12 = quotearg_style(4,uVar12);
        uVar8 = program_name;
        if ((param_5 != 2) || (param_3 != '\0')) goto code_r0x00102d6d;
        if ((int)unaff_R12 == 0) {
          uVar7 = func_0x00101a60(0,&UNK_0010b540,5);
        }
        else {
          uVar7 = func_0x00101a60(0,&UNK_0010b510,5);
        }
        plVar16 = stderr;
        func_0x00101d60(stderr,1,uVar7,uVar8,uVar12);
      }
      cVar2 = yesno();
      if (cVar2 == '\0') goto code_r0x00102de0;
    }
code_r0x00102cf2:
    uVar7 = 2;
  }
  else {
code_r0x00102de0:
    uVar7 = 3;
  }
code_r0x00102cf7:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
  func_0x00101ab0();
  uVar13 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (*plVar16 == 0) {
    uVar7 = 2;
    do {
      uVar11 = uVar13 ^ *(ulong *)(in_FS_OFFSET + 0x28);
      if (uVar11 == 0) {
        return uVar7;
      }
      while( true ) {
        func_0x00101ab0();
        uVar7 = 4;
code_r0x00103100:
        lVar6 = rpl_fts_read(uVar11);
        if (lVar6 == 0) break;
        if (*(ushort *)(lVar6 + 0x70) < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x0010312c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*(code *)((long)(int)unaff_R12[*(ushort *)(lVar6 + 0x70)] + (long)unaff_R12))();
          return uVar7;
        }
        uVar7 = quotearg_n_style_colon(0,3,*(undefined8 *)(lVar6 + 0x38));
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x70);
        uVar12 = func_0x00101a60(0,&UNK_0010b778,5);
        func_0x00101cd0(0,0,uVar12,uVar11,uVar7,&UNK_0010b4c6);
        func_0x00101990();
        func_0x00101b20(&UNK_0010b4e9,&UNK_0010b4dc,0x261);
      }
      unaff_R12 = (uint *)func_0x001019a0();
      if (*unaff_R12 == 0) {
        iVar4 = rpl_fts_close(uVar11);
      }
      else {
        uVar7 = 4;
        uVar12 = func_0x00101a60(0,&UNK_0010b49e,5);
        func_0x00101cd0(0,(ulong)*unaff_R12,uVar12);
        iVar4 = rpl_fts_close(uVar11);
      }
      if (iVar4 != 0) {
        uVar7 = 4;
        uVar12 = func_0x00101a60(0,&UNK_0010b4fa,5);
        func_0x00101cd0(0,(ulong)*unaff_R12,uVar12);
      }
    } while( true );
  }
  unaff_R12 = (uint *)&UNK_0010b7d8;
  uVar7 = 2;
  uVar11 = xfts_open();
  goto code_r0x00103100;
}

