#include <stdio.h>

int main() {
    // Khai bao va gan gia tri cho mot mang bat ky
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Tinh so phan tu trong mang

    // Khai bao bien de luu gia tri nguoi dung nhap vao
    int x;
    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &x);

    // Kiem tra phan tu co ton tai trong mang khong
    int found = 0; // Bien de danh dau phan tu co ton tai hay khong
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Vi tri phan tu trong mang la %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu khong ton tai trong mang\n");
    }

    return 0;
}

