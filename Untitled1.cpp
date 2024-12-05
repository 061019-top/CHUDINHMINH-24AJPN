#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int arr[100];
int n = 0;

int nhap() {
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return 0;
}

int in() {
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

int tim_min_max() {
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    printf("Gia tri nho nhat: %d\n", min);
    printf("Gia tri lon nhat: %d\n", max);
    return 0;
}

int tong() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Tong cac phan tu: %d\n", sum);
    return 0;
}

int them_phan_tu() {
    int value;
    printf("Nhap gia tri phan tu can them: ");
    scanf("%d", &value);
    arr[n++] = value;
    return 0;
}

int xoa_phan_tu() {
    int index;
    printf("Nhap vi tri phan tu can xoa: ");
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le!\n");
        return -1;
    }
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    return 0;
}

int sap_xep_bubble() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return 0;
}

int tim_kiem() {
    int value;
    printf("Nhap gia tri phan tu can tim: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("Phan tu %d ton tai o vi tri %d\n", value, i);
            return i;
        }
    }
    printf("Khong tim thay phan tu %d trong mang\n", value);
    return -1;
}

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int in_so_nguyen_to() {
    bool found = false;
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++) {
        if (is_prime(arr[i])) {
            printf("%d ", arr[i]);
            found = true;
        }
    }
    if (!found) {
        printf("Khong co so nguyen to nao trong mang");
    }
    printf("\n");
    return 0;
}

int sap_xep_selection() {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    return 0;
}

int menu() {
    int choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Them mot phan tu vao cuoi mang\n");
        printf("6. Xoa mot phan tu tai vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu tang dan (Bubble Sort)\n");
        printf("8. Tim kiem phan tu trong mang (Linear Search)\n");
        printf("9. In cac so nguyen to trong mang\n");
        printf("10. Sap xep mang theo thu tu tang dan (Selection Sort)\n");
        printf("11. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhap();
                break;
            case 2:
                in();
                break;
            case 3:
                tim_min_max();
                break;
            case 4:
                tong();
                break;
            case 5:
                them_phan_tu();
                break;
            case 6:
                xoa_phan_tu();
                break;
            case 7:
                sap_xep_bubble();
                break;
            case 8:
                tim_kiem();
                break;
            case 9:
                in_so_nguyen_to();
                break;
            case 10:
                sap_xep_selection();
                break;
            case 11:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 11);
    return 0;
}

int main() {
    menu();
    return 0;
}

