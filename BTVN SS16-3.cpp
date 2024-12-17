#include <stdio.h>

void tinhTong(int a, int b, int *ketQua) {
    *ketQua = a + b;
}

int main() {
    int x = 7;
    int y = 15;
    int ketQua = 0;

    tinhTong(x, y, &ketQua);

    printf("Tong cua %d va %d la: %d\n", x, y, ketQua);

    return 0;
}

