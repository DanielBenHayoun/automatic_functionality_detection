
ulong triple_hash(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = hash_pjw(*param_1);
  return (uVar1 ^ param_1[1]) % param_2;
}

