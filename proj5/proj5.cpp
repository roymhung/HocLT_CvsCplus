#include <iostream>
using namespace std;

int main() {

    int m;
    cout << "Nhap m (0..9): ";
    cin >> m;


    int n;
    cout << "Nhap n (0..9): ";
    cin >> n;

   for (int i = 0; i < m; i++) {
    if( i % 2 == 0 ){
         for (int j = 0; j < n; j++) {
            cout << "* ";
        }
    }else{
        for (int j = 0; j < n; j++) {
            if( j % 2 == 0 ){
                cout << "* ";
            }else{
                cout << "  ";

            }
            
        }
    }
    cout << endl;
}

    return 0;
}
