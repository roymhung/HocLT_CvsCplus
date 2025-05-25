#include <stdio.h>

int main() {
    int age;
    char fullname[50];
    char country[50];
    float weight;

    // Nhập họ tên
    printf("Nhap ten: ");
    scanf(" %[^\n]", fullname); // Thêm dấu cách để bỏ qua ký tự newline

    // Nhập nơi ở
    printf("Nhap noi o: ");
    getchar(); // Xóa kí tự '\n' còn sót lại
    scanf(" %[^\n]", country);

    // Nhập tuổi
    printf("Nhap tuoi: ");
    scanf("%d", &age);

    // Nhập cân nặng
    printf("Nhap can nang: ");
    scanf("%f", &weight);

    // Hiển thị thông tin
    printf("\n--- Thong tin ca nhan ---\n");
    printf("Xin chao. Toi la: %s\n", fullname);
    printf("Toi den tu: %s\n", country);
    printf("Nam nay toi: %d tuoi\n", age);
    printf("Toi nang: %.2f kg\n", weight);

    return 0;
}
