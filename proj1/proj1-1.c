// day la bai code dau tien cua mhung coder
#include <stdio.h>

int main() {
    
    // %d/d: decimal-so thap phan
    // %c/c: char-ki tu
    // đổi %d thanh %c nếu muốn in biến char
    // string: chuỗi kí tự nhưng chỉ có ở C++ còn C sễ sử dụng: char ten_bien[sokitu]
	int tuoi = 0;
    char xep_loai = 'A';
    char ho_ten[50] = "roy hung";

	printf("Nhap ten: ");
    scanf("%[^\n]s", ho_ten);
    
	printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    
    getchar();

    printf("Nhap xep loai: ");
    scanf("%c", &xep_loai);


    printf("%s duoc xep loai %c va nam nay %d tuoi", ho_ten, xep_loai, tuoi);
}