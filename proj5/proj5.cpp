#include <iostream>
using namespace std;

// Định nghĩa hàm f(x)
int f(int x) {
    if (x >= 5)
        return 2 * x * x + 5 * x + 9;
    else
        return -2 * x * x + 4 * x - 9;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += f(i);
    }

    cout << "Ket qua: " << tong << endl;

    return 0;
}
