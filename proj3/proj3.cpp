#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Nhap ki tu in thuong trong bang chu cai: ";
    cin >> ch;

    cout << "1. Ma ASCII la: " << int(ch) << "\n";

    char nextChar = ch + 1;
    cout << "2. Ki tu dung sau la: " << nextChar << "\n";
    cout << "Ma ASCII tuong ung la: " << int(nextChar) << "\n";

    char upperChar = ch - 32; // hoặc dùng toupper(ch)
    cout << "3. Ki tu in hoa tuong ung la: " << upperChar ;

    return 0;
}
