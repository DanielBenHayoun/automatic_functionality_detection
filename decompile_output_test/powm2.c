
undefined8
powm2(undefined8 *param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4,undefined8 param_5,
     undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack96;
  undefined8 uStack88;
  
  iVar4 = 0x40;
  uStack88 = *param_6;
  uVar3 = *param_2;
  uVar6 = param_2[1];
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uStack96 = param_6[1];
  uVar5 = *param_3;
  do {
    if ((uVar5 & 1) != 0) {
      uStack88 = mulredc2(param_1,uStack96,uStack88,uVar6,uVar3,uVar2,uVar1,param_5);
      uStack96 = *param_1;
    }
    uVar5 = uVar5 >> 1;
    uVar3 = mulredc2(param_1,uVar6,uVar3,uVar6,uVar3,uVar2,uVar1,param_5);
    iVar4 = iVar4 + -1;
    uVar6 = *param_1;
  } while (iVar4 != 0);
  uVar5 = param_3[1];
  while (uVar5 != 0) {
    if ((uVar5 & 1) != 0) {
      uStack88 = mulredc2(param_1,uStack96,uStack88,uVar6,uVar3,uVar2,uVar1,param_5);
      uStack96 = *param_1;
    }
    uVar3 = mulredc2(param_1,uVar6,uVar3,uVar6,uVar3,uVar2,uVar1,param_5);
    uVar5 = uVar5 >> 1;
    uVar6 = *param_1;
  }
  *param_1 = uStack96;
  return uStack88;
}

