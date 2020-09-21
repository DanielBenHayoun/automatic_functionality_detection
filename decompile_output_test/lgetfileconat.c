
undefined8 lgetfileconat(ulong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  char *unaff_RBX;
  uint *unaff_RBP;
  char *pcVar5;
  char *pcVar6;
  char *unaff_R12;
  undefined *unaff_R13;
  long in_FS_OFFSET;
  
  do {
    *(undefined **)((undefined *)register0x00000020 + -8) = unaff_R13;
    *(char **)((undefined *)register0x00000020 + -0x10) = unaff_R12;
    *(uint **)((undefined *)register0x00000020 + -0x18) = unaff_RBP;
    *(char **)((undefined *)register0x00000020 + -0x20) = unaff_RBX;
    unaff_RBX = (char *)(param_1 & 0xffffffff);
    unaff_R12 = (undefined *)register0x00000020 + -0x1008;
    pcVar6 = (undefined *)register0x00000020 + -0x1008;
    *(undefined8 *)((undefined *)register0x00000020 + -0x30) = *(undefined8 *)(in_FS_OFFSET + 0x28);
    *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x10799a;
    pcVar5 = param_2;
    unaff_RBP = (uint *)func_0x001018a0();
    iVar3 = (int)unaff_RBX;
    if ((iVar3 == -100) || (*param_2 == '/')) {
code_r0x00107a20:
      *unaff_RBP = 0x5f;
      pcVar6 = param_2;
      goto code_r0x00107a27;
    }
    unaff_R13 = (undefined *)register0x00000020 + -0xff8;
    *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x1079bb;
    pcVar5 = unaff_RBX;
    puVar4 = (undefined *)openat_proc_name(unaff_R13,unaff_RBX,param_2);
    if ((puVar4 != (undefined *)0x0) && (*unaff_RBP = 0x5f, puVar4 != unaff_R13)) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x1079d4;
      func_0x00101c90(puVar4);
    }
    *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x1079df;
    iVar2 = save_cwd();
    if (iVar2 == 0) {
      if ((iVar3 < 0) || (*(int *)((undefined *)register0x00000020 + -0x1008) != iVar3)) {
        *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x1079f7;
        iVar3 = func_0x00101b50(unaff_RBX);
        if (iVar3 != 0) {
          uVar1 = *unaff_RBP;
          unaff_RBX = (char *)(ulong)uVar1;
          *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x107a5b;
          free_cwd();
          *unaff_RBP = uVar1;
          pcVar6 = (undefined *)register0x00000020 + -0x1008;
          goto code_r0x00107a27;
        }
        *unaff_RBP = 0x5f;
        *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x107a0a;
        iVar3 = restore_cwd();
        unaff_R12 = (undefined *)register0x00000020 + -0x1008;
        if (iVar3 == 0) {
          *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x107a16;
          free_cwd();
          param_2 = (undefined *)register0x00000020 + -0x1008;
          goto code_r0x00107a20;
        }
      }
      else {
        *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x107a68;
        free_cwd();
        *unaff_RBP = 9;
code_r0x00107a27:
        if (*(long *)((undefined *)register0x00000020 + -0x30) == *(long *)(in_FS_OFFSET + 0x28)) {
          return 0xffffffff;
        }
        *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x107a76;
        func_0x001019a0();
        unaff_R12 = pcVar6;
      }
      *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x107a7e;
      openat_restore_fail();
    }
    param_1 = (ulong)*unaff_RBP;
    *(undefined8 *)((undefined *)register0x00000020 + -0x1010) = 0x107a86;
    openat_save_fail();
    register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x1008);
    param_2 = pcVar5;
  } while( true );
}

