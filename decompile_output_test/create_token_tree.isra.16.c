
long create_token_tree_isra_16
               (undefined8 *param_1,int *param_2,long *param_3,long *param_4,undefined *param_5)

{
  undefined auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  
  iVar6 = *param_2;
  if (iVar6 == 0xf) {
    puVar4 = (undefined8 *)func_0x00101ac0(0x3c8);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    uVar2 = *param_1;
    iVar6 = 1;
    *(undefined8 **)param_1 = puVar4;
    lVar5 = 0;
    *puVar4 = uVar2;
    lVar3 = 8;
  }
  else {
    lVar5 = (long)iVar6;
    iVar6 = iVar6 + 1;
    puVar4 = (undefined8 *)*param_1;
    lVar3 = lVar5 * 0x40 + 8;
  }
  *param_2 = iVar6;
  lVar3 = lVar3 + (long)puVar4;
  puVar4 = puVar4 + lVar5 * 8;
  puVar4[1] = 0;
  *(long **)(puVar4 + 2) = param_3;
  *(long **)(puVar4 + 3) = param_4;
                    /* WARNING: Load size is inaccurate */
  auVar1 = *(undefined *)param_5;
  *(int *)(puVar4 + 6) = SUB164(auVar1,0);
  *(undefined4 *)((long)puVar4 + 0x34) = SUB164(auVar1 >> 0x20,0);
  *(int *)(puVar4 + 7) = SUB164(auVar1 >> 0x40,0);
  *(undefined4 *)((long)puVar4 + 0x3c) = SUB164(auVar1 >> 0x60,0);
  *(byte *)((long)puVar4 + 0x3a) = *(byte *)((long)puVar4 + 0x3a) & 0xf3;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0xffffffffffffffff;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  if (param_4 != (long *)0x0) {
    *param_4 = lVar3;
  }
  return lVar3;
}

