
undefined8
print_statfs(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,long *param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  
  switch(param_3) {
  case 0x53:
    lVar2 = param_6[9];
    if (lVar2 == 0) goto code_r0x00102ab9;
    goto code_r0x00102abd;
  case 0x54:
    lVar2 = *param_6;
    if (lVar2 == 0x2bad1dea) {
      puVar3 = &UNK_0010dbe6;
    }
    else {
      if (lVar2 < 0x2bad1deb) {
        if (lVar2 == 0xadf5) {
          puVar3 = &UNK_0010daa5;
        }
        else {
          if (lVar2 < 0xadf6) {
            if (lVar2 == 0x4244) {
              puVar3 = &UNK_0010dd26;
            }
            else {
              if (lVar2 < 0x4245) {
                if (lVar2 == 0x138f) {
                  puVar3 = &UNK_0010dc2e;
                }
                else {
                  if (lVar2 < 0x1390) {
                    puVar3 = &UNK_0010dc01;
                    if (lVar2 != 0x7c0) {
                      if (lVar2 < 0x7c1) {
                        puVar3 = &UNK_0010dcc0;
                        if ((lVar2 != 0x2f) && (puVar3 = &UNK_0010dac2, lVar2 != 0x187))
                        goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010db70;
                        if ((lVar2 != 0x137d) &&
                           ((puVar3 = &UNK_0010dc28, lVar2 != 0x137f &&
                            (puVar3 = &UNK_0010dd57, lVar2 != 0x1373)))) goto code_r0x00102b7d;
                      }
                    }
                  }
                  else {
                    puVar3 = &UNK_0010dc7c;
                    if (lVar2 != 0x3434) {
                      if (lVar2 < 0x3435) {
                        puVar3 = &UNK_0010dc3f;
                        if (((lVar2 != 0x2468) && (puVar3 = &UNK_0010dc48, lVar2 != 0x2478)) &&
                           (puVar3 = &UNK_0010db51, lVar2 != 0x1cd1)) goto code_r0x00102b7d;
                      }
                      else {
                        if (lVar2 != 0x4004) {
                          puVar3 = &UNK_0010db88;
                          if (lVar2 == 0x4006) goto code_r0x00102ba8;
                          if (lVar2 != 0x4000) goto code_r0x00102b7d;
                        }
code_r0x001035a9:
                        puVar3 = &UNK_0010dbf0;
                      }
                    }
                  }
                }
              }
              else {
                if (lVar2 == 0x5df5) {
                  puVar3 = &UNK_0010db6a;
                }
                else {
                  if (lVar2 < 0x5df6) {
                    puVar3 = &UNK_0010dc6a;
                    if (lVar2 != 0x4d44) {
                      if (lVar2 < 0x4d45) {
                        puVar3 = &UNK_0010dbb8;
                        if ((lVar2 != 0x482b) && (puVar3 = &UNK_0010dbbd, lVar2 != 0x4858))
                        goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010dd0c;
                        if ((lVar2 != 0x517b) &&
                           ((puVar3 = &UNK_0010dc70, lVar2 != 0x564c &&
                            (puVar3 = &UNK_0010dc5c, lVar2 != 0x4d5a)))) goto code_r0x00102b7d;
                      }
                    }
                  }
                  else {
                    if (lVar2 == 0x9660) goto code_r0x001035a9;
                    if (lVar2 < 0x9661) {
                      puVar3 = &UNK_0010dcd7;
                      if (((lVar2 != 0x7275) && (puVar3 = &UNK_0010dc06, lVar2 != 0x72b6)) &&
                         (puVar3 = &UNK_0010dca7, lVar2 != 0x6969)) goto code_r0x00102b7d;
                    }
                    else {
                      puVar3 = &UNK_0010dc8c;
                      if (((lVar2 != 0x9fa1) && (puVar3 = &UNK_0010dd54, lVar2 != 0x9fa2)) &&
                         (puVar3 = &UNK_0010dcb2, lVar2 != 0x9fa0)) goto code_r0x00102b7d;
                    }
                  }
                }
              }
            }
          }
          else {
            if (lVar2 == 0x12ff7b5) {
              puVar3 = &UNK_0010dd36;
            }
            else {
              if (lVar2 < 0x12ff7b6) {
                if (lVar2 == 0x414a53) {
                  puVar3 = &UNK_0010dad9;
                }
                else {
                  if (lVar2 < 0x414a54) {
                    puVar3 = &UNK_0010db74;
                    if (lVar2 != 0xef53) {
                      if (lVar2 < 0xef54) {
                        puVar3 = &UNK_0010daaa;
                        if ((lVar2 != 0xadff) && (puVar3 = &UNK_0010db7e, lVar2 != 0xef51))
                        goto code_r0x00102b7d;
                      }
                      else {
                        if (lVar2 == 0x11954) {
code_r0x00102e82:
                          puVar3 = &UNK_0010dabe;
                        }
                        else {
                          puVar3 = &UNK_0010db06;
                          if ((lVar2 != 0x27e0eb) && (puVar3 = &UNK_0010db58, lVar2 != 0xf15f))
                          goto code_r0x00102b7d;
                        }
                      }
                    }
                  }
                  else {
                    puVar3 = &UNK_0010dd5d;
                    if (lVar2 != 0x1021997) {
                      if (lVar2 < 0x1021998) {
                        puVar3 = &UNK_0010db01;
                        if (((lVar2 != 0xc36400) && (puVar3 = &UNK_0010dd3c, lVar2 != 0x1021994)) &&
                           (puVar3 = &UNK_0010dbc2, lVar2 != 0xc0ffee)) goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010dd85;
                        if (((lVar2 != 0x12fd16d) && (puVar3 = &UNK_0010dd7f, lVar2 != 0x12ff7b4))
                           && (puVar3 = &UNK_0010dbaa, lVar2 != 0x1161970)) goto code_r0x00102b7d;
                      }
                    }
                  }
                }
              }
              else {
                if (lVar2 == 0x11307854) {
                  puVar3 = &UNK_0010dbd8;
                }
                else {
                  if (lVar2 < 0x11307855) {
                    puVar3 = &UNK_0010dcca;
                    if (lVar2 != 0x7655821) {
                      if (lVar2 < 0x7655822) {
                        puVar3 = &UNK_0010db23;
                        if (((lVar2 != 0x12ff7b7) && (puVar3 = &UNK_0010dd30, 0x12ff7b6 < lVar2)) &&
                           (puVar3 = &UNK_0010dbe0, lVar2 != 0x13111a8)) goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010dba2;
                        if (((lVar2 != 0xbad1dea) && (puVar3 = &UNK_0010dc1c, lVar2 != 0xbd00bd0))
                           && (puVar3 = &UNK_0010daaf, lVar2 != 0x9041934)) goto code_r0x00102b7d;
                      }
                    }
                  }
                  else {
                    puVar3 = &UNK_0010db8c;
                    if (lVar2 != 0x19830326) {
                      if (lVar2 < 0x19830327) {
                        puVar3 = &UNK_0010dd50;
                        if (((lVar2 != 0x15013346) && (puVar3 = &UNK_0010dc63, lVar2 != 0x19800202))
                           && (puVar3 = &UNK_0010dac9, lVar2 != 0x13661366)) goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010dd4a;
                        if (((lVar2 != 0x24051905) && (puVar3 = &UNK_0010db30, lVar2 != 0x28cd3d45))
                           && (puVar3 = &UNK_0010dbd4, lVar2 != 0x1badface)) goto code_r0x00102b7d;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (lVar2 == 0x65735543) {
          puVar3 = &UNK_0010db9a;
        }
        else {
          if (lVar2 < 0x65735544) {
            if (lVar2 == 0x534f434b) {
              puVar3 = &UNK_0010dd1a;
            }
            else {
              if (lVar2 < 0x534f434c) {
                if (lVar2 == 0x45584653) {
                  puVar3 = &UNK_0010dba5;
                }
                else {
                  if (lVar2 < 0x45584654) {
                    puVar3 = &UNK_0010dad8;
                    if (lVar2 != 0x42465331) {
                      if (lVar2 < 0x42465332) {
                        puVar3 = &UNK_0010dd6f;
                        if ((lVar2 != 0x2fc12fc1) && (puVar3 = &UNK_0010dc0c, lVar2 != 0x3153464a))
                        goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010dd04;
                        if ((lVar2 != 0x43415d53) &&
                           ((puVar3 = &UNK_0010db37, lVar2 != 0x453dcd28 &&
                            (puVar3 = &UNK_0010dae4, lVar2 != 0x42494e4d)))) goto code_r0x00102b7d;
                      }
                    }
                  }
                  else {
                    puVar3 = &UNK_0010dc23;
                    if (lVar2 != 0x5346314d) {
                      if (lVar2 < 0x5346314e) {
                        puVar3 = &UNK_0010dce1;
                        if (((lVar2 != 0x50495045) && (puVar3 = &UNK_0010dcce, lVar2 != 0x52654973))
                           && (puVar3 = &UNK_0010dbb3, lVar2 != 0x47504653)) {
code_r0x00102b7d:
                          func_0x00102220(buf_7290,1,0x1d,&UNK_0010dd89);
                          puVar3 = buf_7290;
                        }
                      }
                      else {
                        puVar3 = &UNK_0010dd73;
                        if (((lVar2 != 0x53464846) && (puVar3 = &UNK_0010dc87, lVar2 != 0x5346544e))
                           && (puVar3 = &UNK_0010dc12, lVar2 != 0x5346414f)) goto code_r0x00102b7d;
                      }
                    }
                  }
                }
              }
              else {
                if (lVar2 == 0x6165676c) {
                  puVar3 = &UNK_0010dcb7;
                }
                else {
                  if (lVar2 < 0x6165676d) {
                    puVar3 = &UNK_0010db45;
                    if (lVar2 != 0x58465342) {
                      if (lVar2 < 0x58465343) {
                        puVar3 = &UNK_0010dd6e;
                        if ((lVar2 != 0x565a4653) && (puVar3 = &UNK_0010dbf6, lVar2 != 0x58295829))
                        {
                          if (lVar2 == 0x54190100) goto code_r0x00102e82;
                          goto code_r0x00102b7d;
                        }
                      }
                      else {
                        puVar3 = &UNK_0010dce8;
                        if (((lVar2 != 0x5dca2df5) && (puVar3 = &UNK_0010daa0, lVar2 != 0x61636673))
                           && (puVar3 = &UNK_0010da9b, lVar2 != 0x5a3c69f0)) goto code_r0x00102b7d;
                      }
                    }
                  }
                  else {
                    puVar3 = &UNK_0010dd2a;
                    if (lVar2 != 0x62656572) {
                      if (lVar2 < 0x62656573) {
                        puVar3 = &UNK_0010dd56;
                        if (((lVar2 != 0x62646576) && (puVar3 = &UNK_0010db27, lVar2 != 0x62656570))
                           && (puVar3 = &UNK_0010dabd, lVar2 != 0x61756673)) goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010db49;
                        if (((lVar2 != 0x64626720) && (puVar3 = &UNK_0010db43, lVar2 != 0x64646178))
                           && (puVar3 = &UNK_0010db0f, lVar2 != 0x63677270)) goto code_r0x00102b7d;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            if (lVar2 == 0x858458f6) {
              puVar3 = &UNK_0010db31;
            }
            else {
              if (lVar2 < 0x858458f7) {
                if (lVar2 == 0x73636673) {
                  puVar3 = &UNK_0010dcf1;
                }
                else {
                  if (lVar2 < 0x73636674) {
                    puVar3 = &UNK_0010dcc5;
                    if (lVar2 != 0x68191122) {
                      if (lVar2 < 0x68191123) {
                        puVar3 = &UNK_0010db92;
                        if ((lVar2 != 0x65735546) && (puVar3 = &UNK_0010dcdd, lVar2 != 0x67596969))
                        goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010dc77;
                        if ((lVar2 != 0x6e667364) &&
                           ((puVar3 = &UNK_0010dc82, lVar2 != 0x6e736673 &&
                            (puVar3 = &UNK_0010dc10, lVar2 != 0x6b414653)))) goto code_r0x00102b7d;
                      }
                    }
                  }
                  else {
                    puVar3 = &UNK_0010dc95;
                    if (lVar2 != 0x7461636f) {
                      if (lVar2 < 0x74616370) {
                        puVar3 = &UNK_0010daf6;
                        if (((lVar2 != 0x73727279) && (puVar3 = &UNK_0010db1e, lVar2 != 0x73757245))
                           && (puVar3 = &UNK_0010dd21, lVar2 != 0x73717368)) goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010dc9b;
                        if (((lVar2 != 0x794c7630) && (puVar3 = &UNK_0010dcab, lVar2 != 0x7c7c6673))
                           && (puVar3 = &UNK_0010dd42, lVar2 != 0x74726163)) goto code_r0x00102b7d;
                      }
                    }
                  }
                }
              }
              else {
                if (lVar2 == 0xc97e8168) {
                  puVar3 = &UNK_0010dc16;
                }
                else {
                  if (lVar2 < 0xc97e8169) {
                    puVar3 = &UNK_0010dca5;
                    if (lVar2 != 0xaad7aaea) {
                      if (lVar2 < 0xaad7aaeb) {
                        puVar3 = &UNK_0010dbce;
                        if (((lVar2 != 0x958458f6) && (puVar3 = &UNK_0010dd69, lVar2 != 0xa501fcf5))
                           && (puVar3 = &UNK_0010daf0, lVar2 != 0x9123683e)) goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010dd62;
                        if (((lVar2 != 0xbacbacbc) && (puVar3 = &UNK_0010dd15, lVar2 != 0xbeefdead))
                           && (puVar3 = &UNK_0010dd79, lVar2 != 0xabba1974)) goto code_r0x00102b7d;
                      }
                    }
                  }
                  else {
                    puVar3 = &UNK_0010dcfc;
                    if (lVar2 != 0xf97cff8c) {
                      if (lVar2 < 0xf97cff8d) {
                        puVar3 = &UNK_0010db61;
                        if (((lVar2 != 0xde5e81e4) && (puVar3 = &UNK_0010db83, lVar2 != 0xf2f52010))
                           && (puVar3 = &UNK_0010dadd, lVar2 != 0xcafe4a11)) goto code_r0x00102b7d;
                      }
                      else {
                        puVar3 = &UNK_0010dd10;
                        if (((lVar2 != 0xfe534d42) && (puVar3 = &UNK_0010db19, lVar2 != 0xff534d42))
                           && (puVar3 = &UNK_0010dbc9, lVar2 != 0xf995e849)) goto code_r0x00102b7d;
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
code_r0x00102ba8:
    out_string(param_1,param_2,puVar3);
    break;
  default:
    puVar1 = *(undefined **)(stdout + 0x28);
    if (puVar1 < *(undefined **)(stdout + 0x30)) {
      *(undefined **)(stdout + 0x28) = puVar1 + 1;
      *puVar1 = 0x3f;
    }
    else {
      func_0x00101ed0(stdout,0x3f);
    }
    break;
  case 0x61:
    out_int(param_1,param_2,param_6[4]);
    break;
  case 0x62:
    out_int(param_1,param_2,param_6[2]);
    break;
  case 99:
    lVar2 = param_6[5];
    goto code_r0x00102abd;
  case 100:
    out_int(param_1,param_2,param_6[6]);
    break;
  case 0x66:
    out_int(param_1,param_2,param_6[3]);
    break;
  case 0x69:
    out_uint_x(param_1,param_2,
               CONCAT44(*(undefined4 *)(param_6 + 7),*(undefined4 *)((long)param_6 + 0x3c)));
    break;
  case 0x6c:
    out_uint(param_1,param_2,param_6[8]);
    break;
  case 0x6e:
    out_string(param_1,param_2,param_5);
    break;
  case 0x73:
code_r0x00102ab9:
    lVar2 = param_6[1];
code_r0x00102abd:
    out_uint(param_1,param_2,lVar2);
    break;
  case 0x74:
    out_uint_x(param_1,param_2,*param_6);
  }
  return 0;
}

