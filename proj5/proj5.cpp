#include <iostream>
using namespace std;

int main() {
    int N = 8;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == N) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    return 0;
}
