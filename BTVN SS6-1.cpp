#include <stdio.h>

int main() {
    int numbers[5];
    int sum = 0;
    
    printf("Nhap vao 5 so nguyen: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            sum += numbers[i];
        }
    }

    printf("Tong cac so le trong cac so da nhap la: %d\n", sum);

    return 0;
}

