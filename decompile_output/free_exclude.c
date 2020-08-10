
/* WARNING: Possible PIC construction at 0x00105495: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001054bf: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001054f7: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x001054c4) */
/* WARNING: Removing unreachable block (ram,0x001054fc) */
/* WARNING: Removing unreachable block (ram,0x00105505) */

void free_exclude(undefined8 *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)*param_1;
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    if (*(int *)(puVar3 + 1) == 0) {
      hash_free(puVar3[2]);
      param_1 = puVar3;
      goto code_r0x00102a10;
    }
    if (*(int *)(puVar3 + 1) == 1) {
      param_1 = (undefined8 *)puVar3[2];
      if (puVar3[4] == 0) goto code_r0x00102a10;
      lVar5 = 0;
      uVar4 = 0;
      goto code_r0x0010546e;
    }
    func_0x00102a10(puVar3);
    puVar3 = puVar2;
  }
  if (param_1[1] != 0) {
    param_1 = *(undefined8 **)(param_1[1] + 8);
  }
  goto code_r0x00102a10;
  while( true ) {
    uVar4 = uVar4 + 1;
    lVar5 = lVar5 + 0x48;
    if ((ulong)puVar3[4] <= uVar4) break;
code_r0x0010546e:
    puVar1 = (uint *)((long)param_1 + lVar5);
    if ((*puVar1 & 0x8000000) != 0) {
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x48;
      rpl_regfree(puVar1 + 2);
      param_1 = (undefined8 *)puVar3[2];
      if ((ulong)puVar3[4] <= uVar4) break;
      goto code_r0x0010546e;
    }
  }
code_r0x00102a10:
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00327fc8)(param_1);
  return;
}

