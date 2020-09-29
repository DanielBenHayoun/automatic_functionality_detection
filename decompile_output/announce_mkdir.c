
/* WARNING: Removing unreachable block (ram,0x00102457) */

void announce_mkdir(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
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
  
  if (*(long *)(param_2 + 0x18) == 0) {
    return;
  }
  puStack16 = &UNK_00101f91;
  uStack184 = quotearg_style(4,param_1);
  lVar4 = stdout;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lStack208 = *(long *)(in_FS_OFFSET + 0x28);
  uStack176 = param_4;
  uStack168 = param_5;
  uStack160 = param_6;
  func_0x001018d0(program_name,stdout);
  func_0x001019a0(&UNK_00108c91,1,2,lVar4);
  puStack224 = &stack0x00000008;
  uStack232 = 0x10;
  uStack228 = 0x30;
  puStack216 = auStack200;
  lVar3 = lVar4;
  rpl_vfprintf(lVar4,uVar1,&uStack232);
  puVar2 = *(undefined **)(lVar4 + 0x28);
  if (puVar2 < *(undefined **)(lVar4 + 0x30)) {
    *(undefined **)(lVar4 + 0x28) = puVar2 + 1;
    *puVar2 = 10;
    lVar4 = lVar3;
  }
  else {
    func_0x00101860(lVar4,10);
  }
  if (lStack208 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101830();
    file_name = lVar4;
    return;
  }
  return;
}

