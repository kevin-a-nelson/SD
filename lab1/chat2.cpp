#include"prelude"

int n = 10;

write_at(mem, 100, "Hello");

yaml[0] = 0;


for(int i = 2; i < 2 + n; ++i){
append(yaml,"\nView_",i,":");
append(yaml, R"(
      style:
        backgroundColor: red
        borderRadius: 25
        width: 200
      children: [Text_)",i,"]");
append(yaml,"\nText_",i,":");
append(yaml,R"(
      style:
        color: black
        fontSize: 30
      pos: 100
      len: 5)");
};
append(yaml, R"(
ScrollView_1:
    style:
        width: 500
        backgroundColor: black
    children: [)");
for(int i = 2; i < 2 + n; ++i){
    append(yaml,"View_",i,",");
};
append(yaml,"]");
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
