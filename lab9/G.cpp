#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;


int main(){

    vector<string> v_lines;
    vector<string> v_words;

    string fname = "expenses.10000";
    ifstream f(fname.c_str());
    string line;
    while(getline(f,line)){
        v_lines.push_back(line);
    }

    for(auto elem: v_lines){
        cout << elem << "\n";
    }

    int price;

    int word_count = 0;
    string word;
    for(auto line: v_lines){
        for(auto letter: line){
            if(letter != ' '){
                word += letter;
            } else {
                word_count += 1;
                v_words.push_back(word);
                word = "";
            }
        }
    }

    int next = 0;

    for(auto word: v_words){
        if(word == "pd" || word == "Paid" || word == "paid"){
            next = 1;
        } else if(next) {
            price += stoi(word);
            next = 0; 
        }
    }

    cout << "Word Count: " << word_count << "\n";
    cout << "Price: " << price << "\n";






    return 0;
}