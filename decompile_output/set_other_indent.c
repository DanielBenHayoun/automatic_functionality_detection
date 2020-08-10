
void set_other_indent(char param_1)

{
  if (split != '\0') {
    other_indent = first_indent;
    return;
  }
  if (crown != '\0') {
    other_indent = in_column;
    if (param_1 == '\0') {
      other_indent = first_indent;
    }
    return;
  }
  if (tagged == '\0') {
    other_indent = first_indent;
  }
  else {
    if ((param_1 != '\0') && (in_column != first_indent)) {
      other_indent = in_column;
      return;
    }
    if (other_indent == first_indent) {
      other_indent = -(uint)(first_indent == 0) & 3;
      return;
    }
  }
  return;
}

