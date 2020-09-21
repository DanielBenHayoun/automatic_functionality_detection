
undefined8 enter_dir_isra_10(ulong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((param_1 & 0x102) == 0) {
    uVar4 = cycle_check(*param_2,param_3 + 0xf);
    if ((char)uVar4 != '\0') {
      *(undefined8 **)param_3 = param_3;
      *(undefined2 *)(param_3 + 0xe) = 2;
      return uVar4;
    }
  }
  else {
    puVar2 = (undefined8 *)func_0x00101c40(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    uVar4 = param_3[0xf];
    uVar1 = *param_2;
    *(undefined8 **)(puVar2 + 2) = param_3;
    *puVar2 = uVar4;
    puVar2[1] = param_3[0x10];
    puVar3 = (undefined8 *)hash_insert(uVar1,puVar2);
    if (puVar2 != puVar3) {
      func_0x00101de0(puVar2);
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      uVar4 = puVar3[2];
      *(undefined2 *)(param_3 + 0xe) = 2;
      *param_3 = uVar4;
    }
  }
  return 1;
}

