#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    // Yêu c?u ngý?i dùng nh?p vào 5 s? nguyên
    printf("Nhap vao 5 so nguyen: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Tính t?ng các s? l?
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }

    // In k?t qu? ra màn h?nh
    printf("Tong cac so le trong cac so da nhap la: %d\n", sum);

    return 0;
}

