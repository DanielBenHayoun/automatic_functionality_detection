
/* WARNING: Removing unreachable block (ram,0x00109756) */
/* WARNING: Removing unreachable block (ram,0x001096e1) */
/* WARNING: Removing unreachable block (ram,0x00109730) */
/* WARNING: Removing unreachable block (ram,0x00109735) */
/* WARNING: Removing unreachable block (ram,0x00109737) */
/* WARNING: Removing unreachable block (ram,0x00109740) */
/* WARNING: Removing unreachable block (ram,0x00109746) */
/* WARNING: Removing unreachable block (ram,0x0010974f) */
/* WARNING: Removing unreachable block (ram,0x00109751) */
/* WARNING: Removing unreachable block (ram,0x00109800) */
/* WARNING: Removing unreachable block (ram,0x00109809) */
/* WARNING: Removing unreachable block (ram,0x0010980b) */
/* WARNING: Removing unreachable block (ram,0x001097f6) */
/* WARNING: Removing unreachable block (ram,0x00109790) */
/* WARNING: Removing unreachable block (ram,0x001097e0) */
/* WARNING: Removing unreachable block (ram,0x001097e8) */
/* WARNING: Removing unreachable block (ram,0x001097ee) */
/* WARNING: Removing unreachable block (ram,0x00109760) */
/* WARNING: Removing unreachable block (ram,0x00109798) */
/* WARNING: Removing unreachable block (ram,0x001097a0) */
/* WARNING: Removing unreachable block (ram,0x001097a8) */
/* WARNING: Removing unreachable block (ram,0x001097b0) */
/* WARNING: Removing unreachable block (ram,0x001097b8) */
/* WARNING: Removing unreachable block (ram,0x001098fa) */
/* WARNING: Removing unreachable block (ram,0x001097c4) */
/* WARNING: Removing unreachable block (ram,0x001097c9) */
/* WARNING: Removing unreachable block (ram,0x00109810) */
/* WARNING: Removing unreachable block (ram,0x00109904) */
/* WARNING: Removing unreachable block (ram,0x0010981c) */
/* WARNING: Removing unreachable block (ram,0x00109821) */
/* WARNING: Removing unreachable block (ram,0x001096e9) */
/* WARNING: Removing unreachable block (ram,0x00109833) */
/* WARNING: Removing unreachable block (ram,0x00109846) */
/* WARNING: Removing unreachable block (ram,0x00109709) */
/* WARNING: Removing unreachable block (ram,0x001098a8) */
/* WARNING: Removing unreachable block (ram,0x001098b6) */
/* WARNING: Removing unreachable block (ram,0x001098ce) */
/* WARNING: Removing unreachable block (ram,0x00109853) */
/* WARNING: Removing unreachable block (ram,0x00109865) */
/* WARNING: Removing unreachable block (ram,0x00109881) */
/* WARNING: Removing unreachable block (ram,0x0010971f) */

undefined * openat_proc_name(undefined *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined auStack88 [40];
  long lStack48;
  
  lStack48 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == '\0') {
    *param_1 = 0;
    goto code_r0x00109a4b;
  }
  if (proc_status_5461 == 0) {
    uVar1 = func_0x00101bc0(&UNK_0010b373);
    if ((int)uVar1 < 0) {
      proc_status_5461 = -1;
      param_1 = (undefined *)0x0;
      goto code_r0x00109a4b;
    }
    func_0x00101c80(auStack88,1,0x20,&UNK_0010b381);
    iVar2 = func_0x00101bd0(auStack88);
    proc_status_5461 = (-(uint)(iVar2 == 0) & 2) - 1;
    func_0x00101a30((ulong)uVar1);
  }
  if (proc_status_5461 < 0) {
code_r0x00109b00:
    param_1 = (undefined *)0x0;
  }
  else {
    lVar3 = func_0x00101960(param_3);
    if (0xfc0 < lVar3 + 0x1bU) {
      param_1 = (undefined *)func_0x00101b00();
      if (param_1 == (undefined *)0x0) goto code_r0x00109b00;
    }
    iVar2 = func_0x00101c80(param_1,1,0xffffffffffffffff,&UNK_0010b398);
    func_0x001018d0(param_1 + iVar2);
  }
code_r0x00109a4b:
  if (lStack48 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x001019a0();
    lVar3 = *(long *)(in_FS_OFFSET + 0x28);
    while( true ) {
      uVar1 = func_0x00101900();
      if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) break;
      func_0x001019a0();
    }
    return (undefined *)(ulong)uVar1;
  }
  return param_1;
}

