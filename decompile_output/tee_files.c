
ulong tee_files(uint param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  undefined *puVar11;
  long *plVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  byte bStack8272;
  undefined auStack8264 [8200];
  long lStack64;
  
  puVar13 = &UNK_00105466;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (append != '\0') {
    puVar13 = &UNK_00105464;
  }
  fadvise(stdin,2);
  plVar12 = (long *)(long)(int)(param_1 + 1);
  lVar6 = SUB168(ZEXT816(8) * ZEXT816(plVar12),0);
  if (SUB168(ZEXT816(8) * ZEXT816(plVar12) >> 0x40,0) != 0) goto code_r0x00101f87;
  bVar3 = false;
  do {
    if ((-1 < lVar6) && (!bVar3)) {
      plVar12 = (long *)xmalloc((long)plVar12 << 3);
      *plVar12 = stdout;
      uVar7 = func_0x001015e0(0,&UNK_00105468,5);
      lVar6 = stdout;
      *(undefined8 *)(param_2 + -8) = uVar7;
      func_0x001017a0(lVar6,0,2,0);
      if ((int)param_1 < 1) {
        bStack8272 = 1;
        lVar6 = 1;
code_r0x00101d08:
        do {
          puVar13 = (undefined *)func_0x001016a0(0,auStack8264,0x2000);
          if ((long)puVar13 < 0) {
            piVar10 = (int *)func_0x00101550();
            if (*piVar10 != 4) break;
          }
          else {
            if (puVar13 == (undefined *)0x0) goto code_r0x00101d5d;
            if (-1 < (int)param_1) {
              lVar15 = 0;
              do {
                lVar14 = *(long *)((long)plVar12 + lVar15);
                if ((lVar14 != 0) && (lVar8 = func_0x00101750(auStack8264,puVar13,1), lVar8 != 1)) {
                  puVar9 = (uint *)func_0x00101550();
                  uVar2 = *puVar9;
                  if ((uVar2 == 0x20) && ((output_error & 0xfffffffd) != 1)) {
                    if (lVar14 == stdout) {
                      func_0x001015a0();
                      *(undefined8 *)((long)plVar12 + lVar15) = 0;
                    }
                    else {
                      *(undefined8 *)((long)plVar12 + lVar15) = 0;
                    }
                  }
                  else {
                    if (lVar14 == stdout) {
                      func_0x001015a0();
                    }
                    uVar7 = quotearg_n_style_colon(0,3,*(undefined8 *)(param_2 + -8 + lVar15));
                    func_0x001017b0((ulong)(output_error - 3 < 2),(ulong)uVar2,&UNK_00105afc,uVar7);
                    *(undefined8 *)((long)plVar12 + lVar15) = 0;
                    bStack8272 = 0;
                  }
                  lVar6 = lVar6 + -1;
                }
                lVar15 = lVar15 + 8;
              } while ((ulong)param_1 * 8 + 8 != lVar15);
            }
          }
        } while (lVar6 != 0);
        if (puVar13 == (undefined *)0xffffffffffffffff) {
          uVar7 = func_0x001015e0(0,&UNK_00105478,5);
          puVar9 = (uint *)func_0x00101550();
          func_0x001017b0(0,(ulong)*puVar9,uVar7);
          bStack8272 = 0;
        }
code_r0x00101d5d:
        if (0 < (int)param_1) goto code_r0x00101d6c;
      }
      else {
        lVar14 = 0;
        bStack8272 = 1;
        lVar15 = (ulong)(param_1 - 1) * 8 + 8;
        lVar6 = 1;
        do {
          while( true ) {
            lVar8 = fopen_safer(*(undefined8 *)(param_2 + lVar14),puVar13);
            *(long *)((long)plVar12 + lVar14 + 8) = lVar8;
            if (lVar8 != 0) break;
            quotearg_n_style_colon(0,3,*(undefined8 *)(param_2 + lVar14));
            puVar9 = (uint *)func_0x00101550();
            lVar14 = lVar14 + 8;
            func_0x001017b0((ulong)(output_error - 3 < 2),(ulong)*puVar9,&UNK_00105afc);
            bStack8272 = 0;
            if (lVar14 == lVar15) goto code_r0x00101d03;
          }
          lVar14 = lVar14 + 8;
          lVar6 = lVar6 + 1;
          func_0x001017a0(lVar8,0,2,0);
        } while (lVar14 != lVar15);
code_r0x00101d03:
        if (lVar6 != 0) goto code_r0x00101d08;
code_r0x00101d6c:
        puVar11 = (undefined *)0x0;
        puVar13 = (undefined *)((ulong)(param_1 - 1) * 8 + 8);
        bVar4 = bStack8272;
        do {
          while ((bStack8272 = bVar4, *(long *)((long)plVar12 + (long)((long)puVar11 + 8)) == 0 ||
                 (iVar5 = rpl_fclose(), iVar5 == 0))) {
            puVar11 = puVar11 + 8;
            bVar4 = bStack8272;
            if (puVar11 == puVar13) goto code_r0x00101de0;
          }
          puVar1 = (undefined8 *)(puVar11 + param_2);
          puVar11 = puVar11 + 8;
          uVar7 = quotearg_n_style_colon(0,3,*puVar1);
          puVar9 = (uint *)func_0x00101550();
          func_0x001017b0(0,(ulong)*puVar9,&UNK_00105afc,uVar7);
          bStack8272 = 0;
          bVar4 = 0;
        } while (puVar11 != puVar13);
      }
code_r0x00101de0:
      func_0x00101530();
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)bStack8272;
      }
      func_0x00101610();
    }
    lVar6 = xalloc_die();
code_r0x00101f87:
    bVar3 = true;
  } while( true );
}

