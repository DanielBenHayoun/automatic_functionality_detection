
undefined8
pop_fail_stack_isra_25
          (long *param_1,long *param_2,undefined8 *param_3,long param_4,undefined8 param_5,
          undefined4 *param_6)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  byte *pbVar4;
  undefined *puVar5;
  
  lVar3 = *param_1 + -1;
  *param_1 = lVar3;
  if (-1 < lVar3) {
    lVar2 = *param_2;
    lVar3 = lVar3 * 0x30;
    *param_3 = *(undefined8 *)(lVar2 + lVar3);
    func_0x00101d70(param_5,((undefined8 *)(lVar2 + lVar3))[2],param_4 << 4,param_4 << 4);
    func_0x00101b00(*(undefined8 *)(param_6 + 4));
    func_0x00101b00(*(undefined8 *)(*param_2 + 0x10 + lVar3));
    lVar3 = lVar3 + *param_2;
                    /* WARNING: Load size is inaccurate */
    auVar1 = *(undefined *)(lVar3 + 0x18);
    *param_6 = SUB164(auVar1,0);
    param_6[1] = SUB164(auVar1 >> 0x20,0);
    param_6[2] = SUB164(auVar1 >> 0x40,0);
    param_6[3] = SUB164(auVar1 >> 0x60,0);
    *(undefined8 *)(param_6 + 4) = *(undefined8 *)(lVar3 + 0x28);
    return *(undefined8 *)(lVar3 + 8);
  }
  pbVar4 = &UNK_001175d3;
  puVar5 = &UNK_001175e1;
  func_0x00101c90(&UNK_001175e1,&UNK_001175d3,0x555);
  lVar3 = func_0x00101c10(pbVar4);
  if (lVar3 == 1) {
    *(ulong *)(puVar5 + ((uint)(*pbVar4 >> 3) & 0x18)) =
         *(ulong *)(puVar5 + ((uint)(*pbVar4 >> 3) & 0x18)) | 1 << (*pbVar4 & 0x3f);
    return 0;
  }
  return 3;
}

