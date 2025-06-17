#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPerfectSquare(int x) {
    int root = sqrt(x);
    return root * root == x;
}

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}

int main() {
    int n;
    int arr[100];

    // Nhập n
    do {
        cout << "Nhap so phan tu n (1..100): ";
        cin >> n;
    } while (n < 1 || n > 100);

    // Nhập n phần tử khác nhau
    for (int i = 0; i < n; i++) {
        bool isUnique;
        do {
            isUnique = true;
            cout << "Nhap phan tu thu " << i << ": ";
            cin >> arr[i];
            for (int j = 0; j < i; j++) {
                if (arr[i] == arr[j]) {
                    isUnique = false;
                    cout << "Phan tu da ton tai, nhap lai.\n";
                    break;
                }
            }
        } while (!isUnique);
    }

    // 1. Tính TBC các số ở vị trí chẵn (0, 2, 4,...)
    int sumEvenPos = 0, countEvenPos = 0;
    for (int i = 0; i < n; i += 2) {
        sumEvenPos += arr[i];
        countEvenPos++;
    }
    cout << "TBC cac so o vi tri chan: " << (double)sumEvenPos / countEvenPos << endl;

    // 2. Tính TBC các số lẻ ở vị trí lẻ (1, 3, 5,...)
    int sumOddValOddPos = 0, countOddValOddPos = 0;
    for (int i = 1; i < n; i += 2) {
        if (arr[i] % 2 != 0) {
            sumOddValOddPos += arr[i];
            countOddValOddPos++;
        }
    }
    if (countOddValOddPos > 0)
        cout << "TBC cac so le o vi tri le: " << (double)sumOddValOddPos / countOddValOddPos << endl;
    else
        cout << "Khong co so le o vi tri le.\n";

    // 3. Tìm số lớn nhất
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    cout << "So lon nhat trong mang: " << maxVal << endl;

    // 4. Tìm vị trí của số nhỏ nhất
    int minVal = arr[0], minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }
    cout << "Vi tri cua so nho nhat: " << minIndex << endl;

    // 5. Đếm số chính phương
    int countPerfectSquare = 0;
    for (int i = 0; i < n; i++) {
        if (isPerfectSquare(arr[i]))
            countPerfectSquare++;
    }
    cout << "So luong so chinh phuong: " << countPerfectSquare << endl;

    // 6. Hiển thị số nguyên tố
    cout << "Cac so nguyen to trong mang: ";
    bool foundPrime = false;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
            foundPrime = true;
        }
    }
    if (!foundPrime)
        cout << "Khong co";
    cout << endl;

    // 7. In mảng theo thứ tự tăng dần
    sort(arr, arr + n);
    cout << "Mang theo thu tu tang dan: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
