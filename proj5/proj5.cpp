#include <iostream>
using namespace std;

int main() {
    char kyTu[8] = { 'a', 'b', 'c', 'd' };

    // Sai: So sánh i < kyTu[i] là vô nghĩa và nguy hiểm
    for (int i = 0; i < 4; i++) {
        cout << "kyTu[" << i << "] = " << kyTu[i] << endl;
    }

    return 0;
}
