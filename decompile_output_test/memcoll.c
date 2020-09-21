
ulong memcoll(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (param_2 == param_4) {
    uVar5 = func_0x00101900(param_1,param_3,param_2);
    if (uVar5 == 0) {
      puVar6 = (undefined4 *)func_0x00101790();
      *puVar6 = 0;
      goto code_r0x00106611;
    }
  }
  puVar1 = (undefined *)(param_1 + param_2);
  puVar2 = (undefined *)(param_3 + param_4);
  uVar3 = *puVar1;
  uVar4 = *puVar2;
  *puVar1 = 0;
  *puVar2 = 0;
  uVar5 = strcoll_loop(param_1,param_2 + 1,param_3,param_4 + 1);
  *puVar1 = uVar3;
  *puVar2 = uVar4;
code_r0x00106611:
  return (ulong)uVar5;
}

