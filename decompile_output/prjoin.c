
/* WARNING: Possible PIC construction at 0x00103104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00103109) */

void prjoin(undefined1 *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  byte bVar6;
  
  bVar6 = (byte)tab;
  if (tab < 0) {
    bVar6 = 0x20;
  }
  if (outlist_head._16_8_ == (int *)0x0) {
    puVar3 = param_2;
    uVar5 = join_field_2;
    if (param_1 != uni_blank) {
      puVar3 = param_1;
      uVar5 = join_field_1;
    }
    prfield_isra_5(uVar5,*(undefined8 *)(puVar3 + 0x18),puVar3 + 0x28);
    prfields(param_1,join_field_1,autocount_1);
    prfields(param_2,join_field_2,autocount_2);
code_r0x001030c3:
    bVar6 = eolchar;
    pbVar1 = *(byte **)(stdout + 0x28);
    if (pbVar1 < *(byte **)(stdout + 0x30)) {
      *(byte **)(stdout + 0x28) = pbVar1 + 1;
      *pbVar1 = bVar6;
      return;
    }
code_r0x00101760:
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___overflow_0030aeb8)(stdout,(ulong)bVar6);
    return;
  }
  iVar2 = *outlist_head._16_8_;
  piVar4 = outlist_head._16_8_;
  if (iVar2 != 0) goto code_r0x0010305d;
  do {
    puVar3 = param_2;
    uVar5 = join_field_2;
    if (param_1 != uni_blank) {
      puVar3 = param_1;
      uVar5 = join_field_1;
    }
    while( true ) {
      prfield_isra_5(uVar5,*(undefined8 *)(puVar3 + 0x18),puVar3 + 0x28);
      piVar4 = *(int **)(piVar4 + 4);
      if (piVar4 == (int *)0x0) goto code_r0x001030c3;
      pbVar1 = *(byte **)(stdout + 0x28);
      if (*(byte **)(stdout + 0x30) <= pbVar1) goto code_r0x00101760;
      *(byte **)(stdout + 0x28) = pbVar1 + 1;
      *pbVar1 = bVar6;
      iVar2 = *piVar4;
      if (iVar2 == 0) break;
code_r0x0010305d:
      uVar5 = *(undefined8 *)(piVar4 + 2);
      puVar3 = param_1;
      if (iVar2 != 1) {
        puVar3 = param_2;
      }
    }
  } while( true );
}

