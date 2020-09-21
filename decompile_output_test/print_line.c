
/* WARNING: Possible PIC construction at 0x001021d7: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x001021dc) */
/* WARNING: Removing unreachable block (ram,0x001021f0) */

void print_line(uint param_1,undefined *param_2,undefined param_3,uint param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined3 *puVar9;
  char cVar10;
  long in_FS_OFFSET;
  undefined *puVar11;
  long lStack96;
  undefined auStack85 [8];
  undefined auStack77 [13];
  undefined8 uStack64;
  
  cVar10 = short_output;
  uStack64 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  mesg_7721._1_1_ = param_3;
  if (((include_idle == '\0') || (short_output != '\0')) ||
     (uVar2 = func_0x00101910(param_7), 6 < uVar2)) {
    auStack85[0] = 0;
  }
  else {
    func_0x00101bb0(auStack85,1,8,&UNK_00108469,param_7);
    cVar10 = short_output;
  }
  if ((cVar10 == '\0') && (uVar2 = func_0x00101910(param_8), uVar2 < 0xc)) {
    func_0x00101bb0(auStack77,1,0xd,&UNK_0010846f,param_8);
  }
  else {
    auStack77[0] = 0;
  }
  lVar7 = 1;
  if (include_exit != '\0') {
    uVar2 = func_0x00101910(param_10);
    lVar7 = uVar2 + 2;
    if (uVar2 < 0xc) {
      lVar7 = 0xe;
    }
  }
  puVar11 = &UNK_00102121;
  puVar3 = (undefined *)xmalloc(lVar7);
  if (include_exit == '\0') {
    *puVar3 = 0;
  }
  else {
    puVar11 = &UNK_00102282;
    func_0x00101bb0(puVar3,1,0xffffffffffffffff,&UNK_00108475,param_10);
  }
  puVar9 = (undefined3 *)&UNK_00109241;
  plVar8 = &lStack96;
  if (include_mesg != '\0') {
    puVar9 = &mesg_7721;
  }
  if (param_2 == (undefined *)0x0) {
    param_2 = &UNK_00108464;
  }
  iVar1 = rpl_asprintf(plVar8,&UNK_00108710,(ulong)param_1,param_2,puVar9,(ulong)param_4,param_5,
                       (ulong)time_format_width,param_6,auStack85,auStack77,param_9,puVar3,puVar11);
  lVar7 = lStack96;
  if (iVar1 == -1) {
    xalloc_die();
    func_0x00101920();
    uVar5 = func_0x001018f0(0,&UNK_0010847c,5);
    lVar7 = func_0x00101910(uVar5);
    uVar5 = xmalloc(lVar7 + 5);
    uVar6 = func_0x001018f0(0,&UNK_0010847c,5);
    func_0x00101880(uVar5,uVar6);
    func_0x001019b0(uVar5,plVar8 + 5,4);
    return;
  }
  lVar4 = func_0x00101910(lStack96);
  puVar3 = (undefined *)(lVar4 + lVar7);
  do {
    puVar11 = puVar3;
    puVar3 = puVar11 + -1;
  } while (puVar11[-1] == ' ');
  *puVar11 = 0;
  func_0x001018a0(lStack96);
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_0030adf0)(lStack96);
  return;
}

