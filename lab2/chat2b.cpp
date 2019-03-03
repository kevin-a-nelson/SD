#include"sd_fun.h"

Range create_text(int id,int response_pos, int mem_pos){
    Range r_text = find_value(response, response_pos, "text:");
    write_at(mem, mem_pos, response, r_text);
    append(yaml,"\nText_",id,":");
    append(yaml,"\n    len: ",r_text.len,"\n");
    append(yaml,"    pos: ",mem_pos);
    append(yaml,R"(
        style:
            color: black
            fontSize: 30)");
    mem_pos += r_text.len + 1;
    response_pos += 12;
    return r_text;
}

int main(){
    init();

    response = echo_string(R"(
    -- text: one
    - text: two
    - text: three
    - text: four
    )");

int mem_pos = 100, response_pos = 0, id = 1;
while (in(response, response_pos, "text:")) {
    ++id;

    Range r1 = create_text(id, response_pos, mem_pos);
    mem_pos += r1.len + 1;
    response_pos = r1.pos;
}
quit();
}