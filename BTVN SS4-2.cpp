#include <stdio.h>

int main() {
    int number;

    // Yeu cau nguoi dung nhap vao mot so nguyen
    printf("Vui long nhap vao mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra va hien thi ket qua
    if (number % 2 == 0) {
        printf("So %d la so chan.\n", number);
    } else {
        printf("So %d la so le.\n", number);
    }

    return 0;
}

