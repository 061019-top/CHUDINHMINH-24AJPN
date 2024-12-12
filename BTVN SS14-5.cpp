#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[] = "Xin chao, chao mung ban den voi the gioi lap trinh!";
    char kyTu;
    int dem = 0;

    printf("Chuoi da khai bao: %s\n", chuoi);
    printf("Nhap vao mot ky tu bat ky: ");
    scanf(" %c", &kyTu);

    for (int i = 0; i < strlen(chuoi); i++) {
        if (chuoi[i] == kyTu) {
            dem++;
        }
    }

    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", kyTu, dem);

    return 0;
}

