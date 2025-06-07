#include <iostream>
#include <cmath>
using namespace std;

bool ganBang(double a, double b) {
    return fabs(a - b) < 1.0; // kiểm tra xấp xỉ
}

int main() {
    double a, b, c;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "Nhap c: ";
    cin >> c;

    // Kiểm tra có phải là tam giác hợp lệ không
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ket qua: Tam giac nay ko ton tai" << endl;
        return 0;
    }

    bool can = (a == b || b == c || a == c);
    bool deu = (a == b && b == c);

    // Kiểm tra tam giác vuông (sử dụng xấp xỉ)
    bool vuong = ganBang(a * a, b * b + c * c) ||
                 ganBang(b * b, a * a + c * c) ||
                 ganBang(c * c, a * a + b * b);

    if (deu) {
        cout << "Ket qua: Tam giac deu" << endl;
    }
    else if (vuong && can) {
        cout << "Ket qua: Tam giac vuong can" << endl;
    }
    else if (vuong) {
        cout << "Ket qua: Tam giac vuong" << endl;
    }
    else if (can) {
        cout << "Ket qua: Tam giac can" << endl;
    }
    else {
        cout << "Ket qua: Tam giac thuong" << endl;
    }

    return 0;
}
