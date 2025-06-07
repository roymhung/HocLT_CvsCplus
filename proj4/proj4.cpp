#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int n;

    cout << "Nhap so n: ";
    cin >> n;


    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong! \n";
        return 0;
    } 

    int can = sqrt(n);

    if (can * can == n) {
        cout << "Ket qua: " << n << " la so chinh phuong\n";
    }else{
        cout << "Ket qua: " << n << " khong la so chinh phuong\n";
    }
    return 0;
}
