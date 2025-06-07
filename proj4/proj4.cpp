#include<iostream>

using namespace std;

int main(){
    float x, y;

    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;

    if(x == 0){
        cout << "x bang 0" << "\n";
    }else{
        cout << "x khac 0" << "\n";
    }

    if(y == 0){
        cout << "y bang 0" << "\n";
    }else{
        cout << "y khac 0" << "\n";
    }

    if(x != 0 && y != 0){
        if((x > 0 && y > 0) || (x < 0 && y < 0)){
            cout << "hai so cung dau" << "\n";
        }else{
            cout << "hai so khac dau" << "\n";
        }
    }
}