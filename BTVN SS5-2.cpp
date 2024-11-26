#include <stdio.h>

int main() {
    int target = 88; 
    int userInput;

    printf("Vui long nhap vao mot so cho den khi trung voi so da cho truoc.\n");

    do {
        printf("Nhap so: ");
        scanf("%d", &userInput);

        if (userInput != target) {
            printf("Sai roi, thu lai.\n");
        }
    } while (userInput != target);

    printf("Chinh xac! So %d trung voi so da cho truoc.\n", target);

    return 0;
}

