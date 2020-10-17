
undefined8
print_stat(long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  switch(param_3) {
  case 0x41:
    uVar9 = 0;
    filemodestring(param_6,modebuf_7294);
    modebuf_7294[10] = 0;
    out_string(param_1,param_2,modebuf_7294);
    break;
  case 0x42:
    uVar9 = 0;
    out_uint(param_1,param_2,0x200);
    break;
  case 0x43:
    puVar4 = (uint *)func_0x00101d40();
    *puVar4 = 0x5f;
    uVar1 = quotearg_style(4,param_5);
    uVar3 = func_0x00101e20(0,&UNK_0010e550,5);
    uVar9 = 1;
    func_0x00102120(0,(ulong)*puVar4,uVar3,uVar1);
    *(undefined2 *)(param_1 + param_2) = 0x73;
    func_0x001020f0(1,param_1,&UNK_0010ddf0);
    break;
  case 0x44:
    uVar9 = 0;
    out_uint_x(param_1,param_2,*param_6);
    break;
  default:
    puVar7 = *(undefined **)(stdout + 0x28);
    if (puVar7 < *(undefined **)(stdout + 0x30)) {
      uVar9 = 0;
      *(undefined **)(stdout + 0x28) = puVar7 + 1;
      *puVar7 = 0x3f;
    }
    else {
      uVar9 = 0;
      func_0x00101ed0(stdout,0x3f);
    }
    break;
  case 0x46:
    uVar1 = file_type(param_6);
    goto code_r0x0010435d;
  case 0x47:
    puVar2 = (undefined8 *)func_0x00101ec0((ulong)*(uint *)(param_6 + 4));
    goto joined_r0x00104633;
  case 0x4e:
    uVar6 = get_quoting_style(0);
    uVar9 = 0;
    uVar1 = quotearg_style((ulong)uVar6,param_5);
    out_string(param_1,param_2,uVar1);
    if ((*(uint *)(param_6 + 3) & 0xf000) != 0xa000) {
      return 0;
    }
    puVar7 = (undefined *)areadlink_with_size(param_5,param_6[6]);
    if (puVar7 == (undefined *)0x0) {
      uVar1 = quotearg_style(4,param_5);
      uVar9 = func_0x00101e20(0,&UNK_0010ddf2,5);
      puVar4 = (uint *)func_0x00101d40();
      func_0x00102120(0,(ulong)*puVar4,uVar9,uVar1);
      return 1;
    }
    func_0x001020f0(1,&UNK_0010de0f);
    uVar6 = get_quoting_style(0);
    puVar10 = (undefined *)quotearg_style((ulong)uVar6,puVar7);
    goto code_r0x001044da;
  case 0x54:
    uVar5 = param_6[5] & 0xff;
    uVar6 = (int)(((ulong)param_6[5] >> 0xc) >> 8) << 8;
    goto code_r0x001043f0;
  case 0x55:
    puVar2 = (undefined8 *)func_0x00101e00((ulong)*(uint *)((long)param_6 + 0x1c));
joined_r0x00104633:
    puVar7 = &UNK_0010dde8;
    if (puVar2 != (undefined8 *)0x0) {
      puVar7 = (undefined *)*puVar2;
    }
code_r0x001043a7:
    uVar9 = 0;
    out_string(param_1,param_2,puVar7);
    break;
  case 0x57:
    uVar9 = 0;
    out_epoch_sec_isra_9(param_1,param_2,0,0);
    break;
  case 0x58:
    uVar9 = 0;
    out_epoch_sec_isra_9(param_1,param_2,param_6[9],param_6[10]);
    break;
  case 0x59:
    uVar9 = 0;
    out_epoch_sec_isra_9(param_1,param_2,param_6[0xb],param_6[0xc]);
    break;
  case 0x5a:
    uVar9 = 0;
    out_epoch_sec_isra_9(param_1,param_2,param_6[0xd],param_6[0xe]);
    break;
  case 0x61:
    uVar6 = *(uint *)(param_6 + 3);
    make_format(param_1,param_2,&UNK_0010da87,&UNK_0010de14);
    uVar9 = 0;
    func_0x001020f0(1,param_1,(ulong)(uVar6 & 0xfff));
    break;
  case 0x62:
    uVar9 = 0;
    out_uint(param_1,param_2,param_6[8]);
    break;
  case 100:
    uVar9 = 0;
    out_uint(param_1,param_2,*param_6);
    break;
  case 0x66:
    uVar9 = 0;
    out_uint_x(param_1,param_2,(ulong)*(uint *)(param_6 + 3));
    break;
  case 0x67:
    uVar9 = 0;
    out_uint(param_1,param_2,(ulong)*(uint *)(param_6 + 4));
    break;
  case 0x68:
    uVar9 = 0;
    out_uint(param_1,param_2,param_6[2]);
    break;
  case 0x69:
    uVar9 = 0;
    out_uint(param_1,param_2,param_6[1]);
    break;
  case 0x6d:
    if ((follow_links == '\0') && ((*(uint *)(param_6 + 3) & 0xf000) == 0xa000)) {
code_r0x00104840:
      puVar7 = (undefined *)find_mount_point(param_5,param_6);
      if (puVar7 != (undefined *)0x0) {
        puVar10 = (undefined *)find_bind_mount(puVar7);
        if (puVar10 == (undefined *)0x0) {
          uVar9 = 0;
          puVar10 = puVar7;
        }
        else {
          uVar9 = 0;
        }
        goto code_r0x001044da;
      }
    }
    else {
      puVar7 = (undefined *)func_0x00101f40(param_5);
      if (puVar7 != (undefined *)0x0) {
        puVar10 = (undefined *)find_bind_mount(puVar7);
        uVar9 = 0;
        func_0x00101d10(puVar7);
        puVar7 = (undefined *)0x0;
        if (puVar10 != (undefined *)0x0) goto code_r0x001044da;
        goto code_r0x00104840;
      }
      uVar1 = quotearg_style(4,param_5);
      uVar9 = func_0x00101e20(0,&UNK_0010de17,5);
      puVar4 = (uint *)func_0x00101d40();
      func_0x00102120(0,(ulong)*puVar4,uVar9,uVar1);
    }
    uVar9 = 1;
    puVar10 = &UNK_0010ddf0;
code_r0x001044da:
    out_string(param_1,param_2,puVar10);
    func_0x00101d10(puVar7);
    break;
  case 0x6e:
    uVar9 = 0;
    out_string(param_1,param_2,param_5);
    break;
  case 0x6f:
    lVar8 = param_6[7];
    if (0x1fffffffffffffff < lVar8 - 1U) {
      lVar8 = 0x200;
    }
    uVar9 = 0;
    out_uint(param_1,param_2,lVar8);
    break;
  case 0x73:
    uVar9 = 0;
    out_int(param_1,param_2,param_6[6]);
    break;
  case 0x74:
    uVar5 = (ulong)((uint)((ulong)param_6[5] >> 8) & 0xfff);
    uVar6 = (uint)((ulong)param_6[5] >> 0x20) & 0xfffff000;
code_r0x001043f0:
    out_uint_x(param_1,param_2,(ulong)(uVar6 | (uint)uVar5),uVar5);
    uVar9 = 0;
    break;
  case 0x75:
    uVar9 = 0;
    out_uint(param_1,param_2,(ulong)*(uint *)((long)param_6 + 0x1c));
    break;
  case 0x77:
    puVar7 = &UNK_0010f642;
    goto code_r0x001043a7;
  case 0x78:
    uVar1 = param_6[10];
    uVar9 = param_6[9];
    goto code_r0x00104358;
  case 0x79:
    uVar1 = param_6[0xc];
    uVar9 = param_6[0xb];
    goto code_r0x00104358;
  case 0x7a:
    uVar1 = param_6[0xe];
    uVar9 = param_6[0xd];
code_r0x00104358:
    uVar1 = human_time(uVar9,uVar1);
code_r0x0010435d:
    uVar9 = 0;
    out_string(param_1,param_2,uVar1);
  }
  return uVar9;
}

