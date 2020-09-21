
undefined8
build_charclass_isra_29
          (long param_1,long param_2,long *param_3,ulong *param_4,ulong *param_5,byte *param_6,
          ulong param_7)

{
  ulong *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  bVar10 = false;
  bVar12 = (param_7 & 0x400000) == 0;
  if (!bVar12) {
    lVar5 = 6;
    pbVar8 = param_6;
    pbVar9 = &UNK_001175f0;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar10 = *pbVar8 < *pbVar9;
      bVar12 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    } while (bVar12);
    bVar11 = false;
    bVar10 = (!bVar10 && !bVar12) == bVar10;
    if (!bVar10) {
      lVar5 = 6;
      pbVar8 = param_6;
      pbVar9 = &UNK_001175f6;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar11 = *pbVar8 < *pbVar9;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar10);
      uVar6 = *param_4;
      if ((!bVar11 && !bVar10) == bVar11) {
        param_6 = &UNK_001175ea;
      }
      bVar10 = *param_5 < uVar6;
      bVar12 = *param_5 == uVar6;
      lVar5 = *param_3;
      goto joined_r0x0010cf22;
    }
    param_6 = &UNK_001175ea;
  }
  uVar6 = *param_4;
  bVar10 = *param_5 < uVar6;
  bVar12 = *param_5 == uVar6;
  lVar5 = *param_3;
