
/* WARNING: Possible PIC construction at 0x00105f17: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00105f49: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00105ffd: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00106248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001061ae: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010624d) */
/* WARNING: Removing unreachable block (ram,0x00106002) */
/* WARNING: Removing unreachable block (ram,0x00105f4e) */
/* WARNING: Removing unreachable block (ram,0x001062b0) */
/* WARNING: Removing unreachable block (ram,0x00105f76) */
/* WARNING: Removing unreachable block (ram,0x00106040) */
/* WARNING: Removing unreachable block (ram,0x00106082) */
/* WARNING: Removing unreachable block (ram,0x00105f90) */
/* WARNING: Removing unreachable block (ram,0x00105fd4) */
/* WARNING: Removing unreachable block (ram,0x00106260) */
/* WARNING: Removing unreachable block (ram,0x001061f8) */
/* WARNING: Removing unreachable block (ram,0x00106233) */
/* WARNING: Removing unreachable block (ram,0x001061c8) */
/* WARNING: Removing unreachable block (ram,0x00106170) */
/* WARNING: Removing unreachable block (ram,0x00106196) */
/* WARNING: Removing unreachable block (ram,0x00106120) */
/* WARNING: Removing unreachable block (ram,0x001060d8) */
/* WARNING: Removing unreachable block (ram,0x00106098) */
/* WARNING: Removing unreachable block (ram,0x00106006) */
/* WARNING: Removing unreachable block (ram,0x001061b3) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * get_root_dev_ino(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  undefined8 uStack168;
  undefined8 uStack160;
  long lStack16;
  
  puVar3 = &UNK_0010b956;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = func_0x00101a90(1,&UNK_0010b956,&uStack168);
  if (iVar1 == 0) {
    *param_1 = uStack160;
    param_1[1] = uStack168;
  }
  else {
    param_1 = (undefined8 *)0x0;
  }
  if (lStack16 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101ab0();
    if (puVar3 == (undefined *)0x0) {
      func_0x00101d60();
      func_0x00101a60(0,&UNK_0010be3b,5);
    }
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)PTR___fprintf_chk_0030efa8)();
    return (undefined8 *)uVar2;
  }
  return param_1;
}

