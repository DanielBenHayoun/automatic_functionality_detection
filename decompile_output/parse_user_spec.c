
/* WARNING: Removing unreachable block (ram,0x00104ae6) */
/* WARNING: Removing unreachable block (ram,0x00104af2) */
/* WARNING: Removing unreachable block (ram,0x00104afd) */
/* WARNING: Removing unreachable block (ram,0x00104bc0) */
/* WARNING: Removing unreachable block (ram,0x00104d30) */
/* WARNING: Removing unreachable block (ram,0x00104d4a) */
/* WARNING: Removing unreachable block (ram,0x00104ac0) */
/* WARNING: Removing unreachable block (ram,0x00104b6c) */
/* WARNING: Removing unreachable block (ram,0x00104d58) */
/* WARNING: Removing unreachable block (ram,0x00104e20) */
/* WARNING: Removing unreachable block (ram,0x00104d6d) */
/* WARNING: Removing unreachable block (ram,0x00104d70) */
/* WARNING: Removing unreachable block (ram,0x00104c59) */

long parse_user_spec(char *param_1,undefined4 *param_2,long param_3,char **param_4,
                    undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *unaff_RBP;
  char *pcVar4;
  long in_FS_OFFSET;
  undefined *puStack136;
  char *pcStack128;
  undefined4 uStack112;
  char cStack106;
  ulong auStack96 [2];
  undefined *puStack80;
  long lStack64;
  
  if (param_3 != 0) {
    puStack80 = &UNK_00104e80;
    lVar3 = func_0x00101730(param_1,0x3a);
    puStack80 = &UNK_00104e9a;
    lStack64 = parse_with_separator(param_1,lVar3,param_2,param_3,param_4,param_5);
    if (lVar3 != 0) {
      return lStack64;
    }
    if (lStack64 != 0) {
      puStack80 = &UNK_00104eb9;
      lVar3 = func_0x00101730(param_1,0x2e);
      if (lVar3 == 0) {
        return lStack64;
      }
      puStack80 = &UNK_00104eda;
      lVar3 = parse_with_separator(param_1,lVar3,param_2,param_3,param_4,param_5);
      if (lVar3 != 0) {
        return lStack64;
      }
    }
    return 0;
  }
  uStack112 = *param_2;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != (char **)0x0) {
    *param_4 = (char *)0x0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  uVar2 = 0;
  pcVar4 = (char *)0x0;
  if (*param_1 == '\0') goto code_r0x00104b5c;
  unaff_RBP = (char *)xstrdup();
  if (unaff_RBP == (char *)0x0) {
    uVar2 = 0;
    pcVar4 = (char *)0x0;
    goto code_r0x00104b5c;
  }
  cStack106 = '\0';
  pcStack128 = (char *)0x0;
  if ((*unaff_RBP == '+') || (lVar3 = func_0x001017e0(unaff_RBP), lVar3 == 0)) {
    iVar1 = xstrtoul(unaff_RBP,0,10,auStack96,&UNK_00106f29);
    puStack136 = &UNK_00106ea8;
    if (iVar1 == 0) {
      if (auStack96[0] < 0xffffffff) {
        uStack112 = (undefined4)auStack96[0];
      }
      puStack136 = (undefined *)0x0;
      if (0xfffffffe < auStack96[0]) {
        puStack136 = &UNK_00106ea8;
      }
    }
    cStack106 = '\0';
    func_0x00101870();
  }
  else {
    uStack112 = *(undefined4 *)(lVar3 + 0x10);
    puStack136 = (undefined *)0x0;
    func_0x00101870();
  }
  do {
    uVar2 = 0;
    pcVar4 = unaff_RBP;
    if (cStack106 == '\0') {
      if (puStack136 == (undefined *)0x0) goto code_r0x00104b5c;
code_r0x00104cde:
      func_0x00101620(unaff_RBP);
      func_0x00101620(uVar2);
      uVar2 = func_0x001016c0(0,puStack136,5);
    }
    else {
      if (((*pcStack128 == '+') || (lVar3 = func_0x00101800(pcStack128), lVar3 == 0)) &&
         ((iVar1 = xstrtoul(pcStack128,0,10,auStack96,&UNK_00106f29), iVar1 != 0 ||
          (0xfffffffe < auStack96[0])))) {
        func_0x00101600();
        uVar2 = xstrdup(pcStack128);
        puStack136 = &UNK_00106ec2;
        goto code_r0x00104cde;
      }
      func_0x00101600();
      uVar2 = xstrdup(pcStack128);
code_r0x00104b5c:
      *param_2 = uStack112;
      if (param_4 != (char **)0x0) {
        *param_4 = pcVar4;
        pcVar4 = (char *)0x0;
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = uVar2;
        uVar2 = 0;
      }
      func_0x00101620(pcVar4);
      func_0x00101620(uVar2);
      uVar2 = 0;
    }
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
    func_0x001016f0();
    puStack136 = (undefined *)0x0;
  } while( true );
}

