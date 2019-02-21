#include"prelude"

write_at(mem, 100, "Hello");

yaml[0] = 0;

append(yaml, R"(
    View_2:
      style:
        backgroundColor: white
        borderRadius: 25
        width: 200
      children: [Text_2m]
    Text_2m:
      style:
        color: black
        fontSize: 30
      pos: 100
      len: 5
      )");
append(yaml, R"(
    ScrollView_1:
      style:
        width: 200
        backgroundColor: black
      children: [View_2])");
append(yaml, R"(
    TextInput_last:
      style:
        position: absolute
        bottom: -70
        width: 640
        height: 30
        fontSize: 20
        borderColor: 'gray'
        borderWidth: 1
      pos: 100
      len: 80)");


#include"postlude"
