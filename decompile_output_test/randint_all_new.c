
long * randint_all_new(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = randread_new();
  if (lVar1 != 0) {
    plVar2 = (long *)xmalloc(0x18);
    *plVar2 = lVar1;
    plVar2[2] = 0;
    plVar2[1] = 0;
    return plVar2;
  }
  return (long *)0;
}

