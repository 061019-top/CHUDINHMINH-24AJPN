#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    printf("Gia tri cua a (truc tiep): %d\n", a);
    printf("Dia chi cua a (truc tiep): %p\n", (void*)&a);

    printf("Gia tri cua a (qua con tro): %d\n", *p);
    printf("Dia chi cua a (qua con tro): %p\n", (void*)p);

    return 0;
}

