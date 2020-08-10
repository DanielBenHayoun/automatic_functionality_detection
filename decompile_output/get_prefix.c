
void get_prefix(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  
  in_column = 0;
  if (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x10)) {
    *(long *)(param_1 + 8) = *(ulong *)(param_1 + 8) + 1;
  }
  else {
    func_0x001014c0();
  }
  uVar4 = get_space(param_1);
  if (prefix_length == 0) {
    next_prefix_indent = prefix_lead_space;
    if (in_column <= prefix_lead_space) {
      next_prefix_indent = in_column;
    }
  }
  else {
    next_prefix_indent = in_column;
    if (*prefix == 0) {
code_r0x00101fc0:
      uVar6 = (ulong)uVar4;
      do {
        while ((int)uVar6 != 0x20) {
          if ((int)uVar6 != 9) {
            return;
          }
          tabs = 1;
          iVar3 = in_column + 7;
          if (-1 < in_column) {
            iVar3 = in_column;
          }
          in_column = (iVar3 >> 3) * 8 + 8;
          pbVar5 = *(byte **)(param_1 + 8);
          if (pbVar5 < *(byte **)(param_1 + 0x10)) goto code_r0x00102004;
code_r0x00102025:
          uVar6 = func_0x001014c0(param_1);
        }
        in_column = in_column + 1;
        pbVar5 = *(byte **)(param_1 + 8);
        if (*(byte **)(param_1 + 0x10) <= pbVar5) goto code_r0x00102025;
code_r0x00102004:
        *(byte **)(param_1 + 8) = pbVar5 + 1;
        uVar6 = (ulong)*pbVar5;
      } while( true );
    }
    pbVar5 = prefix;
    if (uVar4 == (uint)*prefix) {
      do {
        in_column = in_column + 1;
        pbVar2 = *(byte **)(param_1 + 8);
        if (pbVar2 < *(byte **)(param_1 + 0x10)) {
          *(byte **)(param_1 + 8) = pbVar2 + 1;
          bVar1 = pbVar5[1];
          uVar4 = (uint)*pbVar2;
        }
        else {
          uVar4 = func_0x001014c0(param_1);
          bVar1 = pbVar5[1];
        }
        if (bVar1 == 0) goto code_r0x00101fc0;
        pbVar5 = pbVar5 + 1;
      } while ((uint)bVar1 == uVar4);
    }
  }
  return;
}

