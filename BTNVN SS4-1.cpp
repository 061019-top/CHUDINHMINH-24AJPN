  #include <stdio.h>

int main() {
    int number;

    // Yeu cau nguoi dung nhap vao mot so nguyen
    printf("Vui long nhap vao mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra xem so do la so am hay so duong va in ket qua
    if (number > 0) {
        printf("So %d la so duong.\n", number);
    } else if (number < 0) {
        printf("So %d la so am.\n", number);
    } else {
        printf("So %d la so khong.\n", number);
    }

    return 0;
}

