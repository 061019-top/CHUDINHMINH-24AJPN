#include <stdio.h>
#define PI 3.14

int main()
{
    float bankinh = 7.0;
    float chuvi = 2 * PI * bankinh;
    float dientich = PI * bankinh * bankinh;
    printf("Ban kinh cua hinh tron la: %.2f\n", bankinh);
    printf("Chu vi cua hinh tron la: %.2f\n", chuvi);
    printf("Dien tich cua hinh tron la: %.2f\n", dientich);
    return 0;
}

