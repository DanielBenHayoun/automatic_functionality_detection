
byte * make_printable_str(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  byte bStack69;
  undefined uStack68;
  long lStack64;
  
  pbVar7 = param_2 + 1;
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = SUB168(ZEXT816(4) * ZEXT816(pbVar7),0);
  if (SUB168(ZEXT816(4) * ZEXT816(pbVar7) >> 0x40,0) != 0) goto code_r0x00102a44;
  bVar2 = false;
  do {
    if ((-1 < lVar3) && (!bVar2)) {
      pbVar7 = (byte *)((long)pbVar7 << 2);
      pbVar4 = (byte *)xmalloc(pbVar7);
      if (param_2 != (byte *)0x0) {
        param_2 = param_2 + (long)param_1;
        pbVar6 = pbVar4;
        do {
          pbVar7 = pbVar6;
          bVar1 = *param_1;
          if (bVar1 == 10) {
            pbVar6 = &UNK_00107015;
          }
          else {
            if ((char)bVar1 < '\v') {
              pbVar6 = &UNK_0010700f;
              if (((bVar1 != 8) && (pbVar6 = &UNK_0010701b, (char)bVar1 < '\t')) &&
                 (pbVar6 = &UNK_0010700c, bVar1 != 7)) {
code_r0x001029a3:
                plVar5 = (long *)func_0x001018e0();
                if ((*(byte *)(*plVar5 + 1 + (ulong)bVar1 * 2) & 0x40) == 0) {
                  pbVar6 = &bStack69;
                  func_0x001018f0(pbVar6,1,5,&UNK_00107004);
                }
                else {
                  uStack68 = 0;
                  pbVar6 = &bStack69;
                  bStack69 = bVar1;
                }
              }
            }
            else {
              pbVar6 = &UNK_00107012;
              if ((((bVar1 != 0xc) && (pbVar6 = &UNK_0010701e, '\v' < (char)bVar1)) &&
                  (pbVar6 = &UNK_00107018, bVar1 != 0xd)) && (pbVar6 = &UNK_0010700a, bVar1 != 0x5c)
                 ) goto code_r0x001029a3;
            }
          }
          param_1 = param_1 + 1;
          pbVar6 = (byte *)func_0x00101680(pbVar7,pbVar6);
        } while (param_2 != param_1);
      }
      if (lStack64 == *(long *)(in_FS_OFFSET + 0x28)) {
        return pbVar4;
      }
      func_0x001016c0();
    }
    lVar3 = xalloc_die();
code_r0x00102a44:
    bVar2 = true;
  } while( true );
}

