#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    // Kiểm tra n có phải số nguyên dương
    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong!" << endl;
        return 1;
    }

    // In các số chẵn từ 1 đến n
    cout << "Ket qua 1: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // In các số từ 1 đến n chia hết cho 3
    cout << "Ket qua 2: ";
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // In các số lẻ từ 1 đến n chia hết cho 3
    cout << "Ket qua 3: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // In các số từ -n đến n chia hết cho 5
    cout << "Ket qua 4: ";
    for (int i = -n; i <= n; i++) {
        if (i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
