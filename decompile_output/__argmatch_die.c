
void __argmatch_die(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined *puStack168;
  undefined *puStack160;
  undefined *apuStack152 [4];
  undefined *puStack120;
  undefined *puStack112;
  undefined *puStack104;
  undefined *puStack96;
  undefined *puStack88;
  undefined *puStack80;
  undefined8 uStack72;
  undefined8 uStack64;
  undefined8 uStack48;
  
  puVar7 = program_name;
  uStack48 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uVar2 = func_0x001033e0(0,&UNK_00117e98,5);
  func_0x00103800(stderr,1,uVar2,puVar7);
  do {
    func_0x001037e0(1);
    uVar2 = func_0x001033e0(0,&UNK_00117ec0,extraout_RDX);
    func_0x00103710(1,uVar2,puVar7);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00117ee8,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00117f78,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00117fc8,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_001180d8,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118178,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_001182e8,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118458,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118600,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118640,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118738,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118788,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118820,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_001189c8,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118a60,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118bc8,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118c60,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118dc8,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00118ef8,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00119148,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00119210,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00119418,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00119468,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_001194f8,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00119670,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_001197e0,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00119810,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00119848,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00119920,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00119a98,5);
    func_0x00103570(uVar3,uVar2);
    uVar2 = stdout;
    uVar3 = func_0x001033e0(0,&UNK_00119bb8,5);
    func_0x00103570(uVar3,uVar2);
    puVar7 = &UNK_001179cf;
    if ((ls_mode != 1) && (puVar7 = &UNK_0011794b, ls_mode == 2)) {
      puVar7 = &UNK_0011794c;
    }
    uStack72 = 0;
    uStack64 = 0;
    puStack160 = &UNK_00117950;
    puStack120 = &UNK_0011798f;
    puStack168 = &UNK_00117db2;
    apuStack152[0] = &UNK_001179c8;
    puStack104 = &UNK_00117999;
    apuStack152[1] = &UNK_00117960;
    puStack88 = &UNK_001179a3;
    apuStack152[2] = &UNK_00117976;
    apuStack152[3] = &UNK_00117980;
    puStack112 = &UNK_00117980;
    puStack96 = &UNK_00117980;
    puStack80 = &UNK_00117980;
    ppuVar5 = &puStack168;
    do {
      iVar1 = func_0x00103590(puVar7);
      if (iVar1 == 0) break;
      ppuVar5 = (undefined **)((long *)ppuVar5 + 2);
    } while (*ppuVar5 != (undefined *)0x0);
    puVar6 = (undefined *)((long *)ppuVar5)[1];
    if (puVar6 == (undefined *)0x0) {
      uVar2 = func_0x001033e0(0,&UNK_001179ad,5);
      func_0x00103710(1,uVar2,&UNK_001179c4,&UNK_00119c50);
      lVar4 = func_0x00103700(5,0);
      if ((lVar4 != 0) &&
         (iVar1 = func_0x001032b0(lVar4,&UNK_001179d2,3), puVar6 = puVar7, iVar1 != 0))
      goto code_r0x0010c019;
      uVar2 = func_0x001033e0(0,&UNK_001179d6,5);
      puVar8 = &UNK_0011796a;
      func_0x00103710(1,uVar2,&UNK_00119c50,puVar7);
    }
    else {
      uVar2 = func_0x001033e0(0,&UNK_001179ad,5);
      func_0x00103710(1,uVar2,&UNK_001179c4,&UNK_00119c50);
      lVar4 = func_0x00103700(5,0);
      if ((lVar4 != 0) && (iVar1 = func_0x001032b0(lVar4,&UNK_001179d2,3), iVar1 != 0)) {
code_r0x0010c019:
        uVar2 = stdout;
        uVar3 = func_0x001033e0(0,&UNK_00119c78,5);
        func_0x00103570(uVar3,uVar2);
      }
      uVar2 = func_0x001033e0(0,&UNK_001179d6,5);
      func_0x00103710(1,uVar2,&UNK_00119c50,puVar7);
      bVar9 = puVar7 == puVar6;
      puVar8 = &UNK_001178a1;
      puVar7 = puVar6;
      if (bVar9) {
        puVar8 = &UNK_0011796a;
      }
    }
    uVar2 = func_0x001033e0(0,&UNK_00119cc0,5);
    func_0x00103710(1,uVar2,puVar7,puVar8);
  } while( true );
}

