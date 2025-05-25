#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string fullname;
    string country;
    char xep_loai_tot_nghiep;
    float height;
    float weight;

    // Nhập họ tên
    cout << "Nhap ten: ";
    getline(cin, fullname);

  // Nhập năm sinh
    cout << "Nhap nam sinh: ";
    cin >> age;

    cin.ignore();

    // Nhập nơi ở
    cout << "Nhap noi o: ";
    getline(cin, country);

    // Nhập chiều cao
    cout << "Nhap chieu cao: ";
    cin >> height;

    // Nhập cân nặng
    cout << "Nhap can nang: ";
    cin >> weight;

    // Nhập xếp loại tốt nghiệp
    cout << "Nhap xep loai tot nghiep: ";
    cin >> xep_loai_tot_nghiep;

    // Hiển thị thông tin
    cout << "\n--- Thong tin ca nhan ---\n";
    cout << "Xin chao. Toi la: " << fullname ;
    cout << "\nNam sinh: " << age << " tuoi" ;
    cout << "\nToi den tu: " << country ;
    cout << "\nToi cao: " << height << " cm";
    cout << "\nToi nang: " << weight << " kg" ;
    cout << "\nToi xep loai tot nghiep: " << xep_loai_tot_nghiep;

    return 0;
}
