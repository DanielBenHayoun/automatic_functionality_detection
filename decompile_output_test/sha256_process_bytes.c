
void sha256_process_bytes(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined auVar1 [16];
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  
  lVar2 = *(long *)(param_3 + 0x28);
  if (lVar2 != 0) {
    lVar10 = param_3 + 0x30;
    uVar9 = 0x80U - lVar2;
    if (param_2 < 0x80U - lVar2) {
      uVar9 = param_2;
    }
    func_0x00101770(lVar10 + lVar2,param_1,uVar9);
    uVar6 = *(long *)(param_3 + 0x28) + uVar9;
    *(ulong *)(param_3 + 0x28) = uVar6;
    if (0x40 < uVar6) {
      sha256_process_block(lVar10,uVar6 & 0xffffffffffffffc0,param_3);
      uVar6 = *(ulong *)(param_3 + 0x28);
      puVar5 = (undefined8 *)(lVar10 + (lVar2 + uVar9 & 0xffffffffffffffc0));
      uVar3 = (uint)uVar6 & 0x3f;
      *(ulong *)(param_3 + 0x28) = (ulong)uVar3;
      if (uVar3 < 8) {
        if ((uVar6 & 4) == 0) {
          if (((uVar6 & 0x3f) != 0) &&
             (*(undefined *)(param_3 + 0x30) = *(undefined *)puVar5, (uVar6 & 2) != 0)) {
            *(undefined2 *)(param_3 + 0x2e + (ulong)uVar3) =
                 *(undefined2 *)((long)puVar5 + ((ulong)uVar3 - 2));
          }
        }
        else {
          *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)puVar5;
          *(undefined4 *)(param_3 + 0x2c + (ulong)uVar3) =
               *(undefined4 *)((long)puVar5 + ((ulong)uVar3 - 4));
        }
      }
      else {
        *(undefined8 *)(param_3 + 0x30) = *puVar5;
        *(undefined8 *)(param_3 + 0x28 + (ulong)uVar3) =
             *(undefined8 *)((long)puVar5 + ((ulong)uVar3 - 8));
        uVar6 = param_3 + 0x38U & 0xfffffffffffffff8;
        lVar10 = lVar10 - uVar6;
        uVar3 = (int)lVar10 + uVar3 & 0xfffffff8;
        if (7 < uVar3) {
          uVar4 = 0;
          do {
            uVar7 = (ulong)uVar4;
            uVar4 = uVar4 + 8;
            *(undefined8 *)(uVar6 + uVar7) = *(undefined8 *)((long)puVar5 + (uVar7 - lVar10));
          } while (uVar4 < uVar3);
        }
      }
    }
    param_1 = (undefined8 *)((long)param_1 + uVar9);
    param_2 = param_2 - uVar9;
  }
  if (0x3f < param_2) {
    if (((ulong)param_1 & 3) != 0) {
      if (param_2 != 0x40) {
        uVar9 = param_2 - 0x41 >> 6;
        puVar8 = param_1 + (uVar9 + 1) * 8;
        puVar5 = param_1;
        do {
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)puVar5;
          param_1 = puVar5 + 8;
          *(undefined4 *)(param_3 + 0x30) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x34) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x38) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x3c) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar5 + 2);
          *(undefined4 *)(param_3 + 0x40) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x44) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x48) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x4c) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar5 + 4);
          *(undefined4 *)(param_3 + 0x50) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x54) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x58) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x5c) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar5 + 6);
          *(undefined4 *)(param_3 + 0x60) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 100) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x68) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x6c) = SUB164(auVar1 >> 0x60,0);
          sha256_process_block(SUB168(auVar1,0),(undefined4 *)(param_3 + 0x30),0x40,param_3);
          puVar5 = param_1;
        } while (param_1 != puVar8);
        param_2 = (param_2 - 0x40) + uVar9 * -0x40;
      }
      goto code_r0x00105fe0;
    }
    uVar9 = param_2 & 0xffffffffffffffc0;
    param_2 = (ulong)((uint)param_2 & 0x3f);
    sha256_process_block(param_1,uVar9,param_3);
    param_1 = (undefined8 *)((long)param_1 + uVar9);
  }
  if (param_2 == 0) {
    return;
  }
code_r0x00105fe0:
  lVar10 = param_3 + 0x30;
  lVar2 = *(long *)(param_3 + 0x28);
  uVar3 = (uint)param_2;
  puVar5 = (undefined8 *)(lVar10 + lVar2);
  if (uVar3 < 8) {
    if ((param_2 & 4) == 0) {
      if ((uVar3 != 0) && (*(undefined *)puVar5 = *(undefined *)param_1, (param_2 & 2) != 0)) {
        *(undefined2 *)((long)puVar5 + ((param_2 & 0xffffffff) - 2)) =
             *(undefined2 *)((long)param_1 + ((param_2 & 0xffffffff) - 2));
      }
    }
    else {
      *(undefined4 *)puVar5 = *(undefined4 *)param_1;
      *(undefined4 *)((long)puVar5 + ((param_2 & 0xffffffff) - 4)) =
           *(undefined4 *)((long)param_1 + ((param_2 & 0xffffffff) - 4));
    }
  }
  else {
    *puVar5 = *param_1;
    *(undefined8 *)((long)puVar5 + ((param_2 & 0xffffffff) - 8)) =
         *(undefined8 *)((long)param_1 + ((param_2 & 0xffffffff) - 8));
    puVar8 = (undefined8 *)((long)puVar5 - ((ulong)(puVar5 + 1) & 0xfffffffffffffff8));
    uVar3 = (int)puVar8 + uVar3 & 0xfffffff8;
    if (7 < uVar3) {
      uVar9 = 0;
      do {
        uVar4 = (int)uVar9 + 8;
        *(undefined8 *)(((ulong)(puVar5 + 1) & 0xfffffffffffffff8) + uVar9) =
             *(undefined8 *)((long)param_1 + (uVar9 - (long)puVar8));
        uVar9 = (ulong)uVar4;
      } while (uVar4 < uVar3);
    }
  }
  param_2 = param_2 + lVar2;
  if (0x3f < param_2) {
    sha256_process_block(lVar10,0x40,param_3);
    param_2 = param_2 - 0x40;
    func_0x00101770(lVar10,param_3 + 0x70,param_2);
  }
  *(ulong *)(param_3 + 0x28) = param_2;
  return;
}

