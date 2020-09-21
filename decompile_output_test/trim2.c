
/* WARNING: Possible PIC construction at 0x001080d7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00108109: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001081bd: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00108408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0010836e: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010840d) */
/* WARNING: Removing unreachable block (ram,0x001081c2) */
/* WARNING: Removing unreachable block (ram,0x0010810e) */
/* WARNING: Removing unreachable block (ram,0x00108470) */
/* WARNING: Removing unreachable block (ram,0x00108136) */
/* WARNING: Removing unreachable block (ram,0x00108200) */
/* WARNING: Removing unreachable block (ram,0x00108242) */
/* WARNING: Removing unreachable block (ram,0x00108150) */
/* WARNING: Removing unreachable block (ram,0x00108194) */
/* WARNING: Removing unreachable block (ram,0x00108420) */
/* WARNING: Removing unreachable block (ram,0x001083b8) */
/* WARNING: Removing unreachable block (ram,0x001083f3) */
/* WARNING: Removing unreachable block (ram,0x00108388) */
/* WARNING: Removing unreachable block (ram,0x00108330) */
/* WARNING: Removing unreachable block (ram,0x00108356) */
/* WARNING: Removing unreachable block (ram,0x001082e0) */
/* WARNING: Removing unreachable block (ram,0x00108298) */
/* WARNING: Removing unreachable block (ram,0x00108258) */
/* WARNING: Removing unreachable block (ram,0x001081c6) */
/* WARNING: Removing unreachable block (ram,0x00108373) */
/* WARNING: Recovered jumptable eliminated as dead code */

