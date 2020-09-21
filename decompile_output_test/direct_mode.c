
/* WARNING: Removing unreachable block (ram,0x001090c0) */
/* WARNING: Removing unreachable block (ram,0x001090c9) */
/* WARNING: Removing unreachable block (ram,0x001090cb) */
/* WARNING: Removing unreachable block (ram,0x00109000) */
/* WARNING: Removing unreachable block (ram,0x00109006) */
/* WARNING: Removing unreachable block (ram,0x0010900f) */
/* WARNING: Removing unreachable block (ram,0x00109016) */
/* WARNING: Removing unreachable block (ram,0x00109011) */
/* WARNING: Removing unreachable block (ram,0x001090ae) */
/* WARNING: Removing unreachable block (ram,0x001090b6) */
/* WARNING: Removing unreachable block (ram,0x001090a0) */
/* WARNING: Removing unreachable block (ram,0x001090a8) */
/* WARNING: Removing unreachable block (ram,0x00109020) */
/* WARNING: Removing unreachable block (ram,0x00109050) */
/* WARNING: Removing unreachable block (ram,0x00109058) */
/* WARNING: Removing unreachable block (ram,0x00109060) */
/* WARNING: Removing unreachable block (ram,0x00109068) */
/* WARNING: Removing unreachable block (ram,0x00109070) */
/* WARNING: Removing unreachable block (ram,0x00109078) */
/* WARNING: Removing unreachable block (ram,0x001091ba) */
/* WARNING: Removing unreachable block (ram,0x00109084) */
/* WARNING: Removing unreachable block (ram,0x00109089) */
/* WARNING: Removing unreachable block (ram,0x00108fa9) */
/* WARNING: Removing unreachable block (ram,0x001090f3) */
/* WARNING: Removing unreachable block (ram,0x00109106) */
/* WARNING: Removing unreachable block (ram,0x00108fc9) */
/* WARNING: Removing unreachable block (ram,0x00109168) */
/* WARNING: Removing unreachable block (ram,0x00109176) */
/* WARNING: Removing unreachable block (ram,0x0010918e) */
/* WARNING: Removing unreachable block (ram,0x00109113) */
/* WARNING: Removing unreachable block (ram,0x00109125) */
/* WARNING: Removing unreachable block (ram,0x00109141) */
/* WARNING: Removing unreachable block (ram,0x00108fdf) */
/* WARNING: Removing unreachable block (ram,0x001091c4) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffc8 : 0x001090e1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong direct_mode(ulong param_1,char param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint uStack56;
  
  uVar3 = rpl_fcntl(param_1,3);
  uVar2 = (uint)uVar3;
  if (0 < (int)uVar2) {
    uVar4 = uVar2 & 0xffffbfff;
    if (param_2 != '\0') {
      uVar4 = uVar2 | 0x4000;
    }
    if (uVar4 != uVar2) {
      lVar1 = *(long *)(in_FS_OFFSET + 0x28);
      uVar2 = func_0x00101d00(param_1 & 0xffffffff,4,(ulong)uStack56);
      while (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
        func_0x00101da0();
        uVar2 = func_0x00101d00();
      }
      return (ulong)uVar2;
    }
  }
  return uVar3;
}

