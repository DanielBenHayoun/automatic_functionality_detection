
void prog_fprintf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  char in_AL;
  long lVar2;
  long in_FS_OFFSET;
  undefined4 uStack232;
  undefined4 uStack228;
  undefined *puStack224;
  undefined *puStack216;
  long lStack208;
  undefined auStack200 [16];
  undefined8 uStack184;
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined4 uStack152;
  undefined4 uStack136;
  undefined4 uStack120;
  undefined4 uStack104;
  undefined4 uStack88;
  undefined4 uStack72;
  undefined4 uStack56;
  undefined4 uStack40;
  
  if (in_AL != '\0') {
    uStack152 = param_1;
    uStack136 = param_2;
    uStack120 = param_3;
    uStack104 = param_4;
    uStack88 = param_5;
    uStack72 = param_6;
    uStack56 = param_7;
    uStack40 = param_8;
  }
  lStack208 = *(long *)(in_FS_OFFSET + 0x28);
  uStack184 = param_11;
  uStack176 = param_12;
  uStack168 = param_13;
  uStack160 = param_14;
  func_0x00101570(program_name,param_9);
  func_0x00101600(&UNK_00107133,1,2,param_9);
  puStack224 = &stack0x00000008;
  uStack232 = 0x10;
  uStack228 = 0x30;
  puStack216 = auStack200;
  lVar2 = param_9;
  rpl_vfprintf(param_9,param_10,&uStack232);
  puVar1 = *(undefined **)(param_9 + 0x28);
  if (puVar1 < *(undefined **)(param_9 + 0x30)) {
    *(undefined **)(param_9 + 0x28) = puVar1 + 1;
    *puVar1 = 10;
    param_9 = lVar2;
  }
  else {
    func_0x00101500(param_9,10);
  }
  if (lStack208 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x001014d0();
  file_name = param_9;
  return;
}

