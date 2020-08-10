
void add_file_name_constprop_7
               (undefined8 param_1,int *param_2,int *param_3,int *param_4,int *param_5,
               undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  iVar8 = *param_4;
  if (iVar8 == 2) {
    iVar1 = *param_2;
    uVar3 = (ulong)(iVar1 == 0);
    uVar5 = *(undefined8 *)(g_names + uVar3 * 8);
    iVar2 = param_2[uVar3];
    if (iVar2 == 1) {
      *param_3 = *param_3 + -1;
      string_to_join_field(uVar5);
      set_join_field(&join_field_1);
    }
    else {
      if (iVar2 < 2) {
        if (iVar2 == 0) {
          uVar5 = quotearg_style(4,param_1);
          uVar6 = func_0x001016f0(0,&UNK_00107e44,5);
          func_0x001018f0(0,0,uVar6,uVar5);
          uVar5 = 1;
          usage();
          file_name = uVar5;
          return;
        }
      }
      else {
        if (iVar2 == 2) {
          param_3[1] = param_3[1] + -1;
          string_to_join_field(uVar5);
          set_join_field(&join_field_2);
        }
        else {
          if (iVar2 == 3) {
            add_field_list();
          }
        }
      }
    }
    if (iVar1 == 0) {
      lVar4 = 8;
      lVar7 = 4;
    }
    else {
      lVar7 = 4;
      *param_2 = param_2[1];
      g_names._0_8_ = g_names._8_8_;
      lVar4 = 8;
    }
  }
  else {
    lVar4 = (long)iVar8;
    iVar8 = iVar8 + 1;
    lVar7 = lVar4 * 4;
    lVar4 = lVar4 << 3;
  }
  *(int *)((long)param_2 + lVar7) = *param_5;
  *(undefined8 *)(g_names + lVar4) = param_1;
  *param_4 = iVar8;
  if (*param_5 == 3) {
    *param_6 = 3;
  }
  return;
}

