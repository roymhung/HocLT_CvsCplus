#include <iostream>
using namespace std;

int main() {
    int n, type;

    cout << "Nhap n (so nguyen duong): ";
    cin >> n;

    cout << "1 - Tam giac can dac 0, lech phai\n";
    cout << "2 - Tam giac can vien 1, trong 0, lech phai\n";
    cout << "Chon cau (1 hoac 2): ";
    cin >> type;

    switch (type) {
        case 1: // CÂU 1: Tam giác đặc ruột 0, lệch phải
            for (int i = 1; i <= n; ++i) {
                // In khoảng trắng đầu dòng
                for (int j = 1; j <= n - i; ++j)
                    cout << " ";
                // In số 0, mỗi số là 1 dòng trong tam giác
                for (int j = 1; j <= i; ++j)
                    cout << "0";
                cout << endl;
            }
            break;

        case 2: // CÂU 2: Tam giác viền 1, ruột 0, lệch phải
            for (int i = 1; i <= n; ++i) {
                // In khoảng trắng đầu dòng
                for (int j = 1; j <= n - i; ++j)
                    cout << " ";
                // In tam giác với viền là 1, ruột là 0
                for (int j = 1; j <= i; ++j) {
                    if (j == 1 || j == i || i == n)
                        cout << "1";
                    else
                        cout << "0";
                }
                cout << endl;
            }
            break;

        default:
            cout << "Lua chon khong hop le.\n";
    }

    return 0;
}
