
void init_header(byte *param_1,uint param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  long in_FS_OFFSET;
  bool bVar12;
  bool bVar13;
  long lStack312;
  ulong uStack304;
  undefined auStack296 [64];
  undefined auStack232 [88];
  long lStack144;
  ulong uStack136;
  undefined auStack88 [24];
  long lStack64;
  
  lVar7 = 2;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  bVar12 = false;
  bVar13 = true;
  pbVar9 = param_1;
  pbVar11 = &UNK_0010e539;
  do {
    if (lVar7 == 0) break;
    lVar7 = lVar7 + -1;
    bVar12 = *pbVar9 < *pbVar11;
    bVar13 = *pbVar9 == *pbVar11;
    pbVar9 = pbVar9 + 1;
    pbVar11 = pbVar11 + 1;
  } while (bVar13);
  if ((!bVar12 && !bVar13) == bVar12) {
    param_2 = 0xffffffff;
    uVar3 = 0xffffffff;
    if (timespec_7349._0_8_ == 0) {
code_r0x00102eac:
      param_2 = uVar3;
      gettime(timespec_7349);
    }
  }
  else {
    if ((-1 < (int)param_2) && (iVar8 = func_0x00101e50(1,(ulong)param_2,auStack232), iVar8 == 0)) {
      uStack304 = uStack136;
      lStack312 = lStack144;
      goto code_r0x00102da0;
    }
    uVar3 = param_2;
    if (timespec_7349._0_8_ == 0) goto code_r0x00102eac;
  }
  lStack312 = timespec_7349._0_8_;
  uStack304 = timespec_7349._8_8_;
code_r0x00102da0:
  uVar2 = uStack304;
  lVar7 = localtime_rz(localtz,&lStack312,auStack296);
  if (lVar7 == 0) {
    uVar5 = xmalloc(0x21);
    uVar6 = imaxtostr(lStack312,auStack88);
    func_0x00101fa0(uVar5,1,0x21,&UNK_0010be8f,uVar6,uVar2 & 0xffffffff);
  }
  else {
    lVar7 = nstrftime(0,0xffffffffffffffff,date_format,auStack296,localtz,uVar2 & 0xffffffff);
    uVar5 = xmalloc(lVar7 + 1);
    nstrftime(uVar5,lVar7 + 1,date_format,auStack296,localtz,uVar2 & 0xffffffff);
  }
  func_0x00101b90(date_text);
  iVar8 = chars_per_line;
  file_text = custom_header;
  if ((custom_header == (byte *)0x0) && (file_text = &UNK_0010bee5, -1 < (int)param_2)) {
    file_text = param_1;
  }
  date_text = uVar5;
  iVar4 = gnu_mbswidth(uVar5,0);
  iVar10 = (int)file_text;
  header_width_available = gnu_mbswidth(file_text,0);
  header_width_available = (iVar8 - iVar4) - header_width_available;
  if (lStack64 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101cb0();
    iVar8 = output_position;
    if (tabify_output != '\0') {
      spaces_not_printed = iVar10 - output_position;
      return;
    }
    do {
      iVar8 = iVar8 + 1;
      if (iVar10 < iVar8) {
        output_position = iVar10;
        return;
      }
      while (puVar1 = *(undefined **)(stdout + 0x28), puVar1 < *(undefined **)(stdout + 0x30)) {
        iVar8 = iVar8 + 1;
        *(undefined **)(stdout + 0x28) = puVar1 + 1;
        *puVar1 = 0x20;
        if (iVar10 < iVar8) {
          output_position = iVar10;
          return;
        }
      }
      func_0x00101cf0(stdout,0x20);
    } while( true );
  }
  return;
}

