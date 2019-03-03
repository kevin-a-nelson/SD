#include"sd_fun.h"

void create_view(int id,bool indent){

    if(indent == true){
    append(yaml,"\nView_",id,":");
    append(yaml, R"(
        style:
            backgroundColor: red
            borderRadius: 25
            width: 200
            left: 100
        children: [)");
    append(yaml,"Text_",id*3,",");
    append(yaml,"Text_",id*3+1,",");
    append(yaml,"Text_",id*3+2,", ]");
    } else {
    append(yaml,"\nView_",id,":");
    append(yaml, R"(
        style:
            backgroundColor: red
            borderRadius: 25
            width: 200
        children: [)");
    append(yaml,"Text_",id*3,",");
    append(yaml,"Text_",id*3+1,",");
    append(yaml,"Text_",id*3+2,", ]");
}

}

Range create_text(int id,int response_pos, int mem_pos){
    if(1 == (id%3)){
        Range r_text = find_value(response, response_pos, "timestamp:");
        write_at(mem, mem_pos, response, r_text);
        append(yaml,"\nText_",id,":");
        append(yaml,"\n    len: ",r_text.len,"\n");
        append(yaml,"    pos: ",mem_pos);
        append(yaml,R"(
            style:
                color: black
                fontSize: 10)");
        mem_pos += r_text.len + 1;
        response_pos += 12;
        return r_text;
    } else if ((id % 2) ==  2){
        Range r_text = find_value(response, response_pos, "text:");
        write_at(mem, mem_pos, response, r_text);
        append(yaml,"\nText_",id,":");
        append(yaml,"\n    len: ",r_text.len,"\n");
        append(yaml,"    pos: ",mem_pos);
        append(yaml,R"(
            style:
                color: black
                fontSize: 10)");
        mem_pos += r_text.len + 1;
        response_pos += 12;
        return r_text;
    } else {
        Range r_text = find_value(response, response_pos, "author:");
        write_at(mem, mem_pos, response, r_text);
        append(yaml,"\nText_",id,":");
        append(yaml,"\n    len: ",r_text.len,"\n");
        append(yaml,"    pos: ",mem_pos);
        append(yaml,R"(
            style:
                color: black
                fontSize: 10)");
        mem_pos += r_text.len + 1;
        response_pos += 12;
        return r_text;
    }
}

int main(){
    init();

    response = echo_string(R"(
    - - - text: one
        - author: Kevin
        - timestamp: 1551248847867
    - - text: two
        - author: Kerrie
        - timestamp: 1551248857867
    - - text: three
        - author: Kevin
        - timestamp: 1551248867867
    - - text: four
        - author: Kerrie
        - timestamp: 1551248877867
    )");


int mem_pos = 100, response_pos = 0, id = 1;
while (in(response, response_pos, "text:")) {
    ++id;

    Range r = find_value(response, response_pos, "author:");

    bool indent = (in(response,r,"Kevin"));

    create_view(id,indent);
    Range r1 = create_text(id*3, response_pos, mem_pos);
    mem_pos += r1.len + 1;
    response_pos = r1.pos;
    Range r2 = create_text(id*3+1, response_pos, mem_pos);
    mem_pos += r2.len + 1;
    response_pos = r2.pos;
    Range r3 = create_text(id*3+2, response_pos, mem_pos);
    mem_pos += r3.len + 1;
    response_pos = r3.pos;

    // Range r1 = create_text(id*2, response_pos, mem_pos);
    // mem_pos += r1.len + 1;
    // response_pos = r1.pos;
    // Range r2 = create_text(id*2+1, response_pos, mem_pos);
    // mem_pos += r2.len + 1;
    // response_pos = r2.pos;

}

int n = id;

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
        bottom: 0
        width: 640
        height: 30
        fontSize: 20
        borderColor: 'gray'
        borderWidth: 1
    pos: 100
    len: 80)");
quit();
}