
uint * human_options(byte *param_1,uint *param_2,long *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte **ppbVar9;
  byte *pbVar10;
  long in_FS_OFFSET;
  byte *pbStack56;
  long lStack48;
  
  ppbVar9 = &pbStack56;
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (byte *)0x0) &&
      (puVar8 = (undefined1 *)param_2, param_1 = (byte *)func_0x00102050(&UNK_0010f19d),
      param_1 == (byte *)0x0)) &&
     (param_1 = (byte *)func_0x00102050(&UNK_00110030), param_1 == (byte *)0x0)) {
    pbVar10 = &UNK_0010f18a;
    lVar4 = func_0x00102050();
    if (lVar4 == 0) {
      *param_3 = 0x400;
      uVar3 = 0;
      *param_2 = 0;
    }
    else {
      *param_3 = 0x200;
      uVar3 = 0;
      *param_2 = 0;
    }
  }
  else {
    uVar7 = 0;
    if (*param_1 == 0x27) {
      param_1 = param_1 + 1;
      uVar7 = 4;
    }
    puVar8 = block_size_args;
    pbVar10 = param_1;
    iVar2 = argmatch(param_1,block_size_args,&block_size_opts,4);
    if (iVar2 < 0) {
      pbVar10 = param_1;
      uVar3 = xstrtoumax(param_1,&pbStack56,0,param_3,&UNK_0011003a);
      if ((int)uVar3 == 0) {
        bVar1 = *param_1;
        puVar8 = (undefined1 *)(ulong)bVar1;
        while (9 < (byte)(bVar1 - 0x30)) {
          if (param_1 == pbStack56) {
            if (pbStack56[-1] == 0x42) {
              uVar7 = uVar7 | 0x180;
              if (pbStack56[-2] != 0x69) break;
            }
            else {
              uVar7 = uVar7 | 0x80;
            }
            uVar7 = uVar7 | 0x20;
            break;
          }
          param_1 = param_1 + 1;
          bVar1 = *param_1;
          pbVar10 = (byte *)(ulong)bVar1;
        }
        lVar4 = *param_3;
        *param_2 = uVar7;
      }
      else {
        lVar4 = *param_3;
        *param_2 = 0;
        puVar8 = (undefined1 *)ppbVar9;
      }
      if (lVar4 == 0) {
        pbVar10 = &UNK_0010f18a;
        lVar4 = func_0x00102050();
        *param_3 = (ulong)(-(uint)(lVar4 == 0) & 0x200) + 0x200;
        uVar3 = 4;
      }
    }
    else {
      *param_3 = 1;
      uVar3 = 0;
      *param_2 = uVar7 | *(uint *)((long)&block_size_opts + (long)iVar2 * 4);
    }
  }
  if (lStack48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uint *)uVar3;
  }
  func_0x001021f0();
  puVar5 = (uint *)puVar8 + 5;
  *(undefined *)((uint *)puVar8 + 5) = 0;
  do {
    puVar5 = (uint *)((long)puVar5 + -1);
    pbVar6 = (byte *)((ulong)pbVar10 / 10);
    *(char *)puVar5 = (char)pbVar10 + (char)pbVar6 * -10 + '0';
    pbVar10 = pbVar6;
  } while (pbVar6 != (byte *)0x0);
  return puVar5;
}

