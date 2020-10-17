
ulong yesno(void)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  long in_FS_OFFSET;
  uint *puStack32;
  undefined8 uStack24;
  long lStack16;
  
  uVar5 = 0;
  puStack32 = (uint *)0x0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  uStack24 = 0;
  lVar4 = func_0x00101ba0(&puStack32,&uStack24,10,stdin);
  if (0 < lVar4) {
    pcVar1 = (char *)((long)puStack32 + lVar4 + -1);
    if (*pcVar1 == '\n') {
      *pcVar1 = '\0';
    }
    iVar2 = func_0x00101bd0(puStack32);
    uVar5 = (ulong)(0 < iVar2);
  }
  puVar6 = puStack32;
  func_0x00101da0();
  if (lStack16 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101ab0();
    if (((puVar6 != (uint *)0x0) && (iVar2 = func_0x00101c60(), iVar2 != 0)) &&
       ((*puVar6 & 0x100) != 0)) {
      rpl_fseeko(puVar6,0,1);
    }
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)PTR_fflush_0030ef10)(puVar6);
    return uVar3;
  }
  return uVar5;
}

