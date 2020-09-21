
long rpl_fts_children(long *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar4 = (undefined4 *)func_0x001019c0();
  if ((param_2 & 0xffffefff) != 0) {
    *puVar4 = 0x16;
    return 0;
  }
  lVar5 = *param_1;
  *puVar4 = 0;
  if ((*(byte *)((long)param_1 + 0x49) & 0x20) == 0) {
    if (*(short *)(lVar5 + 0x70) == 9) {
      return *(undefined8 *)(lVar5 + 0x10);
    }
    if (*(short *)(lVar5 + 0x70) == 1) {
      if (param_1[1] != 0) {
        fts_lfree();
      }
      uVar7 = 1;
      if (param_2 == 0x1000) {
        *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) | 0x1000;
        uVar7 = 2;
      }
      if (((*(long *)(lVar5 + 0x58) == 0) && (**(char **)(lVar5 + 0x30) != '/')) &&
         ((*(uint *)(param_1 + 9) & 4) == 0)) {
        uVar2 = diropen_isra_6((ulong)*(uint *)((long)param_1 + 0x2c),(ulong)*(uint *)(param_1 + 9),
                               &UNK_0010c4a2);
        uVar6 = (ulong)uVar2;
        if ((int)uVar2 < 0) {
          param_1[1] = 0;
          lVar5 = 0;
        }
        else {
          lVar5 = fts_build(param_1,uVar7);
          param_1[1] = lVar5;
          if ((*(byte *)((long)param_1 + 0x49) & 2) == 0) {
            iVar3 = func_0x00101ca0(uVar6);
            if (iVar3 != 0) {
              uVar1 = *puVar4;
              func_0x00101b70(uVar6);
              *puVar4 = uVar1;
              return 0;
            }
            func_0x00101b70(uVar6);
          }
          else {
            cwd_advance_fd(param_1,uVar6,1);
          }
          lVar5 = param_1[1];
        }
      }
      else {
        lVar5 = fts_build(param_1,uVar7);
        param_1[1] = lVar5;
      }
      return lVar5;
    }
  }
  return 0;
}

