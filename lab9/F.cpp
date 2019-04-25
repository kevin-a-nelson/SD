#include<iostream>
#include<map>
#include<string>
#include<fstream>

using namespace std;

int main(){


map<string, int> num;
map<string, string> dict;
string fname = "data.txt";
ifstream f(fname.c_str());
// stream of data initialited
string t;
// the first world is streamed to string t
while (f >> t)
{
    int n;
    f >> n;
    // The second word is streamed to int n
    string d;
    getline(f, d);
    // The third word is streamed to string d
    // cout << "term " << t << " num " << n << " definition " << d << endl;
    num[t] = n;
    // Creates key string t in num with value int n
    dict[t] = d;
    // Creates key string t in map dict with value string d

    cout << num["aardvark"] << ' ' << dict["aardvark"] << endl;

    num["example"] = 10;
    

    for (auto p : num)
        cout << p.first << ' ' << p.second << endl;
}


    return 0;
}

