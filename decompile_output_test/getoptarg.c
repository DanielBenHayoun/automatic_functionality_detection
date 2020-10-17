
void getoptarg(char *param_1,char param_2,char *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  char *pcVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long lStack40;
  long lStack32;
  
  cVar1 = *param_1;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar6 = param_1;
  if (9 < (int)cVar1 - 0x30U) {
    *param_3 = cVar1;
    cVar1 = param_1[1];
    pcVar6 = param_1 + 1;
  }
  if (cVar1 == '\0') {
code_r0x0010584c:
    if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    param_1 = pcVar6;
    iVar2 = xstrtol(pcVar6,0,10,&lStack40,&UNK_0010bee5);
    if (iVar2 == 0) {
      if (lStack40 - 1U < 0x7fffffff) {
        *param_4 = (int)lStack40;
        goto code_r0x0010584c;
      }
    }
    uVar3 = quote(pcVar6);
    uVar4 = func_0x00101c80(0,&UNK_0010d1f0,5);
    uVar7 = 0x4b;
    if (lStack40 < 0x80000000) {
      puVar5 = (uint *)func_0x00101bb0();
      uVar7 = (ulong)*puVar5;
    }
    func_0x00101ee0(0,uVar7,uVar4,(ulong)(uint)(int)param_2,uVar3);
    param_1 = (char *)0x1;
    usage();
  }
  func_0x00101cb0();
  file_name = param_1;
  return;
}

