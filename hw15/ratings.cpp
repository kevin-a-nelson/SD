// class constructor
#include<iostream>
#include<string>

using namespace std;

class Rating{
    int id,stars;
    public:
    Rating(int i,int s) {
        id = i;
        if(s < 1){
            stars = 1;
        } else if(s > 5){
            stars = 5;
        } else {
            stars = s;
        }
    }
    int set_stars(int s) {
        if (s < 1){
            stars = 1;
        } else if(s > 5){
            stars = 5;
        } else {
            stars = s;
        }
        return stars;
    }
    int get_id(){
        return id;
    }
    int get_stars(){
        return stars;
    }
    void display(){
        cout << id << ":";
        for(int i = 0; i<stars;i++){
            cout << "*";
        }
        for(int i = 0; i<stars;i++){
            cout << "";
        } cout << " ";
    }

};

int main(){
    Rating r(1234, 3);
    cout << "Rating r contains ";   r.display();  cout << endl;
    r.set_stars(4);
    cout << "After r.set_stars(4), id=" << r.get_id()
        << " and stars=" << r.get_stars() << endl;

    Rating *arr[8];
    int i;
    for (i = 0;  i < 8;  i++)
        arr[i] = new Rating(100+i, i);
    cout << "Ratings in array arr:  ";
    for (i = 0;  i < 8;  i++)
        arr[i]->display(); cout << "  ";
    cout << endl;


    return 0;
}