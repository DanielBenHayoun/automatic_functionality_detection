
void free_buffer_isra_4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x518);
    func_0x00101b00();
  }
  uVar2 = *param_1;
  *param_2 = 0;
  func_0x00101b00(uVar2);
  *param_1 = 0;
  return;
}