joined_r0x0010cf22:
  if (bVar12) {
    uVar6 = uVar6 * 2 + 1;
    lVar5 = func_0x00101e00(lVar5,uVar6 * 8);
    bVar10 = false;
    bVar12 = lVar5 == 0;
    if (bVar12) {
      return 0xc;
    }
    *param_3 = lVar5;
    *param_5 = uVar6;
    uVar6 = *param_4;
  }
  *param_4 = uVar6 + 1;
  uVar3 = func_0x00101d10(param_6);
  *(undefined8 *)(lVar5 + uVar6 * 8) = uVar3;
  lVar5 = 6;
  pbVar8 = param_6;
  pbVar9 = &UNK_001175fc;
  do {
    if (lVar5 == 0) break;
    lVar5 = lVar5 + -1;
    bVar10 = *pbVar8 < *pbVar9;
    bVar12 = *pbVar8 == *pbVar9;
    pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
    pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
  } while (bVar12);
  bVar11 = false;
  bVar10 = (!bVar10 && !bVar12) == bVar10;
  if (bVar10) {
    plVar4 = (long *)func_0x00101f50();
    lVar7 = 0;
    lVar5 = *plVar4;
    if (param_1 == 0) {
      do {
        if ((*(byte *)(lVar5 + lVar7 * 2) & 8) != 0) {
          puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
          *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x100);
    }
    else {
      lVar7 = 0;
      do {
        if ((*(byte *)(lVar5 + lVar7 * 2) & 8) != 0) {
          puVar1 = (ulong *)(param_2 + (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) & 0x18));
          *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x100);
    }
  }
  else {
    lVar5 = 6;
    pbVar8 = param_6;
    pbVar9 = &UNK_00117602;
    do {
      if (lVar5 == 0) break;
      lVar5 = lVar5 + -1;
      bVar11 = *pbVar8 < *pbVar9;
      bVar10 = *pbVar8 == *pbVar9;
      pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
      pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
    } while (bVar10);
    bVar12 = false;
    bVar10 = (!bVar11 && !bVar10) == bVar11;
    if (bVar10) {
      plVar4 = (long *)func_0x00101f50();
      lVar7 = 0;
      lVar5 = *plVar4;
      if (param_1 == 0) {
        do {
          if ((*(byte *)(lVar5 + lVar7 * 2) & 2) != 0) {
            puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
            *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x100);
      }
      else {
        lVar7 = 0;
        do {
          if ((*(byte *)(lVar5 + lVar7 * 2) & 2) != 0) {
            puVar1 = (ulong *)(param_2 + (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) & 0x18));
            *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x100);
      }
    }
    else {
      lVar5 = 6;
      pbVar8 = param_6;
      pbVar9 = &UNK_001175f6;
      do {
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        bVar12 = *pbVar8 < *pbVar9;
        bVar10 = *pbVar8 == *pbVar9;
        pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
        pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
      } while (bVar10);
      bVar11 = false;
      bVar10 = (!bVar12 && !bVar10) == bVar12;
      if (bVar10) {
        plVar4 = (long *)func_0x00101f50();
        lVar7 = 0;
        lVar5 = *plVar4;
        if (param_1 == 0) {
          do {
            if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 2) != 0) {
              puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
              *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x100);
        }
        else {
          lVar7 = 0;
          do {
            if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 2) != 0) {
              puVar1 = (ulong *)(param_2 + (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) & 0x18));
              *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0x100);
        }
      }
      else {
        lVar5 = 6;
        pbVar8 = param_6;
        pbVar9 = &UNK_00117608;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          bVar11 = *pbVar8 < *pbVar9;
          bVar10 = *pbVar8 == *pbVar9;
          pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
          pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
        } while (bVar10);
        bVar12 = false;
        bVar10 = (!bVar11 && !bVar10) == bVar11;
        if (bVar10) {
          plVar4 = (long *)func_0x00101f50();
          lVar7 = 0;
          lVar5 = *plVar4;
          if (param_1 == 0) {
            do {
              if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 0x20) != 0) {
                puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
                *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 != 0x100);
          }
          else {
            lVar7 = 0;
            do {
              if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 0x20) != 0) {
                puVar1 = (ulong *)(param_2 + (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) & 0x18)
                                  );
                *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 != 0x100);
          }
        }
        else {
          lVar5 = 6;
          pbVar8 = param_6;
          pbVar9 = &UNK_001175ea;
          do {
            if (lVar5 == 0) break;
            lVar5 = lVar5 + -1;
            bVar12 = *pbVar8 < *pbVar9;
            bVar10 = *pbVar8 == *pbVar9;
            pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
            pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
          } while (bVar10);
          bVar11 = false;
          bVar10 = (!bVar12 && !bVar10) == bVar12;
          if (bVar10) {
            plVar4 = (long *)func_0x00101f50();
            lVar7 = 0;
            lVar5 = *plVar4;
            if (param_1 == 0) {
              do {
                if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 4) != 0) {
                  puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
                  *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                }
                lVar7 = lVar7 + 1;
              } while (lVar7 != 0x100);
            }
            else {
              lVar7 = 0;
              do {
                if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 4) != 0) {
                  puVar1 = (ulong *)(param_2 +
                                    (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) & 0x18));
                  *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
                }
                lVar7 = lVar7 + 1;
              } while (lVar7 != 0x100);
            }
          }
          else {
            lVar5 = 6;
            pbVar8 = param_6;
            pbVar9 = &UNK_00117627;
            do {
              if (lVar5 == 0) break;
              lVar5 = lVar5 + -1;
              bVar11 = *pbVar8 < *pbVar9;
              bVar10 = *pbVar8 == *pbVar9;
              pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
              pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
            } while (bVar10);
            bVar12 = false;
            bVar10 = (!bVar11 && !bVar10) == bVar11;
            if (bVar10) {
              plVar4 = (long *)func_0x00101f50();
              lVar7 = 0;
              lVar5 = *plVar4;
              if (param_1 == 0) {
                do {
                  if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 8) != 0) {
                    puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
                    *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                  }
                  lVar7 = lVar7 + 1;
                } while (lVar7 != 0x100);
              }
              else {
                lVar7 = 0;
                do {
                  if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 8) != 0) {
                    puVar1 = (ulong *)(param_2 +
                                      (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) & 0x18));
                    *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
                  }
                  lVar7 = lVar7 + 1;
                } while (lVar7 != 0x100);
              }
            }
            else {
              lVar5 = 6;
              pbVar8 = param_6;
              pbVar9 = &UNK_0011760e;
              do {
                if (lVar5 == 0) break;
                lVar5 = lVar5 + -1;
                bVar12 = *pbVar8 < *pbVar9;
                bVar10 = *pbVar8 == *pbVar9;
                pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
                pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
              } while (bVar10);
              bVar11 = false;
              bVar10 = (!bVar12 && !bVar10) == bVar12;
              if (bVar10) {
                plVar4 = (long *)func_0x00101f50();
                lVar7 = 0;
                lVar5 = *plVar4;
                if (param_1 == 0) {
                  do {
                    if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 0x40) != 0) {
                      puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
                      *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                    }
                    lVar7 = lVar7 + 1;
                  } while (lVar7 != 0x100);
                }
                else {
                  lVar7 = 0;
                  do {
                    if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 0x40) != 0) {
                      puVar1 = (ulong *)(param_2 +
                                        (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) & 0x18));
                      *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
                    }
                    lVar7 = lVar7 + 1;
                  } while (lVar7 != 0x100);
                }
              }
              else {
                lVar5 = 6;
                pbVar8 = param_6;
                pbVar9 = &UNK_001175f0;
                do {
                  if (lVar5 == 0) break;
                  lVar5 = lVar5 + -1;
                  bVar11 = *pbVar8 < *pbVar9;
                  bVar10 = *pbVar8 == *pbVar9;
                  pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
                  pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
                } while (bVar10);
                bVar12 = false;
                bVar10 = (!bVar11 && !bVar10) == bVar11;
                if (bVar10) {
                  plVar4 = (long *)func_0x00101f50();
                  lVar7 = 0;
                  lVar5 = *plVar4;
                  if (param_1 == 0) {
                    do {
                      if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 1) != 0) {
                        puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
                        *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                      }
                      lVar7 = lVar7 + 1;
                    } while (lVar7 != 0x100);
                  }
                  else {
                    lVar7 = 0;
                    do {
                      if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 1) != 0) {
                        puVar1 = (ulong *)(param_2 +
                                          (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) & 0x18));
                        *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
                      }
                      lVar7 = lVar7 + 1;
                    } while (lVar7 != 0x100);
                  }
                }
                else {
                  lVar5 = 6;
                  pbVar8 = param_6;
                  pbVar9 = &UNK_00117614;
                  do {
                    if (lVar5 == 0) break;
                    lVar5 = lVar5 + -1;
                    bVar12 = *pbVar8 < *pbVar9;
                    bVar10 = *pbVar8 == *pbVar9;
                    pbVar8 = pbVar8 + (ulong)bVar13 * -2 + 1;
                    pbVar9 = pbVar9 + (ulong)bVar13 * -2 + 1;
                  } while (bVar10);
                  if ((!bVar12 && !bVar10) == bVar12) {
                    plVar4 = (long *)func_0x00101f50();
                    lVar7 = 0;
                    lVar5 = *plVar4;
                    if (param_1 == 0) {
                      do {
                        if ((*(byte *)(lVar5 + lVar7 * 2) & 1) != 0) {
                          puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
                          *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                        }
                        lVar7 = lVar7 + 1;
                      } while (lVar7 != 0x100);
                    }
                    else {
                      lVar7 = 0;
                      do {
                        if ((*(byte *)(lVar5 + lVar7 * 2) & 1) != 0) {
                          puVar1 = (ulong *)(param_2 +
                                            (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) & 0x18))
                          ;
                          *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
                        }
                        lVar7 = lVar7 + 1;
                      } while (lVar7 != 0x100);
                    }
                  }
                  else {
                    iVar2 = func_0x00101d40(param_6,&UNK_0011761a);
                    if (iVar2 == 0) {
                      plVar4 = (long *)func_0x00101f50();
                      lVar7 = 0;
                      lVar5 = *plVar4;
                      if (param_1 == 0) {
                        do {
                          if (*(short *)(lVar5 + lVar7 * 2) < 0) {
                            puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
                            *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                          }
                          lVar7 = lVar7 + 1;
                        } while (lVar7 != 0x100);
                      }
                      else {
                        lVar7 = 0;
                        do {
                          if (*(short *)(lVar5 + lVar7 * 2) < 0) {
                            puVar1 = (ulong *)(param_2 +
                                              (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) & 0x18
                                                     ));
                            *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
                          }
                          lVar7 = lVar7 + 1;
                        } while (lVar7 != 0x100);
                      }
                    }
                    else {
                      iVar2 = func_0x00101d40(param_6,&UNK_00117620);
                      if (iVar2 == 0) {
                        plVar4 = (long *)func_0x00101f50();
                        lVar7 = 0;
                        lVar5 = *plVar4;
                        if (param_1 == 0) {
                          do {
                            if ((*(byte *)(lVar5 + lVar7 * 2) & 4) != 0) {
                              puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
                              *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                            }
                            lVar7 = lVar7 + 1;
                          } while (lVar7 != 0x100);
                        }
                        else {
                          lVar7 = 0;
                          do {
                            if ((*(byte *)(lVar5 + lVar7 * 2) & 4) != 0) {
                              puVar1 = (ulong *)(param_2 +
                                                (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) &
                                                       0x18));
                              *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
                            }
                            lVar7 = lVar7 + 1;
                          } while (lVar7 != 0x100);
                        }
                      }
                      else {
                        iVar2 = func_0x00101d40(param_6,&UNK_00117626);
                        if (iVar2 != 0) {
                          return 4;
                        }
                        plVar4 = (long *)func_0x00101f50();
                        lVar7 = 0;
                        lVar5 = *plVar4;
                        if (param_1 == 0) {
                          do {
                            if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 0x10) != 0) {
                              puVar1 = (ulong *)(param_2 + (lVar7 >> 6) * 8);
                              *puVar1 = *puVar1 | 1 << ((byte)lVar7 & 0x3f);
                            }
                            lVar7 = lVar7 + 1;
                          } while (lVar7 != 0x100);
                        }
                        else {
                          lVar7 = 0;
                          do {
                            if ((*(byte *)(lVar5 + 1 + lVar7 * 2) & 0x10) != 0) {
                              puVar1 = (ulong *)(param_2 +
                                                (ulong)((uint)(*(byte *)(param_1 + lVar7) >> 3) &
                                                       0x18));
                              *puVar1 = *puVar1 | 1 << (*(byte *)(param_1 + lVar7) & 0x3f);
                            }
                            lVar7 = lVar7 + 1;
                          } while (lVar7 != 0x100);
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
  }
  return 0;
}

