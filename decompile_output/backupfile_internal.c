
ulong backupfile_internal(uint param_1,long param_2,int param_3,char param_4)

{
  ulong uVar1;
  char cVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined2 *puVar14;
  char *pcVar15;
  long lVar16;
  undefined4 *puVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int iStack152;
  ulong uStack144;
  ulong uStack136;
  ulong uStack112;
  uint uStack68;
  
  lVar19 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = last_component(param_2);
  lVar7 = func_0x00101ef0(lVar6);
  lVar6 = lVar6 - param_2;
  lVar7 = lVar7 + lVar6;
  if (simple_backup_suffix == 0) {
    set_simple_backup_suffix();
  }
  lVar8 = func_0x00101ef0(simple_backup_suffix);
  uVar9 = lVar8 + 1;
  uVar10 = 9;
  if (8 < uVar9) {
    uVar10 = uVar9;
  }
  uVar10 = uVar10 + lVar7 + 1;
  lVar8 = func_0x001020f0(uVar10);
  if (lVar8 != 0) {
    uStack68 = 0xffffffff;
    uStack112 = 0;
    lVar16 = 0;
    iStack152 = param_3;
    do {
      func_0x001020a0(lVar8,param_2,lVar7 + 1);
      if (iStack152 == 1) {
        func_0x001020a0(lVar8 + lVar7,simple_backup_suffix,uVar9);
      }
      else {
        puVar14 = (undefined2 *)(lVar8 + lVar6);
        lVar11 = base_len(puVar14);
        if (lVar16 == 0) {
          uVar3 = *puVar14;
          *puVar14 = 0x2e;
          lVar16 = opendirat((ulong)param_1,lVar8,0);
          puVar17 = (undefined4 *)((long)puVar14 + lVar11);
          if (lVar16 != 0) {
            *puVar14 = uVar3;
            *puVar17 = 0x7e317e2e;
            *(undefined *)(puVar17 + 1) = 0;
            goto code_r0x001042a6;
          }
          piVar18 = (int *)func_0x00101dd0();
          iVar5 = *piVar18;
          *puVar14 = uVar3;
          *puVar17 = 0x7e317e2e;
          *(undefined *)(puVar17 + 1) = 0;
          bVar21 = (bool)((iVar5 == 0xc) + 2);
        }
        else {
          func_0x00101ff0(lVar16);
code_r0x001042a6:
          uStack144 = 1;
          uStack136 = uVar10;
          bVar4 = true;
code_r0x001042d0:
          bVar21 = bVar4;
          lVar12 = func_0x001020e0(lVar16);
          lVar20 = lVar8;
          bVar4 = bVar21;
          if (lVar12 != 0) {
            while( true ) {
              lVar12 = lVar12 + 0x13;
              uVar13 = func_0x00101ef0(lVar12);
              lVar8 = lVar20;
              if (uVar13 < lVar11 + 4U) break;
              iVar5 = func_0x00102020(lVar20 + lVar6,lVar12,lVar11 + 2);
              if (iVar5 != 0) break;
              pcVar15 = (char *)(lVar12 + lVar11 + 2);
              if (8 < (byte)(*pcVar15 - 0x31U)) break;
              bVar21 = *pcVar15 == '9';
              cVar2 = pcVar15[1];
              uVar13 = 1;
              while ((int)cVar2 - 0x30U < 10) {
                uVar13 = uVar13 + 1;
                bVar21 = (bool)(cVar2 == '9' & bVar21);
                cVar2 = pcVar15[uVar13];
              }
              if (((cVar2 != '~') || (pcVar15[uVar13 + 1] != '\0')) ||
                 ((uVar13 <= uStack144 &&
                  ((uStack144 != uVar13 || (iVar5 = func_0x00102020(lVar20 + 2 + lVar7), 0 < iVar5))
                  )))) break;
              uStack144 = (ulong)bVar21 + uVar13;
              uVar1 = lVar7 + 4 + uStack144;
              if (uStack136 < uVar1) {
                uStack136 = uVar1;
                if (SUB168(ZEXT816(2) * ZEXT816(uVar1) >> 0x40,0) == 0) {
                  uStack136 = uVar1 * 2;
                }
                lVar8 = func_0x00102130(lVar20,uStack136);
                if (lVar8 == 0) goto code_r0x001046a0;
              }
              puVar14 = (undefined2 *)(lVar7 + lVar8);
              *puVar14 = 0x7e2e;
              *(undefined *)(puVar14 + 1) = 0x30;
              lVar12 = func_0x001020a0((long)puVar14 + (ulong)bVar21 + 2,pcVar15,uVar13 + 2);
              cVar2 = *(char *)(uVar13 + lVar12 + -1);
              pcVar15 = (char *)(uVar13 + lVar12 + -1);
              while (cVar2 == '9') {
                *pcVar15 = '0';
                pcVar15 = pcVar15 + -1;
                cVar2 = *pcVar15;
              }
              *pcVar15 = cVar2 + '\x01';
              lVar12 = func_0x001020e0(lVar16);
              lVar20 = lVar8;
              bVar4 = bVar21;
              if (lVar12 == 0) goto code_r0x00104490;
            }
            goto code_r0x001042d0;
          }
        }
code_r0x00104490:
        if (bVar21 == true) {
          if (iStack152 == 2) {
            func_0x001020a0(lVar8 + lVar7,simple_backup_suffix,uVar9);
            iStack152 = 1;
          }
        }
        else {
          lVar20 = lVar8;
          if (bVar21 == true) {
code_r0x001046a0:
            lVar8 = 0;
            func_0x00101db0(lVar20);
            puVar17 = (undefined4 *)func_0x00101dd0();
            *puVar17 = 0xc;
            goto code_r0x00104530;
          }
          if (bVar21 != true) goto code_r0x001044af;
        }
        puVar14 = (undefined2 *)last_component(lVar8);
        uVar13 = base_len();
        if (0xe < uVar13) {
          if (uStack112 == 0) {
            piVar18 = (int *)func_0x00101dd0();
            if ((int)uStack68 < 0) {
              uVar3 = *puVar14;
              *puVar14 = 0x2e;
              *piVar18 = 0;
              lVar11 = func_0x00101ea0(lVar8,3);
              iVar5 = *piVar18;
              *puVar14 = uVar3;
              uStack112 = lVar11 - (ulong)(iVar5 == 0);
            }
            else {
              *piVar18 = 0;
              lVar11 = func_0x00102070((ulong)uStack68,3);
              uStack112 = lVar11 - (ulong)(*piVar18 == 0);
            }
            if (-1 < (long)uStack112) goto code_r0x001046c0;
            if (uStack112 == 0xffffffffffffffff) {
              uStack112 = 0xffffffffffffffff;
              goto code_r0x001044af;
            }
            uStack112 = 0xe;
          }
          else {
code_r0x001046c0:
            if (uVar13 <= uStack112) goto code_r0x001044af;
          }
          uVar13 = (lVar7 + lVar8) - (long)puVar14;
          if (uStack112 <= uVar13) {
            uVar13 = uStack112 - 1;
          }
          *(undefined *)((long)puVar14 + uVar13) = 0x7e;
          *(undefined *)((long)puVar14 + uVar13 + 1) = 0;
        }
      }
code_r0x001044af:
      if (param_4 == '\0') {
code_r0x0010476e:
        if (lVar16 != 0) {
          func_0x00102010(lVar16);
        }
        goto code_r0x00104530;
      }
      uVar13 = (ulong)uStack68;
      if ((int)uStack68 < 0) {
        uStack68 = 0xffffff9c;
        uVar13 = 0xffffff9c;
        lVar6 = 0;
      }
      iVar5 = renameatu(0xffffff9c,param_2,uVar13);
      if (iVar5 == 0) goto code_r0x0010476e;
      piVar18 = (int *)func_0x00101dd0();
      iVar5 = *piVar18;
    } while (iVar5 == 0x11);
    if (lVar16 != 0) {
      func_0x00102010(lVar16);
    }
    func_0x00101db0(lVar8);
    *piVar18 = iVar5;
    lVar8 = 0;
  }
code_r0x00104530:
  if (lVar19 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar8;
  }
  func_0x00101f20();
  lVar19 = __xargmatch_internal();
  return (ulong)*(uint *)(backup_types + lVar19 * 4);
}

