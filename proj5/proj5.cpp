#include <iostream>
using namespace std;

int main() {
    int n;
    int count = 0;
    
    // Nhập số nguyên dương n
    do {
        cout << "Nhap n: ";
        cin >> n;
    } while (n <= 0);
    
    // Câu 1: In ra các số mà n chia hết từ 1 đến n
    cout << "Ket qua 1: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            count++; // Đếm số lượng ước
        }
    }
    cout << endl;
    
    // Câu 2: In ra số lượng ước
    cout << "Ket qua 2: " << count << endl;
    
    // Câu 3: Kiểm tra số nguyên tố
    if (n == 1) {
        cout << "Ket qua 3: Ko phai so nguyen to" << endl;
    } else if (count == 2) {
        cout << "Ket qua 3: La so nguyen to" << endl;
    } else {
        cout << "Ket qua 3: Ko phai so nguyen to" << endl;
    }
    
    return 0;
}