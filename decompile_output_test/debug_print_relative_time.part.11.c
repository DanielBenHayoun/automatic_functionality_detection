
void debug_print_relative_time_part_11(undefined8 param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = func_0x00102820(0,&UNK_00113025,5);
  dbg_printf(uVar3,param_1);
  uVar3 = stderr;
  if (*(long *)(param_2 + 0x68) == 0) {
    lVar5 = *(long *)(param_2 + 0x70);
    if (lVar5 != 0) {
      uVar6 = 0;
code_r0x00106534:
      bVar2 = print_rel_part_part_2(uVar6,lVar5,&UNK_0011304e);
      lVar5 = *(long *)(param_2 + 0x78);
      uVar6 = (ulong)bVar2;
      goto code_r0x00106547;
    }
    lVar5 = *(long *)(param_2 + 0x78);
    uVar6 = 0;
    if (lVar5 != 0) goto code_r0x00106620;
    if ((((*(long *)(param_2 + 0x80) == 0) && (*(long *)(param_2 + 0x88) == 0)) &&
        (*(long *)(param_2 + 0x90) == 0)) && (uVar6 = 0, *(int *)(param_2 + 0x98) == 0)) {
      uVar4 = func_0x00102820(0,&UNK_00113036,5);
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_fputs_00317e80)(uVar4,uVar3);
      return;
    }
  }
  else {
    bVar2 = print_rel_part_part_2(0,*(long *)(param_2 + 0x68),&UNK_00113046);
    lVar5 = *(long *)(param_2 + 0x70);
    uVar6 = (ulong)bVar2;
    if (lVar5 != 0) goto code_r0x00106534;
    lVar5 = *(long *)(param_2 + 0x78);
code_r0x00106547:
    if (lVar5 != 0) {
code_r0x00106620:
      bVar2 = print_rel_part_part_2(uVar6,lVar5,&UNK_00113057);
      lVar5 = *(long *)(param_2 + 0x80);
      uVar6 = (ulong)bVar2;
      goto joined_r0x00106639;
    }
  }
  lVar5 = *(long *)(param_2 + 0x80);
joined_r0x00106639:
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_2 + 0x88);
  }
  else {
    bVar2 = print_rel_part_part_2(uVar6,lVar5,&UNK_0011305e);
    lVar5 = *(long *)(param_2 + 0x88);
    uVar6 = (ulong)bVar2;
  }
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_2 + 0x90);
  }
  else {
    bVar2 = print_rel_part_part_2(uVar6,lVar5,&UNK_00111819);
    lVar5 = *(long *)(param_2 + 0x90);
    uVar6 = (ulong)bVar2;
  }
  if (lVar5 == 0) {
    iVar1 = *(int *)(param_2 + 0x98);
  }
  else {
    bVar2 = print_rel_part_part_2(uVar6,lVar5,&UNK_00113143);
    iVar1 = *(int *)(param_2 + 0x98);
    uVar6 = (ulong)bVar2;
  }
  if ((long)iVar1 != 0) {
    print_rel_part_part_2(uVar6,(long)iVar1,&UNK_00113066);
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fputc_00317e90)(10,stderr);
  return;
}

