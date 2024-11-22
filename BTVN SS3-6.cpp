#include <stdio.h>

int main() {
    float canh, chieu_cao, dien_tich;

    // Yeu cau nguoi dung nhap do dai canh cua tam giac
    printf("Nhap do dai canh cua tam giac: ");
    scanf("%f", &canh);

    // Yeu cau nguoi dung nhap chieu cao cua tam giac
    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieu_cao);

    // Tinh dien tich cua tam giac
    dien_tich = 0.5 * canh * chieu_cao;

    // Hien thi ket qua
    printf("Dien tich cua tam giac la: %.2f\n", dien_tich);

    return 0;
}

