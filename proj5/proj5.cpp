#include <iostream>
using namespace std;

// Hàm tìm UCLN bằng thuật toán Euclid
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tìm BCNN
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    
    // Nhập hai số nguyên dương a và b
    do {
        cout << "Nhap a: ";
        cin >> a;
    } while (a <= 0);
    
    do {
        cout << "Nhap b: ";
        cin >> b;
    } while (b <= 0);
    
    // Tính và in UCLN
    int ucln = gcd(a, b);
    cout << "Uoc chung lon nhat la: " << ucln << endl;
    
    // Tính và in BCNN
    int bcnn = lcm(a, b);
    cout << "Boi chung nho nhat la: " << bcnn << endl;
    
    return 0;
}