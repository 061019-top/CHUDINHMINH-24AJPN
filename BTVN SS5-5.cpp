#include <stdio.h>

int main() {
   for (int i = 1; i <= 9; i++) {
        printf("bang cuu chuong cua %d:\n", i);
        for (int a = 1; a <= 10; a++) {
            printf("%d x %d = %d\n", i, a, i *a);
        }
        printf("\n");
    }

    return 0;
}

