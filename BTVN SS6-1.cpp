#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;

    // Y�u c?u ng�?i d�ng nh?p v�o 5 s? nguy�n
    printf("Nhap vao 5 so nguyen: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // T�nh t?ng c�c s? l?
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }

    // In k?t qu? ra m�n h?nh
    printf("Tong cac so le trong cac so da nhap la: %d\n", sum);

    return 0;
}

