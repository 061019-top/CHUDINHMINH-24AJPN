#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;
    int n = 3;

    for (int i = 0; i < n; i++) {
        sum += arr[0][i]; // Hang dau
        sum += arr[n - 1][i]; // Hang cuoi
        sum += arr[i][0]; // Cot dau
        sum += arr[i][n - 1]; // Cot cuoi
    }

    sum -= arr[0][0];
    sum -= arr[0][n - 1];
    sum -= arr[n - 1][0];
    sum -= arr[n - 1][n - 1];

    printf("Tong cac phan tu tren duong bien cua ma tran la %d\n", sum);

    return 0;
}

