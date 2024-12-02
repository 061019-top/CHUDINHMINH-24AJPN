#include <stdio.h>

int main() {
    int n = 3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sum = 0;
    printf("Cac phan tu tren duong cheo chinh cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo chinh la %d\n", sum);

    return 0;
}

