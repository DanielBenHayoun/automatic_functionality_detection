
void extract_dirs_from_files(long param_1,byte param_2)

{
  long *plVar1;
  int iVar2;
  char **ppcVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  
  if ((param_1 != 0) && (active_dir_set != 0)) {
    queue_directory(0,param_1,0);
  }
  lVar10 = cwd_n_used * 8;
  plVar6 = sorted_file;
  lVar5 = cwd_n_used;
joined_r0x00105f07:
  do {
    lVar5 = lVar5 + -1;
    sorted_file = plVar6;
    if (lVar5 == -1) {
      if (cwd_n_used != 0) {
        plVar1 = plVar6 + cwd_n_used;
        cwd_n_used = 0;
        plVar7 = plVar6;
        do {
          iVar2 = *(int *)(*plVar7 + 0xa8);
          plVar6[cwd_n_used] = *plVar7;
          plVar7 = plVar7 + 1;
          cwd_n_used = cwd_n_used + (ulong)(iVar2 != 9);
        } while (plVar1 != plVar7);
      }
      return;
    }
    lVar10 = lVar10 + -8;
    ppcVar3 = *(char ***)((long)plVar6 + lVar10);
  } while ((*(int *)(ppcVar3 + 0x15) != 3) && (*(int *)(ppcVar3 + 0x15) != 9));
  pcVar4 = *ppcVar3;
  if (param_1 != 0) goto code_r0x00105f99;
  goto code_r0x00106000;
code_r0x00105f99:
  pcVar8 = (char *)last_component(pcVar4);
  if ((*pcVar8 != '.') ||
     ((plVar6 = sorted_file, pcVar8[(ulong)(pcVar8[1] == '.') + 1] != '\0' &&
      (pcVar8[(ulong)(pcVar8[1] == '.') + 1] != '/')))) {
    if (*pcVar4 == '/') {
code_r0x00106000:
      queue_directory(pcVar4,ppcVar3[1],(ulong)param_2);
    }
    else {
      uVar9 = file_name_concat(param_1,pcVar4,0);
      queue_directory(uVar9,ppcVar3[1],(ulong)param_2);
      func_0x00103880(uVar9);
    }
    plVar6 = sorted_file;
    if (*(int *)(ppcVar3 + 0x15) == 9) {
      func_0x00103880(*ppcVar3);
      func_0x00103880(ppcVar3[1]);
      func_0x00103880(ppcVar3[2]);
      plVar6 = sorted_file;
    }
  }
  goto joined_r0x00105f07;
}