uint * trim2(undefined8 param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  undefined *puVar12;
  long in_FS_OFFSET;
  bool bVar13;
  bool bVar14;
  uint *puStack160;
  undefined8 uStack124;
  undefined uStack116;
  uint *puStack112;
  uint *puStack104;
  char cStack96;
  uint auStack92 [7];
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = (uint *)func_0x00101910();
  if (puVar6 == (uint *)0x0) goto code_r0x00108057;
  uVar7 = func_0x001016d0();
  if (uVar7 < 2) {
    puVar10 = puVar6;
    if (param_2 != 0) {
      bVar2 = *(byte *)puVar6;
      if (bVar2 != 0) {
        plVar8 = (long *)func_0x00101940();
        do {
          if ((*(byte *)(*plVar8 + 1 + (ulong)bVar2 * 2) & 0x20) == 0) break;
          puVar10 = (uint *)((long)puVar10 + 1);
          bVar2 = *(byte *)puVar10;
        } while (bVar2 != 0);
      }
      lVar9 = func_0x001016e0(puVar10);
      func_0x001018a0(puVar6,puVar10,lVar9 + 1);
      puVar10 = puVar6;
      if (param_2 == 1) goto code_r0x00107d80;
    }
    do {
      puVar11 = puVar10;
      uVar3 = *puVar11 + 0xfefefeff & ~*puVar11;
      _bVar2 = uVar3 & 0x80808080;
      puVar10 = puVar11 + 1;
    } while (_bVar2 == 0);
    bVar14 = (uVar3 & 0x8080) == 0;
    bVar2 = (byte)_bVar2;
    if (bVar14) {
      bVar2 = (byte)(_bVar2 >> 0x10);
    }
    if (bVar14) {
      puVar10 = (uint *)((long)puVar11 + 6);
    }
    puVar10 = (uint *)((long)puVar10 + (-4 - (ulong)CARRY1(bVar2,bVar2)));
    if (puVar6 <= puVar10) {
      plVar8 = (long *)func_0x00101940();
      lVar9 = *plVar8;
      do {
        if ((*(byte *)(lVar9 + 1 + (ulong)*(byte *)puVar10 * 2) & 0x20) == 0) break;
        *(byte *)puVar10 = 0;
        puVar10 = (uint *)((long)puVar10 + -1);
      } while (puVar6 <= puVar10);
    }
  }
  else {
    puVar10 = puVar6;
    if (param_2 != 0) {
      do {
        puVar11 = puVar10;
        uVar3 = *puVar11 + 0xfefefeff & ~*puVar11;
        _bVar2 = uVar3 & 0x80808080;
        bVar2 = (byte)_bVar2;
        puVar10 = puVar11 + 1;
      } while (_bVar2 == 0);
      bVar14 = false;
      uStack124 = 0;
      bVar13 = (uVar3 & 0x8080) == 0;
      uStack116 = 0;
      if (bVar13) {
        bVar2 = (byte)(_bVar2 >> 0x10);
      }
      if (bVar13) {
        puVar10 = (uint *)((long)puVar11 + 6);
      }
      puVar10 = (uint *)((long)puVar10 + (-3 - (ulong)CARRY1(bVar2,bVar2)));
      puVar11 = puVar6;
      puStack112 = puVar6;
      if (puVar6 < puVar10) {
        do {
          uStack116 = 0;
          puStack112 = puVar11;
          if (bVar14) {
code_r0x00107cee:
            puStack104 = (uint *)rpl_mbrtowc(auStack92,puVar11,
                                             (uint *)((long)puVar10 - (long)puVar11));
            puVar11 = puStack112;
            if (puStack104 == (uint *)0xffffffffffffffff) {
              puStack104 = (uint *)0x1;
              cStack96 = '\0';
              uStack116 = 1;
              break;
            }
            if (puStack104 == (uint *)0xfffffffffffffffe) {
              cStack96 = '\0';
              uStack116 = 1;
              puStack104 = (uint *)((long)puVar10 - (long)puStack112);
              break;
            }
            if (puStack104 == (uint *)0x0) {
              puStack104 = (uint *)0x1;
              if (*(byte *)puStack112 != 0) goto code_r0x00108080;
              if (auStack92[0] != 0) goto code_r0x0010807b;
            }
            cStack96 = '\x01';
            iVar4 = func_0x00101920(&uStack124);
            if (iVar4 != 0) {
              bVar14 = false;
            }
          }
          else {
            if ((*(uint *)(is_basic_table + (ulong)(*(byte *)puVar11 >> 5) * 4) >>
                 ((uint)*(byte *)puVar11 & 0x1f) & 1) == 0) {
              iVar4 = func_0x00101920(&uStack124);
              if (iVar4 != 0) {
                bVar14 = true;
                goto code_r0x00107cee;
              }
              goto code_r0x0010805c;
            }
            puStack104 = (uint *)0x1;
            auStack92[0] = SEXT14((char)*(byte *)puVar11);
            cStack96 = '\x01';
          }
          uStack116 = 1;
          iVar4 = func_0x00101890((ulong)auStack92[0]);
          if (iVar4 == 0) break;
          puVar11 = (uint *)((long)puVar11 + (long)puStack104);
          uStack116 = 0;
          puStack112 = puVar11;
        } while (puVar11 < puVar10);
      }
      lVar9 = func_0x001016e0(puVar11);
      func_0x001018a0(puVar6,puVar11,lVar9 + 1);
      puVar10 = puVar6;
      if (param_2 == 1) goto code_r0x00107d80;
    }
    do {
      puVar11 = puVar10;
      uVar3 = *puVar11 + 0xfefefeff & ~*puVar11;
      _bVar2 = uVar3 & 0x80808080;
      bVar2 = (byte)_bVar2;
      puVar10 = puVar11 + 1;
    } while (_bVar2 == 0);
    bVar14 = false;
    uStack124 = 0;
    bVar13 = (uVar3 & 0x8080) == 0;
    uStack116 = 0;
    if (bVar13) {
      bVar2 = (byte)(_bVar2 >> 0x10);
    }
    if (bVar13) {
      puVar10 = (uint *)((long)puVar11 + 6);
    }
    puVar10 = (uint *)((long)puVar10 + (-3 - (ulong)CARRY1(bVar2,bVar2)));
    bVar13 = false;
    puStack112 = puVar6;
    if (puVar6 < puVar10) {
      puVar11 = puVar6;
      do {
        uStack116 = 0;
        puStack112 = puVar11;
        if (bVar14) {
code_r0x00107ea1:
          puStack104 = (uint *)rpl_mbrtowc(auStack92,puVar11,(uint *)((long)puVar10 - (long)puVar11)
                                          );
          puVar11 = puStack112;
          if (puStack104 == (uint *)0xffffffffffffffff) {
            puStack104 = (uint *)0x1;
            cStack96 = '\0';
          }
          else {
            if (puStack104 == (uint *)0xfffffffffffffffe) {
              cStack96 = '\0';
              puStack104 = (uint *)((long)puVar10 - (long)puStack112);
            }
            else {
              if (puStack104 == (uint *)0x0) {
                puStack104 = (uint *)0x1;
                if (*(byte *)puStack112 != 0) goto code_r0x00108080;
                if (auStack92[0] != 0) goto code_r0x0010807b;
              }
              cStack96 = '\x01';
              iVar4 = func_0x00101920(&uStack124);
              if (iVar4 != 0) {
                bVar14 = false;
              }
            }
          }
        }
        else {
          if ((*(uint *)(is_basic_table + (ulong)(*(byte *)puVar11 >> 5) * 4) >>
               ((uint)*(byte *)puVar11 & 0x1f) & 1) == 0) {
            iVar4 = func_0x00101920(&uStack124);
            if (iVar4 != 0) {
              bVar14 = true;
              goto code_r0x00107ea1;
            }
            goto code_r0x0010805c;
          }
          puStack104 = (uint *)0x1;
          auStack92[0] = SEXT14((char)*(byte *)puVar11);
          cStack96 = '\x01';
        }
        puVar1 = puStack104;
        uStack116 = 1;
        if (bVar13 == false) {
          bVar13 = true;
          if (cStack96 != '\0') {
            iVar4 = func_0x00101890((ulong)auStack92[0]);
            bVar13 = iVar4 == 0;
          }
        }
        else {
          if (bVar13 == true) {
            if ((cStack96 != '\0') && (iVar4 = func_0x00101890((ulong)auStack92[0]), iVar4 != 0)) {
              bVar13 = true;
              puStack160 = puVar11;
            }
          }
          else {
            if ((bVar13 == true) && (cStack96 != '\0')) {
              iVar4 = func_0x00101890((ulong)auStack92[0]);
              if (iVar4 == 0) {
                bVar13 = true;
              }
            }
            else {
              bVar13 = true;
            }
          }
        }
        puVar11 = (uint *)((long)puVar11 + (long)puVar1);
        uStack116 = 0;
      } while (puVar11 < puVar10);
      puStack112 = puVar11;
      if (bVar13 == true) {
        *(byte *)puStack160 = 0;
      }
    }
  }
code_r0x00107d80:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
  func_0x001016f0();
code_r0x00108057:
  xalloc_die();
code_r0x0010805c:
  func_0x00101750(&UNK_0010e9b4,&UNK_0010eee8,0x8e,__PRETTY_FUNCTION___5134);
code_r0x0010807b:
  mbiter_multi_next_part_0();
code_r0x00108080:
  puVar12 = &UNK_0010eee8;
  func_0x00101750(&UNK_0010e9cb,&UNK_0010eee8,0xa9,__PRETTY_FUNCTION___5134);
  if (puVar12 == (undefined *)0x0) {
    func_0x00101900();
    func_0x001016c0(0,&UNK_0010ef25,5);
  }
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)PTR___fprintf_chk_00311f90)();
  return (uint *)uVar5;
}

