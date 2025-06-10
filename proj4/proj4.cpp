#include <iostream>
using namespace std;

int main() {
    int n;

    // Nhập số lượng phần tử của mảng
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    // Cấp phát động mảng
    int* arr = new int[n];

    // Nhập các phần tử của mảng
    cout << "Nhap " << n << " phan tu:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Phan tu thu " << i << ": ";
        cin >> arr[i];
    }

    // In các phần tử của mảng
    cout << "Cac phan tu vua nhap la:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ
    delete[] arr;

    return 0;
}
