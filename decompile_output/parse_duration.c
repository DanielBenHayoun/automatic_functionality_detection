
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong parse_duration(char *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  char **ppcVar10;
  ulong uVar11;
  undefined *unaff_R12;
  char *unaff_R13;
  char *pcVar12;
  long in_FS_OFFSET;
  char *pcStack192;
  char *pcStack184;
  long lStack176;
  ulong uStack160;
  char *pcStack152;
  undefined *puStack144;
  char *pcStack136;
  uint uStack116;
  char *pcStack112;
  long lStack104;
  char *pcStack88;
  double dStack32;
  char *pcStack24;
  long lStack16;
  
  ppcVar10 = &pcStack24;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack152 = param_1;
  cVar2 = xstrtod(param_1,ppcVar10,&dStack32,cl_strtod);
  if (((cVar2 == '\0') && (piVar4 = (int *)func_0x00101970(), *piVar4 != 0x22)) ||
     (dStack32 < _UNK_00106878)) {
code_r0x00102d02:
    param_1 = (char *)quote(param_1);
    uVar6 = func_0x00101a20(0,&UNK_00105f74,5);
    ppcVar10 = (char **)0x0;
    func_0x00101c10(0,0,uVar6,param_1);
    pcStack152 = (char *)0x7d;
    usage();
  }
  else {
    cVar2 = *pcStack24;
    if (cVar2 != '\0') {
      if (pcStack24[1] == '\0') {
        if (cVar2 == 'h') goto code_r0x00102cc0;
        if (cVar2 < 'i') {
          if (cVar2 == 'd') goto code_r0x00102cc0;
        }
        else {
          if ((cVar2 == 'm') || (cVar2 == 's')) goto code_r0x00102cc0;
        }
      }
      goto code_r0x00102d02;
    }
code_r0x00102cc0:
    if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  func_0x00101a50();
  lStack104 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack88 = param_1;
  if ((int)*pcStack152 - 0x30U < 10) {
    pcStack136 = &UNK_00102d78;
    piVar4 = (int *)func_0x00101970();
    *piVar4 = 0;
    pcStack136 = &UNK_00102d93;
    lVar5 = func_0x00101b40(pcStack152,&pcStack112,10);
    if ((((pcStack112 == pcStack152) || (*pcStack112 != '\0')) || (*piVar4 != 0)) ||
       (uStack116 = (uint)lVar5, (long)(int)uStack116 != lVar5)) {
      uStack116 = 0xffffffff;
    }
    else {
      if (uStack116 != 0xffffffff) {
        uVar9 = 0xff;
        if ((int)uStack116 < 0xff) {
          uVar9 = 0x7f;
        }
        uVar9 = uVar9 & uStack116;
        uStack116 = uVar9;
code_r0x00102e6a:
        uStack160 = (ulong)uVar9;
        pcStack136 = &UNK_00102e74;
        uVar11 = uStack160;
        iVar3 = sig2str();
        if (iVar3 == 0) {
          uVar7 = (ulong)uStack116;
          goto code_r0x00102e80;
        }
      }
    }
  }
  else {
    pcStack136 = &UNK_00102e05;
    unaff_R13 = (char *)xstrdup();
    cVar2 = *unaff_R13;
    if (cVar2 != '\0') {
      unaff_R12 = &UNK_00106898;
      pcVar12 = unaff_R13;
      do {
        pcStack136 = &UNK_00102e2b;
        lVar5 = func_0x00101a80(&UNK_00106898,(ulong)(uint)(int)cVar2);
        if (lVar5 != 0) {
          *pcVar12 = cVar2 + -0x20;
        }
        pcVar12 = pcVar12 + 1;
        cVar2 = *pcVar12;
      } while (cVar2 != '\0');
    }
    pcStack136 = &UNK_00102e52;
    iVar3 = str2sig(unaff_R13,&uStack116);
    if (iVar3 == 0) {
code_r0x00102e56:
      uVar9 = uStack116;
      pcStack136 = &UNK_00102e62;
      func_0x00101950();
      if (-1 < (int)uVar9) goto code_r0x00102e6a;
    }
    else {
      if (((*unaff_R13 == 'S') && (unaff_R13[1] == 'I')) && (unaff_R13[2] == 'G')) {
        pcStack136 = &UNK_00102ee2;
        iVar3 = str2sig(unaff_R13 + 3,&uStack116);
        if (iVar3 == 0) goto code_r0x00102e56;
      }
      uStack116 = 0xffffffff;
      pcStack136 = &UNK_00102ebf;
      func_0x00101950(unaff_R13);
    }
  }
  pcStack136 = &UNK_00102dc8;
  uStack160 = quote();
  pcStack136 = &UNK_00102dde;
  uVar6 = func_0x00101a20(0,&UNK_001068b3,5);
  ppcVar10 = (char **)0x0;
  uVar11 = 0;
  pcStack136 = &UNK_00102def;
  func_0x00101c10(0,0,uVar6,uStack160);
  uVar7 = 0xffffffff;
code_r0x00102e80:
  if (lStack104 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
  pcStack136 = &UNK_00102f21;
  func_0x00101a50();
  lStack176 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = uVar11;
  puStack144 = unaff_R12;
  pcStack136 = unaff_R13;
  func_0x001019d0();
  pcVar12 = pcStack192;
  if (*pcStack192 != '\0') {
    puVar8 = (undefined4 *)func_0x00101970();
    uVar1 = *puVar8;
    c_strtod(uVar11,&pcStack184);
    uVar7 = uVar11;
    pcVar12 = pcStack184;
    if (pcStack184 <= pcStack192) {
      *puVar8 = uVar1;
      pcVar12 = pcStack192;
    }
  }
  pcStack192 = pcVar12;
  if (ppcVar10 != (char **)0x0) {
    *ppcVar10 = pcStack192;
  }
  if (lStack176 != *(long *)(in_FS_OFFSET + 0x28)) {
    uVar6 = func_0x00101a50();
    file_name = uVar7;
    return uVar6;
  }
  return 0;
}

