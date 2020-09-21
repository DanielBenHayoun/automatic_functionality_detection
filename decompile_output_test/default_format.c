
undefined8 default_format(char param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      uVar2 = func_0x00101e20(0,&UNK_0010e430,5);
      uVar2 = xstrdup(uVar2);
      puVar4 = &UNK_0010e470;
      if (param_3 == '\0') {
        puVar4 = &UNK_0010e4b0;
      }
      uVar1 = func_0x00101e20(0,puVar4,5);
      uVar1 = xasprintf(&UNK_0010ddd2,uVar2,uVar1);
      func_0x00101d10(uVar2);
      uVar2 = func_0x00101e20(0,&UNK_0010e4e0,5);
      uVar2 = xasprintf(&UNK_0010ddd2,uVar1,uVar2);
      func_0x00101d10(uVar1);
      uVar1 = func_0x00101e20(0,&UNK_0010e520,5);
      uVar1 = xasprintf(&UNK_0010ddd2,uVar2,uVar1);
      func_0x00101d10(uVar2);
      return uVar1;
    }
    puVar5 = fmt_terse_regular;
  }
  else {
    if (param_2 == '\0') {
      puVar5 = (undefined1 *)func_0x00101e20(0,&UNK_0010e380,5);
    }
    else {
      puVar5 = fmt_terse_fs;
    }
  }
  lVar3 = func_0x00101e40(puVar5);
  lVar3 = lVar3 + 1;
  uVar2 = xmalloc(lVar3,lVar3);
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)PTR_memcpy_00312ea0)(uVar2,puVar5,lVar3);
  return uVar2;
}

