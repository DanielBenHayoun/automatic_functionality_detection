
ulong check_node_accept(long param_1,long *param_2,long param_3,undefined8 param_4,
                       undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 8) + param_3);
  uVar5 = (ulong)bVar1;
  bVar2 = *(byte *)(param_2 + 1);
  if (bVar2 == 3) {
    param_5 = *(undefined8 *)(*param_2 + ((long)uVar5 >> 6) * 8);
    if ((0U >> (uVar5 & 0x1f) & 1) == 0) {
      return 0;
    }
  }
  else {
    if (bVar2 < 4) {
      if (bVar2 != 1) {
        return 0;
      }
      if (*(byte *)param_2 != bVar1) {
        return 0;
      }
    }
    else {
      if (bVar2 != 5) {
        if (bVar2 != 7) {
          return 0;
        }
        if ((char)bVar1 < '\0') {
          return 0;
        }
      }
      if (bVar1 == 10) {
        uVar5 = *(ulong *)(param_1 + 0x98);
        if ((*(byte *)(uVar5 + 0xd8) & 0x40) == 0) {
          return 0;
        }
      }
      else {
        if ((bVar1 == 0) &&
           (uVar5 = *(ulong *)(param_1 + 0x98), (*(byte *)(uVar5 + 0xd8) & 0x80) != 0)) {
          return 0;
        }
      }
    }
  }
  uVar3 = *(uint *)(param_2 + 1);
  uVar4 = 1;
  if ((uVar3 & 0x3ff00) != 0) {
    uVar6 = uVar3 >> 8;
    uVar5 = re_string_context_at(param_1,param_3,(ulong)*(uint *)(param_1 + 0xa0),uVar5,param_5);
    if ((uVar6 & 4) == 0) {
      if (((uVar6 & 8) != 0) && ((uVar5 & 1) != 0)) {
        return 0;
      }
    }
    else {
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if ((uVar6 & 8) != 0) {
        return 0;
      }
    }
    if (((uVar3 & 0x2000) == 0) || (uVar4 = 0, (uVar5 & 2) != 0)) {
      uVar4 = 1;
      if ((uVar3 & 0x8000) != 0) {
        uVar4 = (ulong)((uint)((uVar5 & 0xffffffff) >> 3) & 1);
      }
    }
  }
  return uVar4;
}

