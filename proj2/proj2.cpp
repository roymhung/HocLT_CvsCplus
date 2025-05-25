#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string fullname;
    string country;
    float weight;

    // Nhập họ tên
    cout << "Nhap ten: ";
    getline(cin, fullname);

    // Nhập nơi ở
    cout << "Nhap noi o: ";
    getline(cin, country);

    // Nhập tuổi
    cout << "Nhap tuoi: ";
    cin >> age;

    // Nhập cân nặng
    cout << "Nhap can nang: ";
    cin >> weight;

    // Hiển thị thông tin
    cout << "\n--- Thong tin ca nhan ---\n";
    cout << "Xin chao. Toi la: " << fullname ;
    cout << "\nToi den tu: " << country ;
    cout << "\nNam nay toi: " << age << " tuoi" ;
    cout << "\nToi nang: " << weight << " kg" ;

    return 0;
}
