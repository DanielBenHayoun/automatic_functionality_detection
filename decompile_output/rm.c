
undefined8 rm(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint *unaff_R12;
  long in_FS_OFFSET;
  
  uVar1 = *(ulong *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    uVar6 = 2;
    goto code_r0x001031bc;
  }
  unaff_R12 = (uint *)&UNK_0010b7d8;
  uVar6 = 2;
  uVar3 = xfts_open(param_1,(ulong)((-(uint)(*(char *)(param_2 + 8) == '\0') & 0xffffffc0) + 600),0)
  ;
  do {
    lVar4 = rpl_fts_read(uVar3);
    if (lVar4 == 0) {
      unaff_R12 = (uint *)func_0x001019a0();
      if (*unaff_R12 == 0) {
        iVar2 = rpl_fts_close(uVar3);
      }
      else {
        uVar6 = 4;
        uVar5 = func_0x00101a60(0,&UNK_0010b49e,5);
        func_0x00101cd0(0,(ulong)*unaff_R12,uVar5);
        iVar2 = rpl_fts_close(uVar3);
      }
      if (iVar2 != 0) {
        uVar6 = 4;
        uVar5 = func_0x00101a60(0,&UNK_0010b4fa,5);
        func_0x00101cd0(0,(ulong)*unaff_R12,uVar5);
      }
code_r0x001031bc:
      uVar3 = uVar1 ^ *(ulong *)(in_FS_OFFSET + 0x28);
      if (uVar3 == 0) {
        return uVar6;
      }
    }
    else {
      if (*(ushort *)(lVar4 + 0x70) < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x0010312c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)((long)(int)unaff_R12[*(ushort *)(lVar4 + 0x70)] + (long)unaff_R12))();
        return uVar6;
      }
      uVar6 = quotearg_n_style_colon(0,3,*(undefined8 *)(lVar4 + 0x38));
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x70);
      uVar5 = func_0x00101a60(0,&UNK_0010b778,5);
      func_0x00101cd0(0,0,uVar5,uVar3,uVar6,&UNK_0010b4c6);
      func_0x00101990();
      func_0x00101b20(&UNK_0010b4e9,&UNK_0010b4dc,0x261);
    }
    func_0x00101ab0();
    uVar6 = 4;
  } while( true );
}

