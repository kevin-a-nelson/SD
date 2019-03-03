#include"sd_fun.h"

Range create_text(int response_pos){
    Range y = find_value(response, response_pos, "text: ");
    append(yaml, response, y);
    append(yaml, "\n");
    return y;
}

int main(){
    init();

    response = echo_string(R"(
    -- text: one
    - text: two
    - text: three
    - text: four
    )");

    int response_pos = 0, id = 1;
    while(in(response, response_pos, "text:")){
        ++id;

        Range r1 = create_text(response_pos);
        response_pos = r1.pos;
    }
quit();
}