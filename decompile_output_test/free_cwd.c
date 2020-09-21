
void free_cwd(int *param_1)

{
  if (-1 < *param_1) {
    func_0x00101a30();
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_0030dfc0)(*(undefined8 *)(param_1 + 2));
  return;
}

