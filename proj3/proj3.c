#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float x = 2;
    float y = 3;

    float z;
    
    float a;
    float b;
    float c;

     a = pow((3*x + 2*y),2);

    b = pow((5*x + 1),3);

    c = a* b;
    z = sqrt(c);
    
    cout << z;
   
}