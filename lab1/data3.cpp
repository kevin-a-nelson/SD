#include"prelude"

  query_str[0] = 0;
  Range t_range = find_value(yaml, "content:");
  if (t_range.len > 0) {
    append(query_str, "append_1:\n");
    append(query_str, "  nelson67:\n");
    append(query_str, "    messages:\n");
    append(query_str, "      text: ", yaml, t_range, "\n");
  }
  append(query_str, "read_1:\n");
  append(query_str, "  nelson67:\n");
  append(query_str, "    messages:\n");
  response = query_data_port(query_str);

  yaml[0] = 0;
  append(yaml, "Text_1:\n  style:\n    fontFamily: monospace\n");
  append(yaml, "  pos: 1\n  len: 200\n");
  write_at(mem, 1, response);

  if (length_of(yaml) < 50)
{
    mem[100] = 0;
}

if (t_range.len > 0)
{
    write_at(mem, 100 + length_of(mem,100), yaml, t_range);
    write_at(mem, 100 + length_of(mem,100), "\n");
}

yaml[0] = 0;
append(yaml, R"(
    Text_top:
      style:
        color: black
        fontSize: 30
        marginLeft: 10
      pos: 100
      len: 900)");
append(yaml, R"(
    TextInput_last:
      style:
        position: absolute
        bottom: 0
        width: 640
        height: 30
        fontSize: 20
        borderColor: 'gray'
        borderWidth: 1
      pos: 1
      len: 80)");

mem[1] = 0; // initialize the text area to be empty

#include"postlude"