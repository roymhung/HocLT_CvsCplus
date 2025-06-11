#include <iostream>
using namespace std;

int main() {
    int n;
    // Input positive integer n
    cout << "Nhap n: ";
    cin >> n;

    // Validate input
    if(n <= 0){
        cout << "Vui long nhap so nguyen duong!";
        return 1;
    }

    // Print even numbers from 1 to n
    cout << "Ket qua 1: ";
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            cout << i << " ";
        }
    }
    cout << "\n";

    // Print numbers divisible by 3 from 1 to n
    cout << "Ket qua 2: ";
    for(int i = 1; i <= n; i++){
        if(i%3 == 0){
            cout << i << " ";
        }
    }
    cout << "\n";

    // Print odd numbers divisible by 3 from 1 to n
    cout << "Ket qua 3: ";
    for(int i = 1; i <= n; i++){
        if(i%2!= 0 && i%3 == 0){
            cout << i << " ";
        }
    }
    cout << "\n";

     // Print numbers divisible by 5 from -n to n
    cout << "Ket qua 4: ";
    for(int i = -n; i <= n; i++){
        if(i%5 == 0){
            cout << i << " ";
        }
    }
    return 0;
}
