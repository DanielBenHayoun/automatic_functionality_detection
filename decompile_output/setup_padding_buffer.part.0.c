
void setup_padding_buffer_part_0(long param_1)

{
  padding_buffer_size = param_1 + 1;
  padding_buffer = xrealloc(padding_buffer);
  return;
}

