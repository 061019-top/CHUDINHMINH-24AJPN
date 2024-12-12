#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao!";

    int doDai = strlen(chuoi);
    printf("Chuoi goc: %s\n", chuoi);

    printf("Chuoi dao nguoc: ");
    for (int i = doDai - 1; i >= 0; i--) {
        printf("%c", chuoi[i]);
    }
    printf("\n");

    return 0;
}

