int arr[5] = {1, 2, 3, 4, 5};
int has_even = 0;

printf("Cac phan tu la so chan trong mang la:\n");
for (int i = 0; i < 5; i++) {
    if (arr[i] % 2 == 0) {
        printf("%d ", arr[i]);
        has_even = 1; 
    }
}

if (!has_even) {
    printf("Mang khong chua so chan");
}

printf("\n");

