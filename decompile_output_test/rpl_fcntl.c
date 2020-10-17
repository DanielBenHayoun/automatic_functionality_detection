
/* WARNING: Removing unreachable block (ram,0x0010514a) */
/* WARNING: Removing unreachable block (ram,0x00105154) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x00105071 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong rpl_fcntl(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  ulong uStack56;
  
  uVar8 = param_1 & 0xffffffff;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = (int)param_2;
  if (iVar4 == 0) goto code_r0x00105132;
  if (iVar4 == 0x406) {
    if (have_dupfd_cloexec_3326 < 0) {
      uVar3 = func_0x00101590(param_1,0,param_3 & 0xffffffff);
      uVar7 = (ulong)uVar3;
      if (((int)uVar3 < 0) || (have_dupfd_cloexec_3326 != -1)) goto code_r0x00104fc0;
    }
    else {
      uVar3 = func_0x00101590(param_1,0x406,param_3 & 0xffffffff);
      uVar7 = (ulong)uVar3;
      if ((-1 < (int)uVar3) || (piVar6 = (int *)func_0x00101550(), *piVar6 != 0x16)) {
        have_dupfd_cloexec_3326 = 1;
        goto code_r0x00104fc0;
      }
      uVar3 = func_0x00101590(uVar8,0,param_3 & 0xffffffff);
      uVar7 = (ulong)uVar3;
      if ((int)uVar3 < 0) goto code_r0x00104fc0;
      have_dupfd_cloexec_3326 = -1;
    }
    uVar3 = func_0x00101590(uVar7,1);
    if (((int)uVar3 < 0) || (iVar4 = func_0x00101590(uVar7,2,(ulong)(uVar3 | 1)), iVar4 == -1)) {
      puVar5 = (undefined4 *)func_0x00101550();
      uVar1 = *puVar5;
      func_0x00101680(uVar7);
      uVar7 = 0xffffffff;
      *puVar5 = uVar1;
    }
    goto code_r0x00104fc0;
  }
  if (iVar4 == 0xb) goto code_r0x00104fb0;
  if (iVar4 < 0xc) {
    if (iVar4 != 4) {
      if (iVar4 < 5) {
        if (iVar4 != 2) {
          if ((iVar4 < 3) && (iVar4 != 1)) {
code_r0x00105019:
            uVar3 = func_0x00101590(uVar8,param_2,uStack56);
            uVar7 = (ulong)uVar3;
            goto code_r0x00104fc0;
          }
code_r0x00104fb0:
          uVar3 = func_0x00101590(uVar8);
          uVar7 = (ulong)uVar3;
          goto code_r0x00104fc0;
        }
      }
      else {
        if (iVar4 == 9) goto code_r0x00104fb0;
        if ((iVar4 < 10) && (iVar4 != 8)) goto code_r0x00105019;
      }
    }
  }
  else {
    if (iVar4 < 0x408) {
      if (iVar4 < 0x406) {
        if (iVar4 == 0x401) goto code_r0x00104fb0;
        if ((iVar4 != 0x402) && (iVar4 != 0x400)) goto code_r0x00105019;
      }
    }
    else {
      if (iVar4 != 0x409) {
        if ((0x408 < iVar4) && (iVar4 != 0x40a)) goto code_r0x00105019;
        goto code_r0x00104fb0;
      }
    }
  }
  uVar3 = func_0x00101590(uVar8,param_2,uStack56 & 0xffffffff);
  uVar7 = (ulong)uVar3;
code_r0x00104fc0:
  while (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101610();
code_r0x00105132:
    uVar3 = func_0x00101590();
    uVar7 = (ulong)uVar3;
  }
  return uVar7;
}

