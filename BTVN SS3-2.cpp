#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Y�u c?u ng�?i d�ng nh?p nhi?t �? theo �? Celsius
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    // Chuy?n �?i t? Celsius sang Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Hi?n th? k?t qu?
    printf("Nhiet do theo do Fahrenheit: %.2f\n", fahrenheit);
    
    return 0;
}

