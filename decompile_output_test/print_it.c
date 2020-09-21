
/* WARNING: Possible PIC construction at 0x00103907: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0010390c) */
/* WARNING: Removing unreachable block (ram,0x00103948) */
/* WARNING: Removing unreachable block (ram,0x00103911) */
/* WARNING: Removing unreachable block (ram,0x0010394c) */
/* WARNING: Removing unreachable block (ram,0x00103c11) */
/* WARNING: Removing unreachable block (ram,0x00103d28) */
/* WARNING: Removing unreachable block (ram,0x00103c8f) */
/* WARNING: Removing unreachable block (ram,0x00103cf0) */
/* WARNING: Removing unreachable block (ram,0x00103ca9) */
/* WARNING: Removing unreachable block (ram,0x00103cce) */
/* WARNING: Removing unreachable block (ram,0x00103d4b) */
/* WARNING: Removing unreachable block (ram,0x00103e38) */
/* WARNING: Removing unreachable block (ram,0x00103e57) */
/* WARNING: Removing unreachable block (ram,0x00103e4b) */
/* WARNING: Removing unreachable block (ram,0x00103d80) */
/* WARNING: Removing unreachable block (ram,0x00103d94) */
/* WARNING: Removing unreachable block (ram,0x00103da0) */
/* WARNING: Removing unreachable block (ram,0x00103db9) */
/* WARNING: Removing unreachable block (ram,0x00103dbf) */
/* WARNING: Removing unreachable block (ram,0x00103dc8) */
/* WARNING: Removing unreachable block (ram,0x00103dd8) */
/* WARNING: Removing unreachable block (ram,0x00103dec) */
/* WARNING: Removing unreachable block (ram,0x00103dfb) */
/* WARNING: Removing unreachable block (ram,0x00103db0) */
/* WARNING: Removing unreachable block (ram,0x00103e10) */
/* WARNING: Removing unreachable block (ram,0x00103e09) */
/* WARNING: Removing unreachable block (ram,0x00103e12) */
/* WARNING: Removing unreachable block (ram,0x00103e89) */
/* WARNING: Removing unreachable block (ram,0x00103eb2) */
/* WARNING: Removing unreachable block (ram,0x00103fa3) */
/* WARNING: Removing unreachable block (ram,0x00103ebb) */
/* WARNING: Removing unreachable block (ram,0x00103eeb) */
/* WARNING: Removing unreachable block (ram,0x00103ef2) */
/* WARNING: Removing unreachable block (ram,0x00103e99) */
/* WARNING: Removing unreachable block (ram,0x00103f84) */
/* WARNING: Removing unreachable block (ram,0x00103ea2) */
/* WARNING: Removing unreachable block (ram,0x00109dd0) */
/* WARNING: Removing unreachable block (ram,0x00109da0) */
/* WARNING: Removing unreachable block (ram,0x00103e25) */
/* WARNING: Removing unreachable block (ram,0x00103ce5) */
/* WARNING: Removing unreachable block (ram,0x00103955) */
/* WARNING: Removing unreachable block (ram,0x00103b10) */
/* WARNING: Removing unreachable block (ram,0x0010396e) */
/* WARNING: Removing unreachable block (ram,0x00103917) */

undefined8 print_it(char *param_1)

