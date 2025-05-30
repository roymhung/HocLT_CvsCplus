#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float x = 2;
    float y = 3;
    float c;
    float s;
    float r;

    const float z = 3.14;

    cout << "Nhap ban kinh: ";
    cin >> r;

    c = 2 * z * r;

    s = z * pow(r,2);

    cout << "Chu vi hinh tron: " << c << "\n";
    cout << "Dien tich hinh tron: " << s;
   
}