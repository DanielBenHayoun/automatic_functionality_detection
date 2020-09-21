
ulong binop(byte *param_1)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool in_CF;
  bool bVar5;
  bool bVar6;
  bool in_ZF;
  bool bVar7;
  
  lVar2 = 2;
  uVar1 = 1;
  pbVar3 = param_1;
  pbVar4 = &UNK_00107d45;
  do {
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    in_CF = *pbVar3 < *pbVar4;
    in_ZF = *pbVar3 == *pbVar4;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
  } while (in_ZF);
  bVar5 = false;
  bVar7 = (!in_CF && !in_ZF) == in_CF;
  if (!bVar7) {
    lVar2 = 3;
    pbVar3 = param_1;
    pbVar4 = &UNK_00107d44;
    do {
      if (lVar2 == 0) break;
      lVar2 = lVar2 + -1;
      bVar5 = *pbVar3 < *pbVar4;
      bVar7 = *pbVar3 == *pbVar4;
      pbVar3 = pbVar3 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar7);
    bVar6 = false;
    bVar5 = (!bVar5 && !bVar7) == bVar5;
    if (!bVar5) {
      lVar2 = 3;
      pbVar3 = param_1;
      pbVar4 = &UNK_00107d47;
      do {
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        bVar6 = *pbVar3 < *pbVar4;
        bVar5 = *pbVar3 == *pbVar4;
        pbVar3 = pbVar3 + 1;
        pbVar4 = pbVar4 + 1;
      } while (bVar5);
      bVar7 = false;
      bVar5 = (!bVar6 && !bVar5) == bVar6;
      if (!bVar5) {
        lVar2 = 4;
        pbVar3 = param_1;
        pbVar4 = &UNK_00107d4a;
        do {
          if (lVar2 == 0) break;
          lVar2 = lVar2 + -1;
          bVar7 = *pbVar3 < *pbVar4;
          bVar5 = *pbVar3 == *pbVar4;
          pbVar3 = pbVar3 + 1;
          pbVar4 = pbVar4 + 1;
        } while (bVar5);
        bVar6 = false;
        bVar5 = (!bVar7 && !bVar5) == bVar7;
        if (!bVar5) {
          lVar2 = 4;
          pbVar3 = param_1;
          pbVar4 = &UNK_00107d4e;
          do {
            if (lVar2 == 0) break;
            lVar2 = lVar2 + -1;
            bVar6 = *pbVar3 < *pbVar4;
            bVar5 = *pbVar3 == *pbVar4;
            pbVar3 = pbVar3 + 1;
            pbVar4 = pbVar4 + 1;
          } while (bVar5);
          bVar7 = false;
          bVar5 = (!bVar6 && !bVar5) == bVar6;
          if (!bVar5) {
            lVar2 = 4;
            pbVar3 = param_1;
            pbVar4 = &UNK_00107d52;
            do {
              if (lVar2 == 0) break;
              lVar2 = lVar2 + -1;
              bVar7 = *pbVar3 < *pbVar4;
              bVar5 = *pbVar3 == *pbVar4;
              pbVar3 = pbVar3 + 1;
              pbVar4 = pbVar4 + 1;
            } while (bVar5);
            bVar6 = false;
            bVar5 = (!bVar7 && !bVar5) == bVar7;
            if (!bVar5) {
              lVar2 = 4;
              pbVar3 = param_1;
              pbVar4 = &UNK_00107d56;
              do {
                if (lVar2 == 0) break;
                lVar2 = lVar2 + -1;
                bVar6 = *pbVar3 < *pbVar4;
                bVar5 = *pbVar3 == *pbVar4;
                pbVar3 = pbVar3 + 1;
                pbVar4 = pbVar4 + 1;
              } while (bVar5);
              bVar7 = false;
              bVar5 = (!bVar6 && !bVar5) == bVar6;
              if (!bVar5) {
                lVar2 = 4;
                pbVar3 = param_1;
                pbVar4 = &UNK_00107d5a;
                do {
                  if (lVar2 == 0) break;
                  lVar2 = lVar2 + -1;
                  bVar7 = *pbVar3 < *pbVar4;
                  bVar5 = *pbVar3 == *pbVar4;
                  pbVar3 = pbVar3 + 1;
                  pbVar4 = pbVar4 + 1;
                } while (bVar5);
                bVar6 = false;
                bVar5 = (!bVar7 && !bVar5) == bVar7;
                if (!bVar5) {
                  lVar2 = 4;
                  pbVar3 = param_1;
                  pbVar4 = &UNK_00107d5e;
                  do {
                    if (lVar2 == 0) break;
                    lVar2 = lVar2 + -1;
                    bVar6 = *pbVar3 < *pbVar4;
                    bVar5 = *pbVar3 == *pbVar4;
                    pbVar3 = pbVar3 + 1;
                    pbVar4 = pbVar4 + 1;
                  } while (bVar5);
                  bVar7 = false;
                  bVar5 = (!bVar6 && !bVar5) == bVar6;
                  if (!bVar5) {
                    lVar2 = 4;
                    pbVar3 = param_1;
                    pbVar4 = &UNK_00107d62;
                    do {
                      if (lVar2 == 0) break;
                      lVar2 = lVar2 + -1;
                      bVar7 = *pbVar3 < *pbVar4;
                      bVar5 = *pbVar3 == *pbVar4;
                      pbVar3 = pbVar3 + 1;
                      pbVar4 = pbVar4 + 1;
                    } while (bVar5);
                    bVar6 = false;
                    bVar5 = (!bVar7 && !bVar5) == bVar7;
                    if (!bVar5) {
                      lVar2 = 4;
                      pbVar3 = param_1;
                      pbVar4 = &UNK_00107d66;
                      do {
                        if (lVar2 == 0) break;
                        lVar2 = lVar2 + -1;
                        bVar6 = *pbVar3 < *pbVar4;
                        bVar5 = *pbVar3 == *pbVar4;
                        pbVar3 = pbVar3 + 1;
                        pbVar4 = pbVar4 + 1;
                      } while (bVar5);
                      bVar7 = false;
                      bVar5 = (!bVar6 && !bVar5) == bVar6;
                      if (!bVar5) {
                        lVar2 = 4;
                        pbVar3 = &UNK_00107d6a;
                        do {
                          if (lVar2 == 0) break;
                          lVar2 = lVar2 + -1;
                          bVar7 = *param_1 < *pbVar3;
                          bVar5 = *param_1 == *pbVar3;
                          param_1 = param_1 + 1;
                          pbVar3 = pbVar3 + 1;
                        } while (bVar5);
                        uVar1 = (ulong)((!bVar7 && !bVar5) == bVar7);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}

