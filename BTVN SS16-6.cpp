#include <stdio.h>

int timKiem(int *arr, int n, int giaTri) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == giaTri) {
            return i;  
        }
    }
    return -1;  
}

void inKetQuaTimKiem(int *arr, int n, int giaTri) {
    int viTri = timKiem(arr, n, giaTri);
    if (viTri != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri: %d\n", giaTri, viTri);
    } else {
        printf("Gia tri %d khong duoc tim thay trong mang\n", giaTri);
    }
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int giaTriTimKiem = 7;

    inKetQuaTimKiem(arr, n, giaTriTimKiem);

    return 0;
}

