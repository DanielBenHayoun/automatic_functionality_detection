
byte * fmt(long param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  undefined8 extraout_RDX;
  byte **ppbVar9;
  ulong uVar10;
  undefined *puVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined *puVar14;
  int iVar15;
  byte *pbVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  byte *pbStack224;
  undefined *puStack216;
  byte *apbStack208 [5];
  undefined *puStack168;
  undefined *puStack160;
  undefined *puStack152;
  undefined *puStack144;
  undefined *puStack136;
  undefined8 uStack128;
  undefined8 uStack120;
  undefined8 uStack104;
  undefined1 *puStack88;
  undefined1 *puStack80;
  undefined1 *puStack72;
  undefined *puStack64;
  
  bVar20 = 0;
  puStack64 = &UNK_001028c9;
  fadvise();
  tabs = 0;
  other_indent = 0;
  puStack64 = &UNK_001028e2;
  next_char = get_prefix();
  do {
    last_line_length = 0;
    uVar3 = next_char;
    while( true ) {
      uVar10 = (ulong)uVar3;
      pbVar16 = (byte *)(ulong)in_column;
      if ((((uVar3 != 10) && (uVar3 != 0xffffffff)) && (prefix_lead_space <= next_prefix_indent)) &&
         (prefix_full_length + next_prefix_indent <= (int)in_column)) break;
      out_column = 0;
      if (next_prefix_indent < (int)in_column) {
        puStack64 = &UNK_00102a25;
        put_space();
        pbVar16 = (byte *)(ulong)out_column;
        pcVar17 = prefix;
        uVar7 = in_column;
        if (in_column != out_column) goto code_r0x001029b2;
code_r0x00102a40:
        uVar4 = (uint)pbVar16;
        if (uVar3 != 0xffffffff && uVar3 != 10) {
code_r0x00102ae8:
          uVar13 = (ulong)(uVar7 - uVar4);
code_r0x00102aec:
          puStack64 = &UNK_00102af1;
          pbVar16 = (byte *)put_space(uVar13);
        }
        if (uVar3 == 0xffffffff) {
          if ((int)in_column < prefix_length + next_prefix_indent) {
            next_char = 0xffffffff;
            return (byte *)(ulong)(uint)(prefix_length + next_prefix_indent);
          }
          puVar11 = *(undefined **)(stdout + 0x28);
          if (puVar11 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar11 + 1;
            *puVar11 = 10;
            next_char = 0xffffffff;
            return puVar11;
          }
          puStack64 = &UNK_00102beb;
          uVar6 = func_0x001015d0(stdout,10);
          next_char = 0xffffffff;
          return (byte *)uVar6;
        }
        while ((uVar3 = (uint)uVar10, uVar3 != 10 && (uVar3 != 0xffffffff))) {
          puVar11 = *(undefined **)(stdout + 0x28);
          if (puVar11 < *(undefined **)(stdout + 0x30)) {
            *(undefined **)(stdout + 0x28) = puVar11 + 1;
            *puVar11 = (char)uVar10;
            pbVar16 = *(byte **)(param_1 + 8);
            if (pbVar16 < *(byte **)(param_1 + 0x10)) goto code_r0x00102a64;
code_r0x00102aa8:
            puStack64 = &UNK_00102ab0;
            pbVar16 = (byte *)func_0x001014c0(param_1);
            uVar10 = (ulong)pbVar16 & 0xffffffff;
          }
          else {
            puStack64 = &UNK_00102a9a;
            func_0x001015d0();
            pbVar16 = *(byte **)(param_1 + 8);
            if (*(byte **)(param_1 + 0x10) <= pbVar16) goto code_r0x00102aa8;
code_r0x00102a64:
            *(byte **)(param_1 + 8) = pbVar16 + 1;
            uVar10 = (ulong)*pbVar16;
          }
        }
      }
      else {
        if (uVar3 != 0xffffffff && uVar3 != 10) {
          puStack64 = &UNK_0010295e;
          put_space();
          if (out_column != in_column) {
            cVar1 = *prefix;
            pcVar17 = prefix;
            uVar4 = out_column;
            uVar7 = in_column;
            if (cVar1 != '\0') {
              do {
                pcVar2 = *(char **)(stdout + 0x28);
                if (pcVar2 < *(char **)(stdout + 0x30)) {
                  *(char **)(stdout + 0x28) = pcVar2 + 1;
                  *pcVar2 = cVar1;
                }
                else {
                  puStack64 = &UNK_001029d9;
                  func_0x001015d0();
                  uVar7 = in_column;
                }
                out_column = out_column + 1;
                pbVar16 = (byte *)(ulong)out_column;
                pcVar17 = pcVar17 + 1;
                if (out_column == uVar7) break;
code_r0x001029b2:
                cVar1 = *pcVar17;
              } while (cVar1 != '\0');
              goto code_r0x00102a40;
            }
            goto code_r0x00102ae8;
          }
          uVar13 = 0;
          goto code_r0x00102aec;
        }
      }
      if (uVar3 == 0xffffffff) {
        next_char = 0xffffffff;
        return pbVar16;
      }
      puVar11 = *(undefined **)(stdout + 0x28);
      if (puVar11 < *(undefined **)(stdout + 0x30)) {
        *(undefined **)(stdout + 0x28) = puVar11 + 1;
        *puVar11 = 10;
      }
      else {
        puStack64 = &UNK_00102b32;
        func_0x001015d0();
      }
      puStack64 = &UNK_00102a19;
      uVar3 = get_prefix();
    }
    prefix_indent = next_prefix_indent;
    first_indent = in_column;
    wptr = parabuf;
    word_limit = unused_word_type;
    puStack64 = &UNK_00102b5b;
    uVar3 = get_line(param_1);
    uVar10 = 0;
    if ((next_prefix_indent == prefix_indent) &&
       (prefix_full_length + next_prefix_indent <= (int)in_column)) {
      uVar10 = (ulong)(uVar3 != 10 && uVar3 != 0xffffffff);
    }
    puStack64 = &UNK_00102b76;
    iVar5 = next_prefix_indent;
    iVar15 = prefix_indent;
    set_other_indent(uVar10);
    if (split == '\0') {
      if (crown == '\0') {
        if (tagged == '\0') {
          if (((iVar5 == iVar15) && (iVar5 + prefix_full_length <= (int)in_column)) &&
             ((uVar3 != 0xffffffff && ((uVar3 != 10 && (in_column == other_indent)))))) {
            while( true ) {
              puStack64 = &UNK_00102d9a;
              uVar3 = get_line(param_1);
              if (next_prefix_indent != prefix_indent) break;
              if (((((int)in_column < next_prefix_indent + prefix_full_length) || (uVar3 == 10)) ||
                  (uVar3 == 0xffffffff)) || (in_column != other_indent)) break;
            }
          }
        }
        else {
          if (((iVar5 == iVar15) && (iVar5 + prefix_full_length <= (int)in_column)) &&
             ((uVar3 != 10 && ((uVar3 != 0xffffffff && (in_column != first_indent)))))) {
            while( true ) {
              puStack64 = &UNK_00102d0e;
              uVar3 = get_line(param_1);
              if (next_prefix_indent != prefix_indent) break;
              if (((((int)in_column < next_prefix_indent + prefix_full_length) || (uVar3 == 10)) ||
                  (uVar3 == 0xffffffff)) || (in_column != other_indent)) break;
            }
          }
        }
      }
      else {
        if (((iVar5 == iVar15) && (iVar5 + prefix_full_length <= (int)in_column)) &&
           ((uVar3 != 10 && (uVar3 != 0xffffffff)))) {
          while( true ) {
            puStack64 = &UNK_00102c82;
            uVar3 = get_line(param_1);
            if (((next_prefix_indent != prefix_indent) ||
                ((int)in_column < next_prefix_indent + prefix_full_length)) || (uVar3 == 10)) break;
            if ((uVar3 == 0xffffffff) || (in_column != other_indent)) break;
          }
        }
      }
    }
    puStack88 = word_limit;
    if (word_limit < (undefined1 *)0x309121) break;
    word_limit[-0x18] = word_limit[-0x18] | 10;
    puStack64 = &UNK_00102bc7;
    next_char = uVar3;
    fmt_paragraph();
    puStack64 = &UNK_00102bcf;
    put_paragraph();
  } while( true );
  puVar14 = &UNK_0010617d;
  puStack64 = &UNK_00102dcf;
  func_0x00101600(&UNK_0010617d,&UNK_00106173,0x25e,__PRETTY_FUNCTION___7028);
  puVar11 = program_name;
  puStack72 = parabuf;
  uVar6 = 5;
  puStack80 = unused_word_type;
  uStack104 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  puStack64 = (undefined *)param_1;
  if ((int)puVar14 == 0) goto code_r0x00102e2d;
  uVar6 = func_0x00101560(0,&UNK_001062f0,5);
  func_0x00101780(stderr,1,uVar6,puVar11);
  do {
    func_0x00101760((ulong)puVar14 & 0xffffffff);
    uVar6 = extraout_RDX;
code_r0x00102e2d:
    uVar6 = func_0x00101560(0,&UNK_00106318,uVar6);
    func_0x00101710(1,uVar6,puVar11);
    lVar8 = stdout;
    uVar6 = func_0x00101560(0,&UNK_00106348,5);
    func_0x00101650(uVar6,lVar8);
    lVar8 = stdout;
    uVar6 = func_0x00101560(0,&UNK_001063d0,5);
    func_0x00101650(uVar6,lVar8);
    lVar8 = stdout;
    uVar6 = func_0x00101560(0,&UNK_00106408,5);
    func_0x00101650(uVar6,lVar8);
    lVar8 = stdout;
    uVar6 = func_0x00101560(0,&UNK_00106458,5);
    func_0x00101650(uVar6,lVar8);
    lVar8 = stdout;
    uVar6 = func_0x00101560(0,&UNK_00106570,5);
    func_0x00101650(uVar6,lVar8);
    lVar8 = stdout;
    uVar6 = func_0x00101560(0,&UNK_00106690,5);
    func_0x00101650(uVar6,lVar8);
    lVar8 = stdout;
    uVar6 = func_0x00101560(0,&UNK_001066c0,5);
    func_0x00101650(uVar6,lVar8);
    uStack128 = 0;
    uStack120 = 0;
    pbStack224 = &UNK_00106193;
    apbStack208[4] = &UNK_001061d4;
    puStack216 = &UNK_00106195;
    puStack160 = &UNK_001061de;
    apbStack208[0] = &UNK_0010620d;
    puStack144 = &UNK_001061e8;
    apbStack208[1] = &UNK_001061a5;
    apbStack208[2] = &UNK_001061bb;
    apbStack208[3] = &UNK_001061c5;
    puStack168 = &UNK_001061c5;
    puStack152 = &UNK_001061c5;
    puStack136 = &UNK_001061c5;
    ppbVar9 = &pbStack224;
    do {
      ppbVar9 = ppbVar9;
      ppbVar9 = ppbVar9 + 2;
      pbVar16 = *ppbVar9;
      bVar18 = false;
      bVar19 = pbVar16 == (byte *)0x0;
      if (bVar19) break;
      lVar8 = 4;
      pbVar12 = &UNK_0010618f;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar18 = *pbVar12 < *pbVar16;
        bVar19 = *pbVar12 == *pbVar16;
        pbVar12 = pbVar12 + (ulong)bVar20 * -2 + 1;
        pbVar16 = pbVar16 + (ulong)bVar20 * -2 + 1;
      } while (bVar19);
    } while ((!bVar18 && !bVar19) != bVar18);
    pbVar16 = ppbVar9[3];
    if (pbVar16 == (byte *)0x0) {
      uVar6 = func_0x00101560(0,&UNK_001061f2,5);
      func_0x00101710(1,uVar6,&UNK_00106209,&UNK_001066f8);
      lVar8 = func_0x00101700(5,0);
      if ((lVar8 != 0) && (iVar5 = func_0x00101500(lVar8,&UNK_00106217,3), iVar5 != 0)) {
        pbVar16 = &UNK_0010618f;
        goto code_r0x00103180;
      }
      pbVar16 = &UNK_0010618f;
      puVar11 = &UNK_001061af;
      uVar6 = func_0x00101560(0,&UNK_0010621b,5);
      func_0x00101710(1,uVar6,&UNK_001066f8,&UNK_0010618f);
    }
    else {
      uVar6 = func_0x00101560(0,&UNK_001061f2,5);
      func_0x00101710(1,uVar6,&UNK_00106209,&UNK_001066f8);
      lVar8 = func_0x00101700(5,0);
      if ((lVar8 != 0) && (iVar5 = func_0x00101500(lVar8,&UNK_00106217,3), iVar5 != 0)) {
code_r0x00103180:
        lVar8 = stdout;
        uVar6 = func_0x00101560(0,&UNK_00106720,5);
        func_0x00101650(uVar6,lVar8);
      }
      uVar6 = func_0x00101560(0,&UNK_0010621b,5);
      func_0x00101710(1,uVar6,&UNK_001066f8,&UNK_0010618f);
      puVar11 = &UNK_00106da1;
      if (pbVar16 == &UNK_0010618f) {
        puVar11 = &UNK_001061af;
      }
    }
    uVar6 = func_0x00101560(0,&UNK_00106768,5);
    func_0x00101710(1,uVar6,pbVar16,puVar11);
  } while( true );
}

