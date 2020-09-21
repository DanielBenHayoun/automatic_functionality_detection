
void _init(void)

{
  call_gmon_start();
  frame_dummy();
  __do_global_ctors_aux();
  return;
}

