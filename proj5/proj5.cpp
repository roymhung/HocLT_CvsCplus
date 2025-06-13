#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int sum = 0;
    int x = 0;

    // vong lap de tim X
    while (sum <= n) {
        x++; // tang x len 1
        sum += x; // Cong x vao tong
    }

    cout << "X nho nhat la: " << x;
    return 0;
}
