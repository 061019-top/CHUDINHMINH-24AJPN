#include <stdio.h>

int main() {
    float diem_toan, diem_van, diem_anh, tong_diem, diem_trung_binh;

    // Y�u c?u ng�?i d�ng nh?p �i?m To�n
    printf("Nhap diem Toan: ");
    scanf("%f", &diem_toan);

    // Y�u c?u ng�?i d�ng nh?p �i?m V�n
    printf("Nhap diem Van: ");
    scanf("%f", &diem_van);

    // Y�u c?u ng�?i d�ng nh?p �i?m Anh
    printf("Nhap diem Anh: ");
    scanf("%f", &diem_anh);

    // T�nh t?ng �i?m
    tong_diem = diem_toan + diem_van + diem_anh;

    // T�nh �i?m trung b?nh
    diem_trung_binh = tong_diem / 3;

    // Hi?n th? k?t qu?
    printf("Tong diem: %.2f\n", tong_diem);
    printf("Diem trung binh: %.2f\n", diem_trung_binh);

    return 0;
}

