
void queue_directory(long param_1,long param_2,undefined param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)xmalloc(0x20);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = xstrdup(param_2);
  }
  puVar1[1] = uVar2;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = xstrdup(param_1);
  }
  *puVar1 = uVar2;
  *(undefined *)(puVar1 + 2) = param_3;
  *(undefined8 **)(puVar1 + 3) = pending_dirs;
  pending_dirs = puVar1;
  return;
}

