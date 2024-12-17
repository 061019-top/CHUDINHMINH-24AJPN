#include <stdio.h>

void capNhatPhanTu(int *arr, int viTri, int giaTriMoi) {
    arr[viTri] = giaTriMoi;
}

void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi cap nhat:\n");
    inMang(arr, n);

    capNhatPhanTu(arr, 2, 10);

    printf("Mang sau khi cap nhat:\n");
    inMang(arr, n);

    return 0;
}

