#include <stdio.h>

int main() {
    int year;

    // Yeu cau nguoi dung nhap vao so nam
    printf("Vui long nhap vao so nam: ");
    scanf("%d", &year);

    // Kiem tra nam nhuan
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Nam %d la nam nhuan.\n", year);
    } else {
        printf("Nam %d khong phai la nam nhuan.\n", year);
    }

    return 0;
}

