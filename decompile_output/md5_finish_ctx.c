
undefined4 * md5_finish_ctx(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  uVar1 = param_1[6];
  iVar4 = param_1[5];
  lVar9 = (-(ulong)(uVar1 < 0x38) & 0xffffffffffffffc0) + 0x80;
  uVar2 = param_1[4];
  uVar5 = uVar1 + param_1[4];
  param_1[4] = uVar5;
  if (CARRY4(uVar1,uVar2) != false) {
    iVar4 = iVar4 + 1;
    param_1[5] = iVar4;
  }
  param_1[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x25] = uVar5 * 8;
  param_1[(-(ulong)(uVar1 < 0x38) & 0xfffffffffffffff0) + 0x26] = iVar4 << 3 | uVar5 >> 0x1d;
  lVar7 = lVar9 - (ulong)uVar1;
  uVar3 = lVar7 - 8;
  puVar8 = (undefined8 *)((long)(param_1 + 7) + (ulong)uVar1);
  if (uVar3 < 8) {
    if ((uVar3 & 4) == 0) {
      if ((uVar3 != 0) && (*(char *)puVar8 = (char)fillbuf._0_4_, (uVar3 & 2) != 0)) {
        *(undefined2 *)((long)puVar8 + lVar7 + -10) = *(undefined2 *)(&UNK_001079f6 + lVar7);
      }
    }
    else {
      *(undefined4 *)puVar8 = fillbuf._0_4_;
      *(undefined4 *)((long)puVar8 + lVar7 + -0xc) = *(undefined4 *)(&UNK_001079f4 + lVar7);
    }
  }
  else {
    *puVar8 = CONCAT44(fillbuf._4_4_,fillbuf._0_4_);
    *(undefined8 *)((long)puVar8 + lVar7 + -0x10) = *(undefined8 *)(&UNK_001079f0 + lVar7);
    puVar6 = (undefined8 *)
             ((long)puVar8 - (long)(undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8));
    uVar3 = uVar3 + (long)puVar6 >> 3;
    puVar6 = (undefined8 *)(fillbuf + -(long)puVar6);
    puVar8 = (undefined8 *)((ulong)(puVar8 + 1) & 0xfffffffffffffff8);
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  md5_process_block(param_1 + 7,lVar9,param_1);
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  param_2[3] = param_1[3];
  return param_2;
}

