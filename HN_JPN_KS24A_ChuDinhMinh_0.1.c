#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
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
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap gia tri phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                break;
            case 3: {
                int min = arr[0];
                int max = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) min = arr[i];
                    if (arr[i] > max) max = arr[i];
                }
                printf("Gia tri nho nhat: %d\n", min);
                printf("Gia tri lon nhat: %d\n", max);
                break;
            }
            case 4: {
                int sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Tong cac phan tu: %d\n", sum);
                break;
            }
            case 5: {
                int value;
                printf("Nhap gia tri phan tu can them: ");
                scanf("%d", &value);
                arr[n++] = value;
                break;
            }
            case 6: {
                int index;
                printf("Nhap vi tri phan tu can xoa: ");
                scanf("%d", &index);
                if (index < 0 || index >= n) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = index; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
                break;
            }
            case 7:
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - 1 - i; j++) {
                        if (arr[j] > arr[j + 1]) {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                break;
            case 8: {
                int value;
                printf("Nhap gia tri phan tu can tim: ");
                scanf("%d", &value);
                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Phan tu %d ton tai o vi tri %d\n", value, i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Khong tim thay phan tu %d trong mang\n", value);
                }
                break;
            }
            case 9: {
                int found = 0;
                printf("Cac so nguyen to trong mang: ");
                for (int i = 0; i < n; i++) {
                    int num = arr[i];
                    int is_prime = 1;
                    if (num <= 1) is_prime = 0;
                    for (int j = 2; j * j <= num; j++) {
                        if (num % j == 0) {
                            is_prime = 0;
                            break;
                        }
                    }
                    if (is_prime) {
                        printf("%d ", num);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong co so nguyen to nao trong mang");
                }
                printf("\n");
                break;
            }
            case 10:
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

