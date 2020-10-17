
/* WARNING: Removing unreachable block (ram,0x00104d97) */

ulong announce_mkdir_part_9
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
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
  undefined *puStack16;
  
  puStack16 = &UNK_0010419e;
  uStack184 = quotearg_style(4,param_1);
  puStack16 = &UNK_001041b4;
  uVar3 = func_0x00102ad0(0,&UNK_001163df,5);
  lVar7 = stdout;
  uVar5 = (uint)uVar3;
  lStack208 = *(long *)(in_FS_OFFSET + 0x28);
  uStack176 = param_4;
  uStack168 = param_5;
  uStack160 = param_6;
  func_0x00102cb0(program_name,stdout);
  func_0x00102e70(&UNK_001176a6,1,2,lVar7);
  puStack224 = &stack0x00000008;
  uStack232 = 0x10;
  uStack228 = 0x30;
  puStack216 = auStack200;
  lVar6 = lVar7;
  rpl_vfprintf(lVar7,uVar3,&uStack232);
  puVar1 = *(undefined **)(lVar7 + 0x28);
  if (puVar1 < *(undefined **)(lVar7 + 0x30)) {
    *(undefined **)(lVar7 + 0x28) = puVar1 + 1;
    *puVar1 = 10;
    lVar7 = lVar6;
  }
  else {
    uVar5 = 0;
    func_0x00102b90(lVar7);
  }
  if (lStack208 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x00102b30();
  if ((uVar5 & 0xf000) == 0xa000) {
    return 1;
  }
  cVar2 = can_write_any_file();
  if (cVar2 == '\0') {
    uVar4 = func_0x00102fd0(lVar7,2);
    return uVar4 & 0xffffffffffffff00 | (ulong)((int)uVar4 == 0);
  }
  return 1;
}

