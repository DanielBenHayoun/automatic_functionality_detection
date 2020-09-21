
ulong make_dir_parents(char *param_1,int *param_2,long param_3,undefined8 param_4,ulong param_5,
                      code *param_6,uint param_7,uint param_8,uint param_9,char param_10)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint unaff_EBP;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  char *pcStack248;
  ulong uStack240;
  bool bStack217;
  uint auStack216 [6];
  uint uStack192;
  long lStack64;
  
  uVar6 = param_5 & 0xffffffff;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*param_1 != '/') && (*param_2 == 4)) && (unaff_EBP = param_2[1], unaff_EBP != 0))
  goto code_r0x001027bb;
  pcVar4 = param_1;
  if (param_3 != 0) {
    lVar2 = mkancesdirs(param_1,param_2,param_3);
    if (lVar2 < 0) {
      if (lVar2 != -1) goto code_r0x0010286c;
      puVar7 = (uint *)func_0x00101750();
      unaff_EBP = *puVar7;
      goto code_r0x001027bb;
    }
    pcVar4 = param_1 + lVar2;
  }
  pcStack248 = pcVar4;
  bStack217 = param_8 == 0xffffffff && param_9 == 0xffffffff;
  if (bStack217) {
    if ((param_7 & 0xc00 | (uint)uVar6 & 0x200) == 0) {
      unaff_EBP = func_0x00101790(pcStack248,uVar6);
      if (unaff_EBP == 0) {
        (*param_6)(param_1);
        if (((uint)uVar6 & 0x1ff & param_7) != 0) goto code_r0x001029da;
        goto code_r0x0010286c;
      }
      goto code_r0x00102704;
    }
    uStack240 = param_5 & 0xffffffed;
  }
  else {
    uStack240 = param_5 & 0xffffffc0;
  }
  unaff_EBP = func_0x00101790(pcStack248,uStack240);
  if (unaff_EBP == 0) {
    (*param_6)(param_1,param_4);
    uVar3 = 3;
    goto code_r0x0010289e;
  }
code_r0x00102704:
  puVar7 = (uint *)func_0x00101750();
  unaff_EBP = *puVar7;
  if (param_10 == '\0') {
    uStack240 = 0xffffffff;
    uVar3 = 2;
    goto code_r0x0010289e;
  }
  if (unaff_EBP == 0) goto code_r0x0010286c;
  uVar6 = param_5 & 0xffffff00 | (ulong)(unaff_EBP != 2 && param_3 != 0);
  if (unaff_EBP == 2 || param_3 == 0) goto code_r0x001027bb;
  iVar1 = func_0x00101920(1,pcStack248,auStack216);
  if (iVar1 == 0) {
    if ((uStack192 & 0xf000) != 0x4000) goto code_r0x001027bb;
  }
  else {
    if (unaff_EBP != 0x11) goto code_r0x001027bb;
    if (*puVar7 == 0x14) goto code_r0x001027bb;
    if (*puVar7 == 2) goto code_r0x001027bb;
    uVar6 = 0;
    param_1 = (char *)quote(param_1);
    uVar3 = func_0x001017f0(0,&UNK_00108cae,5);
    func_0x00101a10(0,(ulong)*puVar7,uVar3,param_1);
  }
code_r0x001027ed:
  do {
    while( true ) {
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
      func_0x00101830();
code_r0x001029da:
      uVar3 = 3;
      uStack240 = uVar6;
code_r0x0010289e:
      iVar1 = savewd_chdir(param_2,pcStack248,uVar3,auStack216);
      if (-2 < iVar1) break;
code_r0x0010286c:
      uVar6 = 1;
    }
    pcVar4 = ".";
    if (iVar1 != 0) {
      pcVar4 = pcStack248;
    }
    iVar1 = dirchownmod((ulong)auStack216[0],pcVar4,uStack240,(ulong)param_8,(ulong)param_9,uVar6,
                        (ulong)param_7);
    if (iVar1 == 0) goto code_r0x0010286c;
    if (unaff_EBP == 0) {
      puVar7 = (uint *)func_0x00101750();
    }
    else {
      if (((unaff_EBP == 2) || (param_3 == 0)) ||
         (puVar7 = (uint *)func_0x00101750(), *puVar7 == 0x14)) {
code_r0x001027bb:
        uVar6 = 0;
        param_1 = (char *)quote(param_1);
        uVar3 = func_0x001017f0(0,&UNK_00108cbd,5);
        func_0x00101a10(0,(ulong)unaff_EBP,uVar3,param_1);
        goto code_r0x001027ed;
      }
    }
    param_1 = (char *)quote(param_1);
    puVar5 = &UNK_00108cf8;
    if (bStack217 != false) {
      puVar5 = &UNK_00108cd8;
    }
    uVar3 = func_0x001017f0(0,puVar5,5);
    uVar6 = 0;
    func_0x00101a10(0,(ulong)*puVar7,uVar3,param_1);
  } while( true );
}

