#include <stdio.h>
#define PI 3.14159

int main() {
    float ban_kinh, chu_vi, dien_tich;

    // Yêu c?u ngý?i dùng nh?p bán kính
    printf("Nhap ban kinh cua hinh tron: ");
    scanf("%f", &ban_kinh);

    // Tính chu vi và di?n tích
    chu_vi = 2 * PI * ban_kinh;
    dien_tich = PI * ban_kinh * ban_kinh;

    // Hi?n th? k?t qu? v?i 2 s? th?p phân
    printf("Chu vi cua hinh tron la: %.2f\n", chu_vi);
    printf("Dien tich cua hinh tron la: %.2f\n", dien_tich);

    return 0;
}

