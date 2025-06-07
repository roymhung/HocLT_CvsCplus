#include <iostream>
using namespace std;

int main() {
    int km;
    long tien = 0;

    cout << "Nhap so km: ";
    cin >> km;


    if (km <= 0) {
        cout << "So tien khong hop le! \n";
    } else if(km == 1){
        tien = 15000;
    }else if(km <= 30){
        tien = 15000 + (km - 1) * 13000;
    }else{
        tien = 15000 + (29 * 13000) + (km - 30) * 10000;
    }

    if (km > 0) {
        cout << "So tien phai tra: " << tien << " VND\n";
    }
    return 0;
}
