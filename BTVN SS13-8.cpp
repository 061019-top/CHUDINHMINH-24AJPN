#include <stdio.h>

// Hàm t?m ý?c chung l?n nh?t
int timUCLN(int a, int b) {
    if (b == 0)
        return a;
    return timUCLN(b, a % b);
}

int main() {
    int a, b;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    int ucln = timUCLN(a, b);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);

    return 0;
}

