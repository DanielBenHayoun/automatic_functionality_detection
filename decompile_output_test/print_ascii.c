
undefined8
print_ascii(undefined *param_1,undefined *param_2,byte *param_3,undefined8 param_4,int param_5,
           ulong param_6)

{
  byte bVar1;
  undefined auVar2 [16];
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long in_FS_OFFSET;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  undefined auStack68 [4];
  long lStack64;
  
  bVar16 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = param_1;
  if (param_2 < param_1) {
    iVar3 = (int)param_6;
    uVar10 = (long)(param_1 + -1) * (long)iVar3;
    pbVar12 = param_3;
    do {
      pbVar13 = pbVar12 + 1;
      bVar1 = *pbVar12;
      auVar2 = ZEXT816(uVar10);
      switch(bVar1) {
      case 0:
        puVar9 = &UNK_0010ad45;
        break;
      default:
        plVar4 = (long *)func_0x00101b40();
        puVar9 = auStack68;
        puVar7 = &UNK_0010ad3d;
        if ((*(byte *)(*plVar4 + 1 + (ulong)bVar1 * 2) & 0x40) == 0) {
          puVar7 = &UNK_0010ad40;
        }
        func_0x00101b50(puVar9,1,4,puVar7);
        break;
      case 7:
        puVar9 = &UNK_0010ad48;
        break;
      case 8:
        puVar9 = &UNK_0010ad4b;
        break;
      case 9:
        puVar9 = &UNK_0010ad57;
        break;
      case 10:
        puVar9 = &UNK_0010ad51;
        break;
      case 0xb:
        puVar9 = &UNK_0010ad5a;
        break;
      case 0xc:
        puVar9 = &UNK_0010ad4e;
        break;
      case 0xd:
        puVar9 = &UNK_0010ad54;
      }
      puVar7 = &UNK_0010acdc;
      uVar10 = uVar10 - (long)iVar3;
      xprintf(&UNK_0010acdc,
              (ulong)(uint)(((int)param_6 - SUB164(auVar2 / ZEXT816(param_1),0)) + param_5),puVar9);
      param_6 = SUB168(auVar2 / ZEXT816(param_1),0) & 0xffffffff;
      pbVar12 = pbVar13;
    } while (pbVar13 != param_3 + (long)(param_1 + -(long)param_2));
  }
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
  func_0x001018e0();
  uVar11 = 1;
  if (in_stream != (byte *)0x0) {
    bVar14 = false;
    bVar15 = (*in_stream & 0x20) == 0;
    if (bVar15) {
      lVar8 = 2;
      pbVar12 = *(byte **)(file_list + -8);
      pbVar13 = &UNK_0010d139;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar14 = *pbVar12 < *pbVar13;
        bVar15 = *pbVar12 == *pbVar13;
        pbVar12 = pbVar12 + (ulong)bVar16 * -2 + 1;
        pbVar13 = pbVar13 + (ulong)bVar16 * -2 + 1;
      } while (bVar15);
      if (((!bVar14 && !bVar15) == bVar14) || (iVar3 = rpl_fclose(in_stream), iVar3 == 0)) {
        uVar11 = 1;
      }
      else {
        uVar5 = quotearg_n_style_colon(0,3,input_filename);
        puVar6 = (uint *)func_0x001017f0();
        uVar11 = 0;
        func_0x00101aa0(0,(ulong)*puVar6,&UNK_0010c7e0,uVar5);
      }
    }
    else {
      uVar11 = quotearg_n_style_colon(0,3,input_filename);
      uVar5 = func_0x001018b0(0,&UNK_0010ad5d,5);
      bVar14 = false;
      bVar15 = true;
      func_0x00101aa0(0,(ulong)puVar7 & 0xffffffff,uVar5,uVar11);
      lVar8 = 2;
      pbVar12 = *(byte **)(file_list + -8);
      pbVar13 = &UNK_0010d139;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar14 = *pbVar12 < *pbVar13;
        bVar15 = *pbVar12 == *pbVar13;
        pbVar12 = pbVar12 + (ulong)bVar16 * -2 + 1;
        pbVar13 = pbVar13 + (ulong)bVar16 * -2 + 1;
      } while (bVar15);
      uVar11 = 0;
      if ((!bVar14 && !bVar15) != bVar14) {
        rpl_fclose(in_stream);
      }
    }
    in_stream = (byte *)0x0;
  }
  if ((*stdout & 0x20) != 0) {
    uVar11 = 0;
    uVar5 = func_0x001018b0(0,&UNK_0010ad6c,5);
    func_0x00101aa0(0,0,uVar5);
  }
  return uVar11;
}

