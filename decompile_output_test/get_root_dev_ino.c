
undefined8 * get_root_dev_ino(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined4 *extraout_RDX;
  char *unaff_RBP;
  char *pcVar7;
  char *pcVar8;
  char **in_R8;
  undefined8 *in_R9;
  long in_FS_OFFSET;
  bool bVar9;
  undefined *puStack304;
  char *pcStack296;
  undefined4 uStack280;
  bool bStack274;
  ulong auStack264 [4];
  long lStack232;
  undefined8 *puStack216;
  undefined8 uStack168;
  undefined8 uStack160;
  ulong uStack16;
  
  pcVar7 = "/";
  pcVar8 = (char *)0x1;
  uStack16 = *(ulong *)(in_FS_OFFSET + 0x28);
  iVar1 = func_0x00101ab0(1,&UNK_0010bae6,&uStack168);
  if (iVar1 == 0) {
    *param_1 = uStack160;
    param_1[1] = uStack168;
    puVar3 = param_1;
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  puVar6 = (uint *)(uStack16 ^ *(ulong *)(in_FS_OFFSET + 0x28));
  if (puVar6 == (uint *)0x0) {
    return puVar3;
  }
  func_0x00101ad0();
  uVar2 = 0xffffffff;
  uStack280 = *extraout_RDX;
  lStack232 = *(long *)(in_FS_OFFSET + 0x28);
  if (puVar6 != (uint *)0x0) {
    uVar2 = *puVar6;
  }
  if (in_R8 != (char **)0x0) {
    *in_R8 = (char *)0x0;
  }
  if (in_R9 != (undefined8 *)0x0) {
    *in_R9 = 0;
  }
  puStack216 = param_1;
  if (pcVar7 == (char *)0x0) {
    uVar5 = 0;
    if (*pcVar8 == '\0') goto code_r0x0010594c;
    unaff_RBP = (char *)xstrdup();
code_r0x001059d3:
    if (unaff_RBP == (char *)0x0) {
code_r0x00105af8:
      uVar5 = 0;
      pcVar7 = (char *)0x0;
      goto code_r0x0010594c;
    }
    bStack274 = false;
    bVar9 = true;
    pcStack296 = (char *)0x0;
  }
  else {
    if (pcVar7 + -(long)pcVar8 == (char *)0x0) {
      if (pcVar7[1] == '\0') goto code_r0x00105af8;
      pcStack296 = pcVar7 + 1;
      puStack304 = (undefined *)0x0;
      unaff_RBP = (char *)0x0;
      uVar5 = 0;
      bStack274 = pcStack296 != (char *)0x0;
      goto code_r0x00105907;
    }
    unaff_RBP = (char *)xmemdup();
    unaff_RBP[(long)(pcVar7 + -(long)pcVar8)] = '\0';
    if (pcVar7[1] == '\0') goto code_r0x001059d3;
    pcStack296 = pcVar7 + 1;
    bStack274 = pcStack296 != (char *)0x0;
    if (unaff_RBP == (char *)0x0) goto code_r0x00105c2a;
    bVar9 = pcStack296 == (char *)0x0;
  }
  bVar9 = (bool)(pcVar7 != (char *)0x0 & bVar9);
  if ((*unaff_RBP == '+') || (lVar4 = func_0x00101be0(unaff_RBP), lVar4 == 0)) {
    if (bVar9 == false) {
      iVar1 = xstrtoul(unaff_RBP,0,10,auStack264,&UNK_0010c049);
      puStack304 = &UNK_0010bfc8;
      if (iVar1 == 0) {
        if (auStack264[0] < 0xffffffff) {
          uStack280 = (undefined4)auStack264[0];
          bVar9 = bStack274;
        }
        puStack304 = (undefined *)0x0;
        if (0xfffffffe < auStack264[0]) {
          puStack304 = &UNK_0010bfc8;
        }
      }
      uVar5 = 0;
      func_0x00101c80();
      bStack274 = bVar9;
    }
    else {
      bStack274 = false;
      uVar5 = 0;
      puStack304 = &UNK_0010bfd5;
      func_0x00101c80();
    }
  }
  else {
    uStack280 = *(undefined4 *)(lVar4 + 0x10);
    uVar5 = 0;
    if (bVar9 != false) {
      uVar2 = *(uint *)(lVar4 + 0x14);
      puVar3 = (undefined8 *)func_0x00101b10((ulong)uVar2);
      if (puVar3 == (undefined8 *)0x0) {
        uVar5 = umaxtostr((ulong)uVar2);
      }
      else {
        uVar5 = *puVar3;
      }
      uVar5 = xstrdup(uVar5);
      func_0x001019a0();
    }
    puStack304 = (undefined *)0x0;
    func_0x00101c80();
  }
code_r0x00105907:
  do {
    pcVar7 = unaff_RBP;
    if (bStack274 == false) {
      if (puStack304 == (undefined *)0x0) goto code_r0x0010594c;
code_r0x00105ace:
      func_0x00101de0(unaff_RBP);
      func_0x00101de0(uVar5);
      uVar5 = func_0x00101a80(0,puStack304,5);
    }
    else {
      if ((*pcStack296 == '+') || (lVar4 = func_0x00101c00(pcStack296), lVar4 == 0)) {
        iVar1 = xstrtoul(pcStack296,0,10,auStack264,&UNK_0010c049);
        if ((iVar1 != 0) || (uVar2 = (uint)auStack264[0], 0xfffffffe < auStack264[0])) {
          func_0x001019a0();
          uVar5 = xstrdup(pcStack296);
          puStack304 = &UNK_0010bfe2;
          goto code_r0x00105ace;
        }
      }
      else {
        uVar2 = *(uint *)(lVar4 + 0x10);
      }
      func_0x001019a0();
      uVar5 = xstrdup(pcStack296);
code_r0x0010594c:
      *extraout_RDX = uStack280;
      if (puVar6 != (uint *)0x0) {
        *puVar6 = uVar2;
      }
      if (in_R8 != (char **)0x0) {
        *in_R8 = pcVar7;
        pcVar7 = (char *)0x0;
      }
      if (in_R9 != (undefined8 *)0x0) {
        *in_R9 = uVar5;
        uVar5 = 0;
      }
      func_0x00101de0(pcVar7);
      func_0x00101de0(uVar5);
      uVar5 = 0;
    }
    if (lStack232 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (undefined8 *)uVar5;
    }
    func_0x00101ad0();
code_r0x00105c2a:
    uVar5 = 0;
    puStack304 = (undefined *)0x0;
  } while( true );
}

