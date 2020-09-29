
undefined8
dbg_printf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined8 extraout_RDX;
  byte bVar1;
  long in_FS_OFFSET;
  undefined4 uStack216;
  undefined4 uStack212;
  undefined *puStack208;
  undefined *puStack200;
  long lStack192;
  undefined auStack184 [8];
  undefined8 uStack176;
  undefined8 uStack168;
  undefined8 uStack160;
  undefined8 uStack152;
  undefined8 uStack144;
  undefined4 uStack136;
  undefined4 uStack120;
  undefined4 uStack104;
  undefined4 uStack88;
  undefined4 uStack72;
  undefined4 uStack56;
  undefined4 uStack40;
  undefined4 uStack24;
  
  if (in_AL != '\0') {
    uStack136 = param_1;
    uStack120 = param_2;
    uStack104 = param_3;
    uStack88 = param_4;
    uStack72 = param_5;
    uStack56 = param_6;
    uStack40 = param_7;
    uStack24 = param_8;
  }
  lStack192 = *(long *)(in_FS_OFFSET + 0x28);
  uStack176 = param_10;
  uStack168 = param_11;
  uStack160 = param_12;
  uStack152 = param_13;
  uStack144 = param_14;
  func_0x00102ae0(&UNK_001100b7,1,6,stderr);
  puStack208 = &stack0x00000008;
  bVar1 = (byte)stderr;
  uStack216 = 8;
  uStack212 = 0x30;
  puStack200 = auStack184;
  rpl_vfprintf(stderr,param_9,&uStack216);
  if (lStack192 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x00102830();
  func_0x00102af0(stderr,1,&UNK_001100be + (bVar1 ^ 1),param_9,extraout_RDX);
  return 1;
}

