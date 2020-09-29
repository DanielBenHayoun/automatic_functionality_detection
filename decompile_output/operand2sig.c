
ulong operand2sig(char *param_1,char **param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined *unaff_R12;
  char *unaff_R13;
  char *pcVar11;
  long in_FS_OFFSET;
  char *pcStack152;
  char *pcStack144;
  long lStack136;
  ulong uStack120;
  char *pcStack112;
  undefined *puStack104;
  char *pcStack96;
  uint uStack76;
  char *pcStack72;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)*param_1 - 0x30U < 10) {
    pcStack96 = &UNK_00102d78;
    piVar4 = (int *)func_0x00101970();
    *piVar4 = 0;
    pcStack96 = &UNK_00102d93;
    lVar5 = func_0x00101b40(param_1,&pcStack72,10);
    if (((pcStack72 == param_1) || (*pcStack72 != '\0')) ||
       ((*piVar4 != 0 || (uStack76 = (uint)lVar5, (long)(int)uStack76 != lVar5)))) {
      uStack76 = 0xffffffff;
    }
    else {
      if (uStack76 != 0xffffffff) {
        uVar9 = 0xff;
        if ((int)uStack76 < 0xff) {
          uVar9 = 0x7f;
        }
        uVar9 = uVar9 & uStack76;
        uStack76 = uVar9;
code_r0x00102e6a:
        uStack120 = (ulong)uVar9;
        pcStack96 = &UNK_00102e74;
        uVar10 = uStack120;
        iVar3 = sig2str();
        if (iVar3 == 0) {
          uVar7 = (ulong)uStack76;
          goto code_r0x00102e80;
        }
      }
    }
  }
  else {
    pcStack96 = &UNK_00102e05;
    unaff_R13 = (char *)xstrdup();
    cVar1 = *unaff_R13;
    if (cVar1 != '\0') {
      unaff_R12 = &UNK_00106898;
      pcVar11 = unaff_R13;
      do {
        pcStack96 = &UNK_00102e2b;
        lVar5 = func_0x00101a80(&UNK_00106898,(ulong)(uint)(int)cVar1);
        if (lVar5 != 0) {
          *pcVar11 = cVar1 + -0x20;
        }
        pcVar11 = pcVar11 + 1;
        cVar1 = *pcVar11;
      } while (cVar1 != '\0');
    }
    pcStack96 = &UNK_00102e52;
    iVar3 = str2sig(unaff_R13,&uStack76);
    if (iVar3 == 0) {
code_r0x00102e56:
      uVar9 = uStack76;
      pcStack96 = &UNK_00102e62;
      func_0x00101950();
      if (-1 < (int)uVar9) goto code_r0x00102e6a;
    }
    else {
      if (((*unaff_R13 == 'S') && (unaff_R13[1] == 'I')) && (unaff_R13[2] == 'G')) {
        pcStack96 = &UNK_00102ee2;
        iVar3 = str2sig(unaff_R13 + 3,&uStack76);
        if (iVar3 == 0) goto code_r0x00102e56;
      }
      uStack76 = 0xffffffff;
      pcStack96 = &UNK_00102ebf;
      func_0x00101950(unaff_R13);
    }
  }
  pcStack96 = &UNK_00102dc8;
  uStack120 = quote();
  pcStack96 = &UNK_00102dde;
  uVar6 = func_0x00101a20(0,&UNK_001068b3,5);
  param_2 = (char **)0x0;
  uVar10 = 0;
  pcStack96 = &UNK_00102def;
  func_0x00101c10(0,0,uVar6,uStack120);
  uVar7 = 0xffffffff;
code_r0x00102e80:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
  pcStack96 = &UNK_00102f21;
  func_0x00101a50();
  lStack136 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = uVar10;
  pcStack112 = param_1;
  puStack104 = unaff_R12;
  pcStack96 = unaff_R13;
  func_0x001019d0();
  pcVar11 = pcStack152;
  if (*pcStack152 != '\0') {
    puVar8 = (undefined4 *)func_0x00101970();
    uVar2 = *puVar8;
    c_strtod(uVar10,&pcStack144);
    uVar7 = uVar10;
    pcVar11 = pcStack144;
    if (pcStack144 <= pcStack152) {
      *puVar8 = uVar2;
      pcVar11 = pcStack152;
    }
  }
  pcStack152 = pcVar11;
  if (param_2 != (char **)0x0) {
    *param_2 = pcStack152;
  }
  if (lStack136 != *(long *)(in_FS_OFFSET + 0x28)) {
    uVar6 = func_0x00101a50();
    file_name = uVar7;
    return uVar6;
  }
  return 0;
}

