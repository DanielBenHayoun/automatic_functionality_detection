
ulong rpl_fts_close(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x58) < 0) {
      func_0x00101da0(lVar4);
    }
    else {
      do {
        while (lVar3 = *(long *)(lVar4 + 0x10), lVar3 != 0) {
          func_0x00101da0();
          lVar4 = lVar3;
          if (*(long *)(lVar3 + 0x58) < 0) goto code_r0x0010839b;
        }
        lVar3 = *(long *)(lVar4 + 8);
        func_0x00101da0();
        lVar4 = lVar3;
      } while (-1 < *(long *)(lVar3 + 0x58));
code_r0x0010839b:
      func_0x00101da0(lVar3);
    }
  }
  if (param_1[1] != 0) {
    fts_lfree();
  }
  func_0x00101da0(param_1[2]);
  func_0x00101da0();
  if ((*(uint *)(param_1 + 9) & 0x200) == 0) {
    if ((*(uint *)(param_1 + 9) & 4) == 0) {
      iVar1 = func_0x00101c70((ulong)*(uint *)(param_1 + 5));
      if (iVar1 == 0) {
        iVar1 = func_0x00101b50((ulong)*(uint *)(param_1 + 5));
        if (iVar1 == 0) goto code_r0x001083d6;
        puVar5 = (uint *)func_0x001019a0();
      }
      else {
        puVar5 = (uint *)func_0x001019a0();
        uVar2 = *puVar5;
        iVar1 = func_0x00101b50((ulong)*(uint *)(param_1 + 5));
        if ((iVar1 == 0) || (uVar2 != 0)) goto code_r0x001083d8;
      }
      uVar2 = *puVar5;
      goto code_r0x001083d8;
    }
  }
  else {
    if ((-1 < *(int *)((long)param_1 + 0x2c)) && (iVar1 = func_0x00101b50(), iVar1 != 0)) {
      puVar5 = (uint *)func_0x001019a0();
      uVar2 = *puVar5;
      goto code_r0x001083d8;
    }
  }
code_r0x001083d6:
  uVar2 = 0;
code_r0x001083d8:
  fd_ring_clear(param_1 + 0xc);
  if (param_1[10] != 0) {
    hash_free();
  }
  if ((*(uint *)(param_1 + 9) & 0x102) == 0) {
    func_0x00101da0();
  }
  else {
    if (param_1[0xb] != 0) {
      hash_free();
    }
  }
  func_0x00101da0(param_1);
  if (uVar2 != 0) {
    puVar5 = (uint *)func_0x001019a0();
    *puVar5 = uVar2;
    uVar2 = 0xffffffff;
  }
  return (ulong)uVar2;
}

