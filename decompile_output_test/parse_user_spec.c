
/* WARNING: Removing unreachable block (ram,0x001047f6) */
/* WARNING: Removing unreachable block (ram,0x00104802) */
/* WARNING: Removing unreachable block (ram,0x0010480d) */
/* WARNING: Removing unreachable block (ram,0x001048d0) */
/* WARNING: Removing unreachable block (ram,0x00104a40) */
/* WARNING: Removing unreachable block (ram,0x00104a5a) */
/* WARNING: Removing unreachable block (ram,0x001047d0) */
/* WARNING: Removing unreachable block (ram,0x0010487c) */
/* WARNING: Removing unreachable block (ram,0x00104a68) */
/* WARNING: Removing unreachable block (ram,0x00104b30) */
/* WARNING: Removing unreachable block (ram,0x00104a7d) */
/* WARNING: Removing unreachable block (ram,0x00104a80) */
/* WARNING: Removing unreachable block (ram,0x00104969) */

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
    puStack80 = &UNK_00104b90;
    lVar3 = func_0x00101810(param_1,0x3a);
    puStack80 = &UNK_00104baa;
    lStack64 = parse_with_separator(param_1,lVar3,param_2,param_3,param_4,param_5);
    if (lVar3 != 0) {
      return lStack64;
    }
    if (lStack64 != 0) {
      puStack80 = &UNK_00104bc9;
      lVar3 = func_0x00101810(param_1,0x2e);
      if (lVar3 == 0) {
        return lStack64;
      }
      puStack80 = &UNK_00104bea;
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
  if (*param_1 == '\0') goto code_r0x0010486c;
  unaff_RBP = (char *)xstrdup();
  if (unaff_RBP == (char *)0x0) {
    uVar2 = 0;
    pcVar4 = (char *)0x0;
    goto code_r0x0010486c;
  }
  cStack106 = '\0';
  pcStack128 = (char *)0x0;
  if ((*unaff_RBP == '+') || (lVar3 = func_0x001018d0(unaff_RBP), lVar3 == 0)) {
    iVar1 = xstrtoul(unaff_RBP,0,10,auStack96,&UNK_00106a89);
    puStack136 = &UNK_00106a08;
    if (iVar1 == 0) {
      if (auStack96[0] < 0xffffffff) {
        uStack112 = (undefined4)auStack96[0];
      }
      puStack136 = (undefined *)0x0;
      if (0xfffffffe < auStack96[0]) {
        puStack136 = &UNK_00106a08;
      }
    }
    cStack106 = '\0';
    func_0x00101950();
  }
  else {
    uStack112 = *(undefined4 *)(lVar3 + 0x10);
    puStack136 = (undefined *)0x0;
    func_0x00101950();
  }
  do {
    uVar2 = 0;
    pcVar4 = unaff_RBP;
    if (cStack106 == '\0') {
      if (puStack136 == (undefined *)0x0) goto code_r0x0010486c;
code_r0x001049ee:
      func_0x001016f0(unaff_RBP);
      func_0x001016f0(uVar2);
      uVar2 = func_0x001017a0(0,puStack136,5);
    }
    else {
      if (((*pcStack128 == '+') || (lVar3 = func_0x001018f0(pcStack128), lVar3 == 0)) &&
         ((iVar1 = xstrtoul(pcStack128,0,10,auStack96,&UNK_00106a89), iVar1 != 0 ||
          (0xfffffffe < auStack96[0])))) {
        func_0x001016d0();
        uVar2 = xstrdup(pcStack128);
        puStack136 = &UNK_00106a22;
        goto code_r0x001049ee;
      }
      func_0x001016d0();
      uVar2 = xstrdup(pcStack128);
code_r0x0010486c:
      *param_2 = uStack112;
      if (param_4 != (char **)0x0) {
        *param_4 = pcVar4;
        pcVar4 = (char *)0x0;
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = uVar2;
        uVar2 = 0;
      }
      func_0x001016f0(pcVar4);
      func_0x001016f0(uVar2);
      uVar2 = 0;
    }
    if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar2;
    }
    func_0x001017e0();
    puStack136 = (undefined *)0x0;
  } while( true );
}

