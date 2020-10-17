
void try_link(undefined8 param_1,uint *param_2)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_linkat_0030ff18)
            ((ulong)*param_2,*(undefined8 *)(param_2 + 2),(ulong)param_2[4],param_1,
             (ulong)param_2[5]);
  return;
}

