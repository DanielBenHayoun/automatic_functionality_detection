
ulong add_exclude_fp(code *param_1,long param_2,uint *param_3,undefined8 param_4,ulong param_5,
                    ulong param_6)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  char *extraout_RDX;
  long *plVar12;
  char cVar13;
  ulong uVar14;
  undefined uVar15;
  uint uVar16;
  long lVar17;
  long *plVar18;
  long in_FS_OFFSET;
  ulong uStack152;
  long *plStack144;
  ulong uStack136;
  undefined *puStack128;
  long *plStack120;
  code *pcStack112;
  ulong uStack104;
  uint uStack96;
  uint uStack92;
  ulong uStack88;
  uint *puStack80;
  long lStack72;
  ulong uStack64;
  
  uStack136 = param_5 & 0xffffffff;
  lVar17 = 0;
  plStack144 = (long *)0x0;
  uStack64 = *(ulong *)(in_FS_OFFSET + 0x28);
  plStack120 = &lStack72;
  uStack96 = (uint)param_4;
  uStack88 = uStack88 & 0xffffffff00000000 | param_5 & 0xffffffff;
  lStack72 = 0;
  uVar14 = param_5;
  pcStack112 = param_1;
  uStack104 = param_6;
  do {
    puVar4 = *(undefined **)(param_3 + 2);
    if (puVar4 < *(undefined **)(param_3 + 4)) {
      *(undefined **)(param_3 + 2) = puVar4 + 1;
      uVar15 = *puVar4;
    }
    else {
      puStack128 = &UNK_00105b88;
      iVar7 = func_0x001023d0(param_3);
      uVar8 = (uint)param_4;
      uVar15 = (undefined)iVar7;
      if (iVar7 == -1) break;
    }
    if (lStack72 == lVar17) {
      puStack128 = &UNK_00105b79;
      plStack144 = (long *)x2realloc(plStack144,plStack120);
    }
    *(undefined *)((long)plStack144 + lVar17) = uVar15;
    lVar17 = lVar17 + 1;
  } while( true );
  uVar16 = *param_3;
  puStack128 = &UNK_00105b98;
  puStack80 = (uint *)func_0x00102410();
  uStack92 = 0;
  uVar16 = uVar16 & 0x20;
  if (uVar16 != 0) {
    uVar16 = *puStack80;
    uStack92 = -(uint)(uVar16 != 0);
  }
  plVar12 = (long *)(lVar17 + 1);
  puStack128 = &UNK_00105bcb;
  plVar18 = (long *)xrealloc(plStack144);
  cVar13 = (char)uVar14;
  cVar6 = (char)uStack88;
  *(char *)((long)plVar18 + lVar17) = cVar6;
  if (lVar17 == 0) {
    puStack128 = &UNK_00105caa;
    puVar10 = (undefined8 *)xmalloc(0x10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(long **)(puVar10 + 1) = plVar18;
    *(undefined8 **)(param_2 + 8) = puVar10;
    *puVar10 = uVar5;
  }
  else {
    cVar2 = *(char *)((long)plVar18 + lVar17 + -1);
    puStack128 = &UNK_00105bf6;
    puVar9 = (ulong *)xmalloc(0x10);
    cVar13 = (char)uVar14;
    uVar11 = *(ulong *)(param_2 + 8);
    uVar8 = (uint)uVar11;
    plStack144 = (long *)((ulong)(cVar2 != cVar6) + lVar17 + (long)plVar18);
    *(long **)(puVar9 + 1) = plVar18;
    *(ulong **)(param_2 + 8) = puVar9;
    *puVar9 = uVar11;
    if (plVar18 < plStack144) {
      uStack88 = param_5 & 0xff;
      plVar12 = plVar18;
      do {
        while( true ) {
          uVar8 = (uint)uVar11;
          cVar13 = (char)uVar14;
          plVar1 = (long *)((long)plVar18 + 1);
          if (*(char *)plVar18 != (char)uStack136) break;
          puStack128 = &UNK_00105c3a;
          plStack120 = plVar12;
          plVar12 = (long *)func_0x001029f0();
          lVar17 = *plVar12;
          if ((*(byte *)(lVar17 + 1 + uStack88 * 2) & 0x20) == 0) {
code_r0x00105c4d:
            *(char *)plVar18 = '\0';
            puStack128 = &UNK_00105c64;
            uVar11 = uStack104;
            (*pcStack112)(param_2,plStack120,(ulong)uStack96);
          }
          else {
            uVar11 = uStack88;
            if (plVar18 != plStack120) {
              uVar11 = (ulong)*(byte *)((long)plVar18 + -1);
              bVar3 = *(byte *)(lVar17 + 1 + uVar11 * 2);
              while ((bVar3 & 0x20) != 0) {
                if ((long *)((long)plVar18 + -1) == plStack120) goto code_r0x00105c64;
                uVar11 = (ulong)*(byte *)((long)plVar18 + -2);
                bVar3 = *(byte *)(lVar17 + 1 + uVar11 * 2);
                plVar18 = (long *)((long)plVar18 + -1);
              }
              goto code_r0x00105c4d;
            }
          }
code_r0x00105c64:
          uVar8 = (uint)uVar11;
          cVar13 = (char)uVar14;
          plVar12 = plVar1;
          plVar18 = plVar1;
          if (plStack144 == plVar1) goto code_r0x00105c6f;
        }
        plVar18 = plVar1;
      } while (plStack144 != plVar1);
    }
  }
code_r0x00105c6f:
  uStack152 = uStack64 ^ *(ulong *)(in_FS_OFFSET + 0x28);
  *puStack80 = uVar16;
  if (uStack152 == 0) {
    return (ulong)uStack92;
  }
  puStack128 = &UNK_00105d03;
  func_0x00102560();
  puStack128 = (undefined *)(ulong)uVar16;
  if ((*extraout_RDX == '-') && (extraout_RDX[1] == '\0')) {
    uVar8 = add_exclude_fp(call_addfn);
    return (ulong)uVar8;
  }
  lVar17 = func_0x001028d0(extraout_RDX,&UNK_00122781);
  if (lVar17 != 0) {
    uVar8 = add_exclude_fp(call_addfn,plVar12,lVar17,(ulong)uVar8,(ulong)(uint)(int)cVar13,
                           &uStack152);
    iVar7 = rpl_fclose(lVar17);
    if (iVar7 == 0) {
      return (ulong)uVar8;
    }
  }
  return 0xffffffff;
}

