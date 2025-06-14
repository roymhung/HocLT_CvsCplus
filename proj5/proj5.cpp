#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {          // Dòng: từ 1 đến 10
        for (int j = 1; j <= 10; j++) {      // Cột: từ 1 đến 10
            cout << setw(6) << j << "x" << i << "=" << j * i;
        }
        cout << endl;
    }
    return 0;
}
