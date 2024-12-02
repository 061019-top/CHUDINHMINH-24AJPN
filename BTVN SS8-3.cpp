#include <stdio.h>

int main() {
    int n;

     
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

     
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = i * n + j + 1;
        }
    }

    printf("Ma tran vuong %d x %d\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

