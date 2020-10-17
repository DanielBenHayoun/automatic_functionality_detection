
void free_cwd(int *param_1)

{
  if (-1 < *param_1) {
    func_0x00101f50();
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00312d38)(*(undefined8 *)(param_1 + 2));
  return;
}

