#include <stdio.h>

int main() {
    FILE *fptr;
    char character;

    fptr = fopen("bt01.txt", "r");
    if (fptr == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }

    character = fgetc(fptr);
    if (character != EOF) {
        printf("Ky tu dau tien trong file: %c\n", character);
    } else {
        printf("File rong.\n");
    }

    fclose(fptr);

    return 0;
}

