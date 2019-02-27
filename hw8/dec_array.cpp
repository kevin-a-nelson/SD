#include"prelude"
const int SIZE = 20;
float a[SIZE] = {0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,0.1,10};

yaml[0] = 0;

for (int i = 0; i <= SIZE-1; i++) {
        write_at(mem, 100+(5*i), a[i]);

append(yaml,"\nView_",i,":");
append(yaml, R"(
      style:
        left: 10
        top: 10
        backgroundColor: white
        borderRadius: 0
        borderWidth: 5
        borderColor: black
        width: 200
      children: [Text_)",i,"]");
append(yaml,"\nText_",i,":");
append(yaml,R"(
      style:
        color: green
        fontSize: 30
      pos: )", 100+(5*i), R"(
      len: 2)");

};


#include"postlude"
