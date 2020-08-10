
void alloc_table_row(void)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  
  nrows = nrows + 1;
  lVar3 = SUB168(ZEXT816(8) * ZEXT816(nrows),0);
  if (SUB168(ZEXT816(8) * ZEXT816(nrows) >> 0x40,0) != 0) goto code_r0x00103e42;
  bVar2 = false;
  do {
    if ((-1 < lVar3) && (!bVar2)) {
      table = xrealloc();
      lVar3 = table + -8;
      lVar1 = nrows * 8;
      if (SUB168(ZEXT816(8) * ZEXT816(ncolumns) >> 0x40,0) == 0) {
        uVar4 = xmalloc(ncolumns << 3);
        *(undefined8 *)(lVar3 + lVar1) = uVar4;
        return;
      }
    }
    lVar3 = xalloc_die();
code_r0x00103e42:
    bVar2 = true;
  } while( true );
}

