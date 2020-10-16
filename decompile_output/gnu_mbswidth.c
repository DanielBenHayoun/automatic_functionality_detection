
ulong gnu_mbswidth(undefined8 *param_1,ulong param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *unaff_RBX;
  undefined8 uVar9;
  ulong unaff_RBP;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  undefined8 *unaff_R14;
  long unaff_R15;
  long in_FS_OFFSET;
  
code_r0x00110220:
  *(ulong *)((undefined *)register0x00000020 + -8) = unaff_RBP;
  *(undefined8 **)((undefined *)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 *)((undefined *)register0x00000020 + -0x20) = 0x110230;
  lVar7 = func_0x00103400();
  uVar9 = *(undefined8 *)((undefined *)register0x00000020 + -0x10);
  uVar10 = *(undefined8 *)((undefined *)register0x00000020 + -8);
  *(long *)((undefined *)register0x00000020 + -8) = unaff_R15;
  *(undefined8 **)((undefined *)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
  *(undefined8 **)((undefined *)register0x00000020 + -0x20) = unaff_R12;
  unaff_R13 = (undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((undefined *)register0x00000020 + -0x28) = uVar10;
  *(undefined8 *)((undefined *)register0x00000020 + -0x30) = uVar9;
  *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(int *)((undefined *)register0x00000020 + -0x5c) = (int)param_2;
  *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x11008e;
  puVar11 = param_1;
  uVar5 = func_0x001033f0();
  if (uVar5 < 2) {
    unaff_RBP = 0;
    if (param_1 < unaff_R13) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1101d4;
      plVar6 = (long *)func_0x00103860();
      unaff_RBP = 0;
      puVar8 = param_1;
      do {
        param_1 = (undefined8 *)((long)puVar8 + 1);
        uVar2 = *(ushort *)(*plVar6 + (ulong)*(byte *)puVar8 * 2);
        if ((uVar2 & 0x4000) == 0) {
          if ((*(uint *)((undefined *)register0x00000020 + -0x5c) & 2) != 0) goto code_r0x00110188;
          if ((uVar2 & 2) == 0) goto code_r0x001101f9;
        }
        else {
code_r0x001101f9:
          if ((int)unaff_RBP == 0x7fffffff) break;
          unaff_RBP = (ulong)((int)unaff_RBP + 1);
        }
        puVar8 = param_1;
      } while (unaff_R13 != param_1);
    }
  }
  else {
    unaff_RBP = 0;
    if (param_1 < unaff_R13) {
      unaff_R12 = (undefined8 *)((undefined *)register0x00000020 + -0x48);
      unaff_R14 = (undefined8 *)((undefined *)register0x00000020 + -0x4c);
      do {
        iVar3 = (int)unaff_RBP;
        cVar1 = *(char *)param_1;
        if (cVar1 < '@') {
          if ((cVar1 < '%') && (3 < (byte)(cVar1 - 0x20U))) goto code_r0x001100e1;
code_r0x001100bb:
          param_1 = (undefined8 *)((long)param_1 + 1);
          unaff_RBP = (ulong)(iVar3 + 1);
        }
        else {
          if (('@' < cVar1) && ((cVar1 < '`' || ((byte)(cVar1 + 0x9fU) < 0x1e))))
          goto code_r0x001100bb;
code_r0x001100e1:
          *unaff_R12 = 0;
          do {
            iVar3 = (int)unaff_RBP;
            *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x110124;
            puVar11 = unaff_R14;
            unaff_R15 = rpl_mbrtowc(unaff_R14,param_1,
                                    (undefined8 *)((long)unaff_R13 - (long)param_1),unaff_R12);
            if (unaff_R15 == -1) {
              if ((((undefined *)register0x00000020)[-0x5c] & 1) != 0) goto code_r0x00110188;
              goto code_r0x001100bb;
            }
            if (unaff_R15 == -2) {
              if ((((undefined *)register0x00000020)[-0x5c] & 1) != 0) goto code_r0x00110188;
              unaff_RBP = (ulong)(iVar3 + 1);
              param_1 = unaff_R13;
              break;
            }
            puVar11 = (undefined8 *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x4c);
            if (unaff_R15 == 0) {
              unaff_R15 = 1;
            }
            *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x110148;
            iVar4 = func_0x00103660();
            if (iVar4 < 0) {
              if ((((undefined *)register0x00000020)[-0x5c] & 2) != 0) goto code_r0x00110188;
              puVar11 = (undefined8 *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x4c);
              *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x11015c;
              iVar4 = func_0x00103320();
              if (iVar4 == 0) {
                if (iVar3 == 0x7fffffff) goto code_r0x00110210;
                unaff_RBP = (ulong)(iVar3 + 1);
              }
            }
            else {
              if (0x7fffffff - iVar3 < iVar4) {
code_r0x00110210:
                unaff_RBP = 0x7fffffff;
                goto code_r0x0011018d;
              }
              unaff_RBP = (ulong)(uint)(iVar3 + iVar4);
            }
            param_1 = (undefined8 *)((long)param_1 + unaff_R15);
            *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x11010c;
            puVar11 = unaff_R12;
            iVar3 = func_0x00103820();
          } while (iVar3 == 0);
        }
      } while (param_1 < unaff_R13);
    }
  }
  goto code_r0x0011018d;
code_r0x00110188:
  unaff_RBP = 0xffffffff;
code_r0x0011018d:
  param_2 = *(ulong *)((undefined *)register0x00000020 + -0x40) ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    return unaff_RBP;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x11021f;
  func_0x00103420();
  unaff_RBX = param_1;
  register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x68);
  param_1 = puVar11;
  goto code_r0x00110220;
}

