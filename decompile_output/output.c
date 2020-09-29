
void output(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    func_0x00101b20(buffer_6999,1,bytes_in_buffer_7000,stdout);
    bytes_in_buffer_7000 = 0;
    return;
  }
  uVar1 = param_2 - param_1;
  uVar4 = 0x2000 - bytes_in_buffer_7000;
  if (uVar1 < uVar4) {
    puVar2 = buffer_6999 + bytes_in_buffer_7000;
  }
  else {
    do {
      uVar1 = uVar1 - uVar4;
      lVar3 = param_1 + uVar4;
      func_0x00101a90(buffer_6999 + bytes_in_buffer_7000,param_1,uVar4);
      uVar4 = 0x2000;
      func_0x00101b20(buffer_6999,1,0x2000,stdout);
      bytes_in_buffer_7000 = 0;
      param_1 = lVar3;
    } while (0x1fff < uVar1);
    puVar2 = buffer_6999;
  }
  lVar3 = bytes_in_buffer_7000 + uVar1;
  func_0x00101a90(puVar2,param_1,uVar1);
  bytes_in_buffer_7000 = lVar3;
  return;
}

