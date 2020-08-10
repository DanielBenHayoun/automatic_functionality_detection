
undefined8
blake2b_final(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined8 *param_4,long param_5
             ,ulong param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_RDX;
  long lVar8;
  long extraout_RDX_00;
  undefined8 *puVar9;
  undefined8 *unaff_RBP;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  long unaff_R14;
  long in_FS_OFFSET;
  undefined4 uStack104;
  undefined4 uStack100;
  undefined4 uStack96;
  undefined4 uStack92;
  undefined4 uStack88;
  undefined4 uStack84;
  undefined4 uStack80;
  undefined4 uStack76;
  undefined4 uStack72;
  undefined4 uStack68;
  undefined4 uStack64;
  undefined4 uStack60;
  undefined4 uStack56;
  undefined4 uStack52;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined auStack40 [8];
  ulong uStack32;
  
  puVar9 = (undefined8 *)&uStack104;
  uStack32 = *(ulong *)(in_FS_OFFSET + 0x28);
  uStack104 = 0;
  uStack100 = 0;
  uStack96 = 0;
  uStack92 = 0;
  uStack88 = 0;
  uStack84 = 0;
  uStack80 = 0;
  uStack76 = 0;
  uStack72 = 0;
  uStack68 = 0;
  uStack64 = 0;
  uStack60 = 0;
  uStack56 = 0;
  uStack52 = 0;
  uStack48 = 0;
  uStack44 = 0;
  if (((param_2 == (undefined8 *)0x0) ||
      (param_3 <= (ulong)param_1[0x1d] && param_1[0x1d] != param_3)) || (param_1[10] != 0)) {
    uVar7 = 0xffffffff;
    puVar10 = param_2;
  }
  else {
    uVar1 = param_1[0x1c];
    param_1[9] = param_1[9] + (ulong)CARRY8(uVar1,param_1[8]);
    param_1[8] = uVar1 + param_1[8];
    if (*(char *)(param_1 + 0x1e) != '\0') {
      param_1[0xb] = 0xffffffffffffffff;
    }
    param_1[10] = 0xffffffffffffffff;
    func_0x00101970(0,uVar1 + (long)(param_1 + 0xc),0,0x80 - uVar1);
    blake2b_compress(param_1,param_1 + 0xc);
    puVar5 = &uStack104;
    param_4 = param_1;
    do {
      uVar7 = *param_4;
      puVar6 = (undefined *)puVar5 + 8;
      param_4 = param_4 + 1;
      *(char *)puVar5 = (char)uVar7;
      ((undefined *)puVar5)[1] = (char)((ulong)uVar7 >> 8);
      ((undefined *)puVar5)[2] = (char)((ulong)uVar7 >> 0x10);
      ((undefined *)puVar5)[3] = (char)((ulong)uVar7 >> 0x18);
      ((undefined *)puVar5)[4] = (char)((ulong)uVar7 >> 0x20);
      ((undefined *)puVar5)[5] = (char)((ulong)uVar7 >> 0x28);
      ((undefined *)puVar5)[7] = (char)((ulong)uVar7 >> 0x38);
      ((undefined *)puVar5)[6] = (char)((ulong)uVar7 >> 0x30);
      puVar5 = (undefined4 *)puVar6;
    } while (puVar6 != auStack40);
    func_0x00101a10(param_2,&uStack104,param_1[0x1d]);
    puVar10 = (undefined8 *)0x0;
    (*memset_v_3512)(&uStack104,0,0x40);
    uVar7 = 0;
    unaff_RBP = (undefined8 *)&uStack104;
    param_1 = puVar9;
    unaff_R12 = param_2;
  }
  puVar9 = (undefined8 *)(uStack32 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (puVar9 == (undefined8 *)0x0) {
    return uVar7;
  }
  func_0x001018e0();
  lVar2 = extraout_RDX;
  puVar5 = &uStack104;
  do {
    lVar8 = lVar2;
    *(long *)((undefined *)puVar5 + -8) = unaff_R14;
    *(undefined8 **)((undefined *)puVar5 + -0x10) = unaff_R13;
    *(undefined8 **)((undefined *)puVar5 + -0x18) = unaff_R12;
    *(undefined8 **)((undefined *)puVar5 + -0x20) = unaff_RBP;
    *(undefined8 **)((undefined *)puVar5 + -0x28) = puVar9;
    puVar12 = (undefined8 *)((undefined *)puVar5 + -0x128);
    puVar13 = (undefined8 *)((undefined *)puVar5 + -0x128);
    puVar14 = (undefined8 *)((undefined *)puVar5 + -0x128);
    *(undefined8 *)((undefined *)puVar5 + -0x30) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    puVar11 = puVar10;
    puVar3 = param_1;
    if ((((lVar8 == 0 && param_4 != (undefined8 *)0x0) ||
         (unaff_R13 = param_1, param_1 == (undefined8 *)0x0)) ||
        ((puVar9 = puVar10, unaff_RBP = param_4, param_5 == 0 && (param_6 != 0)))) ||
       ((0x3f < (long)puVar10 - 1U || (0x40 < param_6)))) {
code_r0x001055e0:
      puVar13 = puVar3;
      uVar7 = 0xffffffff;
    }
    else {
      if (param_6 == 0) {
        *(undefined8 *)((undefined *)puVar5 + -0x130) = 0x105588;
        iVar4 = blake2b_init();
      }
      else {
        *(undefined8 *)((undefined *)puVar5 + -0x130) = 0x1055d9;
        iVar4 = blake2b_init_key((undefined *)puVar5 + -0x128,puVar10,param_5,param_6);
        puVar12 = puVar14;
      }
      unaff_R12 = (undefined8 *)((undefined *)puVar5 + -0x128);
      puVar3 = puVar12;
      if (iVar4 < 0) goto code_r0x001055e0;
      if (param_4 != (undefined8 *)0x0) {
        *(undefined8 *)((undefined *)puVar5 + -0x130) = 0x1055fe;
        blake2b_update_part_3((undefined *)puVar5 + -0x128,lVar8,param_4);
      }
      *(undefined8 *)((undefined *)puVar5 + -0x130) = 0x10559f;
      puVar11 = param_1;
      blake2b_final((undefined *)puVar5 + -0x128,param_1,puVar10);
      uVar7 = 0;
      unaff_R12 = (undefined8 *)((undefined *)puVar5 + -0x128);
    }
    param_4 = (undefined8 *)
              (*(ulong *)((undefined *)puVar5 + -0x30) ^ *(ulong *)(in_FS_OFFSET + 0x28));
    if (param_4 == (undefined8 *)0x0) {
      return uVar7;
    }
    *(undefined8 *)((undefined *)puVar5 + -0x130) = 0x105605;
    func_0x001018e0();
    lVar2 = extraout_RDX_00;
    puVar5 = (undefined4 *)((undefined *)puVar5 + -0x128);
    puVar10 = puVar11;
    param_1 = puVar13;
    unaff_R14 = lVar8;
  } while( true );
}

