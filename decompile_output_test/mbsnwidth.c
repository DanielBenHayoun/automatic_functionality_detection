
ulong mbsnwidth(undefined8 *param_1,long param_2,ulong param_3)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 unaff_RBX;
  undefined8 *puVar7;
  undefined8 unaff_RBP;
  undefined8 *puVar8;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  undefined8 *unaff_R14;
  long unaff_R15;
  long in_FS_OFFSET;
  
code_r0x00108610:
  *(long *)((undefined *)register0x00000020 + -8) = unaff_R15;
  *(undefined8 **)((undefined *)register0x00000020 + -0x10) = unaff_R14;
  *(undefined8 **)((undefined *)register0x00000020 + -0x18) = unaff_R13;
  *(undefined8 **)((undefined *)register0x00000020 + -0x20) = unaff_R12;
  unaff_R13 = (undefined8 *)((long)param_1 + param_2);
  *(undefined8 *)((undefined *)register0x00000020 + -0x28) = unaff_RBP;
  *(undefined8 *)((undefined *)register0x00000020 + -0x30) = unaff_RBX;
  *(undefined8 *)((undefined *)register0x00000020 + -0x40) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(int *)((undefined *)register0x00000020 + -0x5c) = (int)param_3;
  *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x10863e;
  puVar8 = param_1;
  uVar5 = func_0x001021a0();
  if (uVar5 < 2) {
    uVar5 = 0;
    if (param_1 < unaff_R13) {
      *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x108784;
      plVar6 = (long *)func_0x00102590();
      uVar5 = 0;
      puVar7 = param_1;
      do {
        param_1 = (undefined8 *)((long)puVar7 + 1);
        uVar2 = *(ushort *)(*plVar6 + (ulong)*(byte *)puVar7 * 2);
        if ((uVar2 & 0x4000) == 0) {
          if ((*(uint *)((undefined *)register0x00000020 + -0x5c) & 2) != 0) goto code_r0x00108738;
          if ((uVar2 & 2) == 0) goto code_r0x001087a9;
        }
        else {
code_r0x001087a9:
          if ((int)uVar5 == 0x7fffffff) break;
          uVar5 = (ulong)((int)uVar5 + 1);
        }
        puVar7 = param_1;
      } while (unaff_R13 != param_1);
    }
  }
  else {
    uVar5 = 0;
    if (param_1 < unaff_R13) {
      unaff_R12 = (undefined8 *)((undefined *)register0x00000020 + -0x48);
      unaff_R14 = (undefined8 *)((undefined *)register0x00000020 + -0x4c);
      do {
        iVar3 = (int)uVar5;
        cVar1 = *(char *)param_1;
        if (cVar1 < '@') {
          if ((cVar1 < '%') && (3 < (byte)(cVar1 - 0x20U))) goto code_r0x00108691;
code_r0x0010866b:
          param_1 = (undefined8 *)((long)param_1 + 1);
          uVar5 = (ulong)(iVar3 + 1);
        }
        else {
          if (('@' < cVar1) && ((cVar1 < '`' || ((byte)(cVar1 + 0x9fU) < 0x1e))))
          goto code_r0x0010866b;
code_r0x00108691:
          *unaff_R12 = 0;
          do {
            iVar3 = (int)uVar5;
            *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1086d4;
            puVar8 = unaff_R14;
            unaff_R15 = rpl_mbrtowc(unaff_R14,param_1,
                                    (undefined8 *)((long)unaff_R13 - (long)param_1),unaff_R12);
            if (unaff_R15 == -1) {
              if ((((undefined *)register0x00000020)[-0x5c] & 1) != 0) goto code_r0x00108738;
              goto code_r0x0010866b;
            }
            if (unaff_R15 == -2) {
              if ((((undefined *)register0x00000020)[-0x5c] & 1) != 0) goto code_r0x00108738;
              uVar5 = (ulong)(iVar3 + 1);
              param_1 = unaff_R13;
              break;
            }
            puVar8 = (undefined8 *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x4c);
            if (unaff_R15 == 0) {
              unaff_R15 = 1;
            }
            *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1086f8;
            iVar4 = func_0x001023b0();
            if (iVar4 < 0) {
              if ((((undefined *)register0x00000020)[-0x5c] & 2) != 0) goto code_r0x00108738;
              puVar8 = (undefined8 *)(ulong)*(uint *)((undefined *)register0x00000020 + -0x4c);
              *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x10870c;
              iVar4 = func_0x00102100();
              if (iVar4 == 0) {
                if (iVar3 == 0x7fffffff) goto code_r0x001087c0;
                uVar5 = (ulong)(iVar3 + 1);
              }
            }
            else {
              if (0x7fffffff - iVar3 < iVar4) {
code_r0x001087c0:
                uVar5 = 0x7fffffff;
                goto code_r0x0010873d;
              }
              uVar5 = (ulong)(uint)(iVar3 + iVar4);
            }
            param_1 = (undefined8 *)((long)param_1 + unaff_R15);
            *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1086bc;
            puVar8 = unaff_R12;
            iVar3 = func_0x00102550();
          } while (iVar3 == 0);
        }
      } while (param_1 < unaff_R13);
    }
  }
  goto code_r0x0010873d;
code_r0x00108738:
  uVar5 = 0xffffffff;
code_r0x0010873d:
  param_3 = *(ulong *)((undefined *)register0x00000020 + -0x40) ^ *(ulong *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    return uVar5;
  }
  *(undefined8 *)((undefined *)register0x00000020 + -0x70) = 0x1087cf;
  func_0x001021f0();
  *(ulong *)((undefined *)register0x00000020 + -0x70) = uVar5;
  *(undefined8 **)((undefined *)register0x00000020 + -0x78) = param_1;
  param_3 = param_3 & 0xffffffff;
  *(undefined8 *)((undefined *)register0x00000020 + -0x88) = 0x1087e0;
  param_2 = func_0x001021b0();
  unaff_RBX = *(undefined8 *)((undefined *)register0x00000020 + -0x78);
  unaff_RBP = *(undefined8 *)((undefined *)register0x00000020 + -0x70);
  register0x00000020 = (BADSPACEBASE *)((undefined *)register0x00000020 + -0x68);
  param_1 = puVar8;
  goto code_r0x00108610;
}

