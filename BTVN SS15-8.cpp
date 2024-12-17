#include <stdio.h>
#include <ctype.h>

void vietHoaDauCacTu(char str[]) {
    int i = 0;
    if (str[i] != '\0' && isalpha(str[i])) {
        str[i] = toupper(str[i]);
    }
    i++;
    for (; str[i] != '\0'; i++) {
        if (str[i-1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char str[] = "hello world";

    vietHoaDauCacTu(str);

    printf("%s\n", str);

    return 0;
}

