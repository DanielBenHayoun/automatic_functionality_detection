
void signal_setup(char param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  code *pcStack216;
  undefined4 uStack208;
  undefined4 uStack204;
  undefined4 uStack200;
  undefined4 uStack196;
  undefined4 uStack192;
  undefined4 uStack188;
  undefined4 uStack184;
  undefined4 uStack180;
  undefined4 uStack176;
  undefined4 uStack172;
  undefined4 uStack168;
  undefined4 uStack164;
  undefined4 uStack160;
  undefined4 uStack156;
  undefined4 uStack152;
  undefined4 uStack148;
  undefined4 uStack144;
  undefined4 uStack140;
  undefined4 uStack136;
  undefined4 uStack132;
  undefined4 uStack128;
  undefined4 uStack124;
  undefined4 uStack120;
  undefined4 uStack116;
  undefined4 uStack112;
  undefined4 uStack108;
  undefined4 uStack104;
  undefined4 uStack100;
  undefined4 uStack96;
  undefined4 uStack92;
  undefined4 uStack88;
  undefined4 uStack84;
  undefined4 uStack80;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == '\0') {
    puVar2 = (uint *)(sig_9937 + 4);
    uVar3 = 0x14;
    while( true ) {
      iVar1 = func_0x001037d0(caught_signals,(ulong)uVar3);
      if (iVar1 != 0) {
        func_0x001035a0((ulong)uVar3);
      }
      if (puVar2 == (uint *)&UNK_00116670) break;
      uVar3 = *puVar2;
      puVar2 = puVar2 + 1;
    }
  }
  else {
    puVar4 = (uint *)(sig_9937 + 4);
    uVar3 = 0x14;
    func_0x001035e0(caught_signals);
    puVar2 = (uint *)(sig_9937 + 4);
    while( true ) {
      func_0x00103310((ulong)uVar3,0,&pcStack216);
      if (pcStack216 != (code *)0x1) {
        func_0x00103840();
      }
      if (puVar2 == (uint *)&UNK_00116670) break;
      uVar3 = *puVar2;
      puVar2 = puVar2 + 1;
    }
    uVar3 = 0x14;
    uStack80 = 0x10000000;
    uStack208 = SUB164(caught_signals._0_16_,0);
    uStack204 = SUB164(caught_signals._0_16_ >> 0x20,0);
    uStack200 = SUB164(caught_signals._0_16_ >> 0x40,0);
    uStack196 = SUB164(caught_signals._0_16_ >> 0x60,0);
    uStack192 = SUB164(caught_signals._16_16_,0);
    uStack188 = SUB164(caught_signals._16_16_ >> 0x20,0);
    uStack184 = SUB164(caught_signals._16_16_ >> 0x40,0);
    uStack180 = SUB164(caught_signals._16_16_ >> 0x60,0);
    uStack176 = SUB164(caught_signals._32_16_,0);
    uStack172 = SUB164(caught_signals._32_16_ >> 0x20,0);
    uStack168 = SUB164(caught_signals._32_16_ >> 0x40,0);
    uStack164 = SUB164(caught_signals._32_16_ >> 0x60,0);
    uStack160 = SUB164(caught_signals._48_16_,0);
    uStack156 = SUB164(caught_signals._48_16_ >> 0x20,0);
    uStack152 = SUB164(caught_signals._48_16_ >> 0x40,0);
    uStack148 = SUB164(caught_signals._48_16_ >> 0x60,0);
    uStack144 = SUB164(caught_signals._64_16_,0);
    uStack140 = SUB164(caught_signals._64_16_ >> 0x20,0);
    uStack136 = SUB164(caught_signals._64_16_ >> 0x40,0);
    uStack132 = SUB164(caught_signals._64_16_ >> 0x60,0);
    uStack128 = SUB164(caught_signals._80_16_,0);
    uStack124 = SUB164(caught_signals._80_16_ >> 0x20,0);
    uStack120 = SUB164(caught_signals._80_16_ >> 0x40,0);
    uStack116 = SUB164(caught_signals._80_16_ >> 0x60,0);
    uStack112 = SUB164(caught_signals._96_16_,0);
    uStack108 = SUB164(caught_signals._96_16_ >> 0x20,0);
    uStack104 = SUB164(caught_signals._96_16_ >> 0x40,0);
    uStack100 = SUB164(caught_signals._96_16_ >> 0x60,0);
    uStack96 = SUB164(caught_signals._112_16_,0);
    uStack92 = SUB164(caught_signals._112_16_ >> 0x20,0);
    uStack88 = SUB164(caught_signals._112_16_ >> 0x40,0);
    uStack84 = SUB164(caught_signals._112_16_ >> 0x60,0);
    while( true ) {
      iVar1 = func_0x001037d0(caught_signals,(ulong)uVar3);
      if (iVar1 != 0) {
        pcStack216 = stophandler;
        if (uVar3 != 0x14) {
          pcStack216 = sighandler;
        }
        func_0x00103310((ulong)uVar3,&pcStack216,0);
      }
      if (puVar4 == (uint *)&UNK_00116670) break;
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
    }
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  func_0x00103420();
  if (color_indicator._40_8_ == 0) {
    put_indicator(color_indicator);
    put_indicator(0x320090);
    puVar5 = (undefined8 *)(color_indicator + 0x10);
  }
  else {
    puVar5 = (undefined8 *)(color_indicator + 0x20);
  }
  if (used_color == '\0') {
    used_color = '\x01';
    iVar1 = func_0x00103630(1);
    if (iVar1 < 0) {
      prep_non_filename_text();
    }
    else {
      signal_setup(1);
      prep_non_filename_text();
    }
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fwrite_unlocked_0031fee8)(puVar5[1],*puVar5,1,stdout);
  return;
}

