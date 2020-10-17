
undefined8 cl_strtod(undefined8 param_1,char **param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcStack64;
  char *pcStack56;
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = param_1;
  uVar5 = func_0x001019d0(param_1,&pcStack64);
  uVar6 = uVar5;
  pcVar2 = pcStack64;
  if (*pcStack64 != '\0') {
    puVar3 = (undefined4 *)func_0x00101970();
    uVar1 = *puVar3;
    uVar6 = c_strtod(param_1,&pcStack56);
    uVar4 = param_1;
    pcVar2 = pcStack56;
    if (pcStack56 <= pcStack64) {
      *puVar3 = uVar1;
      uVar6 = uVar5;
      pcVar2 = pcStack64;
    }
  }
  pcStack64 = pcVar2;
  if (param_2 != (char **)0x0) {
    *param_2 = pcStack64;
  }
  if (lStack48 != *(long *)(in_FS_OFFSET + 0x28)) {
    uVar6 = func_0x00101a50();
    file_name = uVar4;
    return uVar6;
  }
  return uVar6;
}

