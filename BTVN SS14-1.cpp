#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    size_t len = strlen(chuoi);
    if (len > 0 && chuoi[len - 1] == '\n') {
        chuoi[len - 1] = '\0';
    }

    printf("Chuoi vua nhap: %s\n", chuoi);
    printf("Do dai cua chuoi: %zu\n", strlen(chuoi));

    return 0;
}

