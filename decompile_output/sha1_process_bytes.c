
void sha1_process_bytes(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined auVar1 [16];
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  
  uVar5 = *(uint *)(param_3 + 0x1c);
  if (uVar5 != 0) {
    lVar11 = param_3 + 0x20;
    uVar10 = 0x80 - (ulong)uVar5;
    if (param_2 < uVar10) {
      uVar10 = param_2;
    }
    func_0x00101770();
    uVar2 = *(int *)(param_3 + 0x1c) + (int)uVar10;
    *(uint *)(param_3 + 0x1c) = uVar2;
    if (0x40 < uVar2) {
      sha1_process_block(lVar11,(ulong)(uVar2 & 0xffffffc0),param_3);
      uVar2 = *(uint *)(param_3 + 0x1c);
      puVar6 = (undefined8 *)(((ulong)uVar5 + uVar10 & 0xffffffffffffffc0) + lVar11);
      uVar5 = uVar2 & 0x3f;
      uVar4 = (ulong)uVar5;
      *(uint *)(param_3 + 0x1c) = uVar5;
      if (uVar5 < 8) {
        if ((uVar2 & 4) == 0) {
          if ((uVar5 != 0) &&
             (*(undefined *)(param_3 + 0x20) = *(undefined *)puVar6, (uVar2 & 2) != 0)) {
            *(undefined2 *)(param_3 + 0x1e + uVar4) = *(undefined2 *)((long)puVar6 + (uVar4 - 2));
          }
        }
        else {
          *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)puVar6;
          *(undefined4 *)(param_3 + 0x1c + uVar4) = *(undefined4 *)((long)puVar6 + (uVar4 - 4));
        }
      }
      else {
        *(undefined8 *)(param_3 + 0x20) = *puVar6;
        *(undefined8 *)(param_3 + 0x18 + uVar4) = *(undefined8 *)((long)puVar6 + (uVar4 - 8));
        uVar4 = param_3 + 0x28U & 0xfffffffffffffff8;
        lVar11 = lVar11 - uVar4;
        uVar5 = (int)lVar11 + uVar5 & 0xfffffff8;
        if (7 < uVar5) {
          uVar2 = 0;
          do {
            uVar7 = (ulong)uVar2;
            uVar2 = uVar2 + 8;
            *(undefined8 *)(uVar4 + uVar7) = *(undefined8 *)((long)puVar6 + (uVar7 - lVar11));
          } while (uVar2 < uVar5);
        }
      }
    }
    param_1 = (undefined8 *)((long)param_1 + uVar10);
    param_2 = param_2 - uVar10;
  }
  if (0x3f < param_2) {
    if (((ulong)param_1 & 3) != 0) {
      if (param_2 != 0x40) {
        uVar10 = param_2 - 0x41 >> 6;
        puVar9 = param_1 + (uVar10 + 1) * 8;
        puVar6 = param_1;
        do {
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)puVar6;
          param_1 = puVar6 + 8;
          *(undefined4 *)(param_3 + 0x20) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x24) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x28) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x2c) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar6 + 2);
          *(undefined4 *)(param_3 + 0x30) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x34) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x38) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x3c) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar6 + 4);
          *(undefined4 *)(param_3 + 0x40) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x44) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x48) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x4c) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar6 + 6);
          *(undefined4 *)(param_3 + 0x50) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x54) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x58) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x5c) = SUB164(auVar1 >> 0x60,0);
          sha1_process_block(SUB168(auVar1,0),(undefined4 *)(param_3 + 0x20),0x40,param_3);
          puVar6 = param_1;
        } while (param_1 != puVar9);
        param_2 = (param_2 - 0x40) + uVar10 * -0x40;
      }
      goto code_r0x00104870;
    }
    uVar10 = param_2 & 0xffffffffffffffc0;
    param_2 = (ulong)((uint)param_2 & 0x3f);
    sha1_process_block(param_1,uVar10,param_3);
    param_1 = (undefined8 *)((long)param_1 + uVar10);
  }
  if (param_2 == 0) {
    return;
  }
code_r0x00104870:
  lVar11 = param_3 + 0x20;
  uVar5 = *(uint *)(param_3 + 0x1c);
  uVar2 = (uint)param_2;
  puVar6 = (undefined8 *)(lVar11 + (ulong)uVar5);
  if (uVar2 < 8) {
    if ((param_2 & 4) == 0) {
      if ((uVar2 != 0) && (*(undefined *)puVar6 = *(undefined *)param_1, (param_2 & 2) != 0)) {
        *(undefined2 *)((long)puVar6 + ((param_2 & 0xffffffff) - 2)) =
             *(undefined2 *)((long)param_1 + ((param_2 & 0xffffffff) - 2));
      }
    }
    else {
      *(undefined4 *)puVar6 = *(undefined4 *)param_1;
      *(undefined4 *)((long)puVar6 + ((param_2 & 0xffffffff) - 4)) =
           *(undefined4 *)((long)param_1 + ((param_2 & 0xffffffff) - 4));
    }
  }
  else {
    *puVar6 = *param_1;
    *(undefined8 *)((long)puVar6 + ((param_2 & 0xffffffff) - 8)) =
         *(undefined8 *)((long)param_1 + ((param_2 & 0xffffffff) - 8));
    puVar9 = (undefined8 *)((long)puVar6 - ((ulong)(puVar6 + 1) & 0xfffffffffffffff8));
    uVar2 = (int)puVar9 + uVar2 & 0xfffffff8;
    if (7 < uVar2) {
      uVar10 = 0;
      do {
        uVar3 = (int)uVar10 + 8;
        *(undefined8 *)(((ulong)(puVar6 + 1) & 0xfffffffffffffff8) + uVar10) =
             *(undefined8 *)((long)param_1 + (uVar10 - (long)puVar9));
        uVar10 = (ulong)uVar3;
      } while (uVar3 < uVar2);
    }
  }
  param_2 = param_2 + (ulong)uVar5;
  uVar8 = (undefined4)param_2;
  if (0x3f < param_2) {
    sha1_process_block(lVar11,0x40,param_3);
    uVar8 = (undefined4)(param_2 - 0x40);
    func_0x00101770(lVar11,param_3 + 0x60,param_2 - 0x40);
  }
  *(undefined4 *)(param_3 + 0x1c) = uVar8;
  return;
}

