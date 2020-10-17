
ulong vstrtoimax(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_RDX;
  byte **ppbVar6;
  undefined *puVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  long in_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  byte *pbStack208;
  undefined *puStack200;
  byte *apbStack192 [5];
  undefined *puStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined *puStack128;
  undefined *puStack120;
  undefined8 uStack112;
  undefined8 uStack104;
  undefined8 uStack88;
  char *pcStack72;
  ulong uStack64;
  undefined8 uStack40;
  long lStack32;
  
  bVar13 = 0;
  lStack32 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar9 = param_1;
  if (((*param_1 == '\"') || (*param_1 == '\'')) &&
     (uStack64 = (ulong)(byte)param_1[1], param_1[1] != 0)) {
    if ((param_1[2] != '\0') && (posixly_correct == '\0')) {
      uVar5 = func_0x001014f0(0,&UNK_00108448,5);
      pcVar9 = (char *)0x0;
      func_0x001016b0(0,0,uVar5,param_1 + 2);
    }
  }
  else {
    puVar2 = (undefined4 *)func_0x00101450();
    *puVar2 = 0;
    uStack64 = func_0x001014c0(param_1,&uStack40,0,0);
    verify_numeric(param_1,uStack40);
  }
  if (lStack32 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uStack64;
  }
  func_0x00101520();
  puVar7 = program_name;
  uVar5 = 5;
  uStack88 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  pcStack72 = param_1;
  if ((int)pcVar9 == 0) goto code_r0x00102cfd;
  uVar5 = func_0x001014f0(0,&UNK_00108498,5);
  func_0x00101700(stderr,1,uVar5,puVar7);
  do {
    func_0x001016e0((ulong)pcVar9 & 0xffffffff);
    uVar5 = extraout_RDX;
code_r0x00102cfd:
    uVar5 = func_0x001014f0(0,&UNK_001084c0,uVar5);
    func_0x00101680(1,uVar5,puVar7,puVar7);
    uVar5 = stdout;
    uVar3 = func_0x001014f0(0,&UNK_001084f8,5);
    func_0x001015c0(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x001014f0(0,&UNK_00108548,5);
    func_0x001015c0(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x001014f0(0,&UNK_00108578,5);
    func_0x001015c0(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x001014f0(0,&UNK_001085b0,5);
    func_0x001015c0(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x001014f0(0,&UNK_00108618,5);
    func_0x001015c0(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x001014f0(0,&UNK_00108700,5);
    func_0x001015c0(uVar3,uVar5);
    uVar5 = stdout;
    uVar3 = func_0x001014f0(0,&UNK_00108800,5);
    func_0x001015c0(uVar3,uVar5);
    uVar5 = func_0x001014f0(0,&UNK_001089c0,5);
    func_0x00101680(1,uVar5,&UNK_00108bae);
    uStack112 = 0;
    uStack104 = 0;
    pbStack208 = &UNK_00108bb5;
    apbStack192[4] = &UNK_00108bf6;
    puStack200 = &UNK_00108bb7;
    puStack144 = &UNK_00108c00;
    apbStack192[0] = &UNK_00108c2f;
    puStack128 = &UNK_00108c0a;
    apbStack192[1] = &UNK_00108bc7;
    apbStack192[2] = &UNK_00108bdd;
    apbStack192[3] = &UNK_00108be7;
    puStack152 = &UNK_00108be7;
    puStack136 = &UNK_00108be7;
    puStack120 = &UNK_00108be7;
    ppbVar6 = &pbStack208;
    do {
      ppbVar6 = ppbVar6;
      ppbVar6 = ppbVar6 + 2;
      pbVar10 = *ppbVar6;
      bVar11 = false;
      bVar12 = pbVar10 == (byte *)0x0;
      if (bVar12) break;
      lVar4 = 7;
      pbVar8 = &UNK_00108bae;
      do {
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        bVar11 = *pbVar8 < *pbVar10;
        bVar12 = *pbVar8 == *pbVar10;
        pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
        pbVar10 = pbVar10 + (ulong)bVar13 * -2 + 1;
      } while (bVar12);
    } while ((!bVar11 && !bVar12) != bVar11);
    pbVar10 = ppbVar6[3];
    if (pbVar10 == (byte *)0x0) {
      uVar5 = func_0x001014f0(0,&UNK_00108c14,5);
      func_0x00101680(1,uVar5,&UNK_00108c2b,&UNK_00108a80);
      lVar4 = func_0x00101670(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x00101460(lVar4,&UNK_00108c39,3);
        if (iVar1 != 0) {
          pbVar10 = &UNK_00108bae;
          goto code_r0x00103078;
        }
      }
      pbVar10 = &UNK_00108bae;
      puVar7 = &UNK_00108bd1;
      uVar5 = func_0x001014f0(0,&UNK_00108c3d,5);
      func_0x00101680(1,uVar5,&UNK_00108a80,&UNK_00108bae);
    }
    else {
      uVar5 = func_0x001014f0(0,&UNK_00108c14,5);
      func_0x00101680(1,uVar5,&UNK_00108c2b,&UNK_00108a80);
      lVar4 = func_0x00101670(5,0);
      if (lVar4 != 0) {
        iVar1 = func_0x00101460(lVar4,&UNK_00108c39,3);
        if (iVar1 != 0) {
code_r0x00103078:
          uVar5 = stdout;
          uVar3 = func_0x001014f0(0,&UNK_00108aa8,5);
          func_0x001015c0(uVar3,uVar5);
        }
      }
      uVar5 = func_0x001014f0(0,&UNK_00108c3d,5);
      func_0x00101680(1,uVar5,&UNK_00108a80,&UNK_00108bae);
      puVar7 = &UNK_00109512;
      if (pbVar10 == &UNK_00108bae) {
        puVar7 = &UNK_00108bd1;
      }
    }
    uVar5 = func_0x001014f0(0,&UNK_00108af0,5);
    func_0x00101680(1,uVar5,pbVar10,puVar7);
  } while( true );
}

