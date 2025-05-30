#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    int tram;
    int chuc;
    int donvi;
    int sodaonguoc;

    cout << "Nhap so n: ";
    cin >> n;

    tram = n / 100;
    chuc = (n / 10) % 10;
    donvi = n % 10;
    sodaonguoc = donvi * 100 + chuc * 10  + tram *1;

    
    cout << "So dao nguoc la: " << sodaonguoc ;

}