{
  byte bVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char cVar9;
  char *pcVar10;
  char cVar11;
  char *pcVar12;
  
  lVar4 = func_0x00101e40();
  uVar5 = xmalloc(lVar4 + 3);
  cVar11 = *param_1;
  do {
    while( true ) {
      if (cVar11 == '\0') {
        func_0x00101d10(uVar5);
        func_0x00101f90(trailing_delim,stdout);
        return 0;
      }
      pcVar12 = param_1 + 1;
      if (cVar11 == '%') {
        lVar4 = func_0x00101f60(pcVar12,&printf_flags);
        lVar7 = func_0x00101f60(param_1 + lVar4 + 1,digits);
        pcVar10 = param_1 + lVar4 + 1 + lVar7;
        if (*pcVar10 == '.') {
          lVar4 = func_0x00101f60(pcVar10 + 1,digits);
          pcVar10 = pcVar10 + lVar4 + 1;
        }
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*(code *)PTR_memcpy_00312ea0)(uVar5,param_1,pcVar10 + (1 - (long)pcVar12));
        return uVar5;
      }
      pcVar10 = pcVar12;
      if (cVar11 != '\\') break;
      if (interpret_backslash_escapes == '\0') {
code_r0x001037ff:
        puVar2 = *(undefined **)(stdout + 0x28);
        if (puVar2 < *(undefined **)(stdout + 0x30)) {
          *(undefined **)(stdout + 0x28) = puVar2 + 1;
          *puVar2 = 0x5c;
          pcVar12 = param_1;
        }
        else {
          func_0x00101ed0();
          pcVar12 = param_1;
        }
      }
      else {
        cVar11 = param_1[1];
        if ((byte)(cVar11 - 0x30U) < 8) {
          cVar11 = cVar11 + -0x30;
          if ((byte)(param_1[2] - 0x30U) < 8) {
            cVar11 = param_1[2] + -0x30 + cVar11 * '\b';
            if ((byte)(param_1[3] - 0x30U) < 8) {
              cVar11 = param_1[3] + -0x30 + cVar11 * '\b';
              pcVar10 = param_1 + 4;
            }
            else {
              pcVar10 = param_1 + 3;
            }
          }
          else {
            pcVar10 = param_1 + 2;
          }
          pcVar12 = *(char **)(stdout + 0x28);
          if (pcVar12 < *(char **)(stdout + 0x30)) {
            *(char **)(stdout + 0x28) = pcVar12 + 1;
            *pcVar12 = cVar11;
          }
          else {
            func_0x00101ed0();
          }
          pcVar12 = pcVar10 + -1;
        }
        else {
          if (cVar11 == 'x') {
            plVar8 = (long *)func_0x00102210();
            bVar1 = param_1[2];
            if ((*(byte *)(*plVar8 + 1 + (ulong)bVar1 * 2) & 0x10) != 0) {
              if ((byte)(bVar1 + 0x9f) < 6) {
                cVar11 = bVar1 + 0xa9;
              }
              else {
                cVar11 = bVar1 - 0x37;
                if (5 < (byte)(bVar1 + 0xbf)) {
                  cVar11 = bVar1 - 0x30;
                }
              }
              bVar1 = param_1[3];
              pcVar12 = param_1 + 2;
              if ((*(byte *)(*plVar8 + 1 + (ulong)bVar1 * 2) & 0x10) != 0) {
                pcVar12 = param_1 + 3;
                if ((byte)(bVar1 + 0x9f) < 6) {
                  cVar9 = bVar1 + 0xa9;
                }
                else {
                  cVar9 = bVar1 - 0x30;
                  if ((byte)(bVar1 + 0xbf) < 6) {
                    cVar9 = bVar1 - 0x37;
                  }
                }
                cVar11 = cVar11 * '\x10' + cVar9;
              }
              pcVar10 = pcVar12 + 1;
              pcVar3 = *(char **)(stdout + 0x28);
              if (pcVar3 < *(char **)(stdout + 0x30)) {
                *(char **)(stdout + 0x28) = pcVar3 + 1;
                *pcVar3 = cVar11;
              }
              else {
                func_0x00101ed0();
              }
              goto code_r0x00103825;
            }
code_r0x00103ab6:
            uVar6 = func_0x00101e20(0,&UNK_0010e328,5);
            func_0x00102120(0,0,uVar6);
          }
          else {
            if (cVar11 == '\0') {
              uVar6 = func_0x00101e20(0,&UNK_0010e300,5);
              func_0x00102120(0,0,uVar6);
              goto code_r0x001037ff;
            }
            switch(cVar11) {
            case '\"':
            case '\\':
              break;
            default:
              goto code_r0x00103ab6;
            case 'a':
              cVar11 = '\a';
              break;
            case 'b':
              cVar11 = '\b';
              break;
            case 'e':
              cVar11 = '\x1b';
              break;
            case 'f':
              cVar11 = '\f';
              break;
            case 'n':
              cVar11 = '\n';
              break;
            case 'r':
              cVar11 = '\r';
              break;
            case 't':
              cVar11 = '\t';
              break;
            case 'v':
              cVar11 = '\v';
            }
          }
          pcVar10 = param_1 + 2;
          pcVar3 = *(char **)(stdout + 0x28);
          if (pcVar3 < *(char **)(stdout + 0x30)) {
            *(char **)(stdout + 0x28) = pcVar3 + 1;
            *pcVar3 = cVar11;
          }
          else {
            func_0x00101ed0();
          }
        }
      }
code_r0x00103825:
      cVar11 = pcVar12[1];
      param_1 = pcVar10;
    }
    pcVar3 = *(char **)(stdout + 0x28);
    if (*(char **)(stdout + 0x30) <= pcVar3) {
      func_0x00101ed0();
      pcVar12 = param_1;
      goto code_r0x00103825;
    }
    *(char **)(stdout + 0x28) = pcVar3 + 1;
    *pcVar3 = cVar11;
    cVar11 = param_1[1];
    param_1 = pcVar12;
  } while( true );
}

