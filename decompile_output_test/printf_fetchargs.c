
undefined8 printf_fetchargs(uint *param_1,ulong *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  unkbyte10 *pVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  
  puVar2 = (undefined4 *)param_2[1];
  if (*param_2 != 0) {
    uVar3 = 0;
    do {
      switch(*puVar2) {
      default:
        return 0xffffffff;
      case 1:
      case 2:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar5 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar5 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar5 + 2;
        }
        *(char *)(puVar2 + 4) = (char)*puVar5;
        break;
      case 3:
      case 4:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar5 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar5 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar5 + 2;
        }
        *(short *)(puVar2 + 4) = (short)*puVar5;
        break;
      case 5:
      case 6:
      case 0xd:
      case 0xe:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar5 = (undefined4 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar5 = *(undefined4 **)(param_1 + 2);
          *(undefined4 **)(param_1 + 2) = puVar5 + 2;
        }
        puVar2[4] = *puVar5;
        break;
      case 7:
      case 8:
      case 9:
      case 10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined8 *)(puVar2 + 4) = *puVar7;
        break;
      case 0xb:
        uVar1 = param_1[1];
        if (uVar1 < 0xb0) {
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          param_1[1] = uVar1 + 0x10;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        *(undefined8 *)(puVar2 + 4) = *puVar7;
        break;
      case 0xc:
        pVar4 = (unkbyte10 *)(*(long *)(param_1 + 2) + 0xfU & 0xfffffffffffffff0);
        *(long *)(param_1 + 2) = (long)pVar4 + 0x10;
        *(unkbyte10 *)(puVar2 + 4) = *pVar4;
        break;
      case 0xf:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          puVar7 = (undefined8 *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          puVar7 = *(undefined8 **)(param_1 + 2);
          *(undefined8 **)(param_1 + 2) = puVar7 + 1;
        }
        puVar6 = (undefined *)*puVar7;
        if (puVar6 == (undefined *)0x0) {
          puVar6 = &UNK_00114f14;
        }
        *(undefined **)(puVar2 + 4) = puVar6;
        break;
      case 0x10:
        uVar1 = *param_1;
        if (uVar1 < 0x30) {
          plVar8 = (long *)((ulong)uVar1 + *(long *)(param_1 + 4));
          *param_1 = uVar1 + 8;
        }
        else {
          plVar8 = *(long **)(param_1 + 2);
          *(long **)(param_1 + 2) = plVar8 + 1;
        }
        puVar9 = (undefined1 *)*plVar8;
        if (puVar9 == (undefined1 *)0x0) {
          puVar9 = wide_null_string_2696;
        }
        *(undefined1 **)(puVar2 + 4) = puVar9;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 8;
    } while (uVar3 <= *param_2 && *param_2 != uVar3);
  }
  return 0;
}

