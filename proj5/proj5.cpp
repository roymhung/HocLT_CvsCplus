#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int tempSum;
    int sum = 0;
    int x = 0;

    for (int i = 1; i <= n; i++) {
        if (i >= 5) {
            tempSum = 2 * i * i + 5 * i + 9;
        }
        else {
            tempSum = -2 * i * i + 4 * i - 9;
        }
        sum += tempSum;
        cout << "tempSum nho nhat la: " << tempSum << "\n";
    }

    
    cout << "sum nho nhat la: " << sum;
    return 0;
}
