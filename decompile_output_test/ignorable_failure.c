
ulong ignorable_failure(uint param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  bool bVar6;
  ulong unaff_RBX;
  
  if (ignore_fail_on_non_empty != '\0') {
    bVar6 = param_1 == 0x11 || param_1 == 0x27;
    _bVar6 = unaff_RBX & 0xffffffffffffff00 | (ulong)bVar6;
    if (bVar6) {
code_r0x00101bd9:
      return _bVar6 & 0xffffffff;
    }
    if ((param_1 < 0x1f) && ((1 << ((byte)param_1 & 0x3f) & 0x40032002U) != 0)) {
      uVar2 = func_0x001014c0(0xffffff9c,param_2,0x30900);
      if (-1 < (int)uVar2) {
        lVar3 = func_0x00101660((ulong)uVar2);
        if (lVar3 == 0) {
          func_0x00101540((ulong)uVar2);
        }
        else {
          puVar4 = (uint *)func_0x00101410();
          *puVar4 = 0;
          do {
            lVar5 = func_0x001015b0(lVar3);
            if (lVar5 == 0) {
              uVar2 = *puVar4;
              func_0x00101550(lVar3);
              _bVar6 = (ulong)(uVar2 & 0xffffff00 | (uint)(uVar2 == 0));
              goto code_r0x00101bd9;
            }
            if (*(char *)(lVar5 + 0x13) != '.') break;
            cVar1 = *(char *)(lVar5 + 0x14 + (ulong)(*(char *)(lVar5 + 0x14) == '.'));
          } while ((cVar1 == '\0') || (cVar1 == '/'));
          func_0x00101550(lVar3);
        }
        goto code_r0x00101bd9;
      }
    }
  }
  return 0;
}

