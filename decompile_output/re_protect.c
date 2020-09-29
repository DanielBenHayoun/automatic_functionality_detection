
ulong re_protect(undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_RDX;
  byte **ppbVar11;
  undefined *puVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte *apbStack296 [18];
  long lStack152;
  undefined auStack144 [8];
  ulong uStack136;
  undefined8 *apuStack128 [2];
  ulong uStack112;
  undefined8 uStack104;
  undefined8 uStack96;
  undefined8 uStack88;
  undefined8 uStack80;
  long lStack64;
  
  bVar20 = 0;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  apuStack128[0] = (undefined8 *)&UNK_00103ff1;
  lVar6 = func_0x00102900();
  lVar3 = -(lVar6 + 0x1fU & 0xfffffffffffffff0);
  uVar14 = (long)apuStack128 + lVar3 + 0x10;
  *(undefined8 **)((long)apuStack128 + lVar3) = 0x104011;
  uVar7 = func_0x00102b60(uVar14,param_1,lVar6 + 1);
  uStack112 = uVar7 + param_2;
  if (param_3 != 0) {
    do {
      cVar1 = *(char *)(param_4 + 0x1f);
      *(undefined *)(uVar7 + *(long *)(param_3 + 0x98)) = 0;
      if (cVar1 != '\0') {
        uStack104 = *(undefined8 *)(param_3 + 0x48);
        uStack96 = *(undefined8 *)(param_3 + 0x50);
        uStack88 = *(undefined8 *)(param_3 + 0x58);
        uStack80 = *(undefined8 *)(param_3 + 0x60);
        *(undefined8 **)((long)apuStack128 + lVar3) = 0x1040b0;
        uVar14 = uVar7;
        iVar4 = utimens(uVar7,apuStack128 + 3);
        if (iVar4 != 0) {
          uVar17 = 0;
          *(undefined8 **)((long)apuStack128 + lVar3) = 0x1040c8;
          uVar7 = quotearg_style(4,uVar7);
          *(undefined8 **)((long)apuStack128 + lVar3) = 0x1040de;
          param_3 = func_0x001028e0(0,&UNK_001130d8,5);
          *(undefined8 **)((long)apuStack128 + lVar3) = 0x1040e6;
          puVar8 = (uint *)func_0x00102770();
          uVar5 = *puVar8;
          uVar15 = 0;
          *(undefined8 **)((long)apuStack128 + lVar3) = 0x1040f7;
          func_0x00102cb0(0,(ulong)uVar5,param_3,uVar7);
          goto code_r0x001041d6;
        }
      }
      if (*(char *)(param_4 + 0x1d) != '\0') {
        uVar5 = *(uint *)(param_3 + 0x20);
        uVar2 = *(uint *)(param_3 + 0x1c);
        *(undefined8 **)((long)apuStack128 + lVar3) = 0x10410e;
        uVar14 = uVar7;
        iVar4 = func_0x00102c00(uVar7,(ulong)uVar2,(ulong)uVar5);
        if (iVar4 == 0) goto code_r0x0010403b;
        *(undefined8 **)((long)apuStack128 + lVar3) = 0x10411e;
        uVar5 = chown_failure_ok(param_4);
        uVar17 = (ulong)uVar5;
        if ((char)uVar5 != '\0') {
          uVar5 = *(uint *)(param_3 + 0x20);
          *(undefined8 **)((long)apuStack128 + lVar3) = 0x104139;
          uVar14 = uVar7;
          func_0x00102c00(uVar7,0xffffffff,(ulong)uVar5);
          cVar1 = *(char *)(param_4 + 0x1e);
          uVar15 = uStack112;
          goto joined_r0x00104141;
        }
        *(undefined8 **)((long)apuStack128 + lVar3) = 0x104204;
        uVar7 = quotearg_style(4,uVar7);
        puVar12 = &UNK_001130f8;
code_r0x001041a7:
        *(undefined8 **)((long)apuStack128 + lVar3) = 0x1041ae;
        param_3 = func_0x001028e0(0,puVar12,5);
        *(undefined8 **)((long)apuStack128 + lVar3) = 0x1041b6;
        puVar8 = (uint *)func_0x00102770();
        uVar5 = *puVar8;
        uVar15 = 0;
        *(undefined8 **)((long)apuStack128 + lVar3) = 0x1041c7;
        func_0x00102cb0(0,(ulong)uVar5,param_3,uVar7);
        goto code_r0x001041d6;
      }
code_r0x0010403b:
      cVar1 = *(char *)(param_4 + 0x1e);
      uVar15 = uStack112;
joined_r0x00104141:
      uStack112 = uVar15;
      if (cVar1 == '\0') {
        uVar17 = 0;
        if (*(char *)(param_3 + 0x90) != '\0') {
          *(undefined8 **)((long)apuStack128 + lVar3) = 0x104183;
          uVar14 = uVar7;
          iVar4 = func_0x00102c90();
          if (iVar4 != 0) {
            *(undefined8 **)((long)apuStack128 + lVar3) = 0x104198;
            uVar7 = quotearg_style(4,uVar7);
            puVar12 = &UNK_00113120;
            goto code_r0x001041a7;
          }
        }
      }
      else {
        uVar5 = *(uint *)(param_3 + 0x18);
        *(undefined8 **)((long)apuStack128 + lVar3) = 0x104167;
        iVar4 = copy_acl(uVar15,0xffffffff,uVar7,0xffffffff,(ulong)uVar5);
        uVar14 = uVar15;
        if (iVar4 != 0) {
          uVar17 = 0;
          goto code_r0x001041d6;
        }
      }
      *(undefined *)(uVar7 + *(long *)(param_3 + 0x98)) = 0x2f;
      param_3 = *(long *)(param_3 + 0xa0);
    } while (param_3 != 0);
  }
  uVar17 = 1;
  uVar15 = uVar14;
code_r0x001041d6:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
  *(undefined8 **)((long)apuStack128 + lVar3) = 0x10421a;
  func_0x00102930();
  puVar12 = program_name;
  *(long *)((long)apuStack128 + lVar3) = param_4;
  *(ulong *)((long)&uStack136 + lVar3) = uVar7;
  uVar10 = 5;
  *(undefined **)(auStack144 + lVar3) = &stack0xfffffffffffffff8;
  *(long *)((long)&lStack152 + lVar3) = param_3;
  *(undefined8 *)((long)apbStack296 + lVar3 + 0x80) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if ((int)uVar15 == 0) goto code_r0x0010427d;
  *(byte **)((long)apbStack296 + lVar3) = 0x10425d;
  uVar10 = func_0x001028e0(0,&UNK_00113148,5);
  *(byte **)((long)apbStack296 + lVar3) = 0x104276;
  func_0x00102db0(stderr,1,uVar10,puVar12);
  do {
    *(byte **)((long)apbStack296 + lVar3) = 0x10427d;
    func_0x00102d90(uVar15 & 0xffffffff);
    uVar10 = extraout_RDX;
code_r0x0010427d:
    *(byte **)((long)apbStack296 + lVar3) = 0x10428b;
    uVar10 = func_0x001028e0(0,&UNK_00113170,uVar10);
    *(byte **)((long)apbStack296 + lVar3) = 0x1042a3;
    func_0x00102c60(1,uVar10,puVar12,puVar12,puVar12);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x1042bd;
    uVar9 = func_0x001028e0(0,&UNK_001131f0,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x1042c8;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x1042e2;
    uVar9 = func_0x001028e0(0,&UNK_00113230,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x1042ed;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x104307;
    uVar9 = func_0x001028e0(0,&UNK_00113280,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x104312;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x10432c;
    uVar9 = func_0x001028e0(0,&UNK_00113440,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x104337;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x104351;
    uVar9 = func_0x001028e0(0,&UNK_001135f0,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x10435c;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x104376;
    uVar9 = func_0x001028e0(0,&UNK_00113680,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x104381;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x10439b;
    uVar9 = func_0x001028e0(0,&UNK_00113750,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x1043a6;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x1043c0;
    uVar9 = func_0x001028e0(0,&UNK_001138a8,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x1043cb;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x1043e5;
    uVar9 = func_0x001028e0(0,&UNK_00113940,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x1043f0;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x10440a;
    uVar9 = func_0x001028e0(0,&UNK_00113a60,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x104415;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x10442f;
    uVar9 = func_0x001028e0(0,&UNK_00113b28,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x10443a;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x104454;
    uVar9 = func_0x001028e0(0,&UNK_00113c38,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x10445f;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x104479;
    uVar9 = func_0x001028e0(0,&UNK_00113d78,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x104484;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x10449e;
    uVar9 = func_0x001028e0(0,&UNK_00113e90,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x1044a9;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x1044c3;
    uVar9 = func_0x001028e0(0,&UNK_00113ec0,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x1044ce;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x1044e8;
    uVar9 = func_0x001028e0(0,&UNK_00113ef8,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x1044f3;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x10450d;
    uVar9 = func_0x001028e0(0,&UNK_00114060,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x104518;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x104532;
    uVar9 = func_0x001028e0(0,&UNK_00114180,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x10453d;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x104557;
    uVar9 = func_0x001028e0(0,&UNK_00114260,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x104562;
    func_0x00102ab0(uVar9,uVar10);
    uVar10 = stdout;
    *(byte **)((long)apbStack296 + lVar3) = 0x10457c;
    uVar9 = func_0x001028e0(0,&UNK_00114340,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x10458e;
    func_0x00102ab0(uVar9,uVar10);
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x68) = 0;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x70) = 0;
    *(byte **)((long)(apbStack296 + 1) + lVar3) = 0x112948;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x38) = 0x112989;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x10) = 0x11294a;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x48) = 0x112993;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x18) = 0x1129c2;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x58) = 0x11299d;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x20) = 0x11295a;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x28) = 0x112970;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x30) = 0x11297a;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x40) = 0x11297a;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x50) = 0x11297a;
    *(undefined8 *)((long)apbStack296 + lVar3 + 0x60) = 0x11297a;
    ppbVar11 = (byte **)((long)(apbStack296 + 1) + lVar3);
    do {
      ppbVar11 = ppbVar11;
      ppbVar11 = ppbVar11 + 2;
      pbVar16 = *ppbVar11;
      bVar18 = false;
      bVar19 = pbVar16 == (byte *)0x0;
      if (bVar19) break;
      lVar6 = 3;
      pbVar13 = &UNK_00112945;
      do {
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        bVar18 = *pbVar13 < *pbVar16;
        bVar19 = *pbVar13 == *pbVar16;
        pbVar13 = pbVar13 + (ulong)bVar20 * -2 + 1;
        pbVar16 = pbVar16 + (ulong)bVar20 * -2 + 1;
      } while (bVar19);
    } while ((!bVar18 && !bVar19) != bVar18);
    pbVar16 = ppbVar11[3];
    if (pbVar16 == (byte *)0x0) {
      *(byte **)((long)apbStack296 + lVar3) = 0x104720;
      uVar10 = func_0x001028e0(0,&UNK_001129a7,5);
      *(byte **)((long)apbStack296 + lVar3) = 0x10473d;
      func_0x00102c60(1,uVar10,&UNK_001129be,&UNK_001143e8);
      *(byte **)((long)apbStack296 + lVar3) = 0x104749;
      lVar6 = func_0x00102c50(5,0);
      if (lVar6 != 0) {
        *(byte **)((long)apbStack296 + lVar3) = 0x104762;
        iVar4 = func_0x00102790(lVar6,&UNK_001129cc,3);
        if (iVar4 != 0) {
          pbVar16 = &UNK_00112945;
          goto code_r0x001047b0;
        }
      }
      pbVar16 = &UNK_00112945;
      puVar12 = &UNK_00112964;
      *(byte **)((long)apbStack296 + lVar3) = 0x104787;
      uVar10 = func_0x001028e0(0,&UNK_001129d0,5);
      *(byte **)((long)apbStack296 + lVar3) = 0x1047a4;
      func_0x00102c60(1,uVar10,&UNK_001143e8,&UNK_00112945);
    }
    else {
      *(byte **)((long)apbStack296 + lVar3) = 0x10465f;
      uVar10 = func_0x001028e0(0,&UNK_001129a7,5);
      *(byte **)((long)apbStack296 + lVar3) = 0x10467c;
      func_0x00102c60(1,uVar10,&UNK_001129be,&UNK_001143e8);
      *(byte **)((long)apbStack296 + lVar3) = 0x104688;
      lVar6 = func_0x00102c50(5,0);
      if (lVar6 != 0) {
        *(byte **)((long)apbStack296 + lVar3) = 0x1046a1;
        iVar4 = func_0x00102790(lVar6,&UNK_001129cc,3);
        if (iVar4 != 0) {
code_r0x001047b0:
          uVar10 = stdout;
          *(byte **)((long)apbStack296 + lVar3) = 0x1047ca;
          uVar9 = func_0x001028e0(0,&UNK_00114410,5);
          *(byte **)((long)apbStack296 + lVar3) = 0x1047d5;
          func_0x00102ab0(uVar9,uVar10);
        }
      }
      *(byte **)((long)apbStack296 + lVar3) = 0x1046bc;
      uVar10 = func_0x001028e0(0,&UNK_001129d0,5);
      *(byte **)((long)apbStack296 + lVar3) = 0x1046d9;
      func_0x00102c60(1,uVar10,&UNK_001143e8,&UNK_00112945);
      puVar12 = &UNK_00115046;
      if (pbVar16 == &UNK_00112945) {
        puVar12 = &UNK_00112964;
      }
    }
    *(byte **)((long)apbStack296 + lVar3) = 0x104701;
    uVar10 = func_0x001028e0(0,&UNK_00114458,5);
    *(byte **)((long)apbStack296 + lVar3) = 0x104716;
    func_0x00102c60(1,uVar10,pbVar16,puVar12);
  } while( true );
}

