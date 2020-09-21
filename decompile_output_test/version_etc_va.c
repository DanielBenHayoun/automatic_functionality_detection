
void version_etc_va(void)

{
  uint uVar1;
  long lVar2;
  uint *in_R8;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined auStack104 [88];
  long lStack16;
  
  puVar3 = auStack104;
  lVar4 = 0;
  lStack16 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    uVar1 = *in_R8;
    if (0x2f < uVar1) goto code_r0x0010cc8a;
    plVar5 = (long *)((ulong)uVar1 + *(long *)(in_R8 + 4));
    *in_R8 = uVar1 + 8;
    while ((lVar2 = *plVar5, *(long *)(puVar3 + lVar4 * 8) = lVar2, lVar2 == 0 ||
           (lVar4 = lVar4 + 1, lVar4 == 10))) {
      version_etc_arn();
      if (lStack16 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      func_0x00102850();
code_r0x0010cc8a:
      plVar5 = *(long **)(in_R8 + 2);
      *(long **)(in_R8 + 2) = plVar5 + 1;
    }
  } while( true );
}

