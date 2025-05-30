#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a;
    float b;
    float c;
    float p;
    float s;

    cout << "Nhap canh a: ";
    cin >> a;

    cout << "Nhap canh b: ";
    cin >> b;

    cout << "Nhap canh c: ";
    cin >> c;
    
    p = (a + b + c) / 2;

    s = sqrt(p * (p - a) * (p - b) *(p - c));

    cout << "Chu vi tam giac: " << p << "\n";
    cout << "Dien tich tam giac: " << s;
   
}