#include <iostream>
using namespace std;

int main() {
    float x, y, z;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "Nhap z: ";
    cin >> z;

    // Tìm số lớn nhất
    float maxVal = x;
    if (y > maxVal) maxVal = y;
    if (z > maxVal) maxVal = z;
    cout << "Ket qua 1: So Lon Nhat la " << maxVal << "\n";

    // Tìm số bé nhất
    float minVal = x;
    if (y < minVal) minVal = y;
    if (z < minVal) minVal = z;
    cout << "Ket qua 2: So Be Nhat la " << minVal << "\n";

    // Kiểm tra cùng dấu
    if ((x > 0 && y > 0 && z > 0) || (x < 0 && y < 0 && z < 0)) {
        cout << "Ket qua 3: Ca 3 so cung dau\n";
    } else {
        cout << "Ket qua 3: Ca 3 so khac dau\n";
    }

    // In ra các cặp trái dấu
    cout << "Ket qua 4: ";
    bool coCapTraiDau = false;

    if (x * y < 0) {
        cout << "(" << x << "," << y << ")";
        coCapTraiDau = true;
    }
    if (x * z < 0) {
        if (coCapTraiDau) cout << ", ";
        cout << "(" << x << "," << z << ")";
        coCapTraiDau = true;
    }
    if (y * z < 0) {
        if (coCapTraiDau) cout << ", ";
        cout << "(" << y << "," << z << ")";
        coCapTraiDau = true;
    }
    if (!coCapTraiDau) {
        cout << "Khong co cap so nao trai dau";
    }

    cout << "\n";

    return 0;
}
