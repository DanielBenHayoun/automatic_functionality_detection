
char * canonicalize_filename_mode(char *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long in_FS_OFFSET;
  char *pcStack264;
  char *pcStack248;
  char *pcStack240;
  ulong uStack232;
  undefined auStack216 [24];
  uint uStack192;
  undefined8 uStack168;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_2 & 3;
  if (((uVar11 & uVar11 - 1) == 0) && (param_1 != (char *)0x0)) {
    if (*param_1 == '\0') {
      puVar7 = (undefined4 *)func_0x001014d0();
      pcVar10 = (char *)0x0;
      *puVar7 = 2;
      pcStack264 = param_1;
    }
    else {
      if (*param_1 == '/') goto code_r0x00102a80;
      pcStack264 = param_1;
      pcVar10 = (char *)xgetcwd();
      if (pcVar10 != (char *)0x0) {
        uVar4 = func_0x00101570(pcVar10);
        pcVar14 = param_1;
        if (uVar4 < 0x1000) {
          pcVar10 = (char *)xrealloc(pcVar10,0x1000);
          pcVar17 = pcVar10 + uVar4;
          pcVar15 = pcVar10 + 0x1000;
        }
        else {
          pcVar15 = pcVar10 + uVar4;
          pcVar17 = pcVar15;
        }
code_r0x001025f1:
        pcStack264 = (char *)0x0;
        uStack232 = 0;
        pcStack240 = (char *)0x0;
        pcStack248 = pcVar14;
code_r0x0010261b:
        cVar2 = *pcVar14;
        pcVar16 = pcVar17;
        pcVar17 = pcStack264;
joined_r0x00102621:
        if (cVar2 == '\0') {
code_r0x0010272f:
          if ((pcVar10 + 1 < pcVar16) && (pcVar16[-1] == '/')) {
            pcVar16 = pcVar16 + -1;
          }
          *pcVar16 = '\0';
          if (pcVar15 != pcVar16 + 1) {
            pcVar10 = (char *)xrealloc(pcVar10,pcVar16 + (1 - (long)pcVar10));
          }
          func_0x001014b0();
          pcStack264 = pcStack240;
          if (pcVar17 != (char *)0x0) {
            hash_free();
            pcStack264 = pcVar17;
          }
          goto code_r0x00102780;
        }
        param_1 = pcVar14;
        if (cVar2 == '/') {
          do {
            pcVar14 = pcVar14 + 1;
            cVar2 = *pcVar14;
          } while (cVar2 == '/');
          param_1 = pcVar14;
          if (cVar2 != '\0') goto code_r0x0010265d;
        }
        else {
code_r0x0010265d:
          do {
            pcVar14 = pcVar14 + 1;
            if (*pcVar14 == '\0') break;
          } while (*pcVar14 != '/');
        }
        if (pcVar14 == param_1) goto code_r0x0010272f;
        pcVar12 = pcVar14 + -(long)param_1;
        pcStack264 = pcVar17;
        if (pcVar12 == (char *)0x1) {
          if (cVar2 != '.') goto code_r0x00102691;
          goto code_r0x00102720;
        }
        if (((pcVar12 == (char *)0x2) && (cVar2 == '.')) && (param_1[1] == '.')) {
          pcVar17 = pcVar16;
          if (((pcVar16 <= pcVar10 + 1) || (pcVar17 = pcVar16 + -1, pcVar17 <= pcVar10)) ||
             (pcVar16[-2] == '/')) goto code_r0x0010261b;
          do {
            pcVar16 = pcVar17 + -1;
            if (pcVar10 == pcVar16) break;
            pcVar12 = pcVar17 + -2;
            pcVar17 = pcVar16;
          } while (*pcVar12 != '/');
        }
        else {
code_r0x00102691:
          if (pcVar16[-1] != '/') {
            *pcVar16 = '/';
            pcVar16 = pcVar16 + 1;
          }
          if (pcVar15 <= pcVar16 + (long)pcVar12) {
            lVar5 = -(long)pcVar10;
            pcVar9 = pcVar15 + -(long)pcVar10 + 0x1000;
            if (0xfff < (long)pcVar12) {
              pcVar9 = pcVar12 + 1 + (long)(pcVar15 + -(long)pcVar10);
            }
            pcVar10 = (char *)xrealloc(pcVar10,pcVar9);
            pcVar15 = pcVar9 + (long)pcVar10;
            pcVar16 = pcVar16 + lVar5 + (long)pcVar10;
          }
          func_0x00101670(pcVar16,param_1,pcVar12);
          pcVar16 = pcVar16 + (long)pcVar12;
          *pcVar16 = '\0';
          if ((uVar11 == 2) && ((param_2 & 4) != 0)) {
code_r0x00102706:
            uStack192 = 0;
code_r0x0010270e:
            if ((*pcVar14 != '\0') && (uVar11 != 2)) {
              piVar13 = (int *)func_0x001014d0();
              iVar3 = 0x14;
code_r0x00102821:
              func_0x001014b0(pcStack240);
              func_0x001014b0();
              pcStack264 = pcVar10;
              if (pcVar17 != (char *)0x0) {
code_r0x001028ea:
                pcStack264 = pcVar17;
                hash_free();
              }
              *piVar13 = iVar3;
              pcVar10 = (char *)0x0;
              goto code_r0x00102780;
            }
            goto code_r0x00102720;
          }
          if ((param_2 & 4) == 0) {
            iVar3 = func_0x00101580(1,pcVar10,auStack216);
          }
          else {
            iVar3 = func_0x00101690();
          }
          if (iVar3 != 0) {
            piVar13 = (int *)func_0x001014d0();
            iVar3 = *piVar13;
            if ((param_2 & 3) != 0) {
              if (uVar11 != 1) goto code_r0x00102706;
              lVar5 = func_0x00101620(pcVar14,&UNK_001075fe);
              if ((pcVar14[lVar5] == '\0') && (iVar3 == 2)) goto code_r0x00102720;
            }
            goto code_r0x00102821;
          }
          if ((uStack192 & 0xf000) == 0xa000) {
            if ((pcVar17 == (char *)0x0) &&
               (pcStack264 = (char *)hash_initialize(7,0,triple_hash,triple_compare_ino_str,
                                                     triple_free), pcStack264 == (char *)0x0))
            goto code_r0x00102a75;
            cVar2 = seen_file(pcStack264,pcStack248,auStack216);
            if (cVar2 == '\0') {
              record_file(pcStack264,pcStack248,auStack216);
              pcVar17 = (char *)areadlink_with_size(pcVar10,uStack168);
              if (pcVar17 == (char *)0x0) {
                piVar13 = (int *)func_0x001014d0();
                iVar3 = *piVar13;
                if ((uVar11 != 2) || (iVar3 == 0xc)) goto code_r0x001028d0;
              }
              else {
                lVar5 = func_0x00101570(pcVar17);
                lVar6 = func_0x00101570(pcVar14);
                uVar4 = lVar5 + 1 + lVar6;
                if (uStack232 == 0) {
                  uStack232 = 0x1000;
                  if (0xfff < uVar4) {
                    uStack232 = uVar4;
                  }
                  pcStack240 = (char *)xmalloc(uStack232);
                }
                else {
                  if (uStack232 < uVar4) {
                    pcStack240 = (char *)xrealloc(pcStack240,uVar4);
                    uStack232 = uVar4;
                  }
                }
                func_0x00101710(pcStack240 + lVar5,pcVar14,lVar6 + 1);
                func_0x00101670(pcStack240,pcVar17,lVar5);
                pcStack248 = pcStack240;
                pcVar12 = pcVar10 + 1;
                if (*pcVar17 == '/') {
                  *pcVar10 = '/';
                }
                else {
                  bVar1 = pcVar12 < pcVar16;
                  pcVar12 = pcVar16;
                  if ((bVar1) && (pcVar12 = pcVar16 + -1, pcVar10 < pcVar12)) {
                    cVar2 = pcVar16[-2];
                    pcVar14 = pcVar12;
                    while ((pcVar12 = pcVar14, cVar2 != '/' &&
                           (pcVar12 = pcVar14 + -1, pcVar10 != pcVar12))) {
                      cVar2 = pcVar14[-2];
                      pcVar14 = pcVar12;
                    }
                  }
                }
                func_0x001014b0(pcVar17);
                pcVar14 = pcStack240;
                pcVar16 = pcVar12;
              }
            }
            else {
              if (uVar11 != 2) {
                piVar13 = (int *)func_0x001014d0();
                iVar3 = 0x28;
code_r0x001028d0:
                func_0x001014b0(pcStack240);
                func_0x001014b0(pcVar10);
                pcVar17 = pcStack264;
                goto code_r0x001028ea;
              }
            }
          }
          else {
            if ((uStack192 & 0xf000) != 0x4000) goto code_r0x0010270e;
          }
        }
code_r0x00102720:
        cVar2 = *pcVar14;
        pcVar17 = pcStack264;
        goto joined_r0x00102621;
      }
    }
  }
  else {
    puVar7 = (undefined4 *)func_0x001014d0();
    pcVar10 = (char *)0x0;
    *puVar7 = 0x16;
    pcStack264 = param_1;
  }
code_r0x00102780:
  if (lStack64 != *(long *)(in_FS_OFFSET + 0x28)) {
    uVar8 = func_0x00101590();
    file_name = pcStack264;
    return (char *)uVar8;
  }
  return pcVar10;
code_r0x00102a75:
  xalloc_die();
code_r0x00102a80:
  pcVar10 = (char *)xmalloc(0x1000);
  pcVar15 = pcVar10 + 0x1000;
  pcVar17 = pcVar10 + 1;
  *pcVar10 = '/';
  pcVar14 = param_1;
  goto code_r0x001025f1;
}

