
/* WARNING: Possible PIC construction at 0x00104c65: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00104c6a) */

void format_address_paren(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  ulong uVar3;
  
  puVar1 = *(undefined **)(stdout + 0x28);
  if (*(undefined **)(stdout + 0x30) <= puVar1) {
    uVar3 = 0x28;
code_r0x00101920:
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___overflow_0030feb0)(stdout,uVar3);
    return;
  }
  *(undefined **)(stdout + 0x28) = puVar1 + 1;
  *puVar1 = 0x28;
  format_address_std(param_1,0x29);
  if (param_2 != 0) {
    pbVar2 = *(byte **)(stdout + 0x28);
    if (*(byte **)(stdout + 0x30) <= pbVar2) {
      uVar3 = (ulong)param_2;
      goto code_r0x00101920;
    }
    *(byte **)(stdout + 0x28) = pbVar2 + 1;
    *pbVar2 = param_2;
  }
  return;
}

