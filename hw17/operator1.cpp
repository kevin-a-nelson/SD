#include<iostream>

class CVector{
    public:
        int x,y;
        CVector () {};
        CVector (int a, int b) : x(a), y(b) {}
        CVector operator + (const CVector&);
        CVector operator * (const CVector&);
        CVector operator / (const CVector&);
};

CVector CVector::operator+(const CVector& param){
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

CVector CVector::operator* (const CVector& param){
    CVector temp;
    temp.x = x * param.x;
    temp.y = y * param.y;
    return temp;
}

CVector CVector::operator/ (const CVector& param){
    CVector temp;
    temp.x = x / param.x;
    temp.y = y / param.y;
    return temp;
}

int main(){
    CVector foo(10,15);
    CVector bar(10,15);
    CVector result;
    CVector result2;
    CVector result3;
    result = foo + bar;
    result2 = foo * bar;
    result3 = foo / bar;
    std::cout << result.x << ',' << result.y << "\n";
    std::cout << result2.x << ',' << result2.y << "\n";
    std::cout << result3.x << ',' << result3.y << "\n";

    return 0;
}