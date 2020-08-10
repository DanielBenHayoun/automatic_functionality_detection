
void add_range_pair(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if (n_frp == n_frp_allocated) {
    uVar3 = n_frp;
    if (frp == 0) {
      if (n_frp == 0) {
        uVar3 = 8;
      }
      bVar1 = false;
      lVar2 = SUB168(ZEXT816(0x10) * ZEXT816(uVar3),0);
      if (SUB168(ZEXT816(0x10) * ZEXT816(uVar3) >> 0x40,0) != 0) goto code_r0x00102cd2;
      goto code_r0x00102cc3;
    }
    if (n_frp < 0x555555555555555) {
      uVar3 = n_frp + 1 + (n_frp >> 1);
    }
    else {
      do {
        lVar2 = xalloc_die();
code_r0x00102cd2:
        bVar1 = true;
code_r0x00102cc3:
      } while ((lVar2 < 0) || (bVar1));
    }
    n_frp_allocated = uVar3;
    frp = xrealloc();
  }
  puVar4 = (undefined8 *)(frp + n_frp * 0x10);
  *puVar4 = param_1;
  puVar4[1] = param_2;
  n_frp = n_frp + 1;
  return;
}

