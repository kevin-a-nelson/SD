#include"prelude"

response = echo_string(R"(
- - text:   |
  - text:   ||
  - text:   |||
  - text:   |V
  - text:   V
  - text:   V|
  - text:   V||
  - text:   V|||
)");

int response_pos = 0;
int response_pos2 = 0;
int mem_pos = 100;
int i = 2;
int z = 2;

yaml[0] = 0;


while(in(response,response_pos,"text:")){
append(yaml,"\nView_",i,":");
append(yaml, R"(
    style:
        backgroundColor: red
        borderRadius: 25
        width: 200
    children: [Text_)",i,"]");
Range r_text = find_value(response, response_pos, "text:");
write_at(mem, mem_pos, response, r_text);
append(yaml,"\nText_",i,":");
append(yaml,"\n    len: ",r_text.len,"\n");
append(yaml,"    pos: ",mem_pos);
append(yaml,R"(
    style:
        color: black
        fontSize: 30)");
mem_pos += r_text.len + 1;
response_pos += 12;
i += 1;
};
append(yaml, R"(
ScrollView_1:
    style:
        width: 500
        backgroundColor: black
    children: [)");
while(in(response,response_pos2,"text:")){
    append(yaml,"View_",z,",");
z += 1;
response_pos2 += 12;
};
append(yaml,"]");
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
    pos: 100
    len: 80)");


#include"postlude"
