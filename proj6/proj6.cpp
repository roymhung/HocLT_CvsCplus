#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int arr[n];  // Khai báo mảng

    // Nhập mảng
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // 1. In ra mảng theo thứ tự đảo ngược
    cout << "\n1. Mang theo thu tu dao nguoc: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    // 2. Tính tổng của phần tử đầu và phần tử cuối
    int sumFirstLast = arr[0] + arr[n - 1];
    cout << "\n2. Tong cua phan tu dau va cuoi: " << sumFirstLast;

    // 3. In ra phần tử chính giữa
    cout << "\n3. Phan tu chinh giua: ";
    if (n % 2 == 1) {
        cout << arr[n / 2];
    } else {
        cout << arr[n / 2 - 1] << " va " << arr[n / 2];
    }

    // 4. Tính tích của tổng các số lẻ và tổng các số chẵn
    int tongLe = 0, tongChan = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            tongChan += arr[i];
        else
            tongLe += arr[i];
    }
    int tichTong = tongLe * tongChan;
    cout << "\n4. Tich cua tong le va tong chan: " << tichTong << endl;

    return 0;
}
