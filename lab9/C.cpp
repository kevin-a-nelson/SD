#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v = {2, 3, 5, 7, 11};
    for (int i = 0; i < 5; ++i)
        cout << v[i] << endl;


    for (int x : v)
        cout << x << endl;

    cout << v.size() << endl;

    v.push_back(5);
    for (auto x : v)
        cout << x << endl;

    v.erase(v.begin() + 1);
    for (auto x : v)
        cout << x << endl;

    v.insert(v.begin() + 2, 9);
    for (auto x : v)
        cout << x << endl;

    v.clear();
    cout << v.size() << endl;

    for (auto x : v)
        cout << x << endl;

    return 0;
}