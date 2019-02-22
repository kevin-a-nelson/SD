#include"prelude"

  query_str[0] = 0;
  append(query_str, R"(
write_1:
    nelson67:
write_2:
    nelson67:
        messages:
)");
  response = query_data_port(query_str);

  yaml[0] = 0;
  append(yaml, "Text_1:\n  style:\n    fontFamily: monospace\n");
  append(yaml, "  pos: 1\n  len: 200\n");
  write_at(mem, 1, response);

#include"postlude"
