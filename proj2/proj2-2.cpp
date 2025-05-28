#include <iostream>
#include <string>

using namespace std;

int main() {
    bool a = true;
    bool b = false;
    bool c = false;

    bool d = a || b && c;
    cout << d;
}
