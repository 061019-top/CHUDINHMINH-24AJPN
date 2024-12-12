#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao!";

    int doDai = strlen(chuoi);

    for (int i = 0; i < doDai; i++) {
        printf("%c ", chuoi[i]);
    }

    printf("\n");
    return 0;
}

