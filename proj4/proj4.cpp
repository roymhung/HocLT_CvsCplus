#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_SUBJECTS = 7;
    string subjects[NUM_SUBJECTS] = {"Toan", "Ly", "Hoa", "Van", "Anh", "Su", "Dia"};
    float scores[NUM_SUBJECTS];
    float total = 0;
    bool invalid = false;
    bool hasBelow4 = false;
    bool hasBelow3 = false;
    bool hasZero = false;

    // Nhập điểm từng môn
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        cout << "Nhap diem " << subjects[i] << ": ";
        cin >> scores[i];
        
        // Kiểm tra hợp lệ
        if (scores[i] < 0 || scores[i] > 10) {
            cout << "Diem " << subjects[i] << " khong hop le. Vui long nhap tu 0 den 10.\n";
            invalid = true;
        }

        // Kiểm tra điều kiện xếp loại
        if (scores[i] < 4) hasBelow4 = true;
        if (scores[i] < 3) hasBelow3 = true;
        if (scores[i] == 0) hasZero = true;

        total += scores[i];
    }

    if (invalid) {
        cout << "Khong the tinh diem tong ket vi co diem khong hop le.\n";
        return 0;
    }

    float avg = total / NUM_SUBJECTS;
    cout << "Diem trung binh: " << avg << endl;

    // Xếp loại
    string classification;
    if (avg > 8.0 && !hasBelow4) {
        classification = "Hoc sinh gioi";
    } else if (avg > 8.0 && hasBelow4) {
        classification = "Hoc sinh kha";
    } else if (avg >= 6.5 && avg <= 8.0 && !hasBelow3) {
        classification = "Hoc sinh kha";
    } else if (avg >= 6.5 && hasBelow3) {
        classification = "Hoc sinh trung binh";
    } else if (avg >= 4.0 && avg < 6.5 && !hasZero) {
        classification = "Hoc sinh trung binh";
    } else if (avg >= 4.0 && hasZero) {
        classification = "Hoc sinh yeu";
    } else {
        classification = "Hoc sinh yeu";
    }

    cout << "Xep loai: " << classification << endl;
    return 0;
}
