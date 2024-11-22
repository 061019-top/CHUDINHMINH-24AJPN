#include <stdio.h>

int main() {
    float diem_toan, diem_van, diem_anh, tong_diem, diem_trung_binh;

    // Yêu c?u ngý?i dùng nh?p ði?m Toán
    printf("Nhap diem Toan: ");
    scanf("%f", &diem_toan);

    // Yêu c?u ngý?i dùng nh?p ði?m Vãn
    printf("Nhap diem Van: ");
    scanf("%f", &diem_van);

    // Yêu c?u ngý?i dùng nh?p ði?m Anh
    printf("Nhap diem Anh: ");
    scanf("%f", &diem_anh);

    // Tính t?ng ði?m
    tong_diem = diem_toan + diem_van + diem_anh;

    // Tính ði?m trung b?nh
    diem_trung_binh = tong_diem / 3;

    // Hi?n th? k?t qu?
    printf("Tong diem: %.2f\n", tong_diem);
    printf("Diem trung binh: %.2f\n", diem_trung_binh);

    return 0;
}

