
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __do_global_dtors_aux(void)

{
  if (completed_7697 == '\0') {
    if (PTR___cxa_finalize_00306fe0 != (undefined *)0x0) {
      func_0x00101460(___dso_handle);
    }
    deregister_tm_clones();
    completed_7697 = 1;
    return;
  }
  return;
}

