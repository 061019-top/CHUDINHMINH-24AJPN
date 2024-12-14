#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {3, 6, 1, 3, 4, 5, 3, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &x);

    int positions[n];
    int pos_count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[pos_count] = i;
            pos_count++;
        }
    }

    if (pos_count > 0) {
        printf("Phan tu %d xuat hien tai cac vi tri: ", x);
        for (int i = 0; i < pos_count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong co trong mang.\n", x);
    }

    return 0;
}

