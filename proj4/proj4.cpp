#include <iostream>
using namespace std;

int main() {
    int qty[6]; // số lượng các mặt hàng H1 -> H6
    int price[6] = {100, 150, 120, 90, 130, 140}; // giá tiền các mặt hàng
    int totalItems = 0;
    int totalCost = 0;

    cout << "Nhap lan luot so luong 6 mat hang: ";
    for (int i = 0; i < 6; i++) {
        cin >> qty[i];
        totalItems += qty[i];
        totalCost += qty[i] * price[i];
    }

    bool has4Items = totalItems >= 4;
    bool has2H6 = qty[5] >= 2;
    bool over500k = totalCost > 500;

    double finalCost = totalCost;

    // Áp dụng khuyến mãi theo thứ tự ưu tiên
    if (has4Items && has2H6 && over500k) {
        finalCost = totalCost * 0.8; // giảm 20%
    }
    else if ((has4Items && over500k) || (has2H6 && over500k)) {
        finalCost = totalCost * 0.85; // giảm 15%
    }
    else if (has4Items && has2H6) {
        finalCost = totalCost - 40;
    }
    else if (has4Items) {
        finalCost = totalCost - 20;
    }
    else if (has2H6) {
        finalCost = totalCost - 30;
    }
    else if (over500k) {
        finalCost = totalCost * 0.9; // giảm 10%
    }

    cout << "So tien phai tra: " << finalCost << endl;
    return 0;
}
