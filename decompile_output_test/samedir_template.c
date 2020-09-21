
long samedir_template(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = last_component();
  if ((0x100 < (lVar1 - param_1) + 9U) && (param_2 = func_0x001020f0(), param_2 == 0)) {
    return 0;
  }
  puVar2 = (undefined8 *)func_0x00102190(param_2,param_1,lVar1 - param_1);
  *(undefined *)(puVar2 + 1) = 0;
  *puVar2 = 0x5858585858587543;
  return param_2;
}

