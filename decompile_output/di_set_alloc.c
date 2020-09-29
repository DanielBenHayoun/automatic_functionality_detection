
long * di_set_alloc(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)func_0x00102780(0x18);
  plVar3 = plVar1;
  if (plVar1 != (long *)0x0) {
    lVar2 = hash_initialize(0xb,0,di_ent_hash,di_ent_compare,di_ent_free);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      plVar3 = (long *)0x0;
      func_0x00102a10(plVar1);
    }
    else {
      plVar1[1] = 0;
      plVar1[2] = 0;
    }
  }
  return plVar3;
}

