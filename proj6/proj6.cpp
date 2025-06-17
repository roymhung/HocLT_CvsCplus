#include <iostream>
#include <cmath>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    const int M = 4;
    const int N = 3;
    int A[M][N] = {
        {8, 12, 9},
        {4, 10, 13},
        {15, 8, 20},
        {12, 11, 10}
    };

    int tong = 0;
    int maxVal = A[0][0];
    int maxSum = -1e9;
    int resRow = -1, resCol = -1;
    bool foundPrime = false;
    int firstPrime = -1;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            int val = A[i][j];

            // Tổng
            tong += val;

            // Max
            if (val > maxVal) maxVal = val;

            // Tìm số nguyên tố đầu tiên
            if (!foundPrime && isPrime(val)) {
                firstPrime = val;
                foundPrime = true;
            }
        }
    }

    // Tìm bộ 3 phần tử liên tiếp theo hàng có tổng lớn nhất
    for (int i = 0; i < M; i++) {
        for (int j = 0; j <= N - 3; j++) {
            int sum = A[i][j] + A[i][j + 1] + A[i][j + 2];
            if (sum > maxSum) {
                maxSum = sum;
                resRow = i;
                resCol = j;
            }
        }
    }

    // Kết quả
    cout << "Ket qua 1: " << tong << endl;
    cout << "Ket qua 2: " << maxVal << endl;

    if (resRow != -1) {
        cout << "Ket qua 3: ";
        cout << A[resRow][resCol] << " "
             << A[resRow][resCol + 1] << " "
             << A[resRow][resCol + 2] << endl;
    } else {
        cout << "Ket qua 3: Khong co bo 3 lien tiep nao." << endl;
    }

    if (foundPrime)
        cout << "Ket qua 4: " << firstPrime << endl;
    else
        cout << "Ket qua 4: Ko ton tai so nguyen to trog mang" << endl;

    return 0;
}
