
void xstrcoll_extension(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = (undefined *)func_0x001034a0(*param_1,0x2e);
  puVar5 = (undefined *)func_0x001034a0(*param_2,0x2e);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &UNK_001178a1;
  }
  if (puVar6 == (undefined *)0x0) {
    puVar6 = &UNK_001178a1;
  }
  iVar3 = xstrcoll(puVar6,puVar5,&UNK_001178a1);
  if (iVar3 == 0) {
    uVar1 = *param_2;
    uVar2 = *param_1;
    puVar4 = (undefined4 *)func_0x001032a0(uVar2,uVar1);
    *puVar4 = 0;
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_strcoll_0031fed0)(uVar2,uVar1);
    return;
  }
  return;
}

