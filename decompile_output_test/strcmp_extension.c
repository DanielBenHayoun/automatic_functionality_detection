
/* WARNING: Possible PIC construction at 0x0010b354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010b359) */

void strcmp_extension(undefined8 *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *extraout_RDX;
  undefined *puVar5;
  long lVar6;
  undefined auVar7 [16];
  
  puVar5 = (undefined *)*param_1;
  puVar3 = (undefined *)func_0x001034a0(puVar5,0x2e);
  lVar1 = *param_2;
  auVar7 = func_0x001034a0(lVar1,0x2e);
  puVar4 = SUB168(auVar7 >> 0x40,0);
  lVar6 = SUB168(auVar7,0);
  if (lVar6 == 0) {
    lVar6 = lVar1;
    if ((puVar3 != (undefined *)0x0) &&
       (iVar2 = func_0x00103590(puVar3,&UNK_001178a1), puVar4 = extraout_RDX, iVar2 != 0)) {
      return;
    }
  }
  else {
    puVar4 = &UNK_001178a1;
    puVar5 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar5 = &UNK_001178a1;
    }
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_strcmp_0031fe48)(puVar5,lVar6,puVar4);
  return;
}

