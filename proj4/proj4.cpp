#include<iostream>

using namespace std;

int main(){
    int tuoi = 0;
    cout << "Nhap so tuoi: ";
    cin >> tuoi;
    
    if(tuoi >=18){
        cout << "Du tuoi di tu.";
    }
    else if(tuoi >= 15 && tuoi <= 17)
    {
        cout << "Di trai cai tao";
    }
    else if(tuoi >= 11 && tuoi <= 14)
    {
        cout << "Ca quan tai gia";
    }
    else
    {
        cout << "Tu do";

    }
}