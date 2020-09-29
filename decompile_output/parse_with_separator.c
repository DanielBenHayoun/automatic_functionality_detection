
undefined8
parse_with_separator
          (char *param_1,char *param_2,undefined4 *param_3,uint *param_4,char **param_5,
          undefined8 *param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *unaff_RBP;
  long in_FS_OFFSET;
  bool bVar6;
  undefined *puStack136;
  char *pcStack128;
  undefined4 uStack112;
  bool bStack106;
  ulong auStack96 [4];
  long lStack64;
  
  uVar2 = 0xffffffff;
  uStack112 = *param_3;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != (uint *)0x0) {
    uVar2 = *param_4;
  }
  if (param_5 != (char **)0x0) {
    *param_5 = (char *)0x0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_2 == (char *)0x0) {
    uVar4 = 0;
    if (*param_1 == '\0') goto code_r0x00104b5c;
    unaff_RBP = (char *)xstrdup();
code_r0x00104be3:
    if (unaff_RBP == (char *)0x0) {
code_r0x00104d08:
      uVar4 = 0;
      param_2 = (char *)0x0;
      goto code_r0x00104b5c;
    }
    bStack106 = false;
    bVar6 = true;
    pcStack128 = (char *)0x0;
  }
  else {
    if (param_2 + -(long)param_1 == (char *)0x0) {
      if (param_2[1] == '\0') goto code_r0x00104d08;
      pcStack128 = param_2 + 1;
      puStack136 = (undefined *)0x0;
      unaff_RBP = (char *)0x0;
      uVar4 = 0;
      bStack106 = pcStack128 != (char *)0x0;
      goto code_r0x00104b17;
    }
    unaff_RBP = (char *)xmemdup();
    unaff_RBP[(long)(param_2 + -(long)param_1)] = '\0';
    if (param_2[1] == '\0') goto code_r0x00104be3;
    pcStack128 = param_2 + 1;
    bStack106 = pcStack128 != (char *)0x0;
    if (unaff_RBP == (char *)0x0) goto code_r0x00104e3a;
    bVar6 = pcStack128 == (char *)0x0;
  }
  bVar6 = (bool)(param_2 != (char *)0x0 & bVar6);
  if ((*unaff_RBP == '+') || (lVar3 = func_0x001017e0(unaff_RBP), lVar3 == 0)) {
    if (bVar6 == false) {
      iVar1 = xstrtoul(unaff_RBP,0,10,auStack96,&UNK_00106f29);
      puStack136 = &UNK_00106ea8;
      if (iVar1 == 0) {
        if (auStack96[0] < 0xffffffff) {
          uStack112 = (undefined4)auStack96[0];
          bVar6 = bStack106;
        }
        puStack136 = (undefined *)0x0;
        if (0xfffffffe < auStack96[0]) {
          puStack136 = &UNK_00106ea8;
        }
      }
      uVar4 = 0;
      func_0x00101870();
      bStack106 = bVar6;
    }
    else {
      bStack106 = false;
      uVar4 = 0;
      puStack136 = &UNK_00106eb5;
      func_0x00101870();
    }
  }
  else {
    uStack112 = *(undefined4 *)(lVar3 + 0x10);
    uVar4 = 0;
    if (bVar6 != false) {
      uVar2 = *(uint *)(lVar3 + 0x14);
      puVar5 = (undefined8 *)func_0x00101740((ulong)uVar2);
      if (puVar5 == (undefined8 *)0x0) {
        uVar4 = umaxtostr((ulong)uVar2);
      }
      else {
        uVar4 = *puVar5;
      }
      uVar4 = xstrdup(uVar4);
      func_0x00101600();
    }
    puStack136 = (undefined *)0x0;
    func_0x00101870();
  }
code_r0x00104b17:
  do {
    param_2 = unaff_RBP;
    if (bStack106 == false) {
      if (puStack136 == (undefined *)0x0) goto code_r0x00104b5c;
code_r0x00104cde:
      func_0x00101620(unaff_RBP);
      func_0x00101620(uVar4);
      uVar4 = func_0x001016c0(0,puStack136,5);
    }
    else {
      if ((*pcStack128 == '+') || (lVar3 = func_0x00101800(pcStack128), lVar3 == 0)) {
        iVar1 = xstrtoul(pcStack128,0,10,auStack96,&UNK_00106f29);
        if ((iVar1 != 0) || (uVar2 = (uint)auStack96[0], 0xfffffffe < auStack96[0])) {
          func_0x00101600();
          uVar4 = xstrdup(pcStack128);
          puStack136 = &UNK_00106ec2;
          goto code_r0x00104cde;
        }
      }
      else {
        uVar2 = *(uint *)(lVar3 + 0x10);
      }
      func_0x00101600();
      uVar4 = xstrdup(pcStack128);
code_r0x00104b5c:
      *param_3 = uStack112;
      if (param_4 != (uint *)0x0) {
        *param_4 = uVar2;
      }
      if (param_5 != (char **)0x0) {
        *param_5 = param_2;
        param_2 = (char *)0x0;
      }
      if (param_6 != (undefined8 *)0x0) {
        *param_6 = uVar4;
        uVar4 = 0;
      }
      func_0x00101620(param_2);
      func_0x00101620(uVar4);
      uVar4 = 0;
    }
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar4;
    }
    func_0x001016f0();
code_r0x00104e3a:
    uVar4 = 0;
    puStack136 = (undefined *)0x0;
  } while( true );
}

