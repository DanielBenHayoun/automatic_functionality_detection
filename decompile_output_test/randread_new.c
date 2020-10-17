
undefined8 * randread_new(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *unaff_RBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined4 *unaff_R12;
  undefined8 *unaff_R13;
  ulong unaff_R14;
  ulong uVar9;
  long in_FS_OFFSET;
  byte bVar10;
  undefined4 uStack88;
  undefined auStack84 [12];
  long lStack64;
  
  bVar10 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (undefined4 *)0x0) {
    puVar5 = (undefined8 *)xmalloc(0x1038);
    *puVar5 = 0;
    puVar5[2] = 0;
    puVar5[1] = 0x105870;
  }
  else {
    if (param_1 == (undefined4 *)0x0) {
      puVar5 = (undefined8 *)xmalloc(0x1038);
      *puVar5 = 0;
      puVar5[2] = 0;
      puVar5[1] = 0x105870;
      puVar5[3] = 0;
      uVar2 = func_0x00101d10(&UNK_00109ca7);
      unaff_R13 = puVar5 + 4;
      if (-1 < (int)uVar2) {
        unaff_R14 = 0x800;
        if ((undefined4 *)0x800 < param_2) {
          param_2 = (undefined4 *)0x800;
        }
        unaff_RBP = (undefined4 *)func_0x00101a00((ulong)uVar2,unaff_R13,param_2);
        func_0x00101ba0((ulong)uVar2);
        if ((long)unaff_RBP < 0x800) goto code_r0x00105b24;
        goto code_r0x00105a05;
      }
      unaff_R14 = 0x18;
      func_0x00101b50();
      *(undefined4 *)(puVar5 + 4) = uStack88;
      *(undefined4 *)((long)puVar5 + 0x24) = SUB124(auStack84,0);
      *(int *)(puVar5 + 5) = SUB124(auStack84 >> 0x20,0);
      *(undefined4 *)((long)puVar5 + 0x2c) = SUB124(auStack84 >> 0x40,0);
      uStack88 = func_0x00101a40(SUB168(CONCAT124(auStack84,uStack88),0));
      *(undefined4 *)(puVar5 + 6) = uStack88;
      uStack88 = func_0x00101d60();
      *(undefined4 *)((long)puVar5 + 0x34) = uStack88;
      goto code_r0x00105a7f;
    }
    unaff_R13 = (undefined8 *)fopen_safer(param_1,&UNK_00109cb4);
    unaff_RBP = param_2;
    unaff_R12 = param_1;
    if (unaff_R13 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)xmalloc(0x1038);
      *(undefined8 **)puVar5 = unaff_R13;
      puVar5[1] = 0x105870;
      *(undefined4 **)(puVar5 + 2) = param_1;
      func_0x00101ce0(unaff_R13,puVar5 + 3,0);
    }
  }
  while (lStack64 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101ad0();
    param_1 = unaff_R12;
code_r0x00105b24:
    puVar6 = unaff_RBP;
    if ((long)unaff_RBP < 0) {
      puVar6 = param_1;
    }
    param_1 = &uStack88;
    uVar9 = unaff_R14 - (long)puVar6;
    if (0x10 < uVar9) {
      uVar9 = 0x10;
    }
    func_0x00101b50(param_1,0);
    unaff_RBP = (undefined4 *)((long)puVar6 + uVar9);
    uVar9 = uVar9 & 0xffffffff;
    puVar7 = param_1;
    puVar8 = (undefined *)((long)unaff_R13 + (long)puVar6);
    while (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      *puVar8 = *(undefined *)puVar7;
      puVar7 = (undefined4 *)((long)puVar7 + (ulong)bVar10 * -2 + 1);
      puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
    }
    if (unaff_RBP < (undefined4 *)0x800) {
      uVar9 = unaff_R14 - (long)unaff_RBP;
      if (4 < uVar9) {
        uVar9 = 4;
      }
      lVar1 = (long)unaff_RBP + uVar9;
      unaff_RBP = (undefined4 *)((long)unaff_RBP + (long)unaff_R13);
      uStack88 = func_0x00101a40();
      uVar9 = uVar9 & 0xffffffff;
      puVar6 = param_1;
      puVar7 = unaff_RBP;
      while (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        *(undefined *)puVar7 = *(undefined *)puVar6;
        puVar6 = (undefined4 *)((long)puVar6 + (ulong)bVar10 * -2 + 1);
        puVar7 = (undefined4 *)((long)puVar7 + (ulong)bVar10 * -2 + 1);
      }
      if (lVar1 < 0x800) {
        uVar9 = unaff_R14 - lVar1;
        if (4 < unaff_R14 - lVar1) {
          uVar9 = 4;
        }
        uStack88 = func_0x00101d60();
        uVar4 = uVar9 & 0xffffffff;
        unaff_R14 = uVar9 + lVar1;
        puVar6 = param_1;
        puVar8 = (undefined *)((long)unaff_R13 + lVar1);
        while (uVar4 != 0) {
          uVar4 = uVar4 - 1;
          *puVar8 = *(undefined *)puVar6;
          puVar6 = (undefined4 *)((long)puVar6 + (ulong)bVar10 * -2 + 1);
          puVar8 = puVar8 + (ulong)bVar10 * -2 + 1;
        }
        if (unaff_R14 < 0x800) {
code_r0x00105a7f:
          param_1 = &uStack88;
          uVar9 = 0x800 - unaff_R14;
          if (4 < uVar9) {
            uVar9 = 4;
          }
          uStack88 = func_0x00101ae0();
          if ((uint)uVar9 != 0) {
            uVar2 = 0;
            do {
              uVar4 = (ulong)uVar2;
              uVar2 = uVar2 + 1;
              *(undefined *)((long)unaff_R13 + uVar4 + unaff_R14) =
                   *(undefined *)((long)param_1 + uVar4);
            } while (uVar2 < (uint)uVar9);
          }
          unaff_RBP = (undefined4 *)(uVar9 + unaff_R14);
          if (unaff_RBP < (undefined4 *)0x800) {
            uStack88 = func_0x00101c30();
            uVar2 = (uint)(0x800U - (long)unaff_RBP);
            if (4 < 0x800U - (long)unaff_RBP) {
              uVar2 = 4;
            }
            if (uVar2 != 0) {
              uVar3 = 0;
              do {
                uVar9 = (ulong)uVar3;
                uVar3 = uVar3 + 1;
                *(undefined *)((long)unaff_R13 + (long)unaff_RBP + uVar9) =
                     *(undefined *)((long)param_1 + uVar9);
              } while (uVar3 < uVar2);
            }
          }
        }
      }
    }
code_r0x00105a05:
    isaac_seed(unaff_R13);
    unaff_R12 = param_1;
  }
  return puVar5;
}

