
void xstrtol_fatal(uint param_1,uint param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  long in_FS_OFFSET;
  undefined uStack50;
  undefined uStack49;
  undefined8 uStack48;
  
  uVar1 = exit_failure;
  uVar5 = (ulong)param_2;
  uStack48 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 < 4) {
    if (1 < param_1) goto code_r0x00114efb;
    puVar3 = &UNK_0011ac74;
    if (param_1 != 1) goto code_r0x00114ef6;
  }
  else {
    puVar3 = &UNK_0011ac59;
    if (param_1 != 4) goto code_r0x00114ef6;
  }
  do {
    iVar4 = (int)uVar5;
    if (iVar4 < 0) {
      uStack50 = (undefined)param_3;
      uStack49 = 0;
      puVar6 = &uStack50;
      param_4 = &UNK_0011ac91 + -(long)iVar4;
    }
    else {
      puVar6 = *(undefined **)(param_4 + (long)iVar4 * 0x20);
      param_4 = &UNK_0011ac91;
    }
    uVar2 = func_0x001033e0(0,puVar3,5);
    func_0x00103760((ulong)uVar1,0,uVar2,param_4,puVar6,param_5);
code_r0x00114ef6:
    func_0x00103290();
    param_3 = extraout_RDX;
code_r0x00114efb:
    puVar3 = &UNK_0011ac98;
  } while( true );
}

