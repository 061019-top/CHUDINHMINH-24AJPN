#include <stdio.h>

int main() {
    FILE *fptr;
    char str[100];

    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    if (fgets(str, sizeof(str), fptr) != NULL) {
        printf("Dong dau tien trong file: %s", str);
    } else {
        printf("File rong hoac khong the doc dong dau tien.\n");
    }

    fclose(fptr);

    return 0;
}

