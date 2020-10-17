
undefined8 who(ulong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 auStack48 [3];
  
  puVar6 = &stack0xffffffffffffffe8;
  param_1 = param_1 & 0xffffffff;
  bVar1 = true;
  set_program_name(*param_2);
  func_0x00101ab0(6,&UNK_00109241);
  func_0x001018e0(&UNK_001085fc,&UNK_00108625);
  func_0x001018b0(&UNK_001085fc);
  atexit(close_stdout);
code_r0x00101c28:
  *(undefined8 *)(puVar6 + -8) = 0x101c43;
  iVar3 = func_0x00101930(param_1 & 0xffffffff,param_2,&UNK_0010866c,longopts,0);
  if (iVar3 == -1) {
    if (bVar1) {
      need_users = 1;
      short_output = 1;
    }
    if (include_exit != '\0') {
      short_output = 0;
    }
    *(undefined8 *)(puVar6 + -8) = 0x101e82;
    cVar2 = hard_locale(2);
    if (cVar2 == '\0') {
      time_format_width = 0xc;
      time_format = &UNK_0010868a;
    }
    else {
      time_format_width = 0x10;
      time_format = &UNK_0010867b;
    }
    lVar4 = (long)optind;
    iVar3 = (int)param_1 - optind;
    if (iVar3 == 1) {
      uVar5 = param_2[lVar4];
      *(undefined8 *)(puVar6 + -8) = 0x101eff;
      who(uVar5,0);
      return 0;
    }
    if (iVar3 < 2) {
      if (SCARRY4(iVar3,1) == iVar3 + 1 < 0) goto code_r0x00101eb3;
    }
    else {
      if (iVar3 == 2) {
        my_line_only = 1;
code_r0x00101eb3:
        *(undefined8 *)(puVar6 + -8) = 0x101ec4;
        who(&UNK_00108574,1);
        return 0;
      }
    }
code_r0x00101f08:
    uVar5 = param_2[lVar4 + 2];
    *(undefined8 *)(puVar6 + -8) = 0x101f12;
    param_1 = quote(uVar5);
    *(undefined8 *)(puVar6 + -8) = 0x101f28;
    uVar5 = func_0x001018f0(0,&UNK_00108696,5);
    *(undefined8 *)(puVar6 + -8) = 0x101f39;
    func_0x00101af0(0,0,uVar5,param_1);
  }
  else {
    if (iVar3 == 0x6d) {
      my_line_only = 1;
      goto code_r0x00101c28;
    }
    if (iVar3 < 0x6e) {
      if (iVar3 == 0x54) {
code_r0x00101d8e:
        include_mesg = 1;
        goto code_r0x00101c28;
      }
      if (iVar3 < 0x55) {
        if (iVar3 == -0x82) {
          *(undefined8 *)(puVar6 + -8) = 0x101f08;
          lVar4 = usage(0);
          goto code_r0x00101f08;
        }
        if (iVar3 != 0x48) {
          if (iVar3 != -0x83) goto code_r0x00101d0f;
          goto code_r0x00101d19;
        }
        goto code_r0x00101d5b;
      }
      if (iVar3 == 0x62) {
        need_boottime = 1;
        bVar1 = false;
        goto code_r0x00101c28;
      }
      if (iVar3 < 99) {
        if (iVar3 != 0x61) goto code_r0x00101d0f;
        need_boottime = 1;
        need_deadprocs = 1;
        bVar1 = false;
        need_login = 1;
        need_initspawn = 1;
        need_runlevel = 1;
        need_clockchange = 1;
        need_users = 1;
        include_mesg = 1;
        include_idle = 1;
        include_exit = '\x01';
        goto code_r0x00101c28;
      }
      if (iVar3 == 100) {
        need_deadprocs = 1;
        include_idle = 1;
        bVar1 = false;
        include_exit = '\x01';
        goto code_r0x00101c28;
      }
      if (iVar3 == 0x6c) {
        need_login = 1;
        include_idle = 1;
        bVar1 = false;
        goto code_r0x00101c28;
      }
    }
    else {
      if (iVar3 == 0x73) {
        short_output = 1;
        goto code_r0x00101c28;
      }
      if (iVar3 < 0x74) {
        if (iVar3 == 0x71) {
          short_list = 1;
        }
        else {
          if (iVar3 < 0x72) {
            if (iVar3 != 0x70) goto code_r0x00101d0f;
            need_initspawn = 1;
            bVar1 = false;
          }
          else {
            need_runlevel = 1;
            include_idle = 1;
            bVar1 = false;
          }
        }
        goto code_r0x00101c28;
      }
      if (iVar3 == 0x75) {
        need_users = 1;
        include_idle = 1;
        bVar1 = false;
        goto code_r0x00101c28;
      }
      if (iVar3 < 0x75) {
        need_clockchange = 1;
        bVar1 = false;
        goto code_r0x00101c28;
      }
      if (iVar3 == 0x77) goto code_r0x00101d8e;
      if (iVar3 == 0x80) {
        do_lookup = 1;
        goto code_r0x00101c28;
      }
    }
  }
code_r0x00101d0f:
  *(undefined8 *)(puVar6 + -8) = 0x101d19;
  usage(1);
code_r0x00101d19:
  *(undefined8 *)(puVar6 + -8) = 0;
  *(undefined8 *)(puVar6 + -0x10) = 0x10865e;
  *(undefined8 *)(puVar6 + -0x18) = 0x101d54;
  version_etc(stdout,&UNK_00108562,&UNK_001085f8,Version,&UNK_0010864d,&UNK_0010863d);
  *(undefined8 *)(puVar6 + -0x18) = 0x101d5b;
  func_0x00101b20();
  puVar6 = puVar6 + -0x10;
code_r0x00101d5b:
  include_heading = 1;
  goto code_r0x00101c28;
}