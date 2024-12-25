#include <stdio.h>

int main() {
    FILE *fptr;
    char str[100];

    fptr = fopen("bt01.txt", "a");
    if (fptr == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    printf("Nhap chuoi bat ky de ghi them vao file: ");
    fgets(str, sizeof(str), stdin);

    fprintf(fptr, "%s", str);

    fclose(fptr);

    printf("Chuoi da duoc ghi them vao file bt01.txt.\n");

    return 0;
}

