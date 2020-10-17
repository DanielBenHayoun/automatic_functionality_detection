
ulong skip(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint unaff_EBX;
  uint *unaff_RBP;
  undefined *unaff_R12;
  undefined *puVar8;
  uint *unaff_R13;
  ulong unaff_R14;
  uint *puVar9;
  long in_FS_OFFSET;
  undefined auStack8408 [24];
  uint uStack8384;
  uint *puStack8360;
  long lStack8352;
  uint auStack8264 [2050];
  long lStack64;
  
  puVar8 = auStack8408;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (uint *)0x0) {
    if (in_stream == (uint *)0x0) goto code_r0x0010480e;
    unaff_EBX = 1;
    unaff_RBP = auStack8264;
    unaff_R14 = 0x1fffffffffffffff;
    unaff_R13 = param_1;
code_r0x001047bf:
    param_1 = in_stream;
    uVar2 = func_0x001019e0(in_stream);
    iVar3 = func_0x00101a20(1,(ulong)uVar2,puVar8);
    if (iVar3 == 0) {
      if ((uStack8384 & 0xd000) != 0x8000) goto code_r0x00104838;
      lVar5 = lStack8352;
      if (unaff_R14 < lStack8352 - 1U) {
        lVar5 = 0x200;
      }
      if ((long)puStack8360 <= lVar5) goto code_r0x00104838;
      if (unaff_R13 <= puStack8360) {
        iVar3 = rpl_fseeko(param_1,unaff_R13,1);
        if (iVar3 != 0) {
          unaff_EBX = 0;
        }
        goto code_r0x00104881;
      }
      unaff_R13 = (uint *)((long)unaff_R13 - (long)puStack8360);
    }
    else {
      uVar6 = quotearg_n_style_colon(0,3,input_filename);
      puVar9 = (uint *)func_0x001017f0();
      unaff_EBX = 0;
      func_0x00101aa0(0,(ulong)*puVar9,&UNK_0010c7e0,uVar6);
    }
code_r0x001047a3:
    uVar2 = check_and_close(0);
    uVar1 = open_next_file();
    unaff_EBX = unaff_EBX & uVar2 & uVar1;
    unaff_R12 = puVar8;
    if (in_stream == (uint *)0x0) {
code_r0x0010480e:
      puVar8 = unaff_R12;
      uVar6 = func_0x001018b0(0,&UNK_0010b038,5);
      func_0x00101aa0(1,0,uVar6);
code_r0x00104838:
      puVar9 = (uint *)0x2000;
      do {
        if (unaff_R13 < puVar9) {
          puVar9 = unaff_R13;
        }
        param_1 = unaff_RBP;
        puVar7 = (uint *)func_0x00101ad0(unaff_RBP,0x2000,1,puVar9,in_stream);
        unaff_R13 = (uint *)((long)unaff_R13 - (long)puVar7);
        if (puVar7 != puVar9) {
          if ((*in_stream & 0x20) != 0) {
            unaff_EBX = 0;
            goto code_r0x00104881;
          }
          if ((*in_stream & 0x10) != 0) goto code_r0x001048b3;
        }
        if (unaff_R13 == (uint *)0x0) goto code_r0x00104881;
      } while( true );
    }
    goto code_r0x001047bf;
  }
  unaff_EBX = 1;
code_r0x00104881:
  if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)unaff_EBX;
  }
  func_0x001018e0();
  *param_1 = 0xffffffff;
  uVar2 = 1;
  while (in_stream != (uint *)0x0) {
    uVar1 = func_0x00101990();
    *param_1 = uVar1;
    if (uVar1 != 0xffffffff) break;
    puVar9 = (uint *)func_0x001017f0();
    uVar1 = check_and_close((ulong)*puVar9);
    uVar4 = open_next_file();
    uVar2 = uVar2 & uVar1 & uVar4;
  }
  return (ulong)uVar2;
code_r0x001048b3:
  if (unaff_R13 == (uint *)0x0) goto code_r0x00104881;
  goto code_r0x001047a3;
}

