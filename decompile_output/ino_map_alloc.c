
long * ino_map_alloc(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)func_0x00102780(0x18);
  plVar3 = plVar1;
  if (plVar1 != (long *)0x0) {
    lVar2 = hash_initialize(0x3fd,0,ino_hash,ino_compare,PTR_free_00327fc8);
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      plVar3 = (long *)0x0;
      func_0x00102a10(plVar1);
    }
    else {
      plVar1[1] = param_1;
      plVar1[2] = 0;
    }
  }
  return plVar3;
}

