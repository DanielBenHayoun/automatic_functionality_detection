
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __do_global_ctors_aux(void)

{
  code *pcVar1;
  code **ppcVar2;
  
  if (___CTOR_LIST__ != (code *)0xffffffffffffffff) {
    ppcVar2 = (code **)&__CTOR_LIST__;
    pcVar1 = ___CTOR_LIST__;
    do {
      ppcVar2 = ppcVar2 + -1;
      (*pcVar1)();
      pcVar1 = *ppcVar2;
    } while (pcVar1 != (code *)0xffffffffffffffff);
  }
  return;
}

