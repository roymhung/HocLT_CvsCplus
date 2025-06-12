#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    // Kiểm tra n có phải số nguyên dương không
    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong!" << endl;
        return 0;
    }

    // 1. In ra các ước số của n từ 1 đến n
    cout << "Ket qua 1: ";
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl;

    // 2. In ra số lượng ước
    cout << "Ket qua 2: " << count << endl;

    // 3. Kiểm tra số nguyên tố
    bool isPrime = true;
    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    cout << "Ket qua 3: ";
    if (isPrime)
        cout << "La so nguyen to" << endl;
    else
        cout << "Ko phai so nguyen to" << endl;

    return 0;
}
