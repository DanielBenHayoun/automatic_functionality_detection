
long proper_name_utf8(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lStack64;
  
  lVar3 = func_0x001016c0(0,param_1,5);
  uVar4 = locale_charset();
  iVar2 = c_strcasecmp(uVar4,&UNK_0010e9ea);
  lVar9 = lVar3;
  if (iVar2 == 0) {
    if (param_2 == 0) {
      lStack64 = 0;
      lVar6 = 0;
      lVar8 = 0;
      iVar2 = func_0x001017c0(lVar3,param_1);
      lVar5 = param_1;
    }
    else {
      lVar6 = 0;
      lVar5 = param_2;
      lVar8 = 0;
      lStack64 = param_2;
code_r0x00105688:
      iVar2 = func_0x001017c0(lVar3,param_1);
    }
    if (iVar2 == 0) {
      if ((lVar8 != 0) && (lVar5 != lVar8)) {
        func_0x001015f0(lVar8);
      }
      if (lVar6 == 0) {
        return lVar5;
      }
      if (lVar5 == lVar6) {
        return lVar5;
      }
      goto code_r0x001056b3;
    }
    cVar1 = mbsstr_trimmed_wordbounded(lVar3,param_1);
    if (cVar1 == '\0') {
code_r0x00105700:
      if (((param_2 != 0) && (cVar1 = mbsstr_trimmed_wordbounded(lVar3,param_2), cVar1 != '\0')) ||
         ((lStack64 != 0 && (cVar1 = mbsstr_trimmed_wordbounded(lVar3,lStack64), cVar1 != '\0'))))
      goto code_r0x00105738;
      lVar9 = func_0x001016e0(lVar3);
      lVar10 = func_0x001016e0(lVar5);
      lVar9 = xmalloc(lVar9 + 4 + lVar10);
      func_0x00101960(lVar9,1,0xffffffffffffffff,&UNK_0010e9e2,lVar3,lVar5);
      if (lVar8 != 0) {
        func_0x001015f0(lVar8);
      }
    }
    else {
code_r0x00105738:
      lVar5 = lVar8;
      if (lVar5 != 0) goto code_r0x00105830;
    }
  }
  else {
    lVar5 = xstr_iconv(param_2,&UNK_0010e9ea,uVar4);
    lVar6 = func_0x001016e0(uVar4);
    uVar7 = xmalloc(lVar6 + 0xb);
    lVar8 = func_0x001017d0(uVar7,uVar4,lVar6);
    puVar11 = (undefined8 *)(lVar6 + lVar8);
    *puVar11 = 0x4c534e4152542f2f;
    *(undefined2 *)(puVar11 + 1) = 0x5449;
    *(undefined *)((long)puVar11 + 10) = 0;
    lVar6 = xstr_iconv(param_2,&UNK_0010e9ea,lVar8);
    func_0x001015f0(lVar8);
    param_2 = lVar5;
    lVar8 = lVar5;
    if (lVar6 != 0) {
      lVar10 = func_0x00101720(lVar6,0x3f);
      if (lVar10 == 0) {
        lStack64 = lVar6;
        if (lVar5 == 0) {
          lVar5 = lVar6;
          param_2 = 0;
          lVar8 = 0;
        }
        goto code_r0x00105688;
      }
      func_0x001015f0(lVar6);
    }
    if (lVar5 == 0) {
      lStack64 = 0;
      lVar6 = 0;
      lVar5 = param_1;
      param_2 = 0;
      lVar8 = 0;
      goto code_r0x00105688;
    }
    iVar2 = func_0x001017c0(lVar3,param_1);
    if (iVar2 == 0) {
      return lVar5;
    }
    cVar1 = mbsstr_trimmed_wordbounded(lVar3,param_1);
    if (cVar1 == '\0') {
      lStack64 = 0;
      lVar6 = 0;
      goto code_r0x00105700;
    }
    lVar6 = 0;
code_r0x00105830:
    func_0x001015f0(lVar5);
  }
  lVar5 = lVar9;
  if (lVar6 == 0) {
    return lVar5;
  }
code_r0x001056b3:
  func_0x001015f0(lVar6);
  return lVar5;
}

