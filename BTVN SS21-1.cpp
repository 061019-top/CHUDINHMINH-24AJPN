#include <stdio.h>

int main() {
    FILE *fptr;
    char str[100];

    fptr = fopen("bt01.txt", "w");
    if (fptr == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fptr, "%s", str);

    fclose(fptr);

    printf("Chuoi da duoc ghi vao file bt01.txt.\n");

    return 0;
}

