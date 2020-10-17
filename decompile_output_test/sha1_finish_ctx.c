
uint * sha1_finish_ctx(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  uVar1 = param_1[7];
  uVar5 = param_1[6];
  lVar9 = (-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80;
  uVar3 = param_1[5];
  uVar2 = uVar1 + param_1[5];
  param_1[5] = uVar2;
  if (CARRY4(uVar1,uVar3) != false) {
    uVar5 = uVar5 + 1;
    param_1[6] = uVar5;
  }
  uVar5 = uVar5 << 3;
  uVar3 = uVar2 * 8;
  param_1[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x26] =
       uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
       (uVar5 | uVar2 >> 0x1d) << 0x18;
  param_1[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x27] =
       uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar2 * 0x8000000;
  lVar7 = lVar9 - (ulong)uVar1;
  puVar8 = (undefined8 *)((long)(param_1 + 8) + (ulong)uVar1);
  uVar4 = lVar7 - 8;
  if (uVar4 < 8) {
    if ((uVar4 & 4) == 0) {
      if ((uVar4 != 0) && (*(char *)puVar8 = (char)fillbuf._0_4_, (uVar4 & 2) != 0)) {
        *(undefined2 *)((long)puVar8 + lVar7 + -10) = *(undefined2 *)(&UNK_00108536 + lVar7);
      }
    }
    else {
      *(undefined4 *)puVar8 = fillbuf._0_4_;
      *(undefined4 *)((long)puVar8 + lVar7 + -0xc) = *(undefined4 *)(&UNK_00108534 + lVar7);
    }
  }
  else {
    *puVar8 = CONCAT44(fillbuf._4_4_,fillbuf._0_4_);
    *(undefined8 *)((long)puVar8 + lVar7 + -0x10) = *(undefined8 *)(&UNK_00108530 + lVar7);
    puVar6 = (undefined8 *)
             ((long)puVar8 - (long)(undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8));
    uVar4 = uVar4 + (long)puVar6 >> 3;
    puVar6 = (undefined8 *)(fillbuf + -(long)puVar6);
    puVar8 = (undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
    while (uVar4 != 0) {
      uVar4 = uVar4 - 1;
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  sha1_process_block(param_1 + 8,lVar9,param_1);
  uVar1 = *param_1;
  *param_2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[1];
  param_2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[2];
  param_2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[3];
  param_2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_1[4];
  param_2[4] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  return param_2;
}

