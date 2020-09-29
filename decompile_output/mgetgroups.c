
/* WARNING: Possible PIC construction at 0x00106096: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010609b) */
/* WARNING: Removing unreachable block (ram,0x001060d0) */
/* WARNING: Removing unreachable block (ram,0x001060a0) */

ulong mgetgroups(long param_1,uint param_2,uint **param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  long in_FS_OFFSET;
  uint uStack68;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    puVar13 = (uint *)0x0;
    uStack68 = func_0x00101830(0,0);
    if ((int)uStack68 < 0) {
      piVar10 = (int *)func_0x00101640();
      if (*piVar10 == 0x26) {
        puVar13 = (uint *)0x0;
        puVar12 = (uint *)func_0x001018a0(0,4);
        if (puVar12 != (uint *)0x0) {
          *param_3 = puVar12;
          *puVar12 = param_2;
          uVar9 = (ulong)(param_2 != 0xffffffff);
          goto code_r0x00105ebd;
        }
      }
    }
    else {
      if ((uStack68 == 0) || (param_2 != 0xffffffff)) {
        uStack68 = uStack68 + 1;
        puVar13 = (uint *)0x0;
        puVar12 = (uint *)realloc_groupbuf(0,(long)(int)uStack68);
        if (puVar12 != (uint *)0x0) {
          puVar13 = (uint *)(ulong)(uStack68 - (param_2 != 0xffffffff));
          if (param_2 == 0xffffffff) {
            uVar9 = func_0x00101830(puVar13,puVar12);
            iVar4 = (int)uVar9;
            goto joined_r0x0010604c;
          }
          iVar4 = func_0x00101830(puVar13,puVar12 + 1);
          if (iVar4 < 0) goto code_r0x00105ea1;
          *puVar12 = param_2;
          uVar9 = (ulong)(iVar4 + 1);
          goto code_r0x00105f8a;
        }
      }
      else {
        puVar13 = (uint *)0x0;
        puVar12 = (uint *)realloc_groupbuf(0,(long)(int)uStack68);
        if (puVar12 != (uint *)0x0) {
          puVar13 = (uint *)(ulong)uStack68;
          uVar9 = func_0x00101830(puVar13,puVar12);
          iVar4 = (int)uVar9;
joined_r0x0010604c:
          if (iVar4 < 0) goto code_r0x00105ea1;
code_r0x00105f8a:
          *param_3 = puVar12;
          if (1 < (int)uVar9) {
            uVar5 = *puVar12;
            puVar13 = (uint *)(ulong)uVar5;
            puVar7 = puVar12 + (int)uVar9;
            puVar3 = puVar12;
            while (puVar3 = puVar3 + 1, puVar3 < puVar7) {
              uVar2 = *puVar3;
              if ((uVar2 == uVar5) || (uVar2 == *puVar12)) {
                uVar9 = (ulong)((int)uVar9 - 1);
              }
              else {
                puVar12[1] = uVar2;
                puVar12 = puVar12 + 1;
              }
            }
          }
          goto code_r0x00105ebd;
        }
      }
    }
code_r0x00106038:
    uVar9 = 0xffffffff;
  }
  else {
    puVar13 = (uint *)0x0;
    uStack68 = 10;
    puVar7 = (uint *)realloc_groupbuf(0,10);
    if (puVar7 == (uint *)0x0) goto code_r0x00106038;
    do {
      puVar12 = puVar7;
      uVar5 = uStack68;
      iVar4 = func_0x001018e0(param_1,(ulong)param_2,puVar12,&uStack68);
      if (-1 < iVar4) {
        puVar13 = puVar12;
        puVar7 = (uint *)realloc_groupbuf(puVar12);
        if (puVar7 != (uint *)0x0) {
          *param_3 = puVar7;
          uVar9 = (ulong)uStack68;
          goto code_r0x00105ebd;
        }
        break;
      }
      if (uStack68 == uVar5) {
        uStack68 = uStack68 * 2;
      }
      puVar7 = (uint *)realloc_groupbuf(puVar12);
    } while (puVar7 != (uint *)0x0);
code_r0x00105ea1:
    puVar8 = (undefined4 *)func_0x00101640();
    uVar1 = *puVar8;
    func_0x00101620(puVar12);
    uVar9 = 0xffffffff;
    *puVar8 = uVar1;
    puVar13 = puVar12;
  }
code_r0x00105ebd:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
  func_0x001016f0();
  iVar4 = func_0x00101810();
  if (-1 < iVar4) {
    iVar4 = func_0x00101890(puVar13);
    if (iVar4 != 0) {
      uVar5 = func_0x00101810(puVar13);
      lVar11 = func_0x00101770((ulong)uVar5,0,1);
      if (lVar11 == -1) goto code_r0x00101690;
    }
    iVar4 = rpl_fflush(puVar13);
    if (iVar4 != 0) {
      func_0x00101640();
    }
  }
code_r0x00101690:
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (*(code *)PTR_fclose_00308e48)(puVar13);
  return uVar6;
}

