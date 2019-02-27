#include<cmath>
#include<iostream>
#include"prelude"

int a[10];

  if (length_of(yaml) < 50) {
    mem[200] = 0;
  }

  Range t_range = find_value(yaml, "content:");
  if (t_range.len > 0) {
    if ((yaml[t_range.pos] == 'q')) {
        write_at(mem, 200 +length_of(mem,200) , "Good Bye");
        write_at(mem, 200 + length_of(mem,200),"\n");
    }
    else if (( as_integer(yaml,t_range) >= 2) && (as_integer(yaml,t_range)<=10)) {
        for(int i = 0; i  <= 10; i++){
          int n = pow((as_integer(yaml, t_range)),i);
          a[i] = n;
        }
        for (int i = 2; i <= 10; i++) {
                write_at(mem, 200 + length_of(mem,200), a[i]);
                write_at(mem, 200 + length_of(mem,200),"\n");
            } 
        } else write_at(mem, 200 + length_of(mem,200), "Invalid Input");
    }

  yaml[0] = 0;
  append(yaml, R"(
    Text_1:
      style:
        color: black
        fontSize: 30
        marginLeft: 10
      pos: 100
      len: 100)");
  write_at(mem, 100, "Enter a number between 2-9 or press q to quit");
  append(yaml, R"(
    TextInput_2:
      style:
        width: 640
        height: 30
        fontSize: 20
        borderColor: 'gray'
        borderWidth: 1
      pos: 1
      len: 5)");
  mem[1] = 0;  // initialize the text area to be empty
  append(yaml, R"(
    Text_3:
      style:
        color: black
        fontSize: 30
        marginLeft: 10
      pos: 200
      len: 100)");

#include"postlude"
