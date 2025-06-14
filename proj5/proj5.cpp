#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {           // Dòng: từng bảng cửu chương (1x1 → 10x10)
        for (int j = 1; j <= 10; j++) {       // Cột: từng phép nhân
            cout << setw(6) << i << "x" << j << "=" << i*j;
        }
        cout << endl;
    }
    return 0;
}
