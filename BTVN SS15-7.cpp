#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
    int chuCai = 0, chuSo = 0, kyTuDacBiet = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            chuCai++;
        } else if (isdigit(str[i])) {
            chuSo++;
        } else {
            kyTuDacBiet++;
        }
    }

    printf("So ky tu la chu cai: %d\n", chuCai);
    printf("So ky tu la chu so: %d\n", chuSo);
    printf("So ky tu dac biet: %d\n", kyTuDacBiet);

    return 0;
}

