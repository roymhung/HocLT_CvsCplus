#include <iostream>
using namespace std;

int main() {
    int n, chon;
    cout << "Nhap n (0 <= n <= 9): ";
    cin >> n;

    cout << "\nChon loai tam giac:\n";
    cout << "1. Tam giac can dac ruot 0\n";
    cout << "2. Tam giac can dac ruot 0, vien 1\n";
    cout << "3. Tam giac nhi phan dan xen\n";
    cout << "4. Tam giac thap phan tang deu\n";
    cout << "5. Tam giac thap phan doi xung\n";
    cout << "Nhap lua chon (1..5): ";
    cin >> chon;

    switch (chon) {
    case 1: // CÂU 1: Tam giác đặc ruột 0
        for (int i = 0; i < n; ++i) {
            for (int space = 0; space < n - i - 1; ++space)
                             //  0    < 5 - 0 -1  = 4           
                             //  1    < 5 - 0 -1  = 4        
                             //  2    < 5 - 0 -1  = 4        
                             //  3    < 5 - 0 -1  = 4         
                             //  4    < 5 - 0 -1  = 4   x => xong goi for j lan 1

                             //  0    < 5 - 1 -1  = 3             
                             //  1    < 5 - 1 -1  = 3           
                             //  2    < 5 - 1 -1  = 3          
                             //  3    < 5 - 1 -1  = 3   x => xong goi for j lan 2
                             //  4    < 5 - 1 -1  = 3   x 
                    
                             //  0    < 5 - 2 -1  = 2             
                             //  1    < 5 - 2 -1  = 2           
                             //  2    < 5 - 2 -1  = 2   x => xong goi for j lan 3
                             //  3    < 5 - 2 -1  = 2   x       
                             //  4    < 5 - 2 -1  = 2   x  
                    
                             //  0    < 5 - 3 -1  = 1             
                             //  1    < 5 - 3 -1  = 1   x => xong goi for j lan 4   
                             //  2    < 5 - 3 -1  = 1   x      
                             //  3    < 5 - 3 -1  = 1   x       
                             //  4    < 5 - 3 -1  = 1   x  

                             //  0    < 5 - 4 -1  = 1   x        
                             //  1    < 5 - 4 -1  = 1   x 
                             //  2    < 5 - 4 -1  = 1   x      
                             //  3    < 5 - 4 -1  = 1   x       
                             //  4    < 5 - 4 -1  = 1   x  
                cout << " ";
            for (int j = 0; j <= i; ++j)
                cout << "0 ";
            cout << endl;
        }
        break;

    case 2: // CÂU 2: Tam giác viền 1, ruột 0
        for (int i = 0; i < n; ++i) {
            for (int space = 0; space < n - i - 1; ++space)
                cout << " ";
            for (int j = 0; j <= i; ++j) {
                if (j == 0 || j == i || i == n - 1)
                    cout << "1 ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
        break;

    case 3: // CÂU 3: Tam giác nhị phân đan xen
        for (int i = 0; i < n; ++i) {
            for (int space = 0; space < n - i - 1; ++space)
                cout << " ";
            for (int j = 0; j <= i; ++j)
                cout << ((i + j) % 2) << " ";
            cout << endl;
        }
        break;

    case 4: // CÂU 4: Tam giác thập phân tăng đều theo dòng
        for (int i = 0; i < n; ++i) {
            for (int space = 0; space < n - i - 1; ++space)
                cout << " ";
            for (int j = 0; j <= i; ++j)
                cout << i % 10 << " ";
            cout << endl;
        }
        break;

    case 5: // CÂU 5: Tam giác thập phân đối xứng
        for (int i = 0; i < n; ++i) {
            for (int space = 0; space < n - i - 1; ++space)
                cout << " ";
            // In tăng
            for (int j = 0; j <= i; ++j)
                cout << j % 10;
            // In giảm
            for (int j = i - 1; j >= 0; --j)
                cout << j % 10;
            cout << endl;
        }
        break;

    default:
        cout << "Lua chon khong hop le.\n";
    }

    return 0;
}
