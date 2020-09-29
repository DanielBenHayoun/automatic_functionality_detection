
void randread(uint **param_1,ulong param_2,uint *param_3)

{
  uint **ppuVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  uint **ppuStack64;
  
  puVar6 = *param_1;
  if (puVar6 == (uint *)0x0) {
    puVar6 = param_1[3];
    ppuStack64 = param_1 + 0x107;
    ppuVar1 = param_1 + 4;
    uVar4 = param_2;
    if (puVar6 < param_3) {
      do {
        param_2 = uVar4 + (long)puVar6;
        param_3 = (uint *)((long)param_3 - (long)puVar6);
        func_0x00101c10(uVar4,(0x800 - (long)puVar6) + (long)ppuStack64,puVar6);
        if ((param_2 & 7) == 0) {
          if (param_3 < (uint *)0x800) {
            isaac_refill(ppuVar1,ppuStack64);
            break;
          }
          param_3 = param_3 + -0x200;
          uVar5 = (uint)param_3;
          uVar4 = param_2;
          while( true ) {
            param_2 = uVar4 + 0x800;
            isaac_refill(ppuVar1,uVar4);
            if (param_3 == (uint *)0x0) {
              param_1[3] = (uint *)0x0;
              return;
            }
            if (param_3 == (uint *)(ulong)(uVar5 & 0x7ff)) break;
            param_3 = param_3 + -0x200;
            uVar4 = param_2;
          }
        }
        puVar6 = (uint *)0x800;
        isaac_refill(ppuVar1,ppuStack64);
        uVar4 = param_2;
      } while ((uint *)0x800 < param_3);
      puVar6 = (uint *)0x800;
    }
    else {
      ppuStack64 = (uint **)((long)ppuStack64 + (0x800 - (long)puVar6));
    }
    func_0x00101c10(param_2,ppuStack64,param_3);
    param_1[3] = (uint *)((long)puVar6 - (long)param_3);
  }
  else {
    puVar2 = (uint *)func_0x001019b0();
    while( true ) {
      lVar3 = func_0x00101a50(param_2,1,param_3,puVar6);
      param_2 = param_2 + lVar3;
      param_3 = (uint *)((long)param_3 - lVar3);
      if (param_3 == (uint *)0x0) break;
      puVar6 = param_1[2];
      uVar5 = **param_1 & 0x20;
      if ((**param_1 & 0x20) != 0) {
        uVar5 = *puVar2;
      }
      *puVar2 = uVar5;
      (*(code *)param_1[1])(puVar6);
      puVar6 = *param_1;
    }
  }
  return;
}

