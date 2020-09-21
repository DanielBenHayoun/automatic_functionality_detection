
uint * xfprintf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               uint *param_9,uint *param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  uint uVar1;
  char in_AL;
  char cVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  uint *extraout_RDX;
  undefined *extraout_RDX_00;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined *puVar10;
  uint *puVar11;
  uint *puVar12;
  long in_FS_OFFSET;
  undefined auStack272 [4];
  uint uStack268;
  long lStack264;
  undefined4 uStack216;
  undefined4 uStack212;
  undefined *puStack208;
  undefined *puStack200;
  long lStack192;
  undefined auStack184 [16];
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
  puStack208 = &stack0x00000008;
  puStack200 = auStack184;
  uStack216 = 0x10;
  uStack212 = 0x30;
  uStack168 = param_11;
  uStack160 = param_12;
  uStack152 = param_13;
  uStack144 = param_14;
  uVar3 = xvfprintf(param_9,param_10,&uStack216);
  if (lStack192 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uint *)uVar3;
  }
  func_0x00101520();
  lStack264 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == (uint *)0x0) {
    param_9 = &uStack268;
  }
  puVar9 = param_10;
  puVar11 = param_9;
  puVar7 = (uint *)func_0x00101530();
  if (((uint *)0xfffffffffffffffd < puVar7) && (extraout_RDX != (uint *)0x0)) {
    puVar11 = (uint *)0x0;
    cVar2 = hard_locale();
    if (cVar2 == '\0') {
      puVar7 = (uint *)0x1;
      *param_9 = (uint)*(byte *)param_10;
    }
  }
  if (lStack264 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
  }
  func_0x00101520();
  puVar5 = extraout_RDX_00;
  puVar6 = auStack272;
  puVar12 = extraout_RDX;
  do {
    *(uint **)(puVar6 + -8) = param_10;
    *(uint **)(puVar6 + -0x10) = puVar12;
    *(uint **)(puVar6 + -0x18) = puVar7;
    *(uint **)(puVar6 + -0x20) = param_9;
    puVar12 = (uint *)(puVar6 + -0x808);
    puVar10 = puVar6 + -0x810;
    *(undefined8 *)(puVar6 + -0x810) = 2000;
    *(undefined8 *)(puVar6 + -0x30) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)(puVar6 + -0x820) = 0x105f17;
    puVar8 = (uint *)vasnprintf(puVar12,puVar10,puVar9,puVar5);
    param_9 = *(uint **)(puVar6 + -0x810);
    param_10 = puVar11;
    if (puVar8 == (uint *)0x0) {
code_r0x00105fae:
      puVar8 = puVar7;
      param_9 = (uint *)0xffffffff;
      *(undefined8 *)(puVar6 + -0x820) = 0x105fbb;
      puVar9 = puVar11;
      fseterr();
      puVar5 = puVar10;
    }
    else {
      puVar10 = (undefined *)0x1;
      *(undefined8 *)(puVar6 + -0x820) = 0x105f3b;
      puVar9 = puVar8;
      puVar7 = (uint *)func_0x001016f0(puVar8,1,param_9,puVar11);
      if (puVar7 < param_9) {
        param_9 = (uint *)0xffffffff;
        puVar5 = puVar10;
        if (puVar8 != puVar12) {
          *(undefined8 *)(puVar6 + -0x820) = 0x105f8f;
          puVar12 = (uint *)func_0x00101450();
          uVar1 = *puVar12;
          param_10 = (uint *)(ulong)uVar1;
          *(undefined8 *)(puVar6 + -0x820) = 0x105f9d;
          puVar9 = puVar8;
          func_0x00101430();
          *puVar12 = uVar1;
          puVar5 = puVar10;
        }
      }
      else {
        if (puVar8 != puVar12) {
          *(undefined8 *)(puVar6 + -0x820) = 0x105f4d;
          puVar9 = puVar8;
          func_0x00101430();
        }
        puVar5 = puVar10;
        if ((uint *)0x7fffffff < param_9) {
          *(undefined8 *)(puVar6 + -0x820) = 0x105fa8;
          puVar4 = (undefined4 *)func_0x00101450();
          *puVar4 = 0x4b;
          puVar7 = puVar8;
          goto code_r0x00105fae;
        }
      }
    }
    if (*(long *)(puVar6 + -0x30) == *(long *)(in_FS_OFFSET + 0x28)) {
      return (uint *)((ulong)param_9 & 0xffffffff);
    }
    *(undefined8 *)(puVar6 + -0x820) = 0x105fc2;
    func_0x00101520();
    puVar6 = puVar6 + -0x818;
    puVar7 = puVar8;
    puVar11 = stdout;
  } while( true );
}

