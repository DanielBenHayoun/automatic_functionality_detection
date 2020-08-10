
long realpath_canon(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = canonicalize_filename_mode();
  lVar2 = lVar1;
  if ((logical != '\0') && (lVar1 != 0)) {
    lVar2 = canonicalize_filename_mode(lVar1,(ulong)((uint)param_2 & 0xfffffffb));
    func_0x001014b0(lVar1);
  }
  return lVar2;
}

