
void sha512_process_bytes(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  byte bVar9;
  
  bVar9 = 0;
  lVar2 = *(long *)(param_3 + 0x50);
  if (lVar2 != 0) {
    lVar3 = param_3 + 0x58;
    uVar8 = 0x100U - lVar2;
    if (param_2 < 0x100U - lVar2) {
      uVar8 = param_2;
    }
    func_0x00101770(lVar3 + lVar2,param_1,uVar8);
    uVar6 = *(long *)(param_3 + 0x50) + uVar8;
    *(ulong *)(param_3 + 0x50) = uVar6;
    if (0x80 < uVar6) {
      sha512_process_block(lVar3,uVar6 & 0xffffffffffffff80,param_3);
      uVar6 = *(ulong *)(param_3 + 0x50);
      puVar5 = (undefined8 *)(lVar3 + (lVar2 + uVar8 & 0xffffffffffffff80));
      uVar4 = (uint)uVar6 & 0x7f;
      *(ulong *)(param_3 + 0x50) = (ulong)uVar4;
      if (uVar4 < 8) {
        if ((uVar6 & 4) == 0) {
          if (((uVar6 & 0x7f) != 0) &&
             (*(undefined *)(param_3 + 0x58) = *(undefined *)puVar5, (uVar6 & 2) != 0)) {
            *(undefined2 *)(param_3 + 0x56 + (ulong)uVar4) =
                 *(undefined2 *)((long)puVar5 + ((ulong)uVar4 - 2));
          }
        }
        else {
          *(undefined4 *)(param_3 + 0x58) = *(undefined4 *)puVar5;
          *(undefined4 *)(param_3 + 0x54 + (ulong)uVar4) =
               *(undefined4 *)((long)puVar5 + ((ulong)uVar4 - 4));
        }
      }
      else {
        puVar7 = (undefined8 *)(param_3 + 0x60U & 0xfffffffffffffff8);
        *(undefined8 *)(param_3 + 0x58) = *puVar5;
        *(undefined8 *)(param_3 + 0x50 + (ulong)uVar4) =
             *(undefined8 *)((long)puVar5 + ((ulong)uVar4 - 8));
        lVar3 = lVar3 - (long)puVar7;
        uVar6 = (ulong)(uVar4 + (int)lVar3 >> 3);
        puVar5 = (undefined8 *)((long)puVar5 - lVar3);
        while (uVar6 != 0) {
          uVar6 = uVar6 - 1;
          *puVar7 = *puVar5;
          puVar5 = puVar5 + (ulong)bVar9 * 0x1ffffffffffffffe + 1;
          puVar7 = puVar7 + (ulong)bVar9 * 0x1ffffffffffffffe + 1;
        }
      }
    }
    param_1 = (undefined8 *)((long)param_1 + uVar8);
    param_2 = param_2 - uVar8;
  }
  if (0x7f < param_2) {
    if (((ulong)param_1 & 7) != 0) {
      if (param_2 != 0x80) {
        uVar8 = param_2 - 0x81 >> 7;
        puVar7 = param_1 + (uVar8 + 1) * 0x10;
        puVar5 = param_1;
        do {
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)puVar5;
          param_1 = puVar5 + 0x10;
          *(undefined4 *)(param_3 + 0x58) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x5c) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x60) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 100) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar5 + 2);
          *(undefined4 *)(param_3 + 0x68) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x6c) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x70) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x74) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar5 + 4);
          *(undefined4 *)(param_3 + 0x78) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x7c) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x80) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x84) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar5 + 6);
          *(undefined4 *)(param_3 + 0x88) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x8c) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0x90) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0x94) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar5 + 8);
          *(undefined4 *)(param_3 + 0x98) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0x9c) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0xa0) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0xa4) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar5 + 10);
          *(undefined4 *)(param_3 + 0xa8) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0xac) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0xb0) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0xb4) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar5 + 0xc);
          *(undefined4 *)(param_3 + 0xb8) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0xbc) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0xc0) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0xc4) = SUB164(auVar1 >> 0x60,0);
                    /* WARNING: Load size is inaccurate */
          auVar1 = *(undefined *)(puVar5 + 0xe);
          *(undefined4 *)(param_3 + 200) = SUB164(auVar1,0);
          *(undefined4 *)(param_3 + 0xcc) = SUB164(auVar1 >> 0x20,0);
          *(undefined4 *)(param_3 + 0xd0) = SUB164(auVar1 >> 0x40,0);
          *(undefined4 *)(param_3 + 0xd4) = SUB164(auVar1 >> 0x60,0);
          sha512_process_block(SUB168(auVar1,0),(undefined4 *)(param_3 + 0x58),0x80,param_3);
          puVar5 = param_1;
        } while (param_1 != puVar7);
        param_2 = (param_2 - 0x80) + uVar8 * -0x80;
      }
      goto code_r0x0010742c;
    }
    uVar8 = param_2 & 0xffffffffffffff80;
    param_2 = (ulong)((uint)param_2 & 0x7f);
    sha512_process_block(param_1,uVar8,param_3);
    param_1 = (undefined8 *)((long)param_1 + uVar8);
  }
  if (param_2 == 0) {
    return;
  }
code_r0x0010742c:
  lVar3 = param_3 + 0x58;
  lVar2 = *(long *)(param_3 + 0x50);
  uVar4 = (uint)param_2;
  puVar5 = (undefined8 *)(lVar3 + lVar2);
  if (uVar4 < 8) {
    if ((param_2 & 4) == 0) {
      if ((uVar4 != 0) && (*(undefined *)puVar5 = *(undefined *)param_1, (param_2 & 2) != 0)) {
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
    puVar7 = (undefined8 *)
             ((long)puVar5 - (long)(undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8));
    uVar8 = (ulong)((int)puVar7 + uVar4 >> 3);
    puVar7 = (undefined8 *)((long)param_1 - (long)puVar7);
    puVar5 = (undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
    while (uVar8 != 0) {
      uVar8 = uVar8 - 1;
      *puVar5 = *puVar7;
      puVar7 = puVar7 + (ulong)bVar9 * 0x1ffffffffffffffe + 1;
      puVar5 = puVar5 + (ulong)bVar9 * 0x1ffffffffffffffe + 1;
    }
  }
  uVar8 = param_2 + lVar2;
  if (0x7f < uVar8) {
    sha512_process_block(lVar3,0x80,param_3);
    uVar8 = (param_2 + lVar2) - 0x80;
    func_0x00101770(lVar3,param_3 + 0xd8,uVar8);
  }
  *(ulong *)(param_3 + 0x50) = uVar8;
  return;
}

