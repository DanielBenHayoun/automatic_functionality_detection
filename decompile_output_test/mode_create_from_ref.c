
undefined2 * mode_create_from_ref(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  ulong uVar5;
  char *pcVar6;
  uint extraout_EDX;
  byte bVar7;
  uint uVar8;
  uint *in_R8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined auStack168 [24];
  undefined4 uStack144;
  ulong uStack16;
  
  bVar7 = (byte)param_1;
  uVar12 = 1;
  uStack16 = *(ulong *)(in_FS_OFFSET + 0x28);
  iVar2 = func_0x00101590(1,param_1,auStack168);
  if (iVar2 == 0) {
    uVar12 = 0x20;
    puVar4 = (undefined2 *)xmalloc();
    *(undefined4 *)(puVar4 + 2) = 0xfff;
    *(undefined4 *)(puVar4 + 6) = 0xfff;
    *puVar4 = 0x13d;
    *(undefined4 *)(puVar4 + 4) = uStack144;
    *(undefined *)((long)puVar4 + 0x11) = 0;
  }
  else {
    puVar4 = (undefined2 *)0x0;
  }
  pcVar6 = (char *)(uStack16 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (pcVar6 == (char *)0x0) {
    return puVar4;
  }
  func_0x00101480();
  cVar10 = pcVar6[1];
  uVar5 = (ulong)(uVar12 & 0xfff);
  if (cVar10 == '\0') {
    if (in_R8 != (uint *)0x0) {
      *in_R8 = 0;
    }
    return (undefined2 *)uVar5;
  }
  uVar12 = 0;
  do {
    uVar1 = *(uint *)(pcVar6 + 4);
    uVar8 = *(uint *)(pcVar6 + 8);
    uVar9 = ~*(uint *)(pcVar6 + 0xc) & ~-(uint)(bVar7 == 0) & 0xc00;
    uVar3 = (uint)uVar5;
    if (cVar10 == '\x02') {
      if ((uVar3 & 0x49 | (uint)bVar7) != 0) {
        uVar8 = uVar8 | 0x49;
      }
    }
    else {
      if (cVar10 == '\x03') {
        uVar8 = uVar8 & uVar3;
        uVar11 = ~-(uint)((uVar8 & 0x124) == 0) & 0x124;
        if ((uVar8 & 0x92) != 0) {
          uVar11 = uVar11 | 0x92;
        }
        if ((uVar8 & 0x49) != 0) {
          uVar11 = uVar11 | 0x49;
        }
        uVar8 = uVar8 | uVar11;
      }
    }
    cVar10 = *pcVar6;
    uVar11 = ~uVar9;
    if (uVar1 == 0) {
      uVar8 = uVar8 & ~(uVar9 | extraout_EDX);
      if (cVar10 == '-') goto code_r0x001028e0;
      if (cVar10 != '=') goto code_r0x001027dd;
code_r0x0010288b:
      uVar12 = uVar12 | uVar11 & 0xfff;
      cVar10 = pcVar6[0x11];
      uVar5 = (ulong)(uVar3 & uVar9 | uVar8);
    }
    else {
      uVar8 = uVar8 & uVar11 & uVar1;
      if (cVar10 == '-') {
code_r0x001028e0:
        uVar12 = uVar12 | uVar8;
        uVar5 = (ulong)(uVar3 & ~uVar8);
      }
      else {
        if (cVar10 == '=') {
          uVar9 = uVar9 | ~uVar1;
          uVar11 = ~uVar9;
          goto code_r0x0010288b;
        }
code_r0x001027dd:
        if (cVar10 == '+') {
          uVar12 = uVar12 | uVar8;
          uVar5 = (ulong)(uVar3 | uVar8);
        }
      }
      cVar10 = pcVar6[0x11];
    }
    pcVar6 = pcVar6 + 0x10;
    if (cVar10 == '\0') {
      if (in_R8 != (uint *)0x0) {
        *in_R8 = uVar12;
      }
      return (undefined2 *)uVar5;
    }
  } while( true );
}

