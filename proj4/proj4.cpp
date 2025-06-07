#include <iostream>
using namespace std;

int main() {
    int thang;

    cout << "Nhap thang: ";
    cin >> thang;
    if(thang >= 1 && thang <= 3){
        cout << "Ket qua: Quy 1 \n";
    }else if(thang >= 4 && thang <= 6){
        cout << "Ket qua: Quy 2 \n";
    }else if(thang >= 7 && thang <= 9){
        cout << "Ket qua: Quy 3 \n";
    }else if(thang >= 10 && thang <= 12){
        cout << "Ket qua: Quy 4 \n";
    }else{
        cout << "Ket qua: Khong co thang " << thang << "\n";
    }
    return 0;
}
