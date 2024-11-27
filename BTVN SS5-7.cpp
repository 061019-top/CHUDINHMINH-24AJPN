#include <stdio.h>
int tinhUCLN(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    int so1, so2, ucln;

    
    printf("nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &so1);
    printf("nhap vao so nguyen duong thu hai: ");
    scanf("%d", &so2);

    
    if (so1 <= 0 || so2 <= 0) {
        printf("nhap vao 2 so nguyen duong.\n");
    } else {
       
        ucln = tinhUCLN(so1, so2);

        
        printf("uoc chung lon nhat cua 2 so la: %d\n", so1, so2, ucln);
    }

    return 0;
}

