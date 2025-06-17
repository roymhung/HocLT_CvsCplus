#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int M, N;
    cout << "Nhap so hang M: ";
    cin >> M;
    cout << "Nhap so cot N: ";
    cin >> N;
    
    // Input 2D array
    int A[100][100];
    cout << "Nhap ma tran " << M << "x" << N << ":\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    
    // Calculate sum of all elements
    int sum = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            sum += A[i][j];
        }
    }
    cout << "Ket qua 1: " << sum << endl;
    
    // Find maximum element
    int maxVal = A[0][0];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i][j] > maxVal) {
                maxVal = A[i][j];
            }
        }
    }
    cout << "Ket qua 2: " << maxVal << endl;
    
    // Find row with maximum sum (assuming subarray is a row of 3 elements)
    int maxRowSum = 0;
    int maxRow = 0;
    for (int i = 0; i < M; i++) {
        int rowSum = 0;
        for (int j = 0; j < N; j++) {
            rowSum += A[i][j];
        }
        if (rowSum > maxRowSum) {
            maxRowSum = rowSum;
            maxRow = i;
        }
    }
    cout << "Ket qua 3: ";
    for (int j = 0; j < N; j++) {
        cout << A[maxRow][j] << " ";
    }
    cout << endl;
    
    // Find first prime number
    bool foundPrime = false;
    for (int i = 0; i < M && !foundPrime; i++) {
        for (int j = 0; j < N && !foundPrime; j++) {
            if (isPrime(A[i][j])) {
                cout << "Ket qua 4: " << A[i][j] << endl;
                foundPrime = true;
            }
        }
    }
    if (!foundPrime) {
        cout << "Ket qua 4: Ko ton tai so nguyen to trog mang" << endl;
    }
    
    return 0;
}