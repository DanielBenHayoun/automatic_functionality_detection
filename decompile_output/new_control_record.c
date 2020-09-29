
void new_control_record(void)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (control_used == control_allocated_7351) {
    uVar4 = control_used;
    if (controls == 0) {
      if (control_used == 0) {
        uVar4 = 1;
      }
      bVar1 = false;
      lVar3 = SUB168(ZEXT816(0x60) * ZEXT816(uVar4),0);
      if (SUB168(ZEXT816(0x60) * ZEXT816(uVar4) >> 0x40,0) != 0) goto code_r0x00103922;
      goto code_r0x00103913;
    }
    if (control_used < 0xe38e38e38e38e3) {
      uVar4 = control_used + 1 + (control_used >> 1);
    }
    else {
      do {
        lVar3 = xalloc_die();
code_r0x00103922:
        bVar1 = true;
code_r0x00103913:
      } while ((lVar3 < 0) || (bVar1));
    }
    control_allocated_7351 = uVar4;
    controls = xrealloc();
  }
  puVar2 = (undefined8 *)(control_used * 0x60 + controls);
  control_used = control_used + 1;
  *(undefined *)((long)puVar2 + 0x1e) = 0;
  puVar2[2] = 0;
  *(undefined *)((long)puVar2 + 0x1c) = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  return;
}

