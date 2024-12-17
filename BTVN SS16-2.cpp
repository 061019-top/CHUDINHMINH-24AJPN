#include <stdio.h>

void hoanDoi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    printf("Gia tri ban dau cua x: %d\n", x);
    printf("Gia tri ban dau cua y: %d\n", y);

    hoanDoi(&x, &y);

    printf("Gia tri sau khi hoan doi cua x: %d\n", x);
    printf("Gia tri sau khi hoan doi cua y: %d\n", y);

    return 0;
}

