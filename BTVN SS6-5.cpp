#include <stdio.h>

// Ham kiem tra nam nhuan
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Nam nhuan
    } else {
        return 0; // Khong phai nam nhuan
    }
}

// Ham tinh so ngay trong thang
int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            if (isLeapYear(year)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return 0; // Thang khong hop le
    }
}

int main() {
    int month, year;
    
    printf("Nhap vao nam: ");
    scanf("%d", &year);
    printf("Nhap vao thang: ");
    scanf("%d", &month);

    int days = daysInMonth(month, year);

    if (days > 0) {
        printf("Thang %d nam %d co %d ngay.\n", month, year, days);
    } else {
        printf("Thang khong hop le.\n");
    }

    return 0;
}

