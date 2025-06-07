#include <iostream>
using namespace std;

int main() {
    int gio, phut, giay;

    cout << "Nhap gio: ";
    cin >> gio;

    cout << "Nhap phut: ";
    cin >> phut;

    cout << "Nhap giay: ";
    cin >> giay;

    if (gio >= 0 && gio <= 23 && phut >= 0 && phut <= 59 && giay >= 0 && giay <= 59) {
        cout << "Ket qua: Hop le\n";
    } else {
        cout << "Ket qua: Khong hop le\n";

        // Giải thích lý do không hợp lệ
        if (gio < 0 || gio > 23) {
            cout << "Do khong co gio " << gio << " nha ae :))\n";
        }
        if (phut < 0 || phut > 59) {
            cout << "Do khong co phut " << phut << " nha ae :))\n";
        }
        if (giay < 0 || giay > 59) {
            cout << "Do khong co giay " << giay << " nha ae :))\n";
        }
    }

    return 0;
}
