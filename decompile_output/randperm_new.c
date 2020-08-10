
undefined8 * randperm_new(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_RBX;
  ulong uVar5;
  ulong *puVar6;
  ulong unaff_R12;
  ulong uVar7;
  ulong *puVar8;
  long in_FS_OFFSET;
  long lStack144;
  ulong uStack104;
  undefined8 uStack96;
  ulong uStack88;
  undefined8 uStack80;
  long lStack64;
  
  lStack64 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    unaff_RBX = (undefined8 *)0x0;
    param_2 = unaff_R12;
  }
  else {
    if (param_2 == 1) {
      unaff_RBX = (undefined8 *)xmalloc(8);
      uVar3 = randint_genmax(param_1,param_3 - 1);
      *unaff_RBX = uVar3;
    }
    else {
      if ((param_3 < 0x20000) || (param_3 / param_2 < 0x20)) {
        if (SUB168(ZEXT816(8) * ZEXT816(param_3) >> 0x40,0) != 0) goto code_r0x0010584c;
        unaff_RBX = (undefined8 *)xmalloc(param_3 * 8);
        if (param_3 != 0) {
          uVar5 = 0;
          do {
            unaff_RBX[uVar5] = uVar5;
            uVar5 = uVar5 + 1;
          } while (param_3 != uVar5);
        }
        bVar2 = false;
        lStack144 = 0;
      }
      else {
        lStack144 = hash_initialize(param_2 * 2,0,sparse_hash_,sparse_cmp_,PTR_free_0030cfc0);
        if (lStack144 == 0) goto code_r0x0010584c;
        if (SUB168(ZEXT816(8) * ZEXT816(param_2) >> 0x40,0) != 0) goto code_r0x0010584c;
        unaff_RBX = (undefined8 *)xmalloc(param_2 * 8);
        bVar2 = true;
      }
      uVar5 = 0;
      do {
        while( true ) {
          lVar4 = randint_genmax(param_1,(param_3 - 1) - uVar5);
          uVar7 = lVar4 + uVar5;
          if (!bVar2) break;
          uStack80 = 0;
          uStack88 = uVar5;
          puVar8 = (ulong *)hash_delete(lStack144,&uStack88);
          uStack96 = 0;
          uStack104 = uVar7;
          puVar6 = (ulong *)hash_delete(lStack144,&uStack104);
          if (puVar8 == (ulong *)0x0) {
            puVar8 = (ulong *)xmalloc(0x10);
            puVar8[1] = uVar5;
            *puVar8 = uVar5;
          }
          if (puVar6 == (ulong *)0x0) {
            puVar6 = (ulong *)xmalloc(0x10);
            puVar6[1] = uVar7;
            *puVar6 = uVar7;
          }
          else {
            uVar7 = puVar6[1];
          }
          uVar1 = puVar8[1];
          puVar8[1] = uVar7;
          puVar6[1] = uVar1;
          lVar4 = hash_insert(lStack144,puVar8);
          if (lVar4 == 0) goto code_r0x0010584c;
          lVar4 = hash_insert(lStack144,puVar6);
          if (lVar4 == 0) goto code_r0x0010584c;
          unaff_RBX[uVar5] = puVar8[1];
          uVar5 = uVar5 + 1;
          if (param_2 <= uVar5) goto code_r0x00105799;
        }
        uVar3 = unaff_RBX[uVar5];
        unaff_RBX[uVar5] = unaff_RBX[uVar7];
        uVar5 = uVar5 + 1;
        unaff_RBX[uVar7] = uVar3;
      } while (uVar5 < param_2);
code_r0x00105799:
      if (!bVar2) {
        bVar2 = false;
        lVar4 = SUB168(ZEXT816(8) * ZEXT816(param_2),0);
        if (SUB168(ZEXT816(8) * ZEXT816(param_2) >> 0x40,0) != 0) goto code_r0x00105851;
        goto code_r0x001057b8;
      }
      hash_free(lStack144);
    }
  }
  while (lStack64 != *(long *)(in_FS_OFFSET + 0x28)) {
    func_0x00101ad0();
code_r0x0010584c:
    do {
      lVar4 = xalloc_die();
code_r0x00105851:
      bVar2 = true;
code_r0x001057b8:
    } while ((lVar4 < 0) || (bVar2));
    unaff_RBX = (undefined8 *)xrealloc(unaff_RBX,param_2 * 8);
  }
  return unaff_RBX;
}

