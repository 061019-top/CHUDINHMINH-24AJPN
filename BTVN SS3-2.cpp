#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Yêu c?u ngý?i dùng nh?p nhi?t ð? theo ð? Celsius
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    // Chuy?n ð?i t? Celsius sang Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Hi?n th? k?t qu?
    printf("Nhiet do theo do Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}

