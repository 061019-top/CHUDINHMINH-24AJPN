#include <stdio.h>
#include <string.h>

int main() {
    char matkhau_dung[] = "12345";
    char matkhau_nhap[50];

    printf("Vui long nhap vao mat khau: ");
    scanf("%s", matkhau_nhap);

    if (strcmp(matkhau_nhap, matkhau_dung) == 0) {
        printf("Mat khau dung.\n");
    } else {
        printf("Mat khau sai.\n");
    }

    return 0;
}

