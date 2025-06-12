#include <iostream>
using namespace std;

// Hàm tính UCLN bằng thuật toán Euclid
int ucln(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

// Hàm tính BCNN từ UCLN
int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

int main() {
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;

    // Kiểm tra số hợp lệ
    if (a <= 0 || b <= 0) {
        cout << "Vui long nhap hai so nguyen duong!" << endl;
        return 0;
    }

    int u = ucln(a, b);
    int bcn = bcnn(a, b);

    cout << "Uoc chung lon nhat la: " << u << endl;
    cout << "Boi chung nho nhat la: " << bcn << endl;

    return 0;
}
