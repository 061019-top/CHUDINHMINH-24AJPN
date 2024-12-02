 #include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mot mang bat ky
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Tinh so phan tu trong mang

    // In tung phan tu trong mang tu cuoi ve dau
    printf("Cac phan tu trong mang tu cuoi ve dau\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

