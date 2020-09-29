
void file_type(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x18) & 0xf000;
  if (uVar1 == 0x8000) {
    if (*(long *)(param_1 + 0x30) == 0) {
      puVar2 = &UNK_0010f380;
    }
    else {
      puVar2 = &UNK_0010f393;
    }
  }
  else {
    if (uVar1 == 0x4000) {
      puVar2 = &UNK_0010f28b;
    }
    else {
      if (uVar1 == 0xa000) {
        puVar2 = &UNK_0010f3a0;
      }
      else {
        if (uVar1 == 0x6000) {
          puVar2 = &UNK_0010f3ae;
        }
        else {
          if (uVar1 == 0x2000) {
            puVar2 = &UNK_0010f3c1;
          }
          else {
            if (uVar1 == 0x1000) {
              puVar2 = &UNK_0010f3d8;
            }
            else {
              if (uVar1 == 0xc000) {
                puVar2 = &UNK_0010f3dd;
              }
              else {
                puVar2 = &UNK_0010f3e4;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_dcgettext_00312dc0)(0,puVar2,5);
  return;
}

