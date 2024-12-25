#include <stdio.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void khoiTaoSinhVien(struct SinhVien sv[], int *currentLength) {
    sv[0] = (struct SinhVien){1, "Nguyen Van A", 20, "0123456789"};
    sv[1] = (struct SinhVien){2, "Le Thi B", 21, "0987654321"};
    sv[2] = (struct SinhVien){3, "Tran Van C", 22, "0112233445"};
    sv[3] = (struct SinhVien){4, "Hoang Thi D", 23, "0223344556"};
    sv[4] = (struct SinhVien){5, "Pham Van E", 24, "0334455667"};
    *currentLength = 5;
}

void xoaSinhVien(struct SinhVien sv[], int *currentLength, int id) {
    int found = 0;
    for (int i = 0; i < *currentLength; i++) {
        if (sv[i].id == id) {
            found = 1;
            for (int j = i; j < *currentLength - 1; j++) {
                sv[j] = sv[j + 1];
            }
            (*currentLength)--;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co id: %d\n", id);
    }
}

void inSinhVien(struct SinhVien sv[], int currentLength) {
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", sv[i].id, sv[i].name, sv[i].age, sv[i].phoneNumber);
    }
}

int main() {
    struct SinhVien sv[5];
    int currentLength;
    
    khoiTaoSinhVien(sv, &currentLength);
    
    printf("Danh sach sinh vien truoc khi xoa:\n");
    inSinhVien(sv, currentLength);
    
    int idXoa = 3;
    xoaSinhVien(sv, &currentLength, idXoa);
    
    printf("\nDanh sach sinh vien sau khi xoa sinh vien co id = %d:\n", idXoa);
    inSinhVien(sv, currentLength);
    
    return 0;
}

