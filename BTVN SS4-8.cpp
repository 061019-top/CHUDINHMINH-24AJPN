#include <stdio.h>

int main() {
    float a, b, c;

    // Yeu cau nguoi dung nhap vao 3 canh cua tam giac
    printf("Nhap vao do dai canh thu nhat: ");
    scanf("%f", &a);

    printf("Nhap vao do dai canh thu hai: ");
    scanf("%f", &b);

    printf("Nhap vao do dai canh thu ba: ");
    scanf("%f", &c);

    // Kiem tra tinh hop le cua tam giac
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("La 3 canh tam giac.\n");
    } else {
        printf("Khong phai 3 canh tam giac.\n");
    }

    return 0;
}

