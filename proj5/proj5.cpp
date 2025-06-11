#include <iostream>
using namespace std;

int main() {
    // for(int i = 10; i > 0; i--){
    //     cout << "anh yeu em " << i << "\n";
    // }    

    int i = 0;
    bool duy_tri = true;
    while(duy_tri){
        cout << "anh yeu em " << i << "\n";
        if(i == 10){
            duy_tri = false;
        }
        i++;
    }
    return 0;
}
