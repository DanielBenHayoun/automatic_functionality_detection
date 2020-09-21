
ulong readtokens0(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  do {
    uVar3 = func_0x00101b40(param_1);
    iVar2 = (int)uVar3;
    while( true ) {
      if (iVar2 == -1) {
        puVar4 = *(undefined **)(param_2 + 0x30);
        if (*(undefined **)(param_2 + 0x28) != puVar4) {
          if (*(undefined **)(param_2 + 0x38) == puVar4) {
            _obstack_newchunk(param_2 + 0x18,1);
            puVar4 = *(undefined **)(param_2 + 0x30);
          }
          *(undefined **)(param_2 + 0x30) = puVar4 + 1;
          *puVar4 = 0;
          save_token(param_2);
        }
        puVar7 = *(undefined8 **)(param_2 + 0x88);
        if ((ulong)(*(long *)(param_2 + 0x90) - (long)puVar7) < 8) {
          _obstack_newchunk(param_2 + 0x70,8);
          puVar7 = *(undefined8 **)(param_2 + 0x88);
        }
        *puVar7 = 0;
        lVar1 = *(long *)(param_2 + 0x88) + 8;
        *(long *)(param_2 + 0x88) = lVar1;
        if (lVar1 == *(long *)(param_2 + 0x80)) {
          *(byte *)(param_2 + 0xc0) = *(byte *)(param_2 + 0xc0) | 2;
        }
        uVar5 = lVar1 + *(ulong *)(param_2 + 0xa0) & ~*(ulong *)(param_2 + 0xa0);
        uVar6 = *(ulong *)(param_2 + 0x90);
        *(ulong *)(param_2 + 0x88) = uVar5;
        if (uVar6 - *(long *)(param_2 + 0x78) < uVar5 - *(long *)(param_2 + 0x78)) {
          *(ulong *)(param_2 + 0x88) = uVar6;
          uVar5 = uVar6;
        }
        *(long *)(param_2 + 8) = *(long *)(param_2 + 0x80);
        lVar1 = *(long *)(param_2 + 0xd8);
        *(ulong *)(param_2 + 0x80) = uVar5;
        if (*(long *)(param_2 + 0xe0) == lVar1) {
          *(byte *)(param_2 + 0x118) = *(byte *)(param_2 + 0x118) | 2;
        }
        uVar6 = *(ulong *)(param_2 + 0xe8);
        uVar5 = *(long *)(param_2 + 0xe0) + *(ulong *)(param_2 + 0xf8) & ~*(ulong *)(param_2 + 0xf8)
        ;
        *(ulong *)(param_2 + 0xe0) = uVar5;
        if (uVar6 - *(long *)(param_2 + 0xd0) < uVar5 - *(long *)(param_2 + 0xd0)) {
          *(ulong *)(param_2 + 0xe0) = uVar6;
          uVar5 = uVar6;
        }
        *(ulong *)(param_2 + 0xd8) = uVar5;
        *(long *)(param_2 + 0x10) = lVar1;
        uVar6 = func_0x00101a30(param_1);
        return uVar6 & 0xffffffffffffff00 | (ulong)((int)uVar6 == 0);
      }
      puVar4 = *(undefined **)(param_2 + 0x30);
      if (*(undefined **)(param_2 + 0x38) == puVar4) {
        _obstack_newchunk(param_2 + 0x18,1);
        puVar4 = *(undefined **)(param_2 + 0x30);
        *(undefined **)(param_2 + 0x30) = puVar4 + 1;
        *puVar4 = (char)uVar3;
      }
      else {
        *(undefined **)(param_2 + 0x30) = puVar4 + 1;
        *puVar4 = (char)uVar3;
      }
      if ((int)uVar3 != 0) break;
      save_token(param_2);
      uVar3 = func_0x00101b40(param_1);
      iVar2 = (int)uVar3;
    }
  } while( true );
}

