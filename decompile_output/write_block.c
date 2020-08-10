
void write_block(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  
  if ((((abbreviate_duplicate_blocks != '\0') && (first_7524 == '\0')) &&
      (bytes_per_block == param_2)) && (iVar4 = func_0x001019a0(param_3,param_4), iVar4 == 0)) {
    if (prev_pair_equal_7525 != '\0') {
      first_7524 = 0;
      return;
    }
    func_0x00101830(&UNK_0010ad87);
    first_7524 = 0;
    prev_pair_equal_7525 = 1;
    return;
  }
  prev_pair_equal_7525 = 0;
  if (n_specs != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      iVar4 = *(int *)(width_bytes + (ulong)*(uint *)(spec + 4 + lVar9) * 4);
      uVar7 = bytes_per_block - param_2;
      iVar3 = (int)(bytes_per_block / (ulong)(long)iVar4);
      if (uVar10 == 0) {
        (*format_address)(param_1,0);
      }
      else {
        func_0x00101a70(1,&UNK_0010acdc,(ulong)address_pad_len,&UNK_0010cdc1);
      }
      iVar4 = (int)(uVar7 / (ulong)(long)iVar4);
      lVar5 = spec + lVar9;
      (**(code **)(lVar5 + 8))
                ((long)iVar3,(long)iVar4,param_4,lVar5 + 0x10,(ulong)*(uint *)(lVar5 + 0x1c),
                 (ulong)*(uint *)(lVar5 + 0x20));
      lVar5 = spec + lVar9;
      if (*(char *)(lVar5 + 0x18) != '\0') {
        func_0x00101a70(1,&UNK_0010acdc,
                        (ulong)(uint)((*(int *)(lVar5 + 0x20) * iVar4) / iVar3 +
                                     iVar4 * *(int *)(lVar5 + 0x1c)),&UNK_0010cdc1);
        func_0x00101a40(&UNK_0010ad89,1,3);
        if (param_2 != 0) {
          plVar6 = (long *)func_0x00101b40();
          pbVar8 = param_4;
          do {
            pbVar8 = pbVar8 + 1;
            bVar2 = *pbVar8;
            uVar7 = (ulong)bVar2;
            if ((*(byte *)(*plVar6 + 1 + (ulong)bVar2 * 2) & 0x40) == 0) {
              uVar7 = 0x2e;
              bVar2 = 0x2e;
            }
            pbVar8 = *(byte **)(stdout + 0x28);
            if (pbVar8 < *(byte **)(stdout + 0x30)) {
              *(byte **)(stdout + 0x28) = pbVar8 + 1;
              *pbVar8 = bVar2;
            }
            else {
              func_0x00101920(stdout,uVar7);
            }
            pbVar8 = pbVar8;
          } while (pbVar8 != param_4 + param_2);
        }
        puVar1 = *(undefined **)(stdout + 0x28);
        if (puVar1 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar1 + 1;
          *puVar1 = 0x3c;
        }
        else {
          func_0x00101920(stdout,0x3c);
        }
      }
      puVar1 = *(undefined **)(stdout + 0x28);
      if (puVar1 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar1 + 1;
        *puVar1 = 10;
      }
      else {
        func_0x00101920(stdout,10);
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x28;
    } while (uVar10 < n_specs);
  }
  first_7524 = 0;
  return;
}